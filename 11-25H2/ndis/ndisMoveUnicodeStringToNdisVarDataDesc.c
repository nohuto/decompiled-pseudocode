/*
 * XREFs of ndisMoveUnicodeStringToNdisVarDataDesc @ 0x14014428C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 */

char *__fastcall ndisMoveUnicodeStringToNdisVarDataDesc(__int64 a1, __int64 a2, void **a3, __int64 a4)
{
  char *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rax
  const void *v8; // rdx
  char *result; // rax

  v5 = (char *)*a3;
  v6 = *(unsigned __int16 *)(a1 + 2);
  *(_WORD *)a4 = *(_WORD *)a1;
  *(_WORD *)(a4 + 2) = v6;
  v7 = &v5[-a2];
  v8 = *(const void **)(a1 + 8);
  *(_QWORD *)(a4 + 8) = v7;
  memmove(v5, v8, (unsigned int)v6);
  result = &v5[v6];
  *a3 = &v5[v6];
  return result;
}
