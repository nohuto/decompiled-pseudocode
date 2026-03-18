/*
 * XREFs of ?vPaintPathEnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1401B8CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall vPaintPathEnumRow(unsigned int a1, struct _ROW *a2, unsigned int a3, _DWORD *a4)
{
  (*((void (__fastcall **)(struct _ROW *, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD))a4 + 1))(
    a2,
    a3,
    a1,
    *((_QWORD *)a4 + 4),
    a4[6],
    a4[4],
    a4[5]);
}
