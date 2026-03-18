/*
 * XREFs of ?UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAUVIDMM_PHYSICAL_ALLOC@@_K@Z @ 0x14009DBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::UpdatePendingResourceReserveCB(struct VIDMM_PHYSICAL_ALLOC *a1, __int64 a2)
{
  __int64 v2; // rax

  *((_QWORD *)a1 + 11) = *((_QWORD *)a1 + 10);
  v2 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 13) = v2;
  *((_QWORD *)a1 + 12) = a2;
  *(_BYTE *)(v2 + 512) = 1;
}
