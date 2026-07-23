/*
 * XREFs of MiProbeAndLockPacket @ 0x140237CC0
 * Callers:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPages @ 0x140415B10 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x14042AF44 (IopProbeAndLockPages_0.c)
 *     MmLockPhysicalPagesByVa @ 0x1407EAF70 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiFaultInProbeAddress @ 0x14020ABF4 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x14020AFF0 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x140239B00 (MiSetProbePagesAhead.c)
 *     MiProbePacketContended @ 0x140391364 (MiProbePacketContended.c)
 */

__int64 __fastcall MiProbeAndLockPacket(__int64 a1)
{
  int v1; // ebp
  unsigned int v2; // esi
  int v4; // ecx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // r9
  int v17; // ecx
  __int64 result; // rax
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v23; // rcx
  int v24; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 72);
    if ( (v4 & 0x40) == 0 )
      **(_QWORD **)(a1 + 56) = -1LL;
    v5 = 1LL;
    if ( (v4 & 0x20) == 0 )
      break;
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 < *(_QWORD *)(a1 + 152) || v6 > *(_QWORD *)(a1 + 160) )
      break;
    if ( (v1 & 0x3F) != 0 || !v1 || !(unsigned int)MiProbePacketContended(a1) )
    {
      v7 = *(_QWORD *)(a1 + 168);
      if ( v7 == -1 )
      {
        v8 = *(_QWORD *)(a1 + 24);
        v9 = *(_QWORD *)v8;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v10 = *(_QWORD *)v8;
          if ( (v9 & 1) != 0 && ((v9 & 0x42) == 0 || (v9 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v23 = *(_QWORD *)(KernelWaitTime + 8 * ((v8 >> 3) & 0x1FF));
                if ( (v23 & 0x20) != 0 )
                  v10 = v9 | 0x20;
                v9 = v10 | 0x42;
                if ( (v23 & 0x42) == 0 )
                  v9 = v10;
              }
            }
          }
        }
        v11 = (v9 >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        v11 = v7 + ((*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 152)) >> 12);
      }
      *(_QWORD *)(a1 + 136) = v11;
      if ( v11 > qword_140E2DD20 || (*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 160) + 1LL;
        if ( *(_QWORD *)(a1 + 16) <= v12 )
          v12 = *(_QWORD *)(a1 + 16);
        v13 = (v12 - (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFF000uLL)) >> 12;
        if ( v13 > 1 )
        {
          v14 = 512 - (v11 & 0x1FF);
          if ( v13 <= v14 )
            v14 = v13;
          if ( v7 == -1 )
          {
            v15 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
            if ( v14 > 1 )
            {
              do
              {
                v16 = (*v15 >> 12) & 0xFFFFFFFFFFLL;
                if ( v16 != v11 + 1 )
                  break;
                ++v15;
                ++v5;
                v11 = v16;
              }
              while ( v5 < v14 );
            }
          }
          else
          {
            v5 = v14;
          }
        }
      }
LABEL_33:
      result = MiProbeLockFrame(a1, v5, v11);
      v2 = result;
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) += v5 << 12;
      *(_QWORD *)(a1 + 24) += 8 * v5;
      if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
      {
        v19 = *(_QWORD *)(a1 + 136);
        if ( v5 )
        {
          v20 = *(_QWORD **)(a1 + 56);
          do
          {
            *v20++ = v19++;
            --v5;
          }
          while ( v5 );
          *(_QWORD *)(a1 + 56) = v20;
        }
      }
      goto LABEL_39;
    }
LABEL_55:
    MiUnlockProbePacketWorkingSet(a1);
    MiLockProbePacketWorkingSet(a1);
LABEL_39:
    ++v1;
    if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(a1 + 32) )
      return v2;
  }
  if ( (v1 & 0xF) == 0 && v1 && (unsigned int)MiProbePacketContended(a1) )
    goto LABEL_55;
  v24 = 0;
  while ( 1 )
  {
    v17 = MiLockPageLeafPageTable(a1);
    if ( *(_QWORD *)(a1 + 48) == CLFS_LSN_NULL_EXT )
      break;
    result = MiProbeLeafPteAccess(a1, &v24);
    if ( (int)result < 0 )
      return result;
    if ( !v24 )
    {
      *(_QWORD *)(a1 + 136) = (*(_QWORD *)(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      goto LABEL_33;
    }
    if ( v24 != 1 )
    {
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
      {
        ++dword_140E30244;
        return result;
      }
    }
  }
  if ( v17 >= 0 )
    goto LABEL_33;
  return (unsigned int)v17;
}
