/*
 * XREFs of MiDereferenceDataSubsections @ 0x14068CD90
 * Callers:
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402598C4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 */

void __fastcall MiDereferenceDataSubsections(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  __int64 *v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rbp
  __int64 *SubsectionNode; // rax
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v8 = (__int64 *)MiOffsetToProtos(a1, *a2, &v12);
  v10 = a3 + v12;
  if ( a4 )
  {
    SubsectionNode = (__int64 *)MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0LL, v9);
    MiDecrementLargeSubsections(v8, SubsectionNode);
  }
  MiRemoveViewsFromSectionWithPfn(v8, v10, 136);
}
