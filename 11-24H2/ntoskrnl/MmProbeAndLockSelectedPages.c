/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140390AC0
 * Callers:
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 * Callees:
 *     MiFaultInProbeAddress @ 0x14020ABF4 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x14020AFF0 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x140239B00 (MiSetProbePagesAhead.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiProbePacketContended @ 0x140391364 (MiProbePacketContended.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // esi
  unsigned __int64 v21; // rax
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v23[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v25; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v26; // [rsp+68h] [rbp-98h]
  unsigned __int64 v27; // [rsp+70h] [rbp-90h]
  unsigned __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 *v29; // [rsp+88h] [rbp-78h]
  char v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v32; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  _BYTE v35[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset_0(v23, 0, 0xB0uLL);
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = v35;
  P[0] = v35;
  v11 = 8 * v9;
  if ( v9 > 0x200 )
  {
    P[0] = (PVOID)MiAllocatePool(0x40uLL, 8 * v9, 1917873485);
    v10 = P[0];
    if ( !P[0] )
      RtlRaiseStatus(-1073741670);
  }
  v12 = SegmentArray;
  v13 = P[0];
  v14 = 0;
  v15 = (unsigned __int64 *)&v10[v11];
  memmove(P[0], v12, v11);
  v16 = MiProbeAndLockPrepare((__int64)v23, (__int64)MemoryDescriptorList, *(_QWORD *)P[0], 1uLL, AccessMode, v8, 1);
  if ( v16 >= 0 )
  {
    for ( i = (unsigned __int64 *)P[0]; ; ++i )
    {
      v18 = 0x7FFFFFFEFFFFLL;
      v19 = 0x7FFFFFFFF8LL;
      if ( i >= v15 )
        break;
      v24 = *i;
      v25 = v24 + 1;
      v26 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v27 = v26;
      *v29 = -1LL;
      if ( v24 > 0x7FFFFFFEFFFFLL && AccessMode )
      {
        ++dword_140E30240;
        v16 = -1073741819;
        break;
      }
      if ( (v30 & 0x20) == 0 || v24 < v32 || v24 > v33 )
      {
        LODWORD(P[0]) = 0;
        while ( 1 )
        {
          v16 = MiLockPageLeafPageTable((__int64)v23);
          if ( v28 == CLFS_LSN_NULL_EXT )
            break;
          v16 = MiProbeLeafPteAccess((__int64)v23, P);
          if ( v16 < 0 )
            goto LABEL_18;
          if ( !LODWORD(P[0]) )
          {
            v31 = (v28 >> 12) & 0xFFFFFFFFFFLL;
            MiSetProbePagesAhead((__int64)v23);
LABEL_12:
            v20 = 16;
            goto LABEL_13;
          }
          if ( LODWORD(P[0]) != 1 )
          {
            v16 = MiFaultInProbeAddress((__int64)v23);
            if ( v16 < 0 )
            {
              ++dword_140E30244;
              goto LABEL_18;
            }
          }
        }
        if ( v16 >= 0 )
          goto LABEL_12;
        break;
      }
      if ( v34 == -1 )
        v21 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v26) >> 12) & 0xFFFFFFFFFFLL;
      else
        v21 = v34 + ((v24 - v32) >> 12);
      v31 = v21;
      v20 = 64;
LABEL_13:
      v16 = MiProbeLockFrame((__int64)v23, 1LL, v19, v18);
      if ( v16 < 0 )
        break;
      ++v14;
      *v29++ = v31;
      if ( !(v14 % v20) )
      {
        if ( (unsigned int)MiProbePacketContended(v23) )
        {
          MiUnlockProbePacketWorkingSet((__int64)v23);
          MiLockProbePacketWorkingSet((__int64)v23);
        }
      }
    }
LABEL_18:
    v16 = MiProbeAndLockComplete((__int64)v23, v16);
  }
  if ( v13 != v35 )
    ExFreePoolWithTag(v13, 0);
  if ( v16 < 0 )
    RtlRaiseStatus(v16);
}
