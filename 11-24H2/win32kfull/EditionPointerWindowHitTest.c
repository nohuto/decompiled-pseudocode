/*
 * XREFs of EditionPointerWindowHitTest @ 0x1401B3FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1401B4188 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_OWORD *__fastcall EditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  struct tagTHREADINFO *v30; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-69h] BYREF
  __int64 v33; // [rsp+70h] [rbp-61h]
  _OWORD v34[5]; // [rsp+78h] [rbp-59h] BYREF
  __int128 v35; // [rsp+C8h] [rbp-9h]
  __int128 v36; // [rsp+D8h] [rbp+7h]

  v33 = 0LL;
  BugCheckParameter3 = -1LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a3 + 80);
  }
  else
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18704) + 496LL) + 8LL) + 24LL);
    Win32HM_LockIntoThread<1>(a2, v15, (__int64 *)&BugCheckParameter3);
  }
  v18 = xxxPointerWindowHitTest(a2, v15, a5, a6, a7, a8, a9, a4 != 0 ? 5 : 1, a10, a11, a12);
  if ( !a4 )
  {
    v19 = PtiCurrent(v17, v16);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v19, &BugCheckParameter3);
    v33 = 0LL;
    BugCheckParameter3 = -1LL;
  }
  LOBYTE(v16) = 1;
  v20 = HMValidateHandleNoSecure(v18, v16);
  memset_0(v34, 0, 0x70uLL);
  if ( v20 )
  {
    LODWORD(v34[0]) = 4;
    *(_QWORD *)&v35 = v20;
    HIDWORD(v35) = 2;
  }
  v23 = BugCheckParameter3 == -1LL;
  v24 = v34[1];
  *a1 = v34[0];
  v25 = v34[2];
  a1[1] = v24;
  v26 = v34[3];
  a1[2] = v25;
  v27 = v34[4];
  a1[3] = v26;
  v28 = v35;
  a1[4] = v27;
  v29 = v36;
  a1[5] = v28;
  a1[6] = v29;
  if ( !v23 )
  {
    v30 = PtiCurrent(v22, v21);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v30, &BugCheckParameter3);
  }
  return a1;
}
