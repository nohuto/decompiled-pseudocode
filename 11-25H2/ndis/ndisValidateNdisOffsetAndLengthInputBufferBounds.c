/*
 * XREFs of ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x140173620
 * Callers:
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x140140F90 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateNdisOffsetAndLengthInputBufferBounds(__int64 a1, unsigned int *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned int *v4; // r11
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2 + 2;
  v5 = *(_QWORD *)(a1 + 184);
  *a3 = 0LL;
  v7 = *(unsigned int *)(v5 + 16);
  if ( (unsigned __int64)a2 < v3 )
    return 0;
  v8 = v7 + v3;
  if ( (unsigned __int64)v4 > v7 + v3 )
    return 0;
  v9 = v3 + *a2;
  v10 = v9 + a2[1];
  if ( v10 < v9 || v8 < v3 || v9 < v3 || v10 > v8 || v9 <= (unsigned __int64)a2 && v10 > (unsigned __int64)a2 )
    return 0;
  if ( v9 <= (unsigned __int64)v4 && v10 > (unsigned __int64)v4 )
    return 0;
  *a3 = v9;
  return 1;
}
