/*
 * XREFs of wil::details::lambda_call__lambda_83adabbfbf148de6e1001d25873f4449___::_lambda_call__lambda_83adabbfbf148de6e1001d25873f4449___ @ 0x1800ACF54
 * Callers:
 *     _CCaptureManager::StopWindowCapture_::_1_::dtor$2 @ 0x1800F8381 (_CCaptureManager--StopWindowCapture_--_1_--dtor$2.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_83adabbfbf148de6e1001d25873f4449___::_lambda_call__lambda_83adabbfbf148de6e1001d25873f4449___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
             *(_QWORD *)a1,
             0LL);
  }
  return result;
}
