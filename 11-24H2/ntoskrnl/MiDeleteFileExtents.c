/*
 * XREFs of MiDeleteFileExtents @ 0x140A155B8
 * Callers:
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 * Callees:
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 */

void __fastcall MiDeleteFileExtents(__int64 a1)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // rcx

  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 && (*(_BYTE *)(a1 + 62) & 0xC) == 8 )
  {
    v1 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    v2 = *(_DWORD **)(v1 + 48);
    if ( v2 )
    {
      MiDeleteFileExtentList(v2);
      *(_QWORD *)(v1 + 48) = 0LL;
    }
  }
}
