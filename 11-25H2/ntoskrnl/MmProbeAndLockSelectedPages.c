/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x1402AABA0
 * Callers:
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x1402ADA90 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402AE4D0 (MiSetProbePagesAhead.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x1402CB3C0 (MiProbeAndLockPrepare.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1402FC680 (MiLockProbePacketWorkingSet.c)
 *     MiProbePacketContended @ 0x1403386E0 (MiProbePacketContended.c)
 *     MiProbeAndLockComplete @ 0x14046B730 (MiProbeAndLockComplete.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  NTSTATUS v16; // edi
  unsigned __int64 *i; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned int v21; // esi
  unsigned __int64 v22; // rax
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v24[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v27; // [rsp+68h] [rbp-98h]
  unsigned __int64 v28; // [rsp+70h] [rbp-90h]
  unsigned __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 *v30; // [rsp+88h] [rbp-78h]
  char v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v33; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  _BYTE v36[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset_0(v24, 0, 0xB0uLL);
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = v36;
  P[0] = v36;
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
  v16 = MiProbeAndLockPrepare((unsigned int)v24, (_DWORD)MemoryDescriptorList, *(_QWORD *)P[0], 1, AccessMode, v8, 1);
  if ( v16 >= 0 )
  {
    for ( i = (unsigned __int64 *)P[0]; ; ++i )
    {
      v18 = 0xFFFFF68000000000uLL;
      v19 = 0x7FFFFFFEFFFFLL;
      v20 = 0x7FFFFFFFF8LL;
      if ( i >= v15 )
        break;
      v25 = *i;
      v26 = v25 + 1;
      v27 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v28 = v27;
      *v30 = -1LL;
      if ( v25 > 0x7FFFFFFEFFFFLL && AccessMode )
      {
        ++dword_140E2FEB8;
        v16 = -1073741819;
        break;
      }
      if ( (v31 & 0x20) == 0 || (v18 = v33, v25 < v33) || v25 > v34 )
      {
        LODWORD(P[0]) = 0;
        while ( 1 )
        {
          v16 = MiLockPageLeafPageTable(v24, v18, v20, v19);
          if ( v29 == CLFS_LSN_NULL_EXT )
            break;
          v16 = MiProbeLeafPteAccess(v24, P);
          if ( v16 < 0 )
            goto LABEL_18;
          if ( !LODWORD(P[0]) )
          {
            v32 = (v29 >> 12) & 0xFFFFFFFFFFLL;
            MiSetProbePagesAhead(v24);
LABEL_12:
            v21 = 16;
            goto LABEL_13;
          }
          if ( LODWORD(P[0]) != 1 )
          {
            v16 = MiFaultInProbeAddress(v24);
            if ( v16 < 0 )
            {
              ++dword_140E2FEBC;
              goto LABEL_18;
            }
          }
        }
        if ( v16 >= 0 )
          goto LABEL_12;
        break;
      }
      if ( v35 == -1 )
        v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v27) >> 12) & 0xFFFFFFFFFFLL;
      else
        v22 = v35 + ((v25 - v33) >> 12);
      v32 = v22;
      v21 = 64;
LABEL_13:
      v16 = MiProbeLockFrame(v24, 1LL);
      if ( v16 < 0 )
        break;
      ++v14;
      *v30++ = v32;
      if ( !(v14 % v21) )
      {
        if ( (unsigned int)MiProbePacketContended(v24) )
        {
          MiUnlockProbePacketWorkingSet(v24);
          MiLockProbePacketWorkingSet(v24);
        }
      }
    }
LABEL_18:
    v16 = MiProbeAndLockComplete(v24, (unsigned int)v16, 7LL, v19);
  }
  if ( v13 != v36 )
    ExFreePoolWithTag(v13, 0);
  if ( v16 < 0 )
    RtlRaiseStatus(v16);
}
