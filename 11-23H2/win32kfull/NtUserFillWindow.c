/*
 * XREFs of NtUserFillWindow @ 0x1C0012250
 * Callers:
 *     <none>
 * Callees:
 *     xxxFillWindow @ 0x1C0082DBC (xxxFillWindow.c)
 */

__int64 __fastcall NtUserFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h]
  __int128 v25; // [rsp+38h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-20h]

  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a2);
  v13 = 0;
  v14 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v23;
    *((_QWORD *)&v23 + 1) = v8;
    HMLockObject(v8);
    if ( a3 )
    {
      if ( !a1 )
      {
        v18 = 0LL;
        goto LABEL_5;
      }
      v18 = ValidateHwnd(a1);
      if ( v18 )
      {
LABEL_5:
        *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v25;
        *((_QWORD *)&v25 + 1) = v18;
        if ( v18 )
          HMLockObject(v18);
        v13 = xxxFillWindow(v18, v14, a3, a4);
        ThreadUnlock1(v20, v19, v21);
      }
    }
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
