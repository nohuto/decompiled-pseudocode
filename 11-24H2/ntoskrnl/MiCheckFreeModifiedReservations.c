/*
 * XREFs of MiCheckFreeModifiedReservations @ 0x1402D00FC
 * Callers:
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiInitializePagefileBitmapsCache @ 0x140366010 (MiInitializePagefileBitmapsCache.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     MiFreeModifiedReservations @ 0x1404F8E8C (MiFreeModifiedReservations.c)
 */

unsigned __int64 __fastcall MiCheckFreeModifiedReservations(__int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  __int64 *v10; // rsi
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  KIRQL v14; // al
  char v15; // dl
  unsigned __int8 v16; // r13
  signed __int32 v17[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 3968);
  v3 = *(_QWORD *)(a1 + 19616);
  v4 = *(_QWORD *)(a1 + 18752);
  result = *(_QWORD *)(a1 + 880);
  if ( result < 0x800 )
  {
    result = *(_QWORD *)(a1 + 18512) >> 2;
    if ( v3 > result )
      goto LABEL_4;
    v12 = 0LL;
    if ( v4 >= 0 )
      v12 = v4;
    result = v12 >> 2;
    if ( v3 > result )
    {
LABEL_4:
      v6 = *(_DWORD *)(a1 + 896);
      if ( v6 >= 0x40 )
      {
        v7 = *(_DWORD *)(a1 + 888) % v6;
        result = *(_DWORD *)(a1 + 888) / v6;
        v8 = (unsigned int)dword_140FC420C >> 3;
        if ( (unsigned int)result < (unsigned int)v8 )
        {
          result = *(unsigned int *)(a1 + 18520);
          v9 = 3 * (v3 >> 2);
          if ( (_DWORD)result )
          {
            v10 = (__int64 *)(a1 + 18528);
            v11 = (unsigned int)result;
            do
            {
              v13 = *v10;
              if ( (*(_BYTE *)(*v10 + 172) & 0x60) == 0 )
              {
                if ( v1 > v9 )
                {
                  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v13 + 200));
                  v15 = *(_BYTE *)(v13 + 175);
                  v16 = v14;
                  if ( (v15 & 1) == 0 )
                  {
                    *(_BYTE *)(v13 + 175) = v15 | 1;
                    MiInitializePagefileBitmapsCache(v13);
                    *(_DWORD *)(v13 + 92) = dword_140FC420C;
                  }
                  MiReleaseSpinLockExclusive((_DWORD *)(v13 + 200), v16);
                }
                result = MiFreeModifiedReservations(v13, 0LL);
              }
              ++v10;
              --v11;
            }
            while ( v11 );
          }
          ++*(_DWORD *)(a1 + 904);
          if ( v1 > v9 )
          {
            LOBYTE(v8) = 1;
            result = KiQueryUnbiasedInterruptTime(v8, v7);
            *(_QWORD *)(a1 + 912) = result;
            _InterlockedOr(v17, 0);
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
