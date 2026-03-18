/*
 * XREFs of SdbGetKShimTagRef @ 0x1407F23C0
 * Callers:
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbTagIDToTagRef @ 0x1407F610C (SdbTagIDToTagRef.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14082B0F4 (SdbFindFirstStringIndexedTag.c)
 */

__int64 __fastcall SdbGetKShimTagRef(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  unsigned int FirstStringIndexedTag; // edi
  int v7; // eax
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v11 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( !v2
    || (v5 = SdbFindFirstStringIndexedTag(v2, 28709LL, 24577LL, a2, v9),
        FirstStringIndexedTag = v5,
        *(_QWORD *)(a1 + 16) == v2)
    && (unsigned int)SdbFindFirstTag(v2, v5, 4120LL)
    || !FirstStringIndexedTag )
  {
    v2 = *(_QWORD *)(a1 + 8);
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v2, 28709LL, 24577LL, a2, v9);
  }
  v7 = SdbTagIDToTagRef(a1, v2, FirstStringIndexedTag, &v11);
  return v11 & (unsigned int)-(v7 != 0);
}
