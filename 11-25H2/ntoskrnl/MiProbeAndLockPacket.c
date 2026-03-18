/*
 * XREFs of MiProbeAndLockPacket @ 0x1402AC750
 * Callers:
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPages @ 0x1404011D0 (MiProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x1407DAAE0 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x1402ADA90 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402AE4D0 (MiSetProbePagesAhead.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1402FC680 (MiLockProbePacketWorkingSet.c)
 *     MiProbePacketContended @ 0x1403386E0 (MiProbePacketContended.c)
 */

__int64 __fastcall MiProbeAndLockPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned int v5; // esi
  int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // r9
  int v20; // ecx
  __int64 result; // rax
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v27; // rcx
  int v28; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(a1 + 72);
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (v7 & 0x40) == 0 )
      **(_QWORD **)(a1 + 56) = -1LL;
    v9 = 1LL;
    if ( (v7 & 0x20) == 0 )
      break;
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 < *(_QWORD *)(a1 + 152) || v10 > *(_QWORD *)(a1 + 160) )
      break;
    if ( (v4 & 0x3F) != 0 || !v4 || !(unsigned int)MiProbePacketContended(a1) )
    {
      v11 = *(_QWORD *)(a1 + 168);
      if ( v11 == -1 )
      {
        v12 = *(_QWORD *)(a1 + 24);
        v13 = *(_QWORD *)v12;
        if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v24 = *(_QWORD *)v12;
          if ( (v13 & 1) != 0 && ((v13 & 0x42) == 0 || (v13 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v27 = *(_QWORD *)(KernelWaitTime + 8 * ((v12 >> 3) & 0x1FF));
                if ( (v27 & 0x20) != 0 )
                  v24 = v13 | 0x20;
                v13 = v24 | 0x42;
                if ( (v27 & 0x42) == 0 )
                  v13 = v24;
              }
            }
          }
        }
        v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        v14 = v11 + ((*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 152)) >> 12);
      }
      *(_QWORD *)(a1 + 136) = v14;
      if ( v14 > qword_140E2D9A0 || (*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      {
        v15 = *(_QWORD *)(a1 + 160) + 1LL;
        if ( *(_QWORD *)(a1 + 16) <= v15 )
          v15 = *(_QWORD *)(a1 + 16);
        v16 = (v15 - (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFF000uLL)) >> 12;
        if ( v16 > 1 )
        {
          v17 = 512 - (v14 & 0x1FF);
          if ( v16 <= v17 )
            v17 = v16;
          if ( v11 == -1 )
          {
            v18 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
            if ( v17 > 1 )
            {
              do
              {
                v19 = (*v18 >> 12) & 0xFFFFFFFFFFLL;
                if ( v19 != v14 + 1 )
                  break;
                ++v18;
                ++v9;
                v14 = v19;
              }
              while ( v9 < v17 );
            }
          }
          else
          {
            v9 = v17;
          }
        }
      }
LABEL_30:
      result = MiProbeLockFrame(a1, v9);
      v5 = result;
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) += v9 << 12;
      *(_QWORD *)(a1 + 24) += 8 * v9;
      if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
      {
        v22 = *(_QWORD *)(a1 + 136);
        if ( v9 )
        {
          v23 = *(_QWORD **)(a1 + 56);
          do
          {
            *v23++ = v22++;
            --v9;
          }
          while ( v9 );
          *(_QWORD *)(a1 + 56) = v23;
        }
      }
      goto LABEL_36;
    }
LABEL_55:
    MiUnlockProbePacketWorkingSet(a1);
    MiLockProbePacketWorkingSet(a1);
LABEL_36:
    ++v4;
    if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(a1 + 32) )
      return v5;
  }
  if ( (v4 & 0xF) == 0 && v4 && (unsigned int)MiProbePacketContended(a1) )
    goto LABEL_55;
  v28 = 0;
  while ( 1 )
  {
    v20 = MiLockPageLeafPageTable(a1, v8, a3, a4);
    if ( *(_QWORD *)(a1 + 48) == CLFS_LSN_NULL_EXT )
      break;
    result = MiProbeLeafPteAccess(a1, &v28);
    if ( (int)result < 0 )
      return result;
    if ( !v28 )
    {
      *(_QWORD *)(a1 + 136) = (*(_QWORD *)(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      goto LABEL_30;
    }
    if ( v28 != 1 )
    {
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
      {
        ++dword_140E2FEBC;
        return result;
      }
    }
  }
  if ( v20 >= 0 )
    goto LABEL_30;
  return (unsigned int)v20;
}
