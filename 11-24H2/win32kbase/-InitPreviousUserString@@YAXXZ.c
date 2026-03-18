/*
 * XREFs of ?InitPreviousUserString@@YAXXZ @ 0x1400A04A4
 * Callers:
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x14009F5A0 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 * Callees:
 *     GetProcessLuid @ 0x1400A05A0 (GetProcessLuid.c)
 */

void __fastcall InitPreviousUserString(__int64 a1)
{
  struct _LUID *UserSessionState; // rbx
  struct _LUID v2; // rcx
  __int64 v3; // rbx
  struct _UNICODE_STRING *v4; // rbx
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF
  struct _LUID AuthenticationId; // [rsp+40h] [rbp+8h] BYREF

  AuthenticationId = 0LL;
  KeyPath = 0LL;
  UserSessionState = (struct _LUID *)W32GetUserSessionState(a1);
  GetProcessLuid(0LL, &AuthenticationId);
  v2 = AuthenticationId;
  if ( AuthenticationId != *(_QWORD *)&UserSessionState[8512] )
  {
    UserSessionState[8512] = AuthenticationId;
    v3 = ((__int64 (__fastcall *)(_QWORD))W32GetUserSessionState)(v2);
    if ( AuthenticationId.LowPart == 999 && !AuthenticationId.HighPart || RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
    {
      v4 = (struct _UNICODE_STRING *)(v3 + 68080);
      RtlCopyUnicodeString(v4, &stru_140246250);
    }
    else
    {
      v4 = (struct _UNICODE_STRING *)(v3 + 68080);
      RtlCopyUnicodeString(v4, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
    }
    RtlAppendUnicodeToString(v4, L"\\");
  }
}
