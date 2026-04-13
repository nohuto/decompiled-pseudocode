/*
 * XREFs of TelpIsDeviceAzureADJoined @ 0x1800035E4
 * Callers:
 *     TelIsOsInProcessorMode @ 0x1800044C0 (TelIsOsInProcessorMode.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelpIsDeviceAzureADJoined(_BYTE *a1)
{
  int AadJoinInformation; // eax
  __int64 v3; // r8
  unsigned int v4; // ebx
  _DWORD *v5; // rcx
  _DWORD *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  AadJoinInformation = NetGetAadJoinInformation(0LL, &v9);
  v4 = AadJoinInformation;
  if ( AadJoinInformation == 1 || AadJoinInformation == -2147024769 )
  {
    v7 = v9;
    *a1 = 0;
    if ( v7 )
      NetFreeAadJoinInformation();
    return 0LL;
  }
  else
  {
    v5 = v9;
    if ( AadJoinInformation >= 0 && v9 && *v9 == 1 )
    {
      *a1 = 1;
    }
    else
    {
      *a1 = 0;
      if ( AadJoinInformation < 0 )
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0xC9, v3, (const char *)(unsigned int)AadJoinInformation);
        v5 = v9;
      }
    }
    if ( v5 )
      NetFreeAadJoinInformation();
    return v4;
  }
}
