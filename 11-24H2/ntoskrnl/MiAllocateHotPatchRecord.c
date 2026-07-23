/*
 * XREFs of MiAllocateHotPatchRecord @ 0x1407F1130
 * Callers:
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiAllocateHotPatchRecord(int a1, int a2, int a3, const void **a4, int a5)
{
  __int64 Pool; // rax
  __int64 v10; // rbx

  Pool = MiAllocatePool(0x100uLL, *(unsigned __int16 *)a4 + 56LL, 1883794765);
  v10 = Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 36) = a5;
    *(_DWORD *)(Pool + 24) = a1;
    *(_DWORD *)(Pool + 28) = a2;
    *(_DWORD *)(Pool + 32) = a3;
    *(_WORD *)(Pool + 40) = *(_WORD *)a4;
    *(_WORD *)(Pool + 42) = *(_WORD *)a4;
    *(_QWORD *)(Pool + 48) = Pool + 56;
    memmove((void *)(Pool + 56), a4[1], *(unsigned __int16 *)a4);
  }
  return v10;
}
