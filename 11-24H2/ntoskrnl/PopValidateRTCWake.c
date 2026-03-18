/*
 * XREFs of PopValidateRTCWake @ 0x140B6D334
 * Callers:
 *     PopHandleWakeSources @ 0x140B5BE24 (PopHandleWakeSources.c)
 * Callees:
 *     PopDiagTraceRtcWakeInfo @ 0x1404D48D4 (PopDiagTraceRtcWakeInfo.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1407513AC (PopCalculateWakeTimeAdjustment.c)
 *     PopCurrentPowerStatePrecise @ 0x140A2C144 (PopCurrentPowerStatePrecise.c)
 */

unsigned __int8 __fastcall PopValidateRTCWake(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  int v2; // edi
  unsigned __int8 v3; // r15
  unsigned __int8 v4; // r12
  int v5; // edx
  bool v6; // zf
  int v8; // ebx
  int v9; // ecx
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  _BYTE v13[32]; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = PopFixedWakeSourceMask & 0x18;
  v6 = (PopSimulate & 0x100000) == 0;
  v8 = 1;
  *a1 = 1;
  if ( !v6 )
  {
    v2 = 4;
LABEL_22:
    v8 = 0;
    goto LABEL_23;
  }
  if ( v5 == 16 )
  {
    v9 = 1;
    dword_140F0B170 = 1;
    *a1 = 0;
    goto LABEL_10;
  }
  if ( v5 == 8 )
  {
    v9 = 0;
    v3 = 1;
    dword_140F0B170 = 0;
    *a1 = 0;
    goto LABEL_10;
  }
  if ( v5 )
  {
    PopCurrentPowerStatePrecise((__int64)v13, 0LL);
    dword_140F0B170 = dword_140F0BA4C;
  }
  v9 = dword_140F0B170;
  if ( dword_140F0B170 >= 0 )
  {
LABEL_10:
    if ( (unsigned __int64)v9 < 3 )
      goto LABEL_15;
  }
  if ( qword_140F0B198 && qword_140F0B180[0] > (unsigned __int64)qword_140F0B198 )
  {
    v9 = 1;
    dword_140F0B170 = 1;
  }
  else
  {
    v9 = 0;
    v3 = 1;
    dword_140F0B170 = 0;
  }
LABEL_15:
  v10 = qword_140F0B180[3 * v9];
  if ( v10 )
  {
    v11 = qword_140F0B158;
    v1 = v11 - 10000 * (unsigned int)PopCalculateWakeTimeAdjustment();
    if ( v10 < v1 + 100000000 )
    {
      if ( v1 <= v10
        || v1 - v10 < (-(__int64)(PopPendingUserPresenceDuringSystemSleep != 0) & 0xFFFFFFFFBE6F5500uLL) + 1200000000 )
      {
        v4 = 1;
        v8 = 0;
        goto LABEL_25;
      }
      v2 = 3;
    }
    else
    {
      v2 = 2;
    }
    goto LABEL_22;
  }
  v2 = 1;
LABEL_23:
  dword_140F0B170 = 3;
  *a1 = 0;
LABEL_25:
  PopDiagTraceRtcWakeInfo(v3, v4, v2, (unsigned __int8)*a1, v8, v3, v1);
  return v4;
}
