/*
 * XREFs of MiCaptureImageExceptionValues @ 0x140A8EB18
 * Callers:
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F8A74 (MiGetExtendedLoaderBitmap.c)
 *     RtlMarkExceptionHandlingPages @ 0x140A1548C (RtlMarkExceptionHandlingPages.c)
 */

void __fastcall MiCaptureImageExceptionValues(__int64 a1)
{
  unsigned __int64 v1; // rbp
  _DWORD *v3; // r14
  RTL_BITMAP *ExtendedLoaderBitmap; // rax
  unsigned int v5; // esi
  RTL_BITMAP *v6; // rdi
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  unsigned int v9; // r9d
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 48);
  v3 = (_DWORD *)RtlImageNtHeader(v1);
  ExtendedLoaderBitmap = (RTL_BITMAP *)MiGetExtendedLoaderBitmap(a1);
  v5 = *(_DWORD *)(a1 + 64) >> 12;
  v6 = ExtendedLoaderBitmap;
  ExtendedLoaderBitmap->SizeOfBitMap = v5;
  ExtendedLoaderBitmap->Buffer = &ExtendedLoaderBitmap[1].SizeOfBitMap;
  RtlClearAllBits(ExtendedLoaderBitmap);
  if ( v3[33] > 3u )
  {
    v7 = *(_DWORD *)(a1 + 152);
    v8 = v1 + (unsigned int)v3[40];
    *(_QWORD *)(a1 + 16) = v8;
    v9 = v3[41];
    *(_DWORD *)(a1 + 24) = v9;
    if ( (int)RtlMarkExceptionHandlingPages(v1, v7, v8, v9, v6) < 0 )
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
