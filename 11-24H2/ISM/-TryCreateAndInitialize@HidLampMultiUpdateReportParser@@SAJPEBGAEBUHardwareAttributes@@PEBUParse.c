/*
 * XREFs of ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EDF30
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800EA834 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x180070208 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HidLampMultiUpdateReportParser@@AEAA@XZ @ 0x180094AA0 (--0HidLampMultiUpdateReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z @ 0x1800EDBE0 (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HidLampMultiUpdateReportParser::TryCreateAndInitialize(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct ParsedHidReportDescriptor *a3,
        struct HidLampMultiUpdateReportParser **a4)
{
  HidLampMultiUpdateReportParser *v8; // rax
  HidLampMultiUpdateReportParser *updated; // rax
  struct HidLampMultiUpdateReportParser *v10; // rbx
  const char *v11; // r9
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v14; // rdx
  __int16 v15; // r8
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int128 v18; // xmm4
  __int64 v19; // xmm0_8
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int64 v23; // xmm0_8
  __int64 v24; // r8
  __int64 v25; // rdx
  char **v26; // rcx
  char *v27; // r9
  struct HidLampMultiUpdateReportParser *v28; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (HidLampMultiUpdateReportParser *)RefCountedObject::operator new(0x148uLL);
  if ( v8 )
  {
    updated = HidLampMultiUpdateReportParser::HidLampMultiUpdateReportParser(v8);
    v10 = updated;
  }
  else
  {
    v10 = 0LL;
  }
  try
  {
    if ( v10 )
    {
      (*(void (__fastcall **)(struct HidLampMultiUpdateReportParser *))(*(_QWORD *)v10 + 8LL))(v10);
      *((_BYTE *)v10 + 16) = *((_BYTE *)a3 + 4);
      if ( *(_DWORD *)a3 == 2 )
      {
        *((_BYTE *)v10 + 17) = 2;
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 2); i = (unsigned int)(i + 1) )
        {
          v14 = *((_QWORD *)a3 + 2);
          if ( *(_WORD *)(v14 + 72 * i + 18) != 80 || *(_WORD *)(v14 + 72 * i + 16) != 89 )
            continue;
          v15 = *(_WORD *)(v14 + 72 * i + 10);
          switch ( v15 )
          {
            case 3:
              if ( *(_WORD *)(v14 + 72 * i + 8) == 89 )
              {
                v16 = *(_OWORD *)(v14 + 72 * i + 16);
                v17 = *(_OWORD *)(v14 + 72 * i + 32);
                v18 = *(_OWORD *)(v14 + 72 * i + 48);
                v19 = *(_QWORD *)(v14 + 72 * i + 64);
                *(_OWORD *)((char *)v10 + 24) = *(_OWORD *)(v14 + 72 * i);
                *(_OWORD *)((char *)v10 + 40) = v16;
                *(_OWORD *)((char *)v10 + 56) = v17;
                *(_OWORD *)((char *)v10 + 72) = v18;
                *((_QWORD *)v10 + 11) = v19;
                continue;
              }
              break;
            case 85:
              if ( *(_WORD *)(v14 + 72 * i + 8) == 89 )
              {
                v20 = *(_OWORD *)(v14 + 72 * i + 16);
                v21 = *(_OWORD *)(v14 + 72 * i + 32);
                v22 = *(_OWORD *)(v14 + 72 * i + 48);
                v23 = *(_QWORD *)(v14 + 72 * i + 64);
                *((_OWORD *)v10 + 6) = *(_OWORD *)(v14 + 72 * i);
                *((_OWORD *)v10 + 7) = v20;
                *((_OWORD *)v10 + 8) = v21;
                *((_OWORD *)v10 + 9) = v22;
                *((_QWORD *)v10 + 20) = v23;
                continue;
              }
              break;
            case 33:
              if ( *(_WORD *)(v14 + 72 * i + 8) == 89 )
              {
                v24 = v14 + 72 * i;
                v25 = *((_QWORD *)v10 + 22);
                if ( v25 != *((_QWORD *)v10 + 23) )
                {
                  *(_OWORD *)v25 = *(_OWORD *)v24;
                  *(_OWORD *)(v25 + 16) = *(_OWORD *)(v24 + 16);
                  *(_OWORD *)(v25 + 32) = *(_OWORD *)(v24 + 32);
                  *(_OWORD *)(v25 + 48) = *(_OWORD *)(v24 + 48);
                  *(_QWORD *)(v25 + 64) = *(_QWORD *)(v24 + 64);
                  *((_QWORD *)v10 + 22) += 72LL;
                  continue;
                }
                v26 = (char **)((char *)v10 + 168);
                goto LABEL_28;
              }
              break;
            case 81:
              if ( *(_WORD *)(v14 + 72 * i + 8) == 89 )
              {
                v27 = (char *)v10 + 200;
                goto LABEL_26;
              }
              goto LABEL_32;
          }
          if ( v15 == 82 )
          {
            if ( *(_WORD *)(v14 + 72 * i + 8) == 89 )
            {
              v27 = (char *)v10 + 232;
LABEL_26:
              v24 = v14 + 72 * i;
              v25 = *((_QWORD *)v27 + 1);
              if ( v25 == *((_QWORD *)v27 + 2) )
              {
                v26 = (char **)v27;
LABEL_28:
                std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
                  v26,
                  (char *)v25,
                  v24);
                continue;
              }
LABEL_38:
              *(_OWORD *)v25 = *(_OWORD *)v24;
              *(_OWORD *)(v25 + 16) = *(_OWORD *)(v24 + 16);
              *(_OWORD *)(v25 + 32) = *(_OWORD *)(v24 + 32);
              *(_OWORD *)(v25 + 48) = *(_OWORD *)(v24 + 48);
              *(_QWORD *)(v25 + 64) = *(_QWORD *)(v24 + 64);
              *((_QWORD *)v27 + 1) += 72LL;
              continue;
            }
            goto LABEL_35;
          }
LABEL_32:
          if ( v15 == 83 )
          {
            if ( *(_WORD *)(v14 + 72 * i + 8) != 89 )
              continue;
            v27 = (char *)v10 + 264;
            goto LABEL_26;
          }
LABEL_35:
          if ( v15 == 84 && *(_WORD *)(v14 + 72 * i + 8) == 89 )
          {
            v27 = (char *)v10 + 296;
            v24 = v14 + 72 * i;
            v25 = *((_QWORD *)v10 + 38);
            if ( v25 != *((_QWORD *)v10 + 39) )
              goto LABEL_38;
            std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
              (char **)v10 + 37,
              (char *)v25,
              v24);
          }
        }
      }
      *((_DWORD *)v10 + 5) = (unsigned int)(*(_DWORD *)(*((_QWORD *)a3 + 2)
                                                      + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1)
                                                      + 4)
                                          + 7
                                          + *(_DWORD *)(*((_QWORD *)a3 + 2)
                                                      + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1))) >> 3;
      if ( HidLampMultiUpdateReportParser::IsParserValid(a1, a2, v10) )
      {
        v28 = v10;
        v10 = 0LL;
        *a4 = v28;
      }
      if ( v10 )
        (*(void (__fastcall **)(struct HidLampMultiUpdateReportParser *))(*(_QWORD *)v10 + 16LL))(v10);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6D,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmult"
                                "iupdatereportparser.cpp",
                           v11);
  }
  return result;
}
