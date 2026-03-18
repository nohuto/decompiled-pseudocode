/*
 * XREFs of xxxClientEnableMMCSS @ 0x140217CA0
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     _lambda_4dbab2e2125e5f69b03e741466c41000_::_lambda_invoker_cdecl_ @ 0x140285EE0 (_lambda_4dbab2e2125e5f69b03e741466c41000_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientEnableMMCSS(int a1)
{
  int v1; // ebx
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  Src = 0LL;
  v3 = 0;
  v4 = a1;
  EtwTraceBeginCallback(57LL);
  v1 = KeUserModeCallback(57LL, &v4, 4LL, &Src, &v3);
  EtwTraceEndCallback(57LL);
  if ( v1 < 0 || v3 != 24 )
    return 0LL;
  v6 = 0LL;
  RtlCopyFromUser(&v6, Src, 8uLL);
  return v6;
}
