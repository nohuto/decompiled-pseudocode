/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140286070
 * Callers:
 *     IopReadFileScatter @ 0x140A8E968 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A958BC (IopWriteFileGather.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x140282248 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x140282460 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x140282AC0 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x140283A60 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x140284570 (MiSetProbePagesAhead.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiFaultInProbeAddress @ 0x1402C3798 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1402C3B90 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E1C10 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbePacketContended @ 0x1403CFF40 (MiProbePacketContended.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  BOOL v8; // edi
  unsigned __int64 v9; // rax
  _BYTE *v10; // rcx
  size_t v11; // rbx
  PFILE_SEGMENT_ELEMENT v12; // rdx
  _BYTE *v13; // r12
  unsigned int v14; // r14d
  unsigned __int64 *v15; // r15
  int v16; // edi
  unsigned __int64 *i; // rbx
  unsigned int v18; // esi
  unsigned __int64 v19; // rax
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v23; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v24; // [rsp+68h] [rbp-98h]
  unsigned __int64 v25; // [rsp+70h] [rbp-90h]
  unsigned __int64 v26; // [rsp+80h] [rbp-80h]
  __int64 *v27; // [rsp+88h] [rbp-78h]
  char v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v30; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  _BYTE v33[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset_0(&v21, 0, 0xB0uLL);
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = v33;
  P[0] = v33;
  v11 = 8 * v9;
  if ( v9 > 0x200 )
  {
    P[0] = (PVOID)MiAllocatePool(0x40uLL, 8 * v9);
    v10 = P[0];
    if ( !P[0] )
      RtlRaiseStatus(-1073741670);
  }
  v12 = SegmentArray;
  v13 = P[0];
  v14 = 0;
  v15 = (unsigned __int64 *)&v10[v11];
  memmove(P[0], v12, v11);
  v16 = MiProbeAndLockPrepare((__int64)&v21, (__int64)MemoryDescriptorList, *(_QWORD *)P[0], 1uLL, AccessMode, v8, 1);
  if ( v16 >= 0 )
  {
    for ( i = (unsigned __int64 *)P[0]; i < v15; ++i )
    {
      v22 = *i;
      v23 = v22 + 1;
      v24 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v25 = v24;
      *v27 = -1LL;
      if ( v22 > 0x7FFFFFFEFFFFLL && AccessMode )
      {
        ++dword_140E30100;
        v16 = -1073741819;
        break;
      }
      if ( (v28 & 0x20) == 0 || v22 < v30 || v22 > v31 )
      {
        LODWORD(P[0]) = 0;
        while ( 1 )
        {
          v16 = MiLockPageLeafPageTable((__int64)&v21);
          if ( v26 == CLFS_LSN_NULL_EXT )
            break;
          v16 = MiProbeLeafPteAccess((__int64)&v21, P);
          if ( v16 < 0 )
            goto LABEL_18;
          if ( !LODWORD(P[0]) )
          {
            v29 = (v26 >> 12) & 0xFFFFFFFFFFLL;
            MiSetProbePagesAhead((__int64)&v21);
LABEL_12:
            v18 = 16;
            goto LABEL_13;
          }
          if ( LODWORD(P[0]) != 1 )
          {
            v16 = MiFaultInProbeAddress(&v21);
            if ( v16 < 0 )
            {
              ++dword_140E30104;
              goto LABEL_18;
            }
          }
        }
        if ( v16 >= 0 )
          goto LABEL_12;
        break;
      }
      if ( v32 == -1 )
        v19 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v24) >> 12) & 0xFFFFFFFFFFLL;
      else
        v19 = v32 + ((v22 - v30) >> 12);
      v29 = v19;
      v18 = 64;
LABEL_13:
      v16 = MiProbeLockFrame((__int64)&v21, 1);
      if ( v16 < 0 )
        break;
      ++v14;
      *v27++ = v29;
      if ( !(v14 % v18) )
      {
        if ( (unsigned int)MiProbePacketContended(&v21) )
        {
          MiUnlockProbePacketWorkingSet(&v21);
          MiLockProbePacketWorkingSet(&v21);
        }
      }
    }
LABEL_18:
    v16 = MiProbeAndLockComplete(&v21, v16);
  }
  if ( v13 != v33 )
    ExFreePoolWithTag(v13, 0);
  if ( v16 < 0 )
    RtlRaiseStatus(v16);
}
