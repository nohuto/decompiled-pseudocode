/*
 * XREFs of NtUserCalcMenuBar @ 0x1C00E4520
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcMenuBar @ 0x1C00E4660 (xxxCalcMenuBar.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int128 *v15; // rdx
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v21; // [rsp+38h] [rbp-30h] BYREF
  __int128 v22; // [rsp+48h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-10h]

  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  v11 = ValidateHwnd(a1);
  v14 = 0;
  if ( v11 )
  {
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = v11;
    HMLockObject(v11);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v15 = (__int128 *)a5;
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v15 = (__int128 *)MmUserProbeAddress;
        v16 = *v15;
      }
      else
      {
        v16 = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 88LL);
      }
      v21 = v16;
      v14 = xxxCalcMenuBar(v11, a2, a3, a4, (__int64)&v21);
    }
    ThreadUnlock1(v18, v17, v19);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return v14;
}
