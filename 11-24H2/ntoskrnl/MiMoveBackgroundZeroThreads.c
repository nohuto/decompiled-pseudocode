/*
 * XREFs of MiMoveBackgroundZeroThreads @ 0x1403A3B00
 * Callers:
 *     MmReportParkedProcessors @ 0x1403A38F0 (MmReportParkedProcessors.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A1240 (KeSetUserGroupAffinityThread.c)
 *     MiSelectBestZeroingProcessor @ 0x140413840 (MiSelectBestZeroingProcessor.c)
 *     MiProcessorParked @ 0x1404ADB64 (MiProcessorParked.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiMoveBackgroundZeroThreads(ULONG *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // ebx
  ULONG *v5; // rbp
  __int64 v6; // rsi
  void **v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // r15d
  _QWORD **v16; // r12
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // r13
  __int64 v20; // [rsp+20h] [rbp-78h]
  char v21; // [rsp+28h] [rbp-70h]
  volatile LONG *SpinLock; // [rsp+30h] [rbp-68h]
  __int128 v23; // [rsp+40h] [rbp-58h] BYREF
  __int128 v24[4]; // [rsp+50h] [rbp-48h] BYREF
  ULONG *v25; // [rsp+A0h] [rbp+8h]
  unsigned int v26; // [rsp+A0h] [rbp+8h]
  _QWORD *v27; // [rsp+B0h] [rbp+18h]
  __int64 v28; // [rsp+B8h] [rbp+20h]

  v25 = a1;
  result = (unsigned __int64)&MiSystemPartition;
  if ( a1 == &MiSystemPartition )
  {
    if ( !a2 )
      return result;
    CurrentIrql = 17;
    v21 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v21 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      result = KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
  }
  v4 = 0;
  if ( KeNumberNodes )
  {
    v5 = v25;
    do
    {
      v6 = *((_QWORD *)v5 + 2) + 57216LL * v4;
      if ( *(_QWORD *)(v6 + 14976) || *(_QWORD *)(v6 + 14992) )
      {
        v7 = *(void ***)(384LL * v4 + qword_140E2DC38 + 376);
        SpinLock = (volatile LONG *)(v6 + 15280);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 15280));
        v8 = *(_QWORD *)(v6 + 15272);
        if ( v8 && *(_QWORD *)(v6 + 15288) )
        {
          if ( (*((_DWORD *)v7 + 9) & 1) != 0 && *(_BYTE *)(v8 + 172) )
            v7 = &Src;
          v9 = *((_DWORD *)v7 + 2);
          v10 = v8 + 468;
          v11 = 2LL;
          v26 = v9;
          v20 = 2LL;
          do
          {
            if ( *(_DWORD *)(v10 + 144) )
            {
              if ( *(_BYTE *)v10 )
              {
                v24[0] = 0LL;
                if ( v9 )
                {
                  v12 = v9;
                  v13 = 0LL;
                  v28 = v9;
                  do
                  {
                    v14 = *(_QWORD *)(v10 + 108);
                    v15 = *(_DWORD *)(v13 + v14 + 32);
                    if ( v15 )
                    {
                      v16 = (_QWORD **)(v13 + v14 + 16);
                      v17 = *v16;
                      if ( *v16 != v16 )
                      {
                        do
                        {
                          v18 = (_QWORD *)*v17;
                          v19 = v17 - 54;
                          v27 = (_QWORD *)*v17;
                          if ( *(v17 - 10) )
                          {
                            v23 = *((_OWORD *)v19 + 22);
                            if ( (unsigned int)MiProcessorParked(&v23) )
                            {
                              KeSetUserGroupAffinityThread(v19[41], (__int64 *)v24);
                              MiSelectBestZeroingProcessor(v10 - 28, v19, 1LL);
                            }
                            v18 = v27;
                          }
                          if ( !--v15 )
                            break;
                          v17 = v18;
                        }
                        while ( v18 != v16 );
                        v12 = v28;
                      }
                    }
                    v13 += 48LL;
                    v28 = --v12;
                  }
                  while ( v12 );
                  v11 = v20;
                  v9 = v26;
                }
              }
            }
            v10 += 304LL;
            v20 = --v11;
          }
          while ( v11 );
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      }
      result = (unsigned __int16)KeNumberNodes;
      ++v4;
    }
    while ( v4 < (unsigned __int16)KeNumberNodes );
    CurrentIrql = v21;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
