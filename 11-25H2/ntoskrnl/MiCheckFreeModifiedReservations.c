/*
 * XREFs of MiCheckFreeModifiedReservations @ 0x1403C0654
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     MiInitializePagefileBitmapsCache @ 0x1404BBF14 (MiInitializePagefileBitmapsCache.c)
 *     MiFreeModifiedReservations @ 0x1404F6770 (MiFreeModifiedReservations.c)
 */

unsigned __int64 __fastcall MiCheckFreeModifiedReservations(__int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned int v6; // ecx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  KIRQL v13; // al
  char v14; // dl
  unsigned __int8 v15; // r13
  signed __int32 v16[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 3968);
  v3 = *(_QWORD *)(a1 + 19616);
  v4 = *(_QWORD *)(a1 + 18752);
  result = *(_QWORD *)(a1 + 880);
  if ( result < 0x800 )
  {
    result = *(_QWORD *)(a1 + 18512) >> 2;
    if ( v3 > result )
      goto LABEL_4;
    v11 = 0LL;
    if ( v4 >= 0 )
      v11 = v4;
    result = v11 >> 2;
    if ( v3 > result )
    {
LABEL_4:
      v6 = *(_DWORD *)(a1 + 896);
      if ( v6 >= 0x40 )
      {
        result = *(_DWORD *)(a1 + 888) / v6;
        v7 = (unsigned int)dword_140FC41FC >> 3;
        if ( (unsigned int)result < (unsigned int)v7 )
        {
          result = *(unsigned int *)(a1 + 18520);
          v8 = 3 * (v3 >> 2);
          if ( (_DWORD)result )
          {
            v9 = (__int64 *)(a1 + 18528);
            v10 = (unsigned int)result;
            do
            {
              v12 = *v9;
              if ( (*(_BYTE *)(*v9 + 172) & 0x60) == 0 )
              {
                if ( v1 > v8 )
                {
                  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 200));
                  v14 = *(_BYTE *)(v12 + 175);
                  v15 = v13;
                  if ( (v14 & 1) == 0 )
                  {
                    *(_BYTE *)(v12 + 175) = v14 | 1;
                    MiInitializePagefileBitmapsCache(v12);
                    *(_DWORD *)(v12 + 92) = dword_140FC41FC;
                  }
                  MiReleaseSpinLockExclusive((_DWORD *)(v12 + 200), v15);
                }
                result = MiFreeModifiedReservations(v12, 0LL);
              }
              ++v9;
              --v10;
            }
            while ( v10 );
          }
          ++*(_DWORD *)(a1 + 904);
          if ( v1 > v8 )
          {
            LOBYTE(v7) = 1;
            result = KiQueryUnbiasedInterruptTime(v7);
            *(_QWORD *)(a1 + 912) = result;
            _InterlockedOr(v16, 0);
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
