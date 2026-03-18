/*
 * XREFs of NtUserDragDetect @ 0x1C01CDFA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxIsDragging @ 0x1C022F688 (xxxIsDragging.c)
 */

__int64 __fastcall NtUserDragDetect(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int IsDragging; // edi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  IsDragging = 0;
  v10 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v4;
    HMLockObject(v4);
    IsDragging = xxxIsDragging(v10, a2);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return IsDragging;
}
