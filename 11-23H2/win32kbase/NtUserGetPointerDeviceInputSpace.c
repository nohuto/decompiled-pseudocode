/*
 * XREFs of NtUserGetPointerDeviceInputSpace @ 0x1C0144CE0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C005885C (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ResolveMouseOrPointerDevice @ 0x1C00BABE0 (ResolveMouseOrPointerDevice.c)
 */

__int64 __fastcall NtUserGetPointerDeviceInputSpace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LUID *v4; // rsi
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  struct _LUID InputSpaceId; // rax
  int v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _LUID *)a2;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v6 = 0;
  v14 = 0LL;
  v13 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v14, &v13) )
  {
    if ( v13 )
      InputSpaceId = InputConfig::Mouse::GetInputSpaceId();
    else
      InputSpaceId = *(struct _LUID *)(v14 + 228);
    v10 = MmUserProbeAddress;
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _LUID *)MmUserProbeAddress;
    *v4 = InputSpaceId;
    v6 = 1;
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v7, v8);
  return v6;
}
