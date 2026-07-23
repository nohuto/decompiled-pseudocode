/*
 * XREFs of RtlNlsDeleteState @ 0x14077E6D0
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140772B48 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 */

void __fastcall RtlNlsDeleteState(__int64 a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx

  *(_WORD *)(a1 + 1032) = -535;
  *(_WORD *)(a1 + 1096) = -535;
  v2 = *(_QWORD *)(a1 + 1160);
  if ( v2 == *(_QWORD *)(a1 + 1168) )
    *(_QWORD *)(a1 + 1168) = 0LL;
  if ( v2 )
  {
    MiRemoveFromSystemSpace(v2, 1);
    *(_QWORD *)(a1 + 1160) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 1168);
  if ( v3 )
  {
    MiRemoveFromSystemSpace(v3, 1);
    *(_QWORD *)(a1 + 1168) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 1192);
  if ( v4 )
  {
    MiRemoveFromSystemSpace(v4, 1);
    *(_QWORD *)(a1 + 1192) = 0LL;
  }
}
