/*
 * XREFs of ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1402ADEBC
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1401FCC98 (_SetMagnificationInputTransform.c)
 * Callees:
 *     <none>
 */

void __fastcall ComputeMagnificationFactor(struct _MAGNIFICATION_INPUT_TRANSFORM *a1)
{
  __int64 v1; // r11
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r8

  v1 = *((_QWORD *)a1 + 3);
  v2 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  v4 = *(_QWORD *)a1;
  *((_DWORD *)a1 + 10) = (((int)v1 - (int)v2) << 8) / (int)(v3 - *(_QWORD *)a1);
  *((_DWORD *)a1 + 11) = ((HIDWORD(v1) - HIDWORD(v2)) << 8) / (HIDWORD(v3) - HIDWORD(v4));
}
