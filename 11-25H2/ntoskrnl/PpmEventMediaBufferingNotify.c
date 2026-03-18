/*
 * XREFs of PpmEventMediaBufferingNotify @ 0x140204F40
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140203C20 (PpmMediaBufferingWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PpmEventMediaBufferingNotify(char a1)
{
  BOOL v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY) )
    {
      UserData.Size = 4;
      UserData.Reserved = 0;
      v2 = a1 != 0;
      UserData.Ptr = (ULONGLONG)&v2;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
