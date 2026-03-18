/*
 * XREFs of HUBMISC_IsD3ColdSupported @ 0x140030AE0
 * Callers:
 *     HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x140012680 (HUBPSM30_CheckingIsD3ColdIsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dddd @ 0x1400345E4 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall HUBMISC_IsD3ColdSupported(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // r9d

  v5 = a1 + 166;
  v6 = (_DWORD *)a1 + 51;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddd(a1[179], (*(_DWORD *)(*v5 + 1636LL) >> 12) & 1, *v6 & 1, a4);
  v7 = *v5;
  if ( (*(_DWORD *)(*v5 + 1632LL) & 0x8000) != 0
    && (*(_DWORD *)(v7 + 1636) & 0x1000) != 0
    && (*v6 & 1) == 0
    && *(_DWORD *)(v7 + 2708) == 4 )
  {
    v8 = 3089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 117;
LABEL_15:
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(a1[179], v7, 5, v9, (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
    }
  }
  else
  {
    if ( (*(_DWORD *)(*a1 + 44LL) & 2) == 0
      || (*v6 & 1) != 0
      || *(_DWORD *)(v7 + 2708) != 3
      || (*(_DWORD *)(v7 + 1644) & 0x8000000) == 0 )
    {
      v8 = 3005;
      _InterlockedAnd((volatile signed __int32 *)(v7 + 1636), 0xFFEFFFFF);
      return v8;
    }
    v8 = 3089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 118;
      goto LABEL_15;
    }
  }
  return v8;
}
