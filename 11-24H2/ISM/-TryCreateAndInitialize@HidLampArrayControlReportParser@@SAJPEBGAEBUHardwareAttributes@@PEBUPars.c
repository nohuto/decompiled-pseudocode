/*
 * XREFs of ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EEC34
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800EA834 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EEB74 (-IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampArrayControlReportParser::TryCreateAndInitialize(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct ParsedHidReportDescriptor *a3,
        struct HidLampArrayControlReportParser **a4)
{
  char *v8; // rax
  struct HidLampArrayControlReportParser *v9; // rdi
  struct HidLampArrayControlReportParser *v10; // rbx
  unsigned int i; // edx
  __int64 v13; // rax
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int64 v17; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (char *)RefCountedObject::operator new(0x60uLL);
  v9 = (struct HidLampArrayControlReportParser *)v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = &RefCountedObject::`vftable';
    *((_DWORD *)v8 + 2) = 1;
    *(_QWORD *)v8 = &HidLampArrayControlReportParser::`vftable';
    *((_WORD *)v8 + 8) = 0;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_QWORD *)(v8 + 28) = 0LL;
    *(_QWORD *)(v8 + 36) = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
    *((_QWORD *)v8 + 7) = 0LL;
    *((_QWORD *)v8 + 8) = 0LL;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_DWORD *)v8 + 20) = 0;
    v8[84] = 0;
    *((_DWORD *)v8 + 11) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(struct HidLampArrayControlReportParser *))(*(_QWORD *)v9 + 8LL))(v9);
    *((_BYTE *)v9 + 16) = *((_BYTE *)a3 + 4);
    if ( *(_DWORD *)a3 == 2 )
    {
      *((_BYTE *)v9 + 17) = 2;
      for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
      {
        v13 = *((_QWORD *)a3 + 2);
        if ( *(_WORD *)(v13 + 72LL * i + 18) == 112
          && *(_WORD *)(v13 + 72LL * i + 16) == 89
          && *(_WORD *)(v13 + 72LL * i + 10) == 113
          && *(_WORD *)(v13 + 72LL * i + 8) == 89 )
        {
          v14 = *(_OWORD *)(v13 + 72LL * i + 16);
          v15 = *(_OWORD *)(v13 + 72LL * i + 32);
          v16 = *(_OWORD *)(v13 + 72LL * i + 48);
          v17 = *(_QWORD *)(v13 + 72LL * i + 64);
          *(_OWORD *)((char *)v9 + 24) = *(_OWORD *)(v13 + 72LL * i);
          *(_OWORD *)((char *)v9 + 40) = v14;
          *(_OWORD *)((char *)v9 + 56) = v15;
          *(_OWORD *)((char *)v9 + 72) = v16;
          *((_QWORD *)v9 + 11) = v17;
        }
      }
    }
    *((_DWORD *)v9 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a3 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1)
                                                   + 4)
                                       + 7
                                       + *(_DWORD *)(*((_QWORD *)a3 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a3 + 2) - 1))) >> 3;
    if ( HidLampArrayControlReportParser::IsParserValid(a1, a2, v9) )
    {
      v10 = 0LL;
      *a4 = v9;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct HidLampArrayControlReportParser *))(*(_QWORD *)v10 + 16LL))(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraycontrolreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
