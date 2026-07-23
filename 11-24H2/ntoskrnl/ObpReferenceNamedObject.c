/*
 * XREFs of ObpReferenceNamedObject @ 0x14044CF28
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall ObpReferenceNamedObject(__int64 a1)
{
  __int64 result; // rax

  ObfReferenceObjectWithTag((PVOID)(a1 + 48), 0x746C6644u);
  result = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
  _InterlockedIncrement((volatile signed __int32 *)(a1 - result + 24));
  return result;
}
