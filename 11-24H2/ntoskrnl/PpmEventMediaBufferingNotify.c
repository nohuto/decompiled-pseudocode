/*
 * XREFs of PpmEventMediaBufferingNotify @ 0x1403B6618
 * Callers:
 *     PpmMediaBufferingWorker @ 0x1403B5760 (PpmMediaBufferingWorker.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
