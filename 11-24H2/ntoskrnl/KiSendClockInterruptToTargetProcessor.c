/*
 * XREFs of KiSendClockInterruptToTargetProcessor @ 0x1403179A4
 * Callers:
 *     KiInsertTimerTable @ 0x140316F50 (KiInsertTimerTable.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     KiTimer2Expiration @ 0x1403AFFE0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140449E60 (KiAdjustTimer2DueTimes.c)
 *     KeSetClockInterval @ 0x140463D8C (KeSetClockInterval.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiSendClockInterruptToTargetProcessor(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r8d
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7[2]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v8; // [rsp+38h] [rbp-C8h]
  int v9; // [rsp+40h] [rbp-C0h]
  _DWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v11[33]; // [rsp+58h] [rbp-A8h] BYREF

  v1 = a1;
  memset_0(v11, 0, 0x100uLL);
  v10[1] = 0;
  v10[0] = 2097153;
  memset_0(v11, 0, 0x100uLL);
  v2 = *((_DWORD *)KiGlobalState + v1) & 0x3F;
  v3 = *((_DWORD *)KiGlobalState + v1) >> 6;
  if ( !(_DWORD)v3 )
    goto LABEL_2;
  if ( HIWORD(v10[0]) > (unsigned int)v3 )
  {
    LOWORD(v10[0]) = v3 + 1;
LABEL_2:
    v4 = (unsigned int)v3;
    v5 = v11[v3];
    _bittestandset64(&v5, v2);
    v11[v4] = v5;
  }
  v9 = 0;
  v7[1] = 0;
  if ( (unsigned int)KeIsEmptyAffinityEx(v10) )
  {
    LODWORD(result) = -1073741811;
LABEL_9:
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, 0LL);
  }
  v7[0] = 2;
  v8 = v10;
  result = HalpInterruptSendIpi(v7, 0xD2u);
  if ( (int)result < 0 )
    goto LABEL_9;
  return result;
}
