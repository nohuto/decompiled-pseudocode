/*
 * XREFs of NvmeControllerEnable @ 0x1400ECCD0
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     StorCheckDpcWatchdogTimerExpire @ 0x14008EE70 (StorCheckDpcWatchdogTimerExpire.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F3814 (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerEnable(__int64 a1)
{
  char v2; // r15
  unsigned int v3; // edx
  char v4; // bl
  __int64 *v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rcx
  unsigned int i; // edi
  int v9; // eax
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  int *v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 1728);
  v3 = *(_DWORD *)(a1 + 1220) + 9;
  v4 = 0;
  v13 = 0;
  v14 = 0;
  v5 = (__int64 *)(a1 + 920);
  v6 = 10 * (v3 / 0xA) / 0xA;
  if ( v2 == 1 )
  {
    NvmeControllerQueryStorMQProperty(a1, 20LL, 4LL);
    v13 |= 1u;
    v12 = &v13;
    NvmeControllerSetStorMQProperty(a1, 20LL, 4LL);
  }
  else
  {
    v7 = *v5;
    v13 = *(_DWORD *)(*v5 + 20) | 1;
    *(_DWORD *)(v7 + 20) = v13;
    _InterlockedOr(v11, 0);
  }
  for ( i = 0; ; ++i )
  {
    if ( v2 == 1 )
    {
      v12 = &v14;
      NvmeControllerQueryStorMQProperty(a1, 28LL, 4LL);
      LOBYTE(v9) = v14;
    }
    else
    {
      v9 = *(_DWORD *)(*v5 + 28);
      v14 = v9;
    }
    if ( (v9 & 1) != 0 )
      break;
    if ( i >= v6 )
      goto LABEL_13;
    if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
    {
      LOBYTE(v9) = v14;
      v4 = 1;
LABEL_13:
      if ( (v9 & 1) == 0 )
        return v4 != 0 ? -1073741595 : -1073741661;
      return 0LL;
    }
    KeStallExecutionProcessor(0x2710u);
  }
  return 0LL;
}
