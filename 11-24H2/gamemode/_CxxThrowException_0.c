/*
 * XREFs of _CxxThrowException_0 @ 0x180002E20
 * Callers:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEA_W_K@Z @ 0x180005870 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEA_W_K@Z.c)
 *     ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEA_W_KPEA_N@Z @ 0x180005AD0 (-ResultFromCaughtExceptionInternal@details@wil@@YA-AUResultStatus@12@PEA_W_KPEA_N@Z.c)
 *     ?Rethrow@details@wil@@YAXXZ @ 0x180005BD0 (-Rethrow@details@wil@@YAXXZ.c)
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800066C0 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
