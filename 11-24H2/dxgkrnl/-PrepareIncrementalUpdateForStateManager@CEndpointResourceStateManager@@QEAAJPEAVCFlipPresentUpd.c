/*
 * XREFs of ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009FD8C
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A590 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140017140 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x140017C08 (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1400188B8 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x140019548 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ??$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBufferFormatInfo@@@Z @ 0x140042580 (--$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBuff.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x14004D178 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ??1CResourceStateUpdateSerializer@@QEAA@XZ @ 0x140050DC0 (--1CResourceStateUpdateSerializer@@QEAA@XZ.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x140058980 (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140058DB0 (-RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x14005C0F0 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073F20 (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z @ 0x1400A16F0 (-Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
        CEndpointResourceStateManager *this,
        struct CFlipPresentUpdate *a2,
        struct FlipManagerObject *a3,
        unsigned __int64 a4)
{
  CEndpointResourceStateManager *v4; // rdi
  signed int v6; // ebx
  int v7; // esi
  char v8; // r12
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r9
  signed int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  char *v16; // r14
  char *v17; // r9
  __int64 v18; // r13
  char v19; // si
  int v20; // eax
  char v21; // r10
  _QWORD *v22; // rdi
  __int64 Win32kImportTable; // rax
  unsigned __int64 v24; // r9
  int v25; // eax
  CEndpointResourceStateManager *v26; // r14
  struct CCompositionSwapchainBuffer *v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32; // r12
  struct CBufferRealization *v33; // rbx
  int v34; // eax
  struct CBufferRealization *v35; // rsi
  __int64 v36; // rax
  int v37; // esi
  __int64 v38; // rax
  int v39; // eax
  CEndpointResourceStateManager **v40; // r8
  _DWORD *v41; // r11
  _DWORD *v42; // rdi
  CEndpointResourceStateManager *v43; // rsi
  __int64 v44; // r9
  __int64 v45; // r10
  char v46; // al
  _DWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  _DWORD *v50; // rdx
  char *v51; // rdi
  _DWORD *v52; // r13
  _DWORD *v53; // r15
  _DWORD *v54; // rbx
  char *v55; // r12
  __int64 v56; // r8
  __int64 v57; // r9
  _DWORD *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rax
  _QWORD *v63; // r14
  CPoolBufferResource *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _DWORD *v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  char v73; // cl
  __int64 v74; // rax
  char v75; // cl
  char v77; // [rsp+38h] [rbp-99h]
  struct CBufferRealization *v78; // [rsp+40h] [rbp-91h] BYREF
  __int64 v79; // [rsp+48h] [rbp-89h]
  char *v80; // [rsp+50h] [rbp-81h] BYREF
  _QWORD *v81; // [rsp+58h] [rbp-79h]
  void *v82; // [rsp+68h] [rbp-69h] BYREF
  int v83; // [rsp+70h] [rbp-61h]
  __int128 v84; // [rsp+78h] [rbp-59h]
  __int128 v85; // [rsp+88h] [rbp-49h]
  _DWORD *v86; // [rsp+98h] [rbp-39h]
  __int64 v87; // [rsp+A0h] [rbp-31h]
  __int64 v88; // [rsp+A8h] [rbp-29h]
  int v89; // [rsp+B0h] [rbp-21h]
  char *v90; // [rsp+B8h] [rbp-19h]
  _DWORD v91[2]; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v92; // [rsp+C8h] [rbp-9h]
  __int64 v93; // [rsp+D0h] [rbp-1h]
  __int64 v94; // [rsp+D8h] [rbp+7h]
  int v95; // [rsp+E0h] [rbp+Fh]
  int v96; // [rsp+E4h] [rbp+13h]
  int v97; // [rsp+138h] [rbp+67h]

  v4 = *(CEndpointResourceStateManager **)this;
  v82 = 0LL;
  v83 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v6 = 0;
  v86 = 0LL;
  v87 = 0LL;
  v7 = 0;
  v88 = 0LL;
  v89 = 0;
  v8 = 1;
  do
  {
    if ( v4 == this )
      break;
    v9 = (__int64)v4 + 16;
    v10 = 0;
    if ( !v4 )
      v9 = 24LL;
    v11 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
    if ( v11 )
    {
      v80 = 0LL;
      CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(v11, &v80);
      if ( v80 )
        v10 = v80[4];
    }
    v12 = (__int64)v4 + 24;
    v8 = v10 != 0 ? v8 : 0;
    if ( !v4 )
      v12 = 32LL;
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      v13 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&v82, 0x10u, 0);
      v7 = HIDWORD(v87);
      v6 = v13;
    }
    if ( v6 >= 0 && (*(_BYTE *)v12 & 2) != 0 )
    {
      v14 = v7;
      v15 = v7 + 16;
      v7 = -1;
      if ( v15 >= v14 )
        v7 = v15;
      v6 = v15 < v14 ? 0xC0000095 : 0;
      HIDWORD(v87) = v7;
    }
    v4 = *(CEndpointResourceStateManager **)v4;
  }
  while ( v6 >= 0 );
  v77 = v8;
  v16 = (char *)this + 16;
  v17 = (char *)*((_QWORD *)this + 2);
  v80 = v17;
  v90 = (char *)this + 16;
  if ( v6 >= 0 )
  {
    while ( v17 != v16 )
    {
      v18 = (unsigned __int64)(v17 - 8) & -(__int64)(v17 != 0LL);
      if ( (*(_BYTE *)(v18 + 0x20) & 1) != 0 )
        v6 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&v82, 0x10u, 0);
      v19 = 0;
      if ( v6 >= 0 )
      {
        if ( (*(_BYTE *)(v18 + 64) & 1) == 0 )
          goto LABEL_59;
        v20 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
                (CResourceStateUpdateSerializer *)&v82,
                0x28u,
                0);
        v22 = *(_QWORD **)(v18 + 24);
        v6 = v20;
        if ( v20 >= 0 )
        {
          if ( !v22[6] || !v21 && v22[7] )
            goto LABEL_59;
          Win32kImportTable = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(_QWORD *))(Win32kImportTable + 264))(v22);
          v24 = v22[5];
          v78 = 0LL;
          v25 = CCompositionSwapchainBuffer::Create(v8, a3, a4, v24, &v78);
          v26 = *(CEndpointResourceStateManager **)this;
          v6 = v25;
          v27 = v78;
          LODWORD(v79) = 0;
          if ( v25 >= 0 )
          {
            while ( v26 != this )
            {
              v28 = (__int64)v26 + 16;
              if ( !v26 )
                v28 = 24LL;
              v29 = *(_QWORD **)v28;
              v30 = (__int64)v26 + 24;
              if ( !v26 )
                v30 = 32LL;
              v81 = v29;
              if ( (*(_BYTE *)v30 & 2) == 0 )
              {
                v31 = v29[4];
                v32 = 0;
                if ( v31 )
                {
                  v78 = 0LL;
                  CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(v31, &v78);
                  v33 = v78;
                  if ( v78 )
                  {
                    if ( *(_DWORD *)v78 == 103 || *(_DWORD *)v78 == 104 || (unsigned int)(*(_DWORD *)v78 - 106) <= 1 )
                      v19 = 1;
                    if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
                      v32 = *((_BYTE *)v33 + 5);
                  }
                }
                v78 = 0LL;
                v96 = 0;
                v91[0] = v19 != 0 ? 4 : 2;
                v91[1] = v79;
                v92 = v81[7];
                v93 = v81[9];
                v94 = v81[11];
                if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
                  v96 = v32 & 1;
                v95 = 0;
                v34 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v91, 1, &v78);
                v35 = v78;
                v6 = v34;
                if ( v34 >= 0 )
                {
                  v6 = (*(__int64 (__fastcall **)(struct CCompositionSwapchainBuffer *, struct CBufferRealization *))(*(_QWORD *)v27 + 216LL))(
                         v27,
                         v78);
                  if ( v6 >= 0 )
                    v35 = 0LL;
                }
                if ( v35 )
                  (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v35)(v35, 1LL);
                v36 = DxgkGetWin32kImportTable();
                v37 = v79;
                (*(void (__fastcall **)(_QWORD *, _QWORD))(v36 + 272))(v81, (unsigned int)v79);
                LODWORD(v79) = v37 + 1;
                v19 = 0;
              }
              v26 = *(CEndpointResourceStateManager **)v26;
              if ( v6 < 0 )
                goto LABEL_55;
            }
            v6 = CContentResourceState::RebindCompositionSurfaceBuffer((CContentResource **)v18, v27);
            if ( v6 >= 0 )
              v27 = 0LL;
LABEL_55:
            v8 = v77;
          }
          if ( v27 )
            (**(void (__fastcall ***)(struct CCompositionSwapchainBuffer *, __int64))v27)(v27, 1LL);
          v38 = DxgkGetWin32kImportTable();
          (*(void (**)(void))(v38 + 280))();
          v17 = v80;
          v16 = (char *)this + 16;
          if ( v6 >= 0 )
          {
LABEL_59:
            if ( (*(_BYTE *)(v18 + 32) & 2) != 0 )
            {
              v39 = -1;
              if ( (unsigned int)(HIDWORD(v88) + 16) >= HIDWORD(v88) )
                v39 = HIDWORD(v88) + 16;
              v6 = (unsigned int)(HIDWORD(v88) + 16) < HIDWORD(v88) ? 0xC0000095 : 0;
              HIDWORD(v88) = v39;
            }
          }
        }
      }
      v17 = *(char **)v17;
      v80 = v17;
      if ( v6 < 0 )
        goto LABEL_117;
    }
    v97 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&v82, 0x62754346u);
    v6 = v97;
    if ( v97 >= 0 )
    {
      v40 = *(CEndpointResourceStateManager ***)this;
      if ( *(CEndpointResourceStateManager **)this != this )
      {
        v41 = (_DWORD *)*((_QWORD *)&v84 + 1);
        v42 = (_DWORD *)v84;
        do
        {
          v43 = *v40;
          v44 = (__int64)(v40 + 3);
          v45 = (__int64)(v40 + 2);
          if ( !v40 )
            v44 = 32LL;
          v46 = *(_BYTE *)v44;
          if ( (*(_BYTE *)v44 & 1) != 0 )
          {
            *v42 = 2;
            v47 = v42;
            v42 += 4;
            v48 = (__int64)(v40 + 2);
            if ( !v40 )
              v48 = 24LL;
            v49 = *(_QWORD *)v48;
            *((_QWORD *)v47 + 1) = *(_QWORD *)v48;
            ++*(_DWORD *)(v49 + 24);
            *(_BYTE *)v44 |= 4u;
            v46 = *(_BYTE *)v44;
          }
          if ( (v46 & 2) != 0 )
          {
            *v41 = 0;
            v50 = v41;
            v41 += 4;
            if ( !v40 )
              v45 = 24LL;
            *((_QWORD *)v50 + 1) = *(_QWORD *)(*(_QWORD *)v45 + 40LL);
            *(_BYTE *)v44 |= 8u;
          }
          v40 = (CEndpointResourceStateManager **)v43;
        }
        while ( v43 != this );
        v6 = v97;
        v16 = (char *)this + 16;
        *((_QWORD *)&v84 + 1) = v41;
        *(_QWORD *)&v84 = v42;
      }
      v51 = (char *)*((_QWORD *)this + 2);
      if ( v51 != v16 )
      {
        v52 = (_DWORD *)*((_QWORD *)&v85 + 1);
        v53 = (_DWORD *)v85;
        v54 = v86;
        do
        {
          v55 = *(char **)v51;
          v56 = (__int64)(v51 + 24);
          v57 = (__int64)(v51 + 16);
          if ( !v51 )
            v56 = 32LL;
          if ( (*(_BYTE *)v56 & 1) != 0 )
          {
            *v53 = 3;
            v58 = v53;
            v53 += 4;
            v59 = (__int64)(v51 + 16);
            if ( !v51 )
              v59 = 24LL;
            v60 = *(_QWORD *)v59;
            *((_QWORD *)v58 + 1) = *(_QWORD *)v59;
            ++*(_DWORD *)(v60 + 24);
            *(_BYTE *)v56 |= 4u;
          }
          v61 = (__int64)(v51 + 56);
          if ( !v51 )
            v61 = 64LL;
          if ( (*(_BYTE *)v61 & 1) != 0 )
          {
            *v54 = 4;
            v62 = (__int64)(v51 + 40);
            v63 = v54;
            v54 += 10;
            if ( !v51 )
              v62 = 48LL;
            v64 = *(CPoolBufferResource **)v62;
            if ( !v51 )
              v57 = 24LL;
            v65 = (__int64)(v51 + 32);
            v63[1] = *(_QWORD *)(*(_QWORD *)v57 + 40LL);
            if ( !v51 )
              v65 = 40LL;
            v66 = *(_QWORD *)v65;
            v63[3] = *(_QWORD *)v65;
            if ( v66 )
              ++*(_DWORD *)(v66 + 8);
            v63[2] = v64;
            if ( v64 )
            {
              ++*((_DWORD *)v64 + 6);
              CPoolBufferResource::AddUsageReference(v64);
            }
            v67 = (__int64)(v51 + 48);
            if ( !v51 )
              v67 = 56LL;
            v63[4] = *(_QWORD *)v67;
            *(_BYTE *)v61 |= 2u;
            v16 = v90;
          }
          v68 = (__int64)(v51 + 24);
          if ( !v51 )
            v68 = 32LL;
          if ( (*(_BYTE *)v68 & 2) != 0 )
          {
            *v52 = 1;
            v69 = (__int64)(v51 + 16);
            v70 = v52;
            v52 += 4;
            if ( !v51 )
              v69 = 24LL;
            v71 = *(_QWORD *)(*(_QWORD *)v69 + 40LL);
            v72 = (__int64)(v51 + 24);
            if ( !v51 )
              v72 = 32LL;
            *((_QWORD *)v70 + 1) = v71;
            v73 = *(_BYTE *)v72;
            v74 = (__int64)(v51 + 24);
            v75 = v73 | 8;
            if ( !v51 )
              v74 = 32LL;
            *(_BYTE *)v74 = v75;
          }
          v51 = v55;
        }
        while ( v55 != v16 );
        v86 = v54;
        v6 = v97;
        *(_QWORD *)&v85 = v53;
        *((_QWORD *)&v85 + 1) = v52;
      }
      CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&v82, a2);
    }
  }
LABEL_117:
  CResourceStateUpdateSerializer::~CResourceStateUpdateSerializer(&v82);
  return (unsigned int)v6;
}
