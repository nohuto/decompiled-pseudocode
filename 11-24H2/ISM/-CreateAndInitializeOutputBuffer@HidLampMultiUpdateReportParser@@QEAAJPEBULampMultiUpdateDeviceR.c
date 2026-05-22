/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180062DDC
 * Callers:
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180077C68 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?ValidateReportData@HidLampMultiUpdateReportParser@@AEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x18006320C (-ValidateReportData@HidLampMultiUpdateReportParser@@AEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x180063264 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x1800632C8 (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        __int64 a2,
        int *a3,
        _DWORD *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rbx
  int inserted; // eax
  unsigned __int8 *v14; // r9
  unsigned int v15; // edi
  int v16; // eax
  int v17; // edi
  __int64 v18; // r11
  const struct std::nothrow_t *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 v22; // r10
  __int64 v23; // r9
  unsigned __int8 *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned __int8 v27; // r10
  __int64 v28; // r8
  unsigned __int8 *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int8 v32; // r10
  __int64 v33; // r8
  unsigned __int8 *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r8
  unsigned __int8 v37; // r10
  __int64 v38; // r8
  unsigned __int8 *v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r8
  unsigned __int8 v42; // r10
  __int64 v43; // r8
  unsigned __int8 *v44; // rcx
  void *v45; // rcx
  unsigned __int8 *v46; // rax
  __int64 v48; // rdx
  const struct std::nothrow_t *v49; // rdx
  __int64 v50; // rdx
  unsigned __int64 v51; // r9
  const struct std::nothrow_t *v52; // rdx
  int v53[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = HidLampMultiUpdateReportParser::ValidateReportData(
         (HidLampMultiUpdateReportParser *)a1,
         (const struct LampMultiUpdateDeviceReport *)a2);
  v10 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)(unsigned int)v8,
      v53[0]);
    return v10;
  }
  v11 = (unsigned __int8 *)operator new[](*(unsigned int *)(v9 + 20), (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v53 = v11;
  v12 = v11;
  if ( !v11 )
  {
    v15 = -2147024882;
    v50 = 120LL;
LABEL_52:
    v51 = v15;
    goto LABEL_53;
  }
  memset_0(v11, 0, *(unsigned int *)(a1 + 20));
  *v12 = *(_BYTE *)(a1 + 16);
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 24),
               *(_DWORD *)a2,
               *(unsigned int *)(a1 + 20),
               v12);
  v15 = inserted;
  if ( inserted < 0 )
  {
    v51 = (unsigned int)inserted;
    v50 = 127LL;
    goto LABEL_53;
  }
  v16 = HidChannelValueInfo::InsertValue(
          (HidChannelValueInfo *)(a1 + 96),
          *(_DWORD *)(a2 + 4),
          *(unsigned int *)(a1 + 20),
          v14);
  v15 = v16;
  if ( v16 < 0 )
  {
    v51 = (unsigned int)v16;
    v50 = 128LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)v51,
      v53[0]);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v53, v52);
    return v15;
  }
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  while ( v17 < *(_DWORD *)a2 )
  {
    v20 = *(_QWORD *)(a1 + 168);
    v21 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 4 * v18);
    if ( (int)v21 < *(_QWORD *)((char *)v19 + v20 + 24) || (int)v21 > *(_QWORD *)((char *)v19 + v20 + 32) )
    {
      v48 = 132LL;
      goto LABEL_49;
    }
    if ( *(_DWORD *)((char *)v19 + v20 + 48) < *(_DWORD *)(a1 + 20) )
    {
      v22 = 1;
      v23 = v21 << *(_DWORD *)((char *)v19 + v20 + 44);
      v24 = &v12[*(unsigned int *)((char *)v19 + v20 + 56) + 1];
      *v24 = v23;
      if ( *(_DWORD *)((char *)v19 + v20 + 40) > 1u )
      {
        do
        {
          ++v24;
          v23 >>= 8;
          ++v22;
          *v24 |= v23;
        }
        while ( (unsigned int)v22 < *(_DWORD *)((char *)v19 + v20 + 40) );
      }
    }
    if ( *(_BYTE *)(a1 + 324) )
    {
      v25 = *(_QWORD *)(a1 + 200);
      v26 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + v18);
      if ( v26 < *(_QWORD *)((char *)v19 + v25 + 24) || v26 > *(_QWORD *)((char *)v19 + v25 + 32) )
      {
        v48 = 136LL;
LABEL_49:
        v15 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v48,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
          (const char *)0x80070057LL,
          v53[0]);
        operator delete(v12, v49);
        return v15;
      }
      if ( *(_DWORD *)((char *)v19 + v25 + 48) < *(_DWORD *)(a1 + 20) )
      {
        v27 = 1;
        v28 = v26 << *(_DWORD *)((char *)v19 + v25 + 44);
        v29 = &v12[*(unsigned int *)((char *)v19 + v25 + 56) + 1];
        *v29 = v28;
        if ( *(_DWORD *)((char *)v19 + v25 + 40) > 1u )
        {
          do
          {
            ++v29;
            v28 >>= 8;
            ++v27;
            *v29 |= v28;
          }
          while ( (unsigned int)v27 < *(_DWORD *)((char *)v19 + v25 + 40) );
        }
      }
    }
    if ( *(_BYTE *)(a1 + 325) )
    {
      v30 = *(_QWORD *)(a1 + 232);
      v31 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 24) + v18);
      if ( v31 < *(_QWORD *)((char *)v19 + v30 + 24) || v31 > *(_QWORD *)((char *)v19 + v30 + 32) )
      {
        v50 = 141LL;
LABEL_51:
        v15 = -2147024809;
        goto LABEL_52;
      }
      if ( *(_DWORD *)((char *)v19 + v30 + 48) < *(_DWORD *)(a1 + 20) )
      {
        v32 = 1;
        v33 = v31 << *(_DWORD *)((char *)v19 + v30 + 44);
        v34 = &v12[*(unsigned int *)((char *)v19 + v30 + 56) + 1];
        *v34 = v33;
        if ( *(_DWORD *)((char *)v19 + v30 + 40) > 1u )
        {
          do
          {
            ++v34;
            v33 >>= 8;
            ++v32;
            *v34 |= v33;
          }
          while ( (unsigned int)v32 < *(_DWORD *)((char *)v19 + v30 + 40) );
        }
      }
    }
    if ( *(_BYTE *)(a1 + 326) )
    {
      v35 = *(_QWORD *)(a1 + 264);
      v36 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + v18);
      if ( v36 < *(_QWORD *)((char *)v19 + v35 + 24) || v36 > *(_QWORD *)((char *)v19 + v35 + 32) )
      {
        v50 = 146LL;
        goto LABEL_51;
      }
      if ( *(_DWORD *)((char *)v19 + v35 + 48) < *(_DWORD *)(a1 + 20) )
      {
        v37 = 1;
        v38 = v36 << *(_DWORD *)((char *)v19 + v35 + 44);
        v39 = &v12[*(unsigned int *)((char *)v19 + v35 + 56) + 1];
        *v39 = v38;
        if ( *(_DWORD *)((char *)v19 + v35 + 40) > 1u )
        {
          do
          {
            ++v39;
            v38 >>= 8;
            ++v37;
            *v39 |= v38;
          }
          while ( (unsigned int)v37 < *(_DWORD *)((char *)v19 + v35 + 40) );
        }
      }
    }
    if ( *(_BYTE *)(a1 + 327) )
    {
      v40 = *(_QWORD *)(a1 + 296);
      v41 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 40) + v18);
      if ( v41 < *(_QWORD *)((char *)v19 + v40 + 24) || v41 > *(_QWORD *)((char *)v19 + v40 + 32) )
      {
        v50 = 151LL;
        goto LABEL_51;
      }
      if ( *(_DWORD *)((char *)v19 + v40 + 48) < *(_DWORD *)(a1 + 20) )
      {
        v42 = 1;
        v43 = v41 << *(_DWORD *)((char *)v19 + v40 + 44);
        v44 = &v12[*(unsigned int *)((char *)v19 + v40 + 56) + 1];
        *v44 = v43;
        if ( *(_DWORD *)((char *)v19 + v40 + 40) > 1u )
        {
          do
          {
            ++v44;
            v43 >>= 8;
            ++v42;
            *v44 |= v43;
          }
          while ( (unsigned int)v42 < *(_DWORD *)((char *)v19 + v40 + 40) );
        }
      }
    }
    ++v17;
    ++v18;
    v19 = (const struct std::nothrow_t *)((char *)v19 + 72);
  }
  if ( a3 != v53 )
  {
    v45 = *(void **)a3;
    v46 = v12;
    v12 = 0LL;
    *(_QWORD *)a3 = v46;
    if ( v45 )
      operator delete(v45, v19);
  }
  *a4 = *(_DWORD *)(a1 + 20);
  if ( v12 )
    operator delete(v12, v19);
  return 0LL;
}
