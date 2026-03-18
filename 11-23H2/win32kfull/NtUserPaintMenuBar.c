/*
 * XREFs of NtUserPaintMenuBar @ 0x1C01D7770
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxPaintMenuBar @ 0x1C0235DDC (xxxPaintMenuBar.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v22; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-18h]

  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v15 = 0;
  v16 = v10;
  if ( v10 )
  {
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = v10;
    HMLockObject(v10);
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v17 = 1004;
LABEL_10:
        UserSetLastError(v17);
        goto LABEL_11;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v15 = xxxPaintMenuBar(v16, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
LABEL_11:
        ThreadUnlock1(v19, v18, v20);
        goto LABEL_12;
      }
    }
    v17 = 87;
    goto LABEL_10;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
