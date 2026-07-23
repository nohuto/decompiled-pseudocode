/*
 * XREFs of KiIntSteerLogProc @ 0x1402B1848
 * Callers:
 *     KiIntSteerLogStatus @ 0x1402AF804 (KiIntSteerLogStatus.c)
 *     KeIntSteerPeriodic @ 0x1402B1294 (KeIntSteerPeriodic.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1402B14A8 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogProc(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v2; // rsi
  char result; // al
  unsigned __int64 v4; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v9 = 0;
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  if ( a1 )
    v2 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  result = KiIntSteerEtwEventEnabled((__int64)v2, a2);
  if ( result )
  {
    v4 = KeActiveProcessors.Bitmap[0];
    for ( i = 0; ; v4 = KeActiveProcessors.Bitmap[i] )
    {
      while ( v4 )
      {
        _BitScanForward64(&v6, v4);
        v4 &= ~(1LL << v6);
        v7 = *((unsigned int *)qword_140F22998 + 64 * i + (unsigned __int8)v6);
        UserData.Ptr = (ULONGLONG)&v9;
        v9 = v7;
        v8 = KiProcessorBlock[v7];
        *(_QWORD *)&UserData.Size = 4LL;
        v11 = v8 + 11672;
        v12 = 4LL;
        EtwWriteEx(KiIntSteerEtwHandle, v2, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
      result = ++i;
      if ( i >= (unsigned int)KeActiveProcessors.Count )
        break;
    }
  }
  return result;
}
