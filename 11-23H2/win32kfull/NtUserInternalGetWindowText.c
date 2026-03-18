/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C0070750
 * Callers:
 *     <none>
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0070880 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00708E4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C007098C (TextCopy.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned int v12; // ebx
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v13; // r14
  struct _LARGE_UNICODE_STRING *StrName; // rax
  struct _LARGE_UNICODE_STRING *v15; // rax
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v3 = (int)a3;
  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  v12 = 0;
  if ( v6 )
  {
    v13 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v6 + 184);
    if ( *(_QWORD *)(v6 + 184) )
    {
      v17 = 0LL;
      StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                  (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v6 + 184),
                  (struct _LARGE_UNICODE_STRING *)&v17);
      DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(v11 + 24), StrName);
    }
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 184LL) )
      {
        v17 = 0LL;
        v15 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v13, (struct _LARGE_UNICODE_STRING *)&v17);
        v12 = TextCopy(v15, a2, (unsigned int)v3);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v12;
}
