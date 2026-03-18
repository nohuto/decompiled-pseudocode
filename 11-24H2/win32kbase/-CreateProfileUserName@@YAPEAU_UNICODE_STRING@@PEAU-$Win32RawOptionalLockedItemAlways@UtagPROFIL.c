/*
 * XREFs of ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x14009F5A0
 * Callers:
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x140171750 (NtUserSetSysColors.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1400A04A4 (-InitPreviousUserString@@YAXXZ.c)
 */

struct _UNICODE_STRING *__fastcall CreateProfileUserName(_QWORD *BugCheckParameter2)
{
  struct _UNICODE_STRING *result; // rax
  __int64 v3; // rcx
  struct _UNICODE_STRING *v4; // rdi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  const UNICODE_STRING *UserSessionState; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  result = (struct _UNICODE_STRING *)Win32AllocPoolWithQuotaZInitImpl(
                                       (__int64)BugCheckParameter2,
                                       0x210uLL,
                                       0x6E707355u);
  v4 = result;
  if ( result )
  {
    if ( BugCheckParameter2[2] != -1LL )
    {
      BugCheckParameter4 = PtiCurrent(v3);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v4, (ULONG_PTR)BugCheckParameter4);
    }
    v5 = PtiCurrent(v3);
    *BugCheckParameter2 = *((_QWORD *)v5 + 48);
    *((_QWORD *)v5 + 48) = BugCheckParameter2;
    BugCheckParameter2[2] = GreDeleteFastMutex;
    BugCheckParameter2[1] = v4;
    v4[32].Length = 0;
    v4[32].MaximumLength = 512;
    v4[32].Buffer = &v4->Length;
    InitPreviousUserString();
    UserSessionState = (const UNICODE_STRING *)W32GetUserSessionState(v6);
    RtlCopyUnicodeString(v4 + 32, UserSessionState + 4255);
    return v4 + 32;
  }
  return result;
}
