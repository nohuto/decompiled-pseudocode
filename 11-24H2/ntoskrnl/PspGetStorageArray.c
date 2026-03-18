/*
 * XREFs of PspGetStorageArray @ 0x1409E23B8
 * Callers:
 *     PspStorageReplaceObject @ 0x14077C720 (PspStorageReplaceObject.c)
 *     PspStorageMakeSlotReadOnly @ 0x1409E21D0 (PspStorageMakeSlotReadOnly.c)
 *     PspStorageInsertObject @ 0x1409E22A0 (PspStorageInsertObject.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x14041F930 (PspGetStorageArrayIfPossible.c)
 *     PspLazyInitializeStorageExpansion @ 0x1409E2664 (PspLazyInitializeStorageExpansion.c)
 */

__int64 __fastcall PspGetStorageArray(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int *Buffer; // rcx

  result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( *(_QWORD *)(v9 + 512) )
      return result;
    result = PspLazyInitializeStorageExpansion();
    if ( (int)result < 0 )
      return result;
    result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  }
  if ( (int)result >= 0 )
  {
    Buffer = PspStorageBitmap.Buffer;
    if ( a2 >= 0x20 )
      Buffer = PspStorageExpansionBitmap.Buffer;
    if ( !_bittest64((const signed __int64 *)Buffer, *a3) )
      __fastfail(5u);
    return 0LL;
  }
  return result;
}
