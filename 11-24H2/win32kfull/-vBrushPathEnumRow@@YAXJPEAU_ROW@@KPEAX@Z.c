/*
 * XREFs of ?vBrushPathEnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x140319A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall vBrushPathEnumRow(unsigned int a1, struct _ROW *a2, __int64 a3, _QWORD *a4)
{
  void (__fastcall *v4)(_QWORD *, _QWORD); // rax

  v4 = (void (__fastcall *)(_QWORD *, _QWORD))a4[1];
  a4[5] = a2;
  v4(a4 + 2, a1);
}
