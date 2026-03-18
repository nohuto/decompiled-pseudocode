/*
 * XREFs of ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14007FC00
 * Callers:
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x14007E77C (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x14007EA28 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x14007EAA0 (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     NtUserCallNextHookEx @ 0x14007EB30 (NtUserCallNextHookEx.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x1402915A0 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1402917F8 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z @ 0x140291918 (-NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x140291A10 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x1402DBFD0 (fnHkINLPCWPEXSTRUCT.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1402DC0E0 (fnHkINLPCWPRETEXSTRUCT.c)
 * Callees:
 *     PhkNextValid @ 0x140080FC4 (PhkNextValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxCallNextHookEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 Valid; // rax

  v5 = a1;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  if ( !CurrentThreadNonPaged[91] )
    return 0LL;
  v9 = (__int64 *)W32GetCurrentThreadNonPaged(v8, v7);
  if ( v9 )
    v10 = *v9;
  else
    v10 = 0LL;
  Valid = PhkNextValid(*(_QWORD *)(v10 + 728));
  return xxxCallHook2(Valid, v5, a2, a3, 0);
}
