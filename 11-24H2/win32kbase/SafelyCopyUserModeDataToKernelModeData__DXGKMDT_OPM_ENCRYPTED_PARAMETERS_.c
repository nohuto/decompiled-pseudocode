/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x14008AA50
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x14008A9A0 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(_OWORD *a1, _OWORD *a2)
{
  __int64 v2; // rax

  v2 = 2LL;
  do
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    a1[4] = a2[4];
    a1[5] = a2[5];
    a1[6] = a2[6];
    a1 += 8;
    *(a1 - 1) = a2[7];
    a2 += 8;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
