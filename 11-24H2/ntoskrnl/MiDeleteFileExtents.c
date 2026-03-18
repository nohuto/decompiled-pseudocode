/*
 * XREFs of MiDeleteFileExtents @ 0x140A204B8
 * Callers:
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 * Callees:
 *     MiDeleteFileExtentList @ 0x1407F02DC (MiDeleteFileExtentList.c)
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
