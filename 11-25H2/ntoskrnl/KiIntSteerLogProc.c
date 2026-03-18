/*
 * XREFs of KiIntSteerLogProc @ 0x1403AF60C
 * Callers:
 *     KiIntSteerLogStatus @ 0x1403AE85C (KiIntSteerLogStatus.c)
 *     KeIntSteerPeriodic @ 0x1403AF134 (KeIntSteerPeriodic.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1403AF324 (KiIntSteerEtwEventEnabled.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogProc(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  int v2; // eax
  int v4; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v5[2]; // [rsp+48h] [rbp+Fh] BYREF
  __int16 v6; // [rsp+58h] [rbp+1Fh]
  int v7; // [rsp+5Ah] [rbp+21h]
  __int16 v8; // [rsp+5Eh] [rbp+25h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+27h] BYREF
  __int64 v10; // [rsp+70h] [rbp+37h]
  __int64 v11; // [rsp+78h] [rbp+3Fh]

  v7 = 0;
  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  v8 = 0;
  if ( a1 )
    v1 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  v4 = 0;
  LOBYTE(v2) = KiIntSteerEtwEventEnabled((__int64)v1);
  if ( (_BYTE)v2 )
  {
    v5[1] = KeActiveProcessors.Bitmap[0];
    v5[0] = &KeActiveProcessors;
    v6 = 0;
    while ( 1 )
    {
      v2 = KeEnumerateNextProcessor(&v4, v5);
      if ( v2 )
        break;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v4;
      v11 = 4LL;
      v10 = KiProcessorBlock[v4] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, v1, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return v2;
}
