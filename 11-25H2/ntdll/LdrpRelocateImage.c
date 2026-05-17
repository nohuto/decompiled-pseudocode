/*
 * XREFs of LdrpRelocateImage @ 0x1800E3E8C
 * Callers:
 *     LdrpCompleteMapModule @ 0x18006DBC0 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E3FFC (LdrpProtectAndRelocateImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800E41B8 (LdrpLogDllRelocationEtwEvent.c)
 */

__int64 __fastcall LdrpRelocateImage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v10; // rax
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0;
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrmap.c", 362, (__int64)"LdrpRelocateImage", 3, "DLL name: %wZ\n", a4);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrmap.c", 363, (__int64)"LdrpRelocateImage", 5, "%wZ\n", a4);
  if ( (*(_BYTE *)(a3 + 22) & 1) != 0 || RtlImageDirectoryEntryToData(a1, 1, 5u, &v11) && v11 )
  {
    v11 = 0;
    v10 = RtlImageDirectoryEntryToData(a1, 1, 0xEu, &v11);
    if ( !v10 || v11 < 0x48 || (*(_BYTE *)(v10 + 16) & 1) == 0 )
    {
      LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), a1, a2);
      v4 = LdrpProtectAndRelocateImage(a1);
    }
  }
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrmap.c", 401, (__int64)"LdrpRelocateImage", 4, "Status: 0x%08lx\n", v4);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrmap.c", 402, (__int64)"LdrpRelocateImage", 6, "%x\n", v4);
  return v4;
}
