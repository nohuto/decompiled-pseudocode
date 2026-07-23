/*
 * XREFs of MiCaptureImageExceptionValues @ 0x140A8FDB8
 * Callers:
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F89DC (MiGetExtendedLoaderBitmap.c)
 *     RtlMarkExceptionHandlingPages @ 0x140A152BC (RtlMarkExceptionHandlingPages.c)
 */

void __fastcall MiCaptureImageExceptionValues(__int64 a1)
{
  void *v1; // rbp
  PIMAGE_NT_HEADERS v3; // r14
  _RTL_BITMAP *ExtendedLoaderBitmap; // rax
  unsigned int v5; // esi
  _RTL_BITMAP *v6; // rdi
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  unsigned int Size; // r9d
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h]

  v1 = *(void **)(a1 + 48);
  v3 = RtlImageNtHeader(v1);
  ExtendedLoaderBitmap = (_RTL_BITMAP *)MiGetExtendedLoaderBitmap(a1);
  v5 = *(_DWORD *)(a1 + 64) >> 12;
  v6 = ExtendedLoaderBitmap;
  ExtendedLoaderBitmap->SizeOfBitMap = v5;
  ExtendedLoaderBitmap->Buffer = &ExtendedLoaderBitmap[1].SizeOfBitMap;
  RtlClearAllBits(ExtendedLoaderBitmap);
  if ( v3->OptionalHeader.NumberOfRvaAndSizes > 3 )
  {
    v7 = *(_DWORD *)(a1 + 152);
    v8 = (unsigned __int64)v1 + v3->OptionalHeader.DataDirectory[3].VirtualAddress;
    *(_QWORD *)(a1 + 16) = v8;
    Size = v3->OptionalHeader.DataDirectory[3].Size;
    *(_DWORD *)(a1 + 24) = Size;
    if ( (int)RtlMarkExceptionHandlingPages((unsigned __int64)v1, v7, v8, Size, v6) < 0 )
    {
      LODWORD(BitMapHeader) = v5;
      DbgPrintEx(
        0x66u,
        0,
        "Image %wZ has unrecognized unwind information causing a charge of %u pages\n",
        a1 + 88,
        BitMapHeader);
      RtlSetAllBits(v6);
    }
  }
}
