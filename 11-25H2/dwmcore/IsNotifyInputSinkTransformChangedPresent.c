/*
 * XREFs of IsNotifyInputSinkTransformChangedPresent @ 0x18025D464
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18025DEA0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNotifyInputSinkTransformChangedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180405F94 == 1 )
    return 1;
  if ( dword_180405F94 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_180405F94 = 2 - (v1 != 0);
  return result;
}
