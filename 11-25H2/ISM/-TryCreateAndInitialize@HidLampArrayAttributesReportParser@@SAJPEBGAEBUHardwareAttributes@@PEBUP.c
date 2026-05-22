/*
 * XREFs of ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EB740
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800E954C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HidLampArrayAttributesReportParser@@AEAA@XZ @ 0x1800EB268 (--0HidLampArrayAttributesReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EB4CC (-IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampArrayAttributesReportParser::TryCreateAndInitialize(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct ParsedHidReportDescriptor *a3,
        struct HidLampArrayAttributesReportParser **a4)
{
  HidLampArrayAttributesReportParser *v8; // rax
  struct HidLampArrayAttributesReportParser *v9; // rdi
  struct HidLampArrayAttributesReportParser *v10; // rbx
  __int64 i; // r8
  __int64 v13; // rdx
  __int16 v14; // r9
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int64 v18; // xmm0_8
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int128 v21; // xmm4
  __int64 v22; // xmm0_8
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __int64 v26; // xmm0_8
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int64 v30; // xmm0_8
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int64 v34; // xmm0_8
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  __int128 v37; // xmm4
  __int64 v38; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (HidLampArrayAttributesReportParser *)RefCountedObject::operator new(0x1C8uLL);
  if ( v8 )
    v9 = HidLampArrayAttributesReportParser::HidLampArrayAttributesReportParser(v8);
  else
    v9 = 0LL;
  v10 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v9 + 8LL))(v9);
    *((_BYTE *)v9 + 16) = *((_BYTE *)a3 + 4);
    if ( *(_DWORD *)a3 == 2 )
    {
      *((_BYTE *)v9 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 2); i = (unsigned int)(i + 1) )
      {
        v13 = *((_QWORD *)a3 + 2);
        if ( *(_WORD *)(v13 + 72 * i + 18) != 2 || *(_WORD *)(v13 + 72 * i + 16) != 89 )
          continue;
        v14 = *(_WORD *)(v13 + 72 * i + 10);
        switch ( v14 )
        {
          case 3:
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v15 = *(_OWORD *)(v13 + 72 * i + 16);
              v16 = *(_OWORD *)(v13 + 72 * i + 32);
              v17 = *(_OWORD *)(v13 + 72 * i + 48);
              v18 = *(_QWORD *)(v13 + 72 * i + 64);
              *(_OWORD *)((char *)v9 + 24) = *(_OWORD *)(v13 + 72 * i);
              *(_OWORD *)((char *)v9 + 40) = v15;
              *(_OWORD *)((char *)v9 + 56) = v16;
              *(_OWORD *)((char *)v9 + 72) = v17;
              *((_QWORD *)v9 + 11) = v18;
              continue;
            }
            break;
          case 4:
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v19 = *(_OWORD *)(v13 + 72 * i + 16);
              v20 = *(_OWORD *)(v13 + 72 * i + 32);
              v21 = *(_OWORD *)(v13 + 72 * i + 48);
              v22 = *(_QWORD *)(v13 + 72 * i + 64);
              *((_OWORD *)v9 + 6) = *(_OWORD *)(v13 + 72 * i);
              *((_OWORD *)v9 + 7) = v19;
              *((_OWORD *)v9 + 8) = v20;
              *((_OWORD *)v9 + 9) = v21;
              *((_QWORD *)v9 + 20) = v22;
              continue;
            }
            break;
          case 5:
            if ( *(_WORD *)(v13 + 72 * i + 8) != 89 )
              goto LABEL_23;
            v23 = *(_OWORD *)(v13 + 72 * i + 16);
            v24 = *(_OWORD *)(v13 + 72 * i + 32);
            v25 = *(_OWORD *)(v13 + 72 * i + 48);
            v26 = *(_QWORD *)(v13 + 72 * i + 64);
            *(_OWORD *)((char *)v9 + 168) = *(_OWORD *)(v13 + 72 * i);
            *(_OWORD *)((char *)v9 + 184) = v23;
            *(_OWORD *)((char *)v9 + 200) = v24;
            *(_OWORD *)((char *)v9 + 216) = v25;
            *((_QWORD *)v9 + 29) = v26;
            continue;
        }
        if ( v14 != 6 )
        {
LABEL_23:
          if ( v14 == 7 )
          {
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v31 = *(_OWORD *)(v13 + 72 * i + 16);
              v32 = *(_OWORD *)(v13 + 72 * i + 32);
              v33 = *(_OWORD *)(v13 + 72 * i + 48);
              v34 = *(_QWORD *)(v13 + 72 * i + 64);
              *(_OWORD *)((char *)v9 + 312) = *(_OWORD *)(v13 + 72 * i);
              *(_OWORD *)((char *)v9 + 328) = v31;
              *(_OWORD *)((char *)v9 + 344) = v32;
              *(_OWORD *)((char *)v9 + 360) = v33;
              *((_QWORD *)v9 + 47) = v34;
            }
            continue;
          }
LABEL_26:
          if ( v14 == 8 && *(_WORD *)(v13 + 72 * i + 8) == 89 )
          {
            v35 = *(_OWORD *)(v13 + 72 * i + 16);
            v36 = *(_OWORD *)(v13 + 72 * i + 32);
            v37 = *(_OWORD *)(v13 + 72 * i + 48);
            v38 = *(_QWORD *)(v13 + 72 * i + 64);
            *((_OWORD *)v9 + 24) = *(_OWORD *)(v13 + 72 * i);
            *((_OWORD *)v9 + 25) = v35;
            *((_OWORD *)v9 + 26) = v36;
            *((_OWORD *)v9 + 27) = v37;
            *((_QWORD *)v9 + 56) = v38;
          }
          continue;
        }
        if ( *(_WORD *)(v13 + 72 * i + 8) != 89 )
          goto LABEL_26;
        v27 = *(_OWORD *)(v13 + 72 * i + 16);
        v28 = *(_OWORD *)(v13 + 72 * i + 32);
        v29 = *(_OWORD *)(v13 + 72 * i + 48);
        v30 = *(_QWORD *)(v13 + 72 * i + 64);
        *((_OWORD *)v9 + 15) = *(_OWORD *)(v13 + 72 * i);
        *((_OWORD *)v9 + 16) = v27;
        *((_OWORD *)v9 + 17) = v28;
        *((_OWORD *)v9 + 18) = v29;
        *((_QWORD *)v9 + 38) = v30;
      }
    }
    *((_DWORD *)v9 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a3 + 2)
                                                   + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1)
                                                   + 4)
                                       + 7
                                       + *(_DWORD *)(*((_QWORD *)a3 + 2) + 72LL
                                                                         * (unsigned int)(*((_DWORD *)a3 + 2) - 1))) >> 3;
    if ( HidLampArrayAttributesReportParser::IsParserValid(a1, a2, v9) )
    {
      v10 = 0LL;
      *a4 = v9;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct HidLampArrayAttributesReportParser *))(*(_QWORD *)v10 + 16LL))(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparrayattributesreportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
