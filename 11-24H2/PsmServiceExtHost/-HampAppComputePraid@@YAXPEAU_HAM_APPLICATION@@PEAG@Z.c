/*
 * XREFs of ?HampAppComputePraid@@YAXPEAU_HAM_APPLICATION@@PEAG@Z @ 0x18006371C
 * Callers:
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x1800838F4 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampAppComputePraid(struct _HAM_APPLICATION *a1, unsigned __int16 *a2)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 130;
  PsmGetApplicationNameFromKey((char *)a1 + 96, a2, &v2);
}
