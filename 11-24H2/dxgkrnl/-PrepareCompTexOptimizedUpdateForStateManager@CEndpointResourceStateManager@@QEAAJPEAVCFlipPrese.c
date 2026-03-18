/*
 * XREFs of ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009F81C
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
 *     ?Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z @ 0x1400A16F0 (-Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareCompTexOptimizedUpdateForStateManager(
        CEndpointResourceStateManager *this,
        struct CFlipPresentUpdate *a2,
        struct FlipManagerObject *a3,
        unsigned __int64 a4)
{
  CEndpointResourceStateManager *v4; // r9
  char v5; // si
  signed int v7; // ebx
  int v8; // r8d
  __int64 v9; // r10
  signed int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  char *v13; // r14
  char *v14; // r13
  __int64 v15; // rdi
  __int64 Win32kImportTable; // rax
  _QWORD *v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  int v20; // eax
  struct CCompositionSwapchainBuffer *v21; // rdi
  int v22; // eax
  struct CBufferRealization *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  CEndpointResourceStateManager **v27; // r8
  _DWORD *v28; // r11
  _DWORD *v29; // rsi
  CEndpointResourceStateManager *v30; // rdi
  __int64 v31; // r9
  __int64 v32; // r10
  char v33; // al
  _DWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  char *v38; // rdi
  _DWORD *v39; // r13
  _DWORD *v40; // r15
  _DWORD *v41; // rbx
  char *v42; // r12
  __int64 v43; // r8
  __int64 v44; // r9
  _DWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rax
  _QWORD *v50; // r14
  CPoolBufferResource *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _DWORD *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  char v60; // cl
  __int64 v61; // rax
  char v62; // cl
  void *v64; // [rsp+38h] [rbp-69h] BYREF
  int v65; // [rsp+40h] [rbp-61h]
  __int128 v66; // [rsp+48h] [rbp-59h]
  __int128 v67; // [rsp+58h] [rbp-49h]
  _DWORD *v68; // [rsp+68h] [rbp-39h]
  __int64 v69; // [rsp+70h] [rbp-31h]
  __int64 v70; // [rsp+78h] [rbp-29h]
  int v71; // [rsp+80h] [rbp-21h]
  char *v72; // [rsp+88h] [rbp-19h]
  _DWORD v73[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v74; // [rsp+98h] [rbp-9h]
  __int64 v75; // [rsp+A0h] [rbp-1h]
  __int64 v76; // [rsp+A8h] [rbp+7h]
  __int64 v77; // [rsp+B0h] [rbp+Fh]
  struct CBufferRealization *v78; // [rsp+108h] [rbp+67h] BYREF
  struct CFlipPresentUpdate *v79; // [rsp+110h] [rbp+6Fh]
  struct FlipManagerObject *v80; // [rsp+118h] [rbp+77h]
  unsigned __int64 v81; // [rsp+120h] [rbp+7Fh]

  v81 = a4;
  v80 = a3;
  v79 = a2;
  v4 = *(CEndpointResourceStateManager **)this;
  v5 = 0;
  v64 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v7 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v8 = 0;
  v70 = 0LL;
  v71 = 0;
  do
  {
    if ( v4 == this )
      break;
    v9 = (__int64)v4 + 24;
    if ( !v4 )
      v9 = 32LL;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v10 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&v64, 0x10u, 0);
      v8 = HIDWORD(v69);
      v7 = v10;
    }
    if ( v7 >= 0 && (*(_BYTE *)v9 & 2) != 0 )
    {
      v11 = v8;
      v12 = v8 + 16;
      v8 = -1;
      if ( v12 >= v11 )
        v8 = v12;
      v7 = v12 < v11 ? 0xC0000095 : 0;
      HIDWORD(v69) = v8;
    }
    v4 = *(CEndpointResourceStateManager **)v4;
  }
  while ( v7 >= 0 );
  v13 = (char *)this + 16;
  v14 = (char *)*((_QWORD *)this + 2);
  v72 = (char *)this + 16;
  while ( v7 >= 0 )
  {
    if ( v14 == v13 )
    {
      LODWORD(v78) = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&v64, 0x62754346u);
      v7 = (int)v78;
      if ( (int)v78 >= 0 )
      {
        v27 = *(CEndpointResourceStateManager ***)this;
        if ( *(CEndpointResourceStateManager **)this != this )
        {
          v28 = (_DWORD *)*((_QWORD *)&v66 + 1);
          v29 = (_DWORD *)v66;
          do
          {
            v30 = *v27;
            v31 = (__int64)(v27 + 3);
            v32 = (__int64)(v27 + 2);
            if ( !v27 )
              v31 = 32LL;
            v33 = *(_BYTE *)v31;
            if ( (*(_BYTE *)v31 & 1) != 0 )
            {
              *v29 = 2;
              v34 = v29;
              v29 += 4;
              v35 = (__int64)(v27 + 2);
              if ( !v27 )
                v35 = 24LL;
              v36 = *(_QWORD *)v35;
              *((_QWORD *)v34 + 1) = *(_QWORD *)v35;
              ++*(_DWORD *)(v36 + 24);
              *(_BYTE *)v31 |= 4u;
              v33 = *(_BYTE *)v31;
            }
            if ( (v33 & 2) != 0 )
            {
              *v28 = 0;
              v37 = v28;
              v28 += 4;
              if ( !v27 )
                v32 = 24LL;
              *((_QWORD *)v37 + 1) = *(_QWORD *)(*(_QWORD *)v32 + 40LL);
              *(_BYTE *)v31 |= 8u;
            }
            v27 = (CEndpointResourceStateManager **)v30;
          }
          while ( v30 != this );
          v7 = (int)v78;
          v13 = (char *)this + 16;
          *((_QWORD *)&v66 + 1) = v28;
          *(_QWORD *)&v66 = v29;
        }
        v38 = (char *)*((_QWORD *)this + 2);
        if ( v38 != v13 )
        {
          v39 = (_DWORD *)*((_QWORD *)&v67 + 1);
          v40 = (_DWORD *)v67;
          v41 = v68;
          do
          {
            v42 = *(char **)v38;
            v43 = (__int64)(v38 + 24);
            v44 = (__int64)(v38 + 16);
            if ( !v38 )
              v43 = 32LL;
            if ( (*(_BYTE *)v43 & 1) != 0 )
            {
              *v40 = 3;
              v45 = v40;
              v40 += 4;
              v46 = (__int64)(v38 + 16);
              if ( !v38 )
                v46 = 24LL;
              v47 = *(_QWORD *)v46;
              *((_QWORD *)v45 + 1) = *(_QWORD *)v46;
              ++*(_DWORD *)(v47 + 24);
              *(_BYTE *)v43 |= 4u;
            }
            v48 = (__int64)(v38 + 56);
            if ( !v38 )
              v48 = 64LL;
            if ( (*(_BYTE *)v48 & 1) != 0 )
            {
              *v41 = 4;
              v49 = (__int64)(v38 + 40);
              v50 = v41;
              v41 += 10;
              if ( !v38 )
              {
                v49 = 48LL;
                v44 = 24LL;
              }
              v51 = *(CPoolBufferResource **)v49;
              v52 = (__int64)(v38 + 32);
              v50[1] = *(_QWORD *)(*(_QWORD *)v44 + 40LL);
              if ( !v38 )
                v52 = 40LL;
              v53 = *(_QWORD *)v52;
              v50[3] = *(_QWORD *)v52;
              if ( v53 )
                ++*(_DWORD *)(v53 + 8);
              v50[2] = v51;
              if ( v51 )
              {
                ++*((_DWORD *)v51 + 6);
                CPoolBufferResource::AddUsageReference(v51);
              }
              v54 = (__int64)(v38 + 48);
              if ( !v38 )
                v54 = 56LL;
              v50[4] = *(_QWORD *)v54;
              *(_BYTE *)v48 |= 2u;
              v13 = v72;
            }
            v55 = (__int64)(v38 + 24);
            if ( !v38 )
              v55 = 32LL;
            if ( (*(_BYTE *)v55 & 2) != 0 )
            {
              *v39 = 1;
              v56 = (__int64)(v38 + 16);
              v57 = v39;
              v39 += 4;
              if ( !v38 )
                v56 = 24LL;
              v58 = *(_QWORD *)(*(_QWORD *)v56 + 40LL);
              v59 = (__int64)(v38 + 24);
              if ( !v38 )
                v59 = 32LL;
              *((_QWORD *)v57 + 1) = v58;
              v60 = *(_BYTE *)v59;
              v61 = (__int64)(v38 + 24);
              v62 = v60 | 8;
              if ( !v38 )
                v61 = 32LL;
              *(_BYTE *)v61 = v62;
            }
            v38 = v42;
          }
          while ( v42 != v13 );
          v68 = v41;
          v7 = (int)v78;
          *(_QWORD *)&v67 = v40;
          *((_QWORD *)&v67 + 1) = v39;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&v64, v79);
      }
      break;
    }
    if ( (*(_BYTE *)(((unsigned __int64)(v14 - 8) & -(__int64)(v14 != 0LL)) + 0x20) & 1) != 0 )
      v7 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&v64, 0x10u, 0);
    if ( v7 < 0 )
      goto LABEL_53;
    if ( (*(_BYTE *)(((unsigned __int64)(v14 - 8) & -(__int64)(v14 != 0LL)) + 0x40) & 1) == 0 )
      goto LABEL_49;
    v7 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize((CResourceStateUpdateSerializer *)&v64, 0x28u, 0);
    if ( v7 < 0 )
      goto LABEL_53;
    v15 = *(_QWORD *)(((unsigned __int64)(v14 - 8) & -(__int64)(v14 != 0LL)) + 0x18);
    if ( !*(_QWORD *)(v15 + 48) )
      goto LABEL_49;
    Win32kImportTable = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(__int64))(Win32kImportTable + 264))(v15);
    v17 = *(_QWORD **)(((unsigned __int64)(v14 - 8) & -(__int64)(v14 != 0LL)) + 0x30);
    if ( v17 )
    {
      v18 = v17[4];
      if ( v18 )
      {
        v78 = 0LL;
        CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(v18, &v78);
        if ( v78 )
        {
          if ( *(_DWORD *)v78 != 10 && *(_DWORD *)v78 != 24 && *(_DWORD *)v78 != 28 && *(_DWORD *)v78 != 87 )
          {
            if ( *(_DWORD *)v78 != 103 && (unsigned int)(*(_DWORD *)v78 - 106) >= 2 )
            {
              v5 = 0;
              v7 = -1073741811;
              v78 = 0LL;
              goto LABEL_48;
            }
            v5 = 1;
          }
        }
      }
    }
    v19 = *(_QWORD *)(v15 + 40);
    v78 = 0LL;
    v20 = CCompositionSwapchainBuffer::Create(0, v80, v81, v19, &v78);
    v21 = v78;
    v7 = v20;
    if ( v20 < 0 )
    {
      v5 = 0;
    }
    else
    {
      if ( v17 )
      {
        v78 = 0LL;
        v77 = 0LL;
        v73[1] = 0;
        v73[0] = v5 != 0 ? 4 : 2;
        v74 = v17[7];
        v75 = v17[9];
        v76 = v17[5];
        v22 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v73, 1, &v78);
        v23 = v78;
        v7 = v22;
        if ( v22 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(struct CCompositionSwapchainBuffer *, struct CBufferRealization *))(*(_QWORD *)v21 + 216LL))(
                 v21,
                 v78);
          if ( v7 >= 0 )
            v23 = 0LL;
        }
        if ( v23 )
          (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v23)(v23, 1LL);
        v24 = DxgkGetWin32kImportTable();
        (*(void (__fastcall **)(_QWORD *, _QWORD))(v24 + 272))(v17, 0LL);
        v5 = 0;
        if ( v7 < 0 )
          goto LABEL_46;
      }
      else
      {
        v5 = 0;
      }
      v7 = CContentResourceState::RebindCompositionSurfaceBuffer(
             (CContentResource **)((unsigned __int64)(v14 - 8) & -(__int64)(v14 != 0LL)),
             v21);
      if ( v7 >= 0 )
        v21 = 0LL;
    }
LABEL_46:
    if ( v21 )
      (**(void (__fastcall ***)(struct CCompositionSwapchainBuffer *, __int64))v21)(v21, 1LL);
LABEL_48:
    v25 = DxgkGetWin32kImportTable();
    (*(void (**)(void))(v25 + 280))();
    if ( v7 >= 0 )
    {
LABEL_49:
      if ( (*(_BYTE *)(((unsigned __int64)(v14 - 8) & -(__int64)(v14 != 0LL)) + 0x20) & 2) != 0 )
      {
        v26 = -1;
        if ( (unsigned int)(HIDWORD(v70) + 16) >= HIDWORD(v70) )
          v26 = HIDWORD(v70) + 16;
        v7 = (unsigned int)(HIDWORD(v70) + 16) < HIDWORD(v70) ? 0xC0000095 : 0;
        HIDWORD(v70) = v26;
      }
    }
LABEL_53:
    v14 = *(char **)v14;
    v13 = (char *)this + 16;
  }
  CResourceStateUpdateSerializer::~CResourceStateUpdateSerializer(&v64);
  return (unsigned int)v7;
}
