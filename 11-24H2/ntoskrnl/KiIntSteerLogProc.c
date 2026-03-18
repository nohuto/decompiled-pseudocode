/*
 * XREFs of KiIntSteerLogProc @ 0x140353A78
 * Callers:
 *     KeIntSteerPeriodic @ 0x1403534C4 (KeIntSteerPeriodic.c)
 *     KiIntSteerLogStatus @ 0x140354250 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1403536D8 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogProc(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rsi
  char result; // al
  unsigned __int64 v3; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  v8 = 0;
  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  if ( a1 )
    v1 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  result = KiIntSteerEtwEventEnabled((__int64)v1);
  if ( result )
  {
    v3 = KeActiveProcessors.Bitmap[0];
    for ( i = 0; ; v3 = KeActiveProcessors.Bitmap[i] )
    {
      while ( v3 )
      {
        _BitScanForward64(&v5, v3);
        v3 &= ~(1LL << v5);
        v6 = *((unsigned int *)qword_140F21E78 + 64 * i + (unsigned __int8)v5);
        UserData.Ptr = (ULONGLONG)&v8;
        v8 = v6;
        v7 = KiProcessorBlock[v6];
        *(_QWORD *)&UserData.Size = 4LL;
        v10 = v7 + 11672;
        v11 = 4LL;
        EtwWriteEx(KiIntSteerEtwHandle, v1, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
      result = ++i;
      if ( i >= (unsigned int)KeActiveProcessors.Count )
        break;
    }
  }
  return result;
}
