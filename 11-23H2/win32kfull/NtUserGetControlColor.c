/*
 * XREFs of NtUserGetControlColor @ 0x1C01D0680
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlColor @ 0x1C0007990 (xxxGetControlColor.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ControlColor; // rbx
  struct tagWND *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // r8
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
  v8 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v14 = (struct tagWND *)v8;
  if ( v8 )
  {
    *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v23;
    *((_QWORD *)&v23 + 1) = v8;
    HMLockObject(v8);
    v17 = (__int64 *)ValidateHwnd(a2);
    if ( v17 && a3 && a4 - 306 <= 6 )
    {
      *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v25;
      *((_QWORD *)&v25 + 1) = v17;
      HMLockObject(v17);
      ControlColor = xxxGetControlColor(v14, v17, a3, a4);
      ThreadUnlock1(v20, v19, v21);
    }
    ThreadUnlock1(v16, v15, v18);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return ControlColor;
}
