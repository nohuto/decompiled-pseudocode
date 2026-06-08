/*
 * XREFs of sub_1400060CC @ 0x1400060CC
 * Callers:
 *     sub_14002A970 @ 0x14002A970 (sub_14002A970.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400060CC(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 88);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 4) & 0x1000) != 0;
  return v2;
}
