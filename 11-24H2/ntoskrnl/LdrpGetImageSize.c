/*
 * XREFs of LdrpGetImageSize @ 0x1402BA4A8
 * Callers:
 *     LdrpAccessResourceData @ 0x1409BA4DC (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409BA5C0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x1402BA56C (LdrpKrnGetDataTableEntry.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 DataTableEntry; // rax
  __int16 v9; // cx

  v2 = 0;
  v4 = 0LL;
  v5 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1 & 0xFFFFFFFFFFFFFFFCuLL) == 0
    || *(_WORD *)v5 != 23117
    || (v6 = v5 + *(unsigned int *)(v5 + 60), v6 < v5)
    || v5 <= 0x7FFFFFFEFFFFLL && (v6 + 263 < v6 || v6 + 263 > 0x7FFFFFFEFFFFLL)
    || *(_DWORD *)v6 != 17744
    || !v6 )
  {
LABEL_11:
    v2 = -1073741701;
    goto LABEL_10;
  }
  if ( (a1 & 1) == 0 )
  {
    v9 = *(_WORD *)(v6 + 24);
    if ( v9 == 267 || v9 == 523 )
    {
      v4 = *(unsigned int *)(v6 + 80);
      goto LABEL_10;
    }
    goto LABEL_11;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  if ( DataTableEntry )
    v4 = *(unsigned int *)(DataTableEntry + 64);
LABEL_10:
  *a2 = v4;
  return v2;
}
