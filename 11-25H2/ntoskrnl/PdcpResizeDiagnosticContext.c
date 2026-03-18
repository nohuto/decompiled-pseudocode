/*
 * XREFs of PdcpResizeDiagnosticContext @ 0x1405FB280
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x14077E860 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientActivate @ 0x14096C430 (Pdcv2ActivationClientActivate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PdcpResizeDiagnosticContext(char *a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  _QWORD *v3; // r9
  signed __int64 v4; // r10
  __int64 result; // rax

  v2 = 0;
  v3 = a2 + 4;
  v4 = a1 - (char *)a2;
  do
  {
    result = v2;
    if ( (unsigned __int64)v2 >= *(_QWORD *)a1 )
      break;
    ++v2;
    *v3 = *(_QWORD *)((char *)v3 + v4);
    result = *(_QWORD *)((char *)v3 + v4 - 8);
    *(v3 - 1) = result;
    v3 += 2;
  }
  while ( v2 < 0xA );
  *a2 = v2;
  return result;
}
