/*
 * XREFs of MiCreatePageFileSpaceBitmaps @ 0x1407EE4FC
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x14067AF10 (MiAttemptChangePagingFileMaximum.c)
 *     MiCreatePagefile @ 0x1407EE570 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

__int64 __fastcall MiCreatePageFileSpaceBitmaps(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 8 * ((a1 >> 6) + ((a1 & 0x3F) != 0));
  result = MiAllocatePool(0x40uLL, 16 * ((a1 >> 6) + ((a1 & 0x3F) != 0)) + 40, 1649438029);
  if ( result )
  {
    *(_DWORD *)result = 1;
    *(_QWORD *)(result + 16) = result + 40;
    *(_DWORD *)(result + 8) = a1;
    *(_DWORD *)(result + 24) = a1;
    *(_QWORD *)(result + 32) = result + 40 + v2;
  }
  return result;
}
