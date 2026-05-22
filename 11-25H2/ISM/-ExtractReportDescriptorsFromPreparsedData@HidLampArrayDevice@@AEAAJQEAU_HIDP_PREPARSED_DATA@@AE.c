/*
 * XREFs of ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FE50
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800704D8 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800951CC (--$_Destroy_range@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo.c)
 *     ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x18009BD30 (--1-$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U-$default_delete@$$BY0A@UParsedHidReportDesc.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E594 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$?RUParsedHidReportDescriptor@@$0A@@?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@QEBAXPEAUParsedHidReportDescriptor@@@Z @ 0x1800E7170 (--$-RUParsedHidReportDescriptor@@$0A@@-$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@.c)
 *     ??$?RVHidChannelValueInfo@@$0A@@?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHidChannelValueInfo@@@Z @ 0x1800E71C0 (--$-RVHidChannelValueInfo@@$0A@@-$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHid.c)
 *     ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E72C4 (--$_Emplace_reallocate@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E81C8 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
        char a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4)
{
  int v5; // r13d
  __int64 v6; // rbx
  unsigned __int8 v7; // cl
  unsigned __int16 v8; // r12
  unsigned __int64 v9; // r9
  __int128 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rax
  char *v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *i; // r14
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  bool v25; // cf
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  _QWORD *v30; // r14
  const char *v31; // r9
  __int64 result; // rax
  unsigned __int64 j; // r9
  unsigned __int64 v34; // r15
  __int64 v35; // r15
  unsigned __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rax
  _QWORD *v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int128 v48; // xmm4
  __int64 v49; // xmm0_8
  __int64 v50; // rax
  int v51; // [rsp+20h] [rbp-D8h]
  _QWORD v52[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v53; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v54; // [rsp+50h] [rbp-A8h]
  __int128 v55; // [rsp+60h] [rbp-98h]
  __int128 v56; // [rsp+70h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-78h]
  __int128 v58; // [rsp+90h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-58h]
  __int128 v60; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  unsigned __int64 v63; // [rsp+100h] [rbp+8h]
  unsigned __int64 v64; // [rsp+100h] [rbp+8h]

  LOBYTE(v63) = a1;
  v58 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v59 = 0LL;
  v7 = 0;
  v8 = *(_WORD *)(a2 + 32);
  v9 = 0x8E38E38E38E38E39uLL;
  *((_QWORD *)&v10 + 1) = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  *(_QWORD *)&v10 = 0LL;
  try
  {
    while ( v8 < *(_WORD *)(a2 + 36) )
    {
      v11 = 104LL * v8;
      if ( *(_WORD *)(v11 + a2 + 50) )
      {
        if ( *(_BYTE *)(v11 + a2 + 46) > v7 )
        {
          v60 = 0LL;
          v61 = 0LL;
          if ( *((_QWORD *)&v10 + 1) == v6 )
          {
            std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
              &v58,
              *((_QWORD *)&v10 + 1),
              &v60);
            v6 = v59;
            v10 = v58;
            v12 = v61;
            v13 = (char *)v60;
          }
          else
          {
            v12 = 0LL;
            v13 = 0LL;
            **((_OWORD **)&v10 + 1) = 0uLL;
            *(_QWORD *)(*((_QWORD *)&v10 + 1) + 16LL) = 0LL;
            *((_QWORD *)&v10 + 1) += 24LL;
            *((_QWORD *)&v58 + 1) = *((_QWORD *)&v10 + 1);
          }
          if ( v13 )
            std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * ((v12 - (__int64)v13) >> 3)));
        }
        v14 = *(unsigned __int8 *)(v11 + a2 + 47) + 8LL * *(unsigned __int16 *)(v11 + a2 + 52);
        while ( 1 )
        {
          v63 = v14;
          if ( v5 >= *(unsigned __int16 *)(v11 + a2 + 50) )
            break;
          v15 = *(unsigned __int16 *)(v11 + a2 + 48);
          v16 = *(unsigned __int16 *)(v11 + a2 + 48);
          v17 = (unsigned int)v15 < 0x20 ? (1 << v16) - 1 : -1;
          WORD4(v53) = *(_WORD *)(v11 + a2 + 44);
          WORD5(v53) = *(_WORD *)(v11 + a2 + 104);
          LODWORD(v54) = *(_DWORD *)(v11 + a2 + 64);
          HIDWORD(v53) = *(unsigned __int16 *)(v11 + a2 + 62);
          LODWORD(v53) = v5 * v16 + 8 * *(unsigned __int16 *)(v11 + a2 + 52);
          DWORD1(v53) = v15;
          *((_QWORD *)&v54 + 1) = (unsigned int)v17 & *(_DWORD *)(v11 + a2 + 124);
          *(_QWORD *)&v55 = (unsigned int)v17 & *(_DWORD *)(v11 + a2 + 128);
          DWORD2(v55) = (unsigned __int8)(((v14 + v15 - 1) >> 3) - (v14 >> 3) + 1);
          HIDWORD(v55) = v14 & 7;
          LODWORD(v56) = (unsigned __int16)(((v14 + v15 - 1) >> 3) - 1);
          DWORD1(v56) = v17;
          DWORD2(v56) = (unsigned __int16)((v14 >> 3) - 1);
          BYTE12(v56) = *(_BYTE *)(v11 + a2 + 46);
          v18 = *(_DWORD *)(v11 + a2 + 68) & 8;
          v19 = 0;
          if ( !v18 )
            v19 = 4;
          DWORD1(v54) = v19;
          if ( (*(_BYTE *)(v11 + a2 + 68) & 2) != 0 )
            DWORD1(v54) = v18 != 0 ? 1 : 5;
          v20 = v10 + 24 * (0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v10 + 1) - v10) >> 3) - 1);
          v21 = *(_QWORD *)(v20 + 8);
          if ( v21 == *(_QWORD *)(v20 + 16) )
          {
            std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(v20, v21, &v53);
            v14 = v63;
          }
          else
          {
            *(_OWORD *)v21 = v53;
            *(_OWORD *)(v21 + 16) = v54;
            *(_OWORD *)(v21 + 32) = v55;
            *(_OWORD *)(v21 + 48) = v56;
            *(_QWORD *)(v21 + 64) = v57;
            *(_QWORD *)(v20 + 8) += 72LL;
          }
          v14 += *(unsigned __int16 *)(v11 + a2 + 48);
          ++v5;
        }
        v7 = *(_BYTE *)(v11 + a2 + 46);
        v5 = 0;
        v9 = 0x8E38E38E38E38E39uLL;
      }
      ++v8;
    }
    for ( i = (_QWORD *)v10; i != *((_QWORD **)&v10 + 1); i += 3 )
    {
      LOBYTE(v9) = v63;
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        *i,
        i[1],
        0x8E38E38E38E38E39uLL * ((__int64)(i[1] - *i) >> 3),
        v9);
      v9 = 0x8E38E38E38E38E39uLL;
    }
    v23 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v10 + 1) - v10) >> 3);
    v24 = 8 * ((__int64)(*((_QWORD *)&v10 + 1) - v10) >> 3);
    if ( !is_mul_ok(v23, 0x18uLL) )
      v24 = -1LL;
    v25 = __CFADD__(v24, 8LL);
    v26 = v24 + 8;
    if ( v25 )
      v26 = -1LL;
    v27 = (unsigned __int64 *)operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
    if ( v27 )
    {
      *v27 = v23;
      v30 = v27 + 1;
      `eh vector constructor iterator'(
        v27 + 1,
        0x18uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v10 + 1) - v10) >> 3),
        (void (*)(void *))ParsedHidReportDescriptor::ParsedHidReportDescriptor,
        (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    }
    else
    {
      v30 = 0LL;
    }
    v52[0] = v30;
    if ( v30 )
    {
      for ( j = 0x8E38E38E38E38E39uLL; ; j = 0x8E38E38E38E38E39uLL )
      {
        v34 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v10 + 1) - v10) >> 3);
        if ( (unsigned __int8)v5 >= v34 )
          break;
        v35 = 3LL * (unsigned __int8)v5;
        LODWORD(v30[v35]) = 2;
        BYTE4(v30[v35]) = *(_BYTE *)(*(_QWORD *)(v10 + 24LL * (unsigned __int8)v5) + 60LL);
        v36 = 954437177
            * (unsigned int)((__int64)(*(_QWORD *)(v10 + 24LL * (unsigned __int8)v5 + 8)
                                     - *(_QWORD *)(v10 + 24LL * (unsigned __int8)v5)) >> 3);
        v64 = v36;
        LODWORD(v30[v35 + 1]) = v36;
        v37 = 72 * v36;
        if ( !is_mul_ok(v36, 0x48uLL) )
          v37 = -1LL;
        v25 = __CFADD__(v37, 8LL);
        v38 = v37 + 8;
        if ( v25 )
          v38 = -1LL;
        v39 = (unsigned __int64 *)operator new[](v38, (const struct std::nothrow_t *)&std::nothrow);
        if ( v39 )
        {
          *v39 = v36;
          v40 = v39 + 1;
          `eh vector constructor iterator'(
            v39 + 1,
            0x48uLL,
            v64,
            (void (*)(void *))HidChannelValueInfo::HidChannelValueInfo,
            (void (*)(void *))BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp);
        }
        else
        {
          v40 = 0LL;
        }
        v41 = v30[3 * (unsigned __int8)v5 + 2];
        v30[3 * (unsigned __int8)v5 + 2] = v40;
        if ( v41 )
          std::default_delete<HidChannelValueInfo [0]>::operator()<HidChannelValueInfo,0>();
        if ( !v30[3 * (unsigned __int8)v5 + 2] )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B5,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x8007000ELL,
            v51);
          std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(v52, v42, v43, v44);
          if ( (_QWORD)v10 )
          {
            std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(v10, *((_QWORD *)&v10 + 1));
            std::_Deallocate<16,0>((char *)v10, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v10) >> 3)));
          }
          return 2147942414LL;
        }
        v29 = 0LL;
        v28 = *(_QWORD *)(v10 + 24LL * (unsigned __int8)v5);
        if ( 0x8E38E38E38E38E39uLL * ((*(_QWORD *)(v10 + 24LL * (unsigned __int8)v5 + 8) - v28) >> 3) )
        {
          v45 = 0LL;
          do
          {
            v46 = *(_OWORD *)(v28 + v45 + 16);
            v47 = *(_OWORD *)(v28 + v45 + 32);
            v48 = *(_OWORD *)(v28 + v45 + 48);
            v49 = *(_QWORD *)(v28 + v45 + 64);
            v50 = v30[3 * (unsigned __int8)v5 + 2];
            *(_OWORD *)(v45 + v50) = *(_OWORD *)(v28 + v45);
            *(_OWORD *)(v45 + v50 + 16) = v46;
            *(_OWORD *)(v45 + v50 + 32) = v47;
            *(_OWORD *)(v45 + v50 + 48) = v48;
            *(_QWORD *)(v45 + v50 + 64) = v49;
            ++v29;
            v45 += 72LL;
            v28 = *(_QWORD *)(v10 + 24LL * (unsigned __int8)v5);
          }
          while ( v29 < 0x8E38E38E38E38E39uLL * ((*(_QWORD *)(v10 + 24LL * (unsigned __int8)v5 + 8) - v28) >> 3) );
        }
        LOBYTE(v5) = v5 + 1;
      }
      if ( a3 != v52 )
      {
        v52[0] = 0LL;
        v28 = *a3;
        *a3 = (__int64)v30;
        if ( v28 )
          std::default_delete<ParsedHidReportDescriptor [0]>::operator()<ParsedHidReportDescriptor,0>(
            v52,
            v28,
            v29,
            0x8E38E38E38E38E39uLL);
      }
      *a4 = v34;
      std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(v52, v28, v29, j);
      if ( (_QWORD)v10 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(v10, *((_QWORD *)&v10 + 1));
        std::_Deallocate<16,0>((char *)v10, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v10) >> 3)));
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AD,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x8007000ELL,
        v51);
      if ( (_QWORD)v10 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(v10, *((_QWORD *)&v10 + 1));
        std::_Deallocate<16,0>((char *)v10, (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v10) >> 3)));
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C2,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hi"
                                         "dlamparraydevice.cpp",
                           v31);
  }
  return result;
}
