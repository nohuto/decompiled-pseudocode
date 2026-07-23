/*
 * XREFs of MiCheckFreeModifiedReservations @ 0x14046FF1C
 * Callers:
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403C3CC0 (MiInitializePagefileBitmapsCache.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     MiFreeModifiedReservations @ 0x1404F676C (MiFreeModifiedReservations.c)
 */

unsigned __int64 __fastcall MiCheckFreeModifiedReservations(__int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r14
  __int64 *v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  KIRQL v12; // al
  char v13; // dl
  unsigned __int8 v14; // r13
  signed __int32 v15[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 3968);
  v3 = *(_QWORD *)(a1 + 19616);
  v4 = *(_QWORD *)(a1 + 18752);
  result = *(_QWORD *)(a1 + 880);
  if ( result < 0x800 )
  {
    result = *(_QWORD *)(a1 + 18512) >> 2;
    if ( v3 > result )
      goto LABEL_4;
    v10 = 0LL;
    if ( v4 >= 0 )
      v10 = v4;
    result = v10 >> 2;
    if ( v3 > result )
    {
LABEL_4:
      v6 = *(_DWORD *)(a1 + 896);
      if ( v6 >= 0x40 )
      {
        result = *(_DWORD *)(a1 + 888) / v6;
        if ( (unsigned int)result < (unsigned int)dword_140FC520C >> 3 )
        {
          result = *(unsigned int *)(a1 + 18520);
          v7 = 3 * (v3 >> 2);
          if ( (_DWORD)result )
          {
            v8 = (__int64 *)(a1 + 18528);
            v9 = (unsigned int)result;
            do
            {
              v11 = *v8;
              if ( (*(_BYTE *)(*v8 + 172) & 0x60) == 0 )
              {
                if ( v1 > v7 )
                {
                  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 200));
                  v13 = *(_BYTE *)(v11 + 175);
                  v14 = v12;
                  if ( (v13 & 1) == 0 )
                  {
                    *(_BYTE *)(v11 + 175) = v13 | 1;
                    MiInitializePagefileBitmapsCache(v11);
                    *(_DWORD *)(v11 + 92) = dword_140FC520C;
                  }
                  MiReleaseSpinLockExclusive((_DWORD *)(v11 + 200), v14);
                }
                result = MiFreeModifiedReservations(v11, 0LL);
              }
              ++v8;
              --v9;
            }
            while ( v9 );
          }
          ++*(_DWORD *)(a1 + 904);
          if ( v1 > v7 )
          {
            result = KiQueryUnbiasedInterruptTime();
            *(_QWORD *)(a1 + 912) = result;
            _InterlockedOr(v15, 0);
            *(_WORD *)(a1 + 924) |= 1u;
            ++*(_DWORD *)(a1 + 900);
          }
          *(_DWORD *)(a1 + 896) = 0;
          *(_QWORD *)(a1 + 888) = 0LL;
        }
      }
    }
  }
  return result;
}
