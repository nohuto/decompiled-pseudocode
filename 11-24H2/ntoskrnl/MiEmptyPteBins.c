/*
 * XREFs of MiEmptyPteBins @ 0x1403F67B4
 * Callers:
 *     MiInsertCachedPte @ 0x14029E0E0 (MiInsertCachedPte.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiMakeSystemPtesAppear @ 0x1403F5D58 (MiMakeSystemPtesAppear.c)
 *     MiOkToBinMoreLargePtes @ 0x1403F5E74 (MiOkToBinMoreLargePtes.c)
 *     MiAdjustPteBins @ 0x1403F5F00 (MiAdjustPteBins.c)
 *     MiCheckProcessorPteCache @ 0x1403F6100 (MiCheckProcessorPteCache.c)
 * Callees:
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 */

unsigned __int64 __fastcall MiEmptyPteBins(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned __int64 v4; // rbx
  __int16 v6; // r8
  __int64 CurrentIrql; // r11
  struct _KTHREAD *CurrentThread; // rbp
  int v9; // esi
  int v10; // r13d
  int v11; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // r12
  unsigned int i; // r14d
  signed __int64 v16; // rax
  unsigned int v18; // r8d
  unsigned __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  __int64 v22; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  struct _KTHREAD *v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int16 v27; // [rsp+90h] [rbp+8h]
  char v29; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v30; // [rsp+A8h] [rbp+20h]

  v29 = a3;
  v3 = a3;
  v4 = 0LL;
  v30 = 0LL;
  _InterlockedOr(v23, 0);
  v6 = KiTbFlushTimeStamp;
  v27 = KiTbFlushTimeStamp;
  CurrentIrql = KeGetCurrentIrql();
  v26 = CurrentIrql;
  if ( (_BYTE)CurrentIrql )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
  }
  v25 = CurrentThread;
  v9 = (v3 >> 2) & 1;
  v10 = 1;
  if ( (__int64 *)a1 == &qword_140E376A8 || (_UNKNOWN *)a1 == &unk_140E35EC0 )
  {
    v10 = 3;
  }
  else if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    v10 = 2;
  }
  if ( v9 < (unsigned int)v10 )
  {
    v11 = v3 & 2;
    do
    {
      if ( v11 )
      {
        v12 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
        v13 = v12 + 1;
      }
      else
      {
        v13 = (unsigned __int16)KeNumberNodes;
        v12 = 0;
      }
      v14 = *(_QWORD *)(a1 + 80) + 72 * (v12 + (__int64)(v9 * (unsigned __int16)KeNumberNodes));
      while ( v12 < v13 )
      {
        for ( i = 0; i < 8; ++i )
        {
          v16 = *(_QWORD *)(v14 + 8LL * i);
          v24 = v16;
          if ( (_WORD)v16 )
          {
            v18 = (unsigned __int16)(v6 - v16);
            if ( v18 > 2 || (v16 & 1) == 0 && v18 >= 2 || (v3 & 1) != 0 )
            {
              if ( (_BYTE)CurrentIrql == 2
                && ((__int64 *)a1 == &qword_140E376A8 && v9 || (_UNKNOWN *)a1 == &unk_140E35EC0 && v9) )
              {
                goto LABEL_16;
              }
              if ( v16 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8LL * i), 0LL, v16) )
              {
                _InterlockedOr(v23, 0);
                v20 = (unsigned __int16)(KiTbFlushTimeStamp - v24);
                v21 = v20 <= 2 && ((v24 & 1) != 0 || v20 < 2);
                v22 = MiReleasePteMappings(a1, &v24, v21, v9);
                _InterlockedAdd64((volatile signed __int64 *)(v14 + 64), -v22);
                LOBYTE(v3) = v29;
                v19 = v22 + v30;
                LOBYTE(CurrentIrql) = v26;
                v30 += v22;
              }
              else
              {
                v19 = v30;
                --i;
              }
              if ( v19 && !a2 || v19 >= a2 )
                goto LABEL_16;
            }
            v6 = v27;
          }
        }
        v14 += 72LL;
        ++v12;
      }
      ++v9;
    }
    while ( v9 < v10 );
LABEL_16:
    CurrentThread = v25;
    v4 = v30;
  }
  if ( CurrentThread )
    KeLeaveCriticalRegionThread();
  return v4;
}
