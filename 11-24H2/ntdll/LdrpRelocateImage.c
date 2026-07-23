/*
 * XREFs of LdrpRelocateImage @ 0x1800E036C
 * Callers:
 *     LdrpCompleteMapModule @ 0x18008FC20 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E04DC (LdrpProtectAndRelocateImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E0698 (LdrpLogDllRelocationEtwEvent.c)
 */

__int64 __fastcall LdrpRelocateImage(PVOID BaseOfImage, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _BYTE *v10; // rax
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  Size = 0;
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 355, (__int64)"LdrpRelocateImage", 3, "DLL name: %wZ\n", a4);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 356, (__int64)"LdrpRelocateImage", 5, "%wZ\n", a4);
  if ( (*(_BYTE *)(a3 + 22) & 1) != 0 || RtlImageDirectoryEntryToData(BaseOfImage, 1u, 5u, &Size) && Size )
  {
    Size = 0;
    v10 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xEu, &Size);
    if ( !v10 || Size < 0x48 || (v10[16] & 1) == 0 )
    {
      LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), BaseOfImage, a2);
      v4 = LdrpProtectAndRelocateImage(BaseOfImage);
    }
  }
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 394, (__int64)"LdrpRelocateImage", 4, "Status: 0x%08lx\n", v4);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 395, (__int64)"LdrpRelocateImage", 6, "%x\n", v4);
  return v4;
}
