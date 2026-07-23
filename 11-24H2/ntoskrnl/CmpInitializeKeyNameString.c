/*
 * XREFs of CmpInitializeKeyNameString @ 0x140A6FC54
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AA89B0 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     CmSiBugCheck @ 0x140669E44 (CmSiBugCheck.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeKeyNameString(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned __int64 a3)
{
  __int16 v4; // dx
  unsigned __int16 v6; // dx
  __int64 result; // rax

  v4 = *(_WORD *)(BugCheckParameter3 + 72);
  if ( (*(_BYTE *)(BugCheckParameter3 + 2) & 0x20) != 0 )
  {
    v6 = 2 * v4;
    *(_WORD *)a2 = v6;
    if ( v6 > 0x200u )
      CmSiBugCheck(0x31uLL, 0LL, BugCheckParameter3, v6);
    result = CmpCopyCompressedName(a3, 0x200u, BugCheckParameter3 + 76, *(unsigned __int16 *)(BugCheckParameter3 + 72));
    *(_QWORD *)(a2 + 8) = a3;
    *(_WORD *)(a2 + 2) = 512;
  }
  else
  {
    *(_WORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = BugCheckParameter3 + 76;
    result = *(unsigned __int16 *)(BugCheckParameter3 + 52);
    *(_WORD *)(a2 + 2) = result;
  }
  return result;
}
