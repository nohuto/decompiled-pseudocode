/*
 * XREFs of NtUserReplyMessage @ 0x1C000C2E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C0033720 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C01190C0 (SetWakeBit.c)
 */

__int64 __fastcall NtUserReplyMessage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v10; // eax
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+50h] [rbp-58h] BYREF
  _DWORD v13[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v14; // [rsp+70h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp-30h]
  __int64 v16; // [rsp+80h] [rbp-28h]
  __int128 v17; // [rsp+88h] [rbp-20h]

  EnterCrit(0LL, 0LL);
  v5 = 0LL;
  v6 = gptiCurrent;
  v7 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v7 )
  {
    v2 = *(unsigned int *)(v7 + 84);
    if ( (v2 & 1) == 0 )
    {
      v8 = *(_QWORD *)(v7 + 32);
      if ( v8 )
      {
        *(_QWORD *)(v7 + 72) = a1;
        *(_DWORD *)(v7 + 84) = v2 | 1;
        SetWakeBit(v8, 512LL);
      }
      else if ( (v2 & 0x100) != 0 )
      {
        v12[2] = 0LL;
        v13[1] = 0;
        *(_DWORD *)(v7 + 84) = v2 | 1;
        v17 = 0LL;
        if ( (v2 & 4) == 0 )
        {
          v16 = a1;
          v10 = 33;
          if ( (v2 & 0x400) != 0 )
            v10 = 289;
          v11 = *(_QWORD *)(v7 + 112);
          v13[0] = v10;
          v14 = *(_QWORD *)(v7 + 48);
          v15 = *(_QWORD *)(v7 + 56);
          v12[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v12;
          v12[1] = v11;
          if ( v11 )
            HMLockObject(v11);
          xxxInterSendMsgEx(
            *(_QWORD *)(v7 + 112),
            *(unsigned int *)(v7 + 104),
            0LL,
            0LL,
            0,
            *(_QWORD *)(v7 + 64),
            v13,
            1,
            (*(_WORD *)(v7 + 86) & 1) == 0);
          ThreadUnlock1();
        }
      }
      v5 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v2, v6, v3, v4);
  return v5;
}
