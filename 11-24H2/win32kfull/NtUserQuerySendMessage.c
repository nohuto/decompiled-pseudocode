/*
 * XREFs of NtUserQuerySendMessage @ 0x14029A460
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledDeviceUsageNoInline @ 0x140292528 (Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledDeviceUsageNoInline.c)
 *     _QuerySendMessage @ 0x1402B182C (_QuerySendMessage.c)
 */

__int64 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  ULONG64 v3; // rcx
  int v4; // ebx
  __int128 v5; // [rsp+28h] [rbp-40h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int128 v7; // [rsp+48h] [rbp-20h]
  ULONG64 v8; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned int)Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledDeviceUsageNoInline() )
    return -1073741822LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  v3 = v8;
  if ( *(_QWORD *)(v8 + 552) )
  {
    v4 = QuerySendMessage(v8, &v5);
    if ( v4 && a1 )
    {
      *((_QWORD *)&v6 + 1) &= -(__int64)(*((_QWORD *)&v6 + 1) < (unsigned __int64)MmSystemRangeStart);
      HIDWORD(v5) = 0;
      HIDWORD(v7) = 0;
      v3 = MmUserProbeAddress;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v5;
      a1[1] = v6;
      a1[2] = v7;
    }
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
