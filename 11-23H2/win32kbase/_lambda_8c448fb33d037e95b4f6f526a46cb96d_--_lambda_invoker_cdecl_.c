/*
 * XREFs of _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x1C01ECB20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01E7CA0 (ChildProcessRootSynthesizedMouseInput.c)
 */

void __fastcall lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_(void *a1)
{
  ULONG v1; // edx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0289810, (unsigned __int8 *)dword_1C025E3FB, 0LL, 0LL, v1, &v2);
  ChildProcessRootSynthesizedMouseInput();
}
