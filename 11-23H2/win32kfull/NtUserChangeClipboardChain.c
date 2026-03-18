/*
 * XREFs of NtUserChangeClipboardChain @ 0x1C01CCA60
 * Callers:
 *     <none>
 * Callees:
 *     xxxChangeClipboardChain @ 0x1C01FD448 (xxxChangeClipboardChain.c)
 */

__int64 __fastcall NtUserChangeClipboardChain(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int128 v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h]

  v21 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v4;
    HMLockObject(v4);
    if ( a2 )
    {
      v13 = ValidateHwnd(a2);
      if ( !v13 )
      {
LABEL_9:
        ThreadUnlock1(v12, v11, v14);
        goto LABEL_10;
      }
    }
    else
    {
      v13 = 0LL;
    }
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v13;
    if ( v13 )
      HMLockObject(v13);
    v9 = xxxChangeClipboardChain(v10, v13);
    ThreadUnlock1(v16, v15, v17);
    goto LABEL_9;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
