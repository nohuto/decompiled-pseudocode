/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180065050
 * Callers:
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180077FD8 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?InternalInsertValue@HidChannelValueInfo@@AEAAXI_KPEAE@Z @ 0x1800653CC (-InternalInsertValue@HidChannelValueInfo@@AEAAXI_KPEAE@Z.c)
 *     ?ValidateReportData@HidLampMultiUpdateReportParser@@AEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180065444 (-ValidateReportData@HidLampMultiUpdateReportParser@@AEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        const struct LampMultiUpdateDeviceReport *a2,
        int *a3,
        _DWORD *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  int v16; // r12d
  __int64 v17; // r14
  __int64 v18; // r15
  HidChannelValueInfo *v19; // rcx
  __int64 v20; // rdx
  HidChannelValueInfo *v21; // rcx
  __int64 v22; // rdx
  HidChannelValueInfo *v23; // rcx
  __int64 v24; // rdx
  HidChannelValueInfo *v25; // rcx
  __int64 v26; // rdx
  HidChannelValueInfo *v27; // rcx
  __int64 v28; // rdx
  void *v29; // rcx
  unsigned __int8 *v30; // rax
  __int64 v32; // rdx
  unsigned int v33; // edi
  const struct std::nothrow_t *v34; // rdx
  __int64 v35; // rdx
  const struct std::nothrow_t *v36; // rdx
  int v37[2]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = HidLampMultiUpdateReportParser::ValidateReportData((HidLampMultiUpdateReportParser *)a1, a2);
  v10 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)(unsigned int)v8,
      v37[0]);
    return v10;
  }
  v11 = (unsigned __int8 *)operator new[](*(unsigned int *)(v9 + 20), (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v37 = v11;
  v12 = v11;
  if ( !v11 )
  {
    v33 = -2147024882;
    v32 = 120LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)v33,
      v37[0]);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v37, v34);
    return v33;
  }
  memset_0(v11, 0, *(unsigned int *)(a1 + 20));
  *v12 = *(_BYTE *)(a1 + 16);
  v13 = *(int *)a2;
  if ( v13 < *(_QWORD *)(a1 + 48) || v13 > *(_QWORD *)(a1 + 56) )
  {
    v32 = 127LL;
    goto LABEL_35;
  }
  HidChannelValueInfo::InternalInsertValue(
    (HidChannelValueInfo *)(a1 + 24),
    *(_DWORD *)a2,
    *(unsigned int *)(a1 + 20),
    v12);
  v14 = *((unsigned int *)a2 + 1);
  if ( v14 < *(_QWORD *)(a1 + 120) || *((unsigned int *)a2 + 1) > *(__int64 *)(a1 + 128) )
  {
    v32 = 128LL;
LABEL_35:
    v33 = -2147024809;
    goto LABEL_36;
  }
  HidChannelValueInfo::InternalInsertValue((HidChannelValueInfo *)(a1 + 96), v14, *(unsigned int *)(a1 + 20), v12);
  v16 = 0;
  v17 = 0LL;
  v18 = 0LL;
  while ( v16 < *(_DWORD *)a2 )
  {
    v19 = (HidChannelValueInfo *)(v18 + *(_QWORD *)(a1 + 168));
    v20 = *(int *)(*((_QWORD *)a2 + 1) + 4 * v17);
    if ( v20 < *((_QWORD *)v19 + 3) || v20 > *((_QWORD *)v19 + 4) )
    {
      v35 = 132LL;
      goto LABEL_39;
    }
    HidChannelValueInfo::InternalInsertValue(v19, v20, *(unsigned int *)(a1 + 20), v12);
    if ( *(_BYTE *)(a1 + 324) )
    {
      v21 = (HidChannelValueInfo *)(v18 + *(_QWORD *)(a1 + 200));
      v22 = *(unsigned __int8 *)(v17 + *((_QWORD *)a2 + 2));
      if ( v22 < *((_QWORD *)v21 + 3) || *(unsigned __int8 *)(v17 + *((_QWORD *)a2 + 2)) > *((__int64 *)v21 + 4) )
      {
        v35 = 136LL;
LABEL_39:
        v33 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v35,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
          (const char *)0x80070057LL,
          v37[0]);
        operator delete(v12, v36);
        return v33;
      }
      HidChannelValueInfo::InternalInsertValue(v21, v22, *(unsigned int *)(a1 + 20), v12);
    }
    if ( *(_BYTE *)(a1 + 325) )
    {
      v23 = (HidChannelValueInfo *)(v18 + *(_QWORD *)(a1 + 232));
      v24 = *(unsigned __int8 *)(v17 + *((_QWORD *)a2 + 3));
      if ( v24 < *((_QWORD *)v23 + 3) || *(unsigned __int8 *)(v17 + *((_QWORD *)a2 + 3)) > *((__int64 *)v23 + 4) )
      {
        v32 = 141LL;
        goto LABEL_35;
      }
      HidChannelValueInfo::InternalInsertValue(v23, v24, *(unsigned int *)(a1 + 20), v12);
    }
    if ( *(_BYTE *)(a1 + 326) )
    {
      v25 = (HidChannelValueInfo *)(v18 + *(_QWORD *)(a1 + 264));
      v26 = *(unsigned __int8 *)(v17 + *((_QWORD *)a2 + 4));
      if ( v26 < *((_QWORD *)v25 + 3) || *(unsigned __int8 *)(v17 + *((_QWORD *)a2 + 4)) > *((__int64 *)v25 + 4) )
      {
        v32 = 146LL;
        goto LABEL_35;
      }
      HidChannelValueInfo::InternalInsertValue(v25, v26, *(unsigned int *)(a1 + 20), v12);
    }
    if ( *(_BYTE *)(a1 + 327) )
    {
      v27 = (HidChannelValueInfo *)(v18 + *(_QWORD *)(a1 + 296));
      v28 = *(unsigned __int8 *)(v17 + *((_QWORD *)a2 + 5));
      if ( v28 < *((_QWORD *)v27 + 3) || *(unsigned __int8 *)(v17 + *((_QWORD *)a2 + 5)) > *((__int64 *)v27 + 4) )
      {
        v32 = 151LL;
        goto LABEL_35;
      }
      HidChannelValueInfo::InternalInsertValue(v27, v28, *(unsigned int *)(a1 + 20), v12);
    }
    ++v16;
    ++v17;
    v18 += 72LL;
  }
  if ( a3 != v37 )
  {
    v29 = *(void **)a3;
    v30 = v12;
    v12 = 0LL;
    *(_QWORD *)a3 = v30;
    if ( v29 )
      operator delete(v29, v15);
  }
  *a4 = *(_DWORD *)(a1 + 20);
  if ( v12 )
    operator delete(v12, v15);
  return 0LL;
}
