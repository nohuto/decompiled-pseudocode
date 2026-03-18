/*
 * XREFs of ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01C521C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsTouchpadPointerInputMessage @ 0x1C015065E (IsTouchpadPointerInputMessage.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0152A1C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0152A4E (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     GetPTPShellListener @ 0x1C0155616 (GetPTPShellListener.c)
 */

__int64 __fastcall IsPTPAllowedOnThread(struct tagTHREADINFO *a1, int a2, __int16 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v6 = *((_WORD *)a1 + 637) & 1;
  if ( !v6 && IsPointerMessageTouchpad(a1, 0LL, a3) && IsTouchpadPointerInputMessage(a2) )
  {
    v6 = 0;
    if ( FindThreadPointerData((struct _LIST_ENTRY *)((char *)a1 + 1128), a3) )
    {
      v8 = GetPTPShellListener() ? *(_QWORD *)GetPTPShellListener() : 0LL;
      if ( *(_QWORD *)(v7 + 40) == v8 )
        return 1;
    }
  }
  return v6;
}
