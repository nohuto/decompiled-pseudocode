/*
 * XREFs of NtUserScrollDC @ 0x140095F30
 * Callers:
 *     <none>
 * Callees:
 *     _ScrollDC @ 0x1400960A0 (_ScrollDC.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, ULONG64 a5, HRGN a6, ULONG64 a7)
{
  struct tagRECT *v11; // rdi
  _OWORD *v12; // rsi
  int v13; // ebx
  _BYTE v15[24]; // [rsp+68h] [rbp-90h] BYREF
  struct tagRECT v16; // [rsp+80h] [rbp-78h] BYREF
  struct tagRECT v17; // [rsp+90h] [rbp-68h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-58h] BYREF

  v11 = (struct tagRECT *)a5;
  v12 = (_OWORD *)a7;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v15, 1LL);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct tagRECT *)MmUserProbeAddress;
    v16 = *a4;
    a4 = &v16;
  }
  if ( a5 )
  {
    if ( a5 >= MmUserProbeAddress )
      v11 = (struct tagRECT *)MmUserProbeAddress;
    v17 = *v11;
    v11 = &v17;
  }
  v13 = ScrollDC(a1, a2, a3, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v18 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    if ( a7 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *v12 = v18;
  }
  UserSessionSwitchLeaveCrit();
  return v13;
}
