/*
 * XREFs of MiDeleteFileExtents @ 0x140A15960
 * Callers:
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 * Callees:
 *     MiDeleteFileExtentList @ 0x1407E043C (MiDeleteFileExtentList.c)
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
