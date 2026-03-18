/*
 * XREFs of NtUserQuerySendMessage @ 0x1C01D83C0
 * Callers:
 *     <none>
 * Callees:
 *     _QuerySendMessage @ 0x1C01FB53C (_QuerySendMessage.c)
 */

__int64 __fastcall NtUserQuerySendMessage(_OWORD *a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int128 v11; // [rsp+28h] [rbp-40h] BYREF
  __int128 v12; // [rsp+38h] [rbp-30h]
  __int128 v13; // [rsp+48h] [rbp-20h]

  v3 = a1;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v4 = EnterSharedCrit(a1, a2, a3);
  if ( *(_QWORD *)(v4 + 512) )
  {
    v9 = QuerySendMessage(v4, &v11);
    if ( v9 && v3 )
    {
      v5 = *((_QWORD *)&v12 + 1);
      *((_QWORD *)&v12 + 1) &= -(__int64)(*((_QWORD *)&v12 + 1) < (unsigned __int64)MmSystemRangeStart);
      HIDWORD(v11) = 0;
      HIDWORD(v13) = 0;
      v6 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_OWORD *)MmUserProbeAddress;
      *v3 = v11;
      v3[1] = v12;
      v3[2] = v13;
    }
  }
  else
  {
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
