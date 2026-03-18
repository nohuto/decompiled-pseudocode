/*
 * XREFs of CheckDesktopPolicyChange @ 0x1401A8240
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicyChange(PCUNICODE_STRING Source)
{
  unsigned int v1; // esi
  __int64 UserSessionState; // rdi
  __int64 v4; // rcx
  void *v5; // r14
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 KeyInformation; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h]

  v1 = 0;
  ResultLength = 0;
  v19 = 0LL;
  KeyInformation = 0LL;
  v16 = 4;
  UserSessionState = W32GetUserSessionState(Source);
  v5 = OpenCacheKeyEx(Source, 4LL, 131097LL, &v16);
  if ( v5 )
  {
    v6 = ZwQueryKey(v5, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(v5);
    if ( v6 < 0 )
      return 0LL;
    v9 = W32GetUserSessionState(v7);
    *(_DWORD *)(v9 + 62824) |= 4u;
  }
  else
  {
    v10 = W32GetUserSessionState(v4);
    *(_DWORD *)(v10 + 62824) &= ~4u;
  }
  if ( *(_QWORD *)(UserSessionState + 67552) != KeyInformation )
  {
    *(_QWORD *)(UserSessionState + 67552) = KeyInformation;
    v1 = 1;
  }
  KeyInformation = 0LL;
  v16 = 2;
  v12 = OpenCacheKeyEx(Source, 4LL, 131097LL, &v16);
  if ( v12 )
  {
    ZwQueryKey(v12, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(v12);
    v14 = W32GetUserSessionState(v13);
    *(_DWORD *)(v14 + 62824) |= 2u;
  }
  else
  {
    v15 = W32GetUserSessionState(v11);
    *(_DWORD *)(v15 + 62824) &= ~2u;
  }
  if ( *(_QWORD *)(UserSessionState + 67560) != KeyInformation )
  {
    *(_QWORD *)(UserSessionState + 67560) = KeyInformation;
    return 1;
  }
  return v1;
}
