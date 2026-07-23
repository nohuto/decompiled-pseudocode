/*
 * XREFs of PpmPerfGetFrequencyBandStats @ 0x140A3A0FC
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfGetFrequencyBandStats(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 Prcb; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r9
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v4 = 0;
  if ( a1 )
  {
    v5 = PpmCheckRegistered.Bitmap[0];
    LOWORD(v6) = 0;
    while ( 1 )
    {
      while ( v5 )
      {
        _BitScanForward64(&v7, v5);
        v5 &= ~(1LL << v7);
        Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v6 + (unsigned __int8)v7));
        v9 = *(_QWORD *)(Prcb + 35264);
        if ( v9 )
        {
          v10 = 48LL;
          v11 = 1152LL * (*(_BYTE *)(Prcb + 35336) != 0);
          v12 = v9 - v11 - a1;
          v13 = (_QWORD *)(v11 + a1);
          do
          {
            v14 = v13;
            v15 = 3LL;
            do
            {
              *v14 += *(_QWORD *)((char *)v14 + v12 + 248);
              v14 += 48;
              --v15;
            }
            while ( v15 );
            ++v13;
            --v10;
          }
          while ( v10 );
        }
      }
      v6 = (unsigned __int16)(v6 + 1);
      if ( (unsigned int)v6 >= PpmCheckRegistered.Count )
        break;
      v5 = PpmCheckRegistered.Bitmap[v6];
    }
  }
  else
  {
    v4 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v4;
}
