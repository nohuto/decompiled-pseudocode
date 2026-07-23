/*
 * XREFs of WmipDoDisableRequest @ 0x1409AF864
 * Callers:
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B0E04 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x1409B20EC (WmipEnableCollectionForNewGuid.c)
 *     WmipSendDisableRequest @ 0x140A2CD30 (WmipSendDisableRequest.c)
 * Callees:
 *     WmipSendEnableDisableRequest @ 0x1409AF934 (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140AB7F64 (WmipReleaseCollectionEnabled.c)
 */

__int64 __fastcall WmipDoDisableRequest(_DWORD *a1, char a2, __int64 a3)
{
  _DWORD *v4; // rbx
  char v5; // bp
  int *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r15d
  int v10; // eax
  int v12; // [rsp+60h] [rbp+18h]

  v12 = a3;
  v4 = a1;
  v5 = a2 != 0 ? 5 : 7;
  do
  {
    LOBYTE(a3) = a2;
    LOBYTE(a1) = v5;
    v6 = v4 + 22;
    v9 = WmipSendEnableDisableRequest(a1, v4, a3);
    if ( a2 )
      v10 = *v6;
    else
      v10 = v4[23];
    if ( !v10 )
      break;
    LOBYTE(v8) = a2;
    LOBYTE(v7) = a2 != 0 ? 4 : 6;
    v9 = WmipSendEnableDisableRequest(v7, v4, v8);
    if ( !a2 )
      v6 = v4 + 23;
  }
  while ( !*v6 );
  v4[4] &= ~v12;
  if ( !a2 )
    WmipReleaseCollectionEnabled(v4);
  return v9;
}
