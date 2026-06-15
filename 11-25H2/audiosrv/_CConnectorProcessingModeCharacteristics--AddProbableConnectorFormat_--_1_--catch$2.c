/*
 * XREFs of _CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat_::_1_::catch$2 @ 0x180169652
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x107,
                           (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                           a4);
  return 0LL;
}
