/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EBBB0
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800E954C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800E7070 (-LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z.c)
 *     ?IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EBAD8 (-IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampAttributesRequestReportParser::TryCreateAndInitialize(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct ParsedHidReportDescriptor *a3,
        struct HidLampAttributesRequestReportParser **a4)
{
  char *v8; // rax
  struct HidLampAttributesRequestReportParser *v9; // rdi
  struct HidLampAttributesRequestReportParser *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int i; // r14d
  __int64 v17; // rax
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int128 v20; // xmm4
  __int64 v21; // xmm0_8
  LampArrayTelemetry *v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  v8 = (char *)RefCountedObject::operator new(0x60uLL);
  v9 = (struct HidLampAttributesRequestReportParser *)v8;
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
    (*(void (__fastcall **)(struct HidLampAttributesRequestReportParser *))(*(_QWORD *)v9 + 8LL))(v9);
    *((_BYTE *)v9 + 16) = *((_BYTE *)a3 + 4);
    if ( *(_DWORD *)a3 == 2 )
    {
      *((_BYTE *)v9 + 17) = 2;
      for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
      {
        v17 = *((_QWORD *)a3 + 2);
        if ( *(_WORD *)(v17 + 72LL * i + 18) == 32 && *(_WORD *)(v17 + 72LL * i + 16) == 89 )
        {
          if ( *(_WORD *)(v17 + 72LL * i + 10) == 33 && *(_WORD *)(v17 + 72LL * i + 8) == 89 )
          {
            v18 = *(_OWORD *)(v17 + 72LL * i + 16);
            v19 = *(_OWORD *)(v17 + 72LL * i + 32);
            v20 = *(_OWORD *)(v17 + 72LL * i + 48);
            v21 = *(_QWORD *)(v17 + 72LL * i + 64);
            *(_OWORD *)((char *)v9 + 24) = *(_OWORD *)(v17 + 72LL * i);
            *(_OWORD *)((char *)v9 + 40) = v18;
            *(_OWORD *)((char *)v9 + 56) = v19;
            *(_OWORD *)((char *)v9 + 72) = v20;
            *((_QWORD *)v9 + 11) = v21;
          }
          else
          {
            LampArrayTelemetry::GetInstance(v12, v11, v13);
            LampArrayTelemetry::LogUnexpectedUsage(v22);
          }
        }
      }
    }
    *((_DWORD *)v9 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a3 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1)
                                                   + 4)
                                       + 7
                                       + *(_DWORD *)(*((_QWORD *)a3 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a3 + 2) - 1))) >> 3;
    if ( HidLampAttributesRequestReportParser::IsParserValid(a1, a2, v9, v14) )
    {
      v10 = 0LL;
      *a4 = v9;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct HidLampAttributesRequestReportParser *))(*(_QWORD *)v10 + 16LL))(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequestreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
