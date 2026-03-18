/*
 * XREFs of ?DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1400136B8
 * Callers:
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1400136A0 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall DrvCheckRemoteSessionRemoteAdapterAccess(struct _LUID a1)
{
  DWORD LowPart; // ebx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int16 SuiteMask; // ax
  LONG HighPart; // [rsp+34h] [rbp+Ch]
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v2 = *(_QWORD *)(W32GetSessionState() + 88);
  if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v4, v3, v5, v6) )
    return 0LL;
  if ( !*(_QWORD *)(v2 + 2936) )
    return 0LL;
  v8 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( PsGetCurrentProcess() == v8 )
    return 0LL;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
    return 0LL;
  ProductType = 0;
  v9 = *(_QWORD *)(W32GetSessionState() + 88);
  RtlGetNtProductType(&ProductType);
  SuiteMask = RtlGetSuiteMask();
  if ( ProductType != NtProductServer || (SuiteMask & 0x110) != 0x10 )
    return 0LL;
  if ( LowPart == *(_DWORD *)(v9 + 2924) )
    return *(_DWORD *)(v9 + 2928) != HighPart ? 0xC000000D : 0;
  return 3221225485LL;
}
