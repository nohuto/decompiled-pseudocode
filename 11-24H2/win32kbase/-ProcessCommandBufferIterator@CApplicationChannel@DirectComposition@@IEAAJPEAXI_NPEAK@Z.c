/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1400B7070 (NtDCompositionProcessChannelBatchBuffer.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x14004AA6C (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 *     DirectComposition::Memory::Allocate @ 0x14004AC18 (DirectComposition--Memory--Allocate.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x14004AFA4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ??0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x140073588 (--0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z.c)
 *     ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400737EC (--0-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEA.c)
 *     CreateSharedResourceObject @ 0x14007390C (CreateSharedResourceObject.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x140073A80 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400756A8 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x140075778 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140075FFC (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x14007611C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x140076564 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x14007FB9C (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x140080140 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400802CC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x14008093C (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x140080C14 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1400B857C (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1400BD428 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1400DE33C (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1400E3800 (McTemplateK0qp_EtwWriteTransfer.c)
 *     ?ActivateChannelTrigger@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400E8DB8 (-ActivateChannelTrigger@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400F01DC (McTemplateK0x_EtwWriteTransfer.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1400FFF64 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x140111210 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x140146B50 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        unsigned __int64 this,
        unsigned int *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  unsigned int v5; // r10d
  unsigned int *v6; // r11
  DirectComposition::CApplicationChannel *v7; // r13
  unsigned __int64 v8; // rdi
  struct DirectComposition::CResourceMarshaler *v9; // r14
  signed int ExternalPrivateResource; // ebx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  void *v14; // rdi
  void *v15; // r14
  size_t v16; // rsi
  void *v17; // rax
  unsigned int v18; // r15d
  unsigned int v19; // edi
  unsigned int v20; // r14d
  struct DirectComposition::CResourceMarshaler *v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // edi
  void *v24; // rcx
  unsigned int v25; // esi
  signed __int32 v26; // eax
  PVOID v27; // rcx
  unsigned int v28; // r15d
  struct DirectComposition::CResourceMarshaler *v29; // rsi
  __int64 v30; // rax
  signed __int32 v31; // eax
  DirectComposition::CVisualTargetMarshaler *v32; // rax
  _DWORD *v33; // r10
  struct DirectComposition::CResourceMarshaler *v34; // rax
  void *v35; // rax
  __int64 v36; // rdx
  char v37; // si
  char v38; // di
  unsigned int *v39; // r13
  unsigned __int64 v40; // r12
  unsigned int v41; // ecx
  unsigned __int64 v42; // rdx
  __int64 v43; // r15
  char v44; // si
  LARGE_INTEGER v45; // rdi
  LARGE_INTEGER PerformanceCounter; // r8
  __int64 v47; // rdx
  int v48; // r9d
  __int64 v49; // r14
  unsigned int v50; // r15d
  unsigned int v51; // esi
  unsigned int v52; // ebx
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  struct DirectComposition::CInteractionMarshaler *v55; // rdi
  int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // r14d
  unsigned __int64 v59; // rax
  void *v60; // rax
  void *v61; // rsi
  const void *v62; // rdx
  _OWORD *v63; // rax
  int v64; // eax
  unsigned int v65; // r14d
  unsigned __int64 v66; // rax
  void *v67; // rax
  void *v68; // rsi
  const void *v69; // rdx
  __int64 v70; // r8
  unsigned __int64 v71; // rdi
  bool v72; // zf
  void **Handle; // rbx
  unsigned int v74; // ecx
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  unsigned int v77; // ecx
  unsigned int v78; // r15d
  unsigned int v79; // esi
  _QWORD *v80; // rbx
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rdi
  struct DirectComposition::CResourceMarshaler *v83; // rdi
  unsigned __int8 (__fastcall *v84)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD); // rbx
  unsigned int v85; // eax
  __int64 v86; // rdx
  unsigned __int64 v87; // rdi
  __int64 v88; // r12
  unsigned __int64 v89; // rdi
  __int64 v90; // rdi
  __int64 *v91; // rsi
  __int64 v92; // r14
  unsigned __int64 v93; // r14
  unsigned __int64 v94; // r15
  __int64 v95; // rcx
  size_t v96; // r8
  __int64 v97; // rdx
  unsigned int v98; // esi
  unsigned __int64 v99; // rdi
  char v100; // al
  __int64 v101; // r8
  __int64 v102; // rdx
  unsigned __int64 v103; // rdi
  unsigned int *v104; // r8
  unsigned int *v105; // r11
  unsigned int v106; // r10d
  unsigned __int64 v107; // rsi
  unsigned int *v108; // rbx
  unsigned int v109; // r15d
  char *v110; // rdi
  unsigned __int64 v111; // rdx
  unsigned int v112; // r8d
  __int64 v113; // rcx
  struct DirectComposition::CResourceMarshaler *v114; // rdx
  unsigned int *v115; // rdx
  const unsigned int *v116; // r11
  unsigned int v117; // r10d
  unsigned __int64 v118; // r8
  unsigned int v119; // esi
  unsigned int v120; // edi
  const struct tagMsgRoutingInfo *v121; // r14
  HWND v122; // r15
  unsigned int v123; // ecx
  unsigned __int64 v124; // rdx
  DirectComposition::CVisualMarshaler *v125; // rax
  __int64 v126; // rsi
  unsigned int v127; // ecx
  unsigned __int64 v128; // rdx
  DirectComposition::CVisualMarshaler *v129; // rax
  unsigned int *v130; // rdx
  unsigned int *v131; // r11
  unsigned int v132; // r10d
  unsigned __int64 v133; // r8
  unsigned int v134; // r10d
  unsigned __int64 v135; // rdx
  struct DirectComposition::CResourceMarshaler *v136; // rdx
  __int64 v137; // r9
  unsigned int v138; // esi
  unsigned __int64 v139; // rdi
  unsigned int v141; // [rsp+40h] [rbp-D8h]
  unsigned int v142; // [rsp+44h] [rbp-D4h]
  char v143; // [rsp+48h] [rbp-D0h] BYREF
  char v144[7]; // [rsp+49h] [rbp-CFh] BYREF
  unsigned int *v145; // [rsp+50h] [rbp-C8h]
  char v146; // [rsp+58h] [rbp-C0h] BYREF
  char v147; // [rsp+59h] [rbp-BFh] BYREF
  char v148; // [rsp+5Ah] [rbp-BEh] BYREF
  char v149; // [rsp+5Bh] [rbp-BDh] BYREF
  char v150[4]; // [rsp+5Ch] [rbp-BCh] BYREF
  PVOID v151; // [rsp+60h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int *v153; // [rsp+70h] [rbp-A8h]
  unsigned int v154; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v155; // [rsp+80h] [rbp-98h]
  PVOID v156; // [rsp+88h] [rbp-90h] BYREF
  struct DirectComposition::CInteractionMarshaler *v157; // [rsp+90h] [rbp-88h] BYREF
  struct DirectComposition::CResourceMarshaler *v158; // [rsp+98h] [rbp-80h] BYREF
  struct DirectComposition::CResourceMarshaler *v159; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v160; // [rsp+A8h] [rbp-70h]
  __int64 v161; // [rsp+B0h] [rbp-68h]
  __int64 v162; // [rsp+B8h] [rbp-60h]
  _QWORD Src[2]; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v164; // [rsp+D0h] [rbp-48h]
  union _SLIST_HEADER *v165; // [rsp+120h] [rbp+8h]

  v165 = (union _SLIST_HEADER *)this;
  v5 = a3;
  v142 = a3;
  v6 = a2;
  v145 = a2;
  v7 = (DirectComposition::CApplicationChannel *)this;
  v8 = this;
  v160 = this;
  v9 = 0LL;
  ExternalPrivateResource = 0;
LABEL_2:
  v11 = 1LL;
  v12 = 0x140000000uLL;
  while ( ExternalPrivateResource >= 0 && v5 >= 4 )
  {
    ++*a5;
    v13 = *v6;
    v141 = v13;
    v154 = *v6;
    if ( (_DWORD)v13 == 11 )
    {
      this = (unsigned __int64)v6;
      if ( v5 < 0x18 )
      {
LABEL_365:
        ExternalPrivateResource = -1073741811;
        v18 = v13;
        goto LABEL_384;
      }
      v145 = v6 + 6;
      v142 = v5 - 24;
      v137 = *((_QWORD *)v6 + 2);
      v138 = v6[2];
      this = v6[1];
      v144[0] = 0;
      v139 = (unsigned int)(this - 1);
      if ( (_DWORD)this && v139 < *((_QWORD *)v7 + 11) )
        v55 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v7 + 12) * v139 + *((_QWORD *)v7 + 8));
      else
        v55 = 0LL;
      if ( !v55 )
        goto LABEL_47;
      if ( *((_DWORD *)v55 + 5) != (*((_DWORD *)v55 + 6) ^ ~(_DWORD)v55) )
        KeBugCheck(0xC000A003);
      ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v55 + 240LL))(
                                  v55,
                                  v7,
                                  v138,
                                  v137,
                                  v144);
      if ( ExternalPrivateResource >= 0
        && *((_QWORD *)v55 + 5)
        && DirectComposition::CApplicationChannel::UnbindAnimation(v7, v55, v138) )
      {
        v100 = 1;
        v144[0] = 1;
      }
      else
      {
        v100 = v144[0];
      }
LABEL_378:
      if ( ExternalPrivateResource < 0 )
        goto LABEL_383;
      v72 = v100 == 0;
LABEL_380:
      if ( v72 )
        goto LABEL_383;
LABEL_381:
      v114 = v55;
LABEL_382:
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v7, v114);
    }
    else if ( (_DWORD)v13 == 15 )
    {
      v130 = v6;
      if ( v5 >= 0x10 )
      {
        v131 = v6 + 4;
        v145 = v131;
        v132 = v5 - 16;
        v142 = v132;
        v133 = v130[3];
        this = ((_DWORD)v133 + 3) & 0xFFFFFFFC;
        if ( (unsigned int)this < (unsigned int)v133 || v132 < (unsigned int)this )
        {
LABEL_23:
          ExternalPrivateResource = -1073741811;
          goto LABEL_383;
        }
        v145 = (unsigned int *)((char *)v131 + (unsigned int)this);
        v142 = v132 - this;
        v134 = v130[2];
        this = v130[1];
        v135 = (unsigned int)(this - 1);
        if ( (_DWORD)this && v135 < *((_QWORD *)v7 + 11) )
          v136 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)v7 + 12) * v135 + *((_QWORD *)v7 + 8));
        else
          v136 = 0LL;
        if ( v136 )
        {
          if ( *((_DWORD *)v136 + 5) != (*((_DWORD *)v136 + 6) ^ ~(_DWORD)v136) )
LABEL_362:
            KeBugCheck(0xC000A003);
          ExternalPrivateResource = DirectComposition::CApplicationChannel::SetResourceBufferProperty(
                                      v7,
                                      v136,
                                      v134,
                                      v131,
                                      v133);
          goto LABEL_383;
        }
LABEL_47:
        ExternalPrivateResource = -1073741790;
        goto LABEL_383;
      }
      ExternalPrivateResource = -1073741811;
    }
    else
    {
      switch ( (int)v13 )
      {
        case 0:
          v14 = 0LL;
          v153 = 0LL;
          if ( v5 >= 0x18 && a4 )
          {
            v145 = v6 + 6;
            v142 = v5 - 24;
            v15 = (void *)*((_QWORD *)v6 + 1);
            v16 = v6[4];
            LODWORD(v155) = v16;
            if ( !(_DWORD)v16 )
              ExternalPrivateResource = -1073741811;
            if ( ExternalPrivateResource < 0 )
            {
              v18 = v13;
            }
            else
            {
              v17 = (void *)DirectComposition::Memory::Allocate((unsigned int)v16, 0x66624344u, 0x140000000LL, 1);
              v14 = v17;
              v153 = (unsigned int *)v17;
              if ( !v17 )
              {
                ExternalPrivateResource = -1073741801;
                v18 = v141;
                goto LABEL_20;
              }
              RtlCopyFromUser(v17, v15, v16);
              v18 = v141;
            }
            if ( ExternalPrivateResource >= 0 )
              ExternalPrivateResource = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
                                          v7,
                                          v14,
                                          v16,
                                          0,
                                          a5);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
          }
LABEL_20:
          if ( v14 )
            GreDeleteFastMutex((char *)v14);
          goto LABEL_384;
        case 1:
          if ( v5 < 8 )
            goto LABEL_23;
          v145 = v6 + 2;
          v142 = v5 - 8;
          ExternalPrivateResource = DirectComposition::CApplicationChannel::ActivateChannelTrigger(v7, v6[1]);
          break;
        case 2:
          if ( v5 < 0x10 )
            goto LABEL_23;
          v19 = v6[2];
          if ( v19 - 1 > 0xC0 )
            goto LABEL_23;
          v145 = v6 + 4;
          v142 = v5 - 16;
          if ( !v6[3] )
          {
            ExternalPrivateResource = DirectComposition::CApplicationChannel::CreateExternalPrivateResource(
                                        v7,
                                        v6[1],
                                        v19);
            break;
          }
          v20 = v6[1];
          v21 = 0LL;
          v158 = 0LL;
          v156 = 0LL;
          if ( v19 == 184 )
            goto LABEL_32;
          v22 = v19;
          if ( v19 >= 0xC2 )
            goto LABEL_32;
          do
          {
            if ( (_DWORD)v22 == 184 )
            {
              ExternalPrivateResource = -1073741811;
              goto LABEL_34;
            }
            LODWORD(v22) = dword_140270F80[v22];
          }
          while ( (unsigned int)v22 < 0xC2 );
LABEL_32:
          ExternalPrivateResource = CreateSharedResourceObject(
                                      (void *)v19,
                                      (struct DirectComposition::ResourceObject **)&v156);
          if ( ExternalPrivateResource >= 0 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)v156 + 15, 1, 0);
            ExternalPrivateResource = DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
                                        v7,
                                        (DirectComposition *)v19,
                                        v156,
                                        &v158);
            v21 = v158;
          }
LABEL_34:
          if ( ExternalPrivateResource >= 0 )
            ExternalPrivateResource = DirectComposition::CApplicationChannel::RegisterExternalResource(
                                        (__int64)v7,
                                        v21,
                                        v20,
                                        v19,
                                        1);
          break;
        case 3:
          this = (unsigned __int64)v6;
          if ( v5 < 0x18 )
            goto LABEL_23;
          v23 = v6[4];
          if ( v23 - 1 > 0xC0 )
            goto LABEL_23;
          v145 = v6 + 6;
          v142 = v5 - 24;
          v24 = (void *)*((_QWORD *)v6 + 1);
          if ( v6[5] )
          {
            v25 = v6[1];
            v159 = 0LL;
            Object = 0LL;
            ExternalPrivateResource = DirectComposition::ResourceObject::ResolveHandle(
                                        v24,
                                        2u,
                                        1,
                                        (struct DirectComposition::ResourceObject **)&Object);
            if ( ExternalPrivateResource >= 0 )
            {
              this = (unsigned __int64)Object;
              if ( *((_DWORD *)Object + 9) != v23 )
                goto LABEL_55;
              v26 = _InterlockedCompareExchange((volatile signed __int32 *)Object + 15, 1, 0);
              LOBYTE(this) = v26 == 0;
              if ( v26 )
              {
                v27 = Object;
LABEL_46:
                ObfDereferenceObject(v27);
                goto LABEL_47;
              }
            }
            if ( ExternalPrivateResource >= 0 )
            {
              ExternalPrivateResource = DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
                                          v7,
                                          (DirectComposition *)v23,
                                          Object,
                                          &v159);
              if ( ExternalPrivateResource >= 0 )
                ExternalPrivateResource = DirectComposition::CApplicationChannel::RegisterExternalResource(
                                            (__int64)v7,
                                            v159,
                                            v25,
                                            v23,
                                            2);
            }
          }
          else
          {
            v28 = v6[1];
            v29 = 0LL;
            v151 = 0LL;
            ExternalPrivateResource = DirectComposition::ResourceObject::ResolveHandle(
                                        v24,
                                        1u,
                                        1,
                                        (struct DirectComposition::ResourceObject **)&v151);
            if ( ExternalPrivateResource >= 0 )
            {
              this = (unsigned __int64)v151;
              v30 = *((unsigned int *)v151 + 9);
              if ( (unsigned int)v30 >= 0xC2 )
              {
LABEL_55:
                ObfDereferenceObject((PVOID)this);
                ExternalPrivateResource = -1073741811;
                break;
              }
              while ( (_DWORD)v30 != v23 )
              {
                LODWORD(v30) = dword_140270F80[v30];
                if ( (unsigned int)v30 >= 0xC2 )
                  goto LABEL_55;
              }
              if ( v23 == 184 )
              {
                _InterlockedCompareExchange((volatile signed __int32 *)v151 + 14, 2, 0);
                v31 = _InterlockedCompareExchange((volatile signed __int32 *)(this + 56), 3, 2);
                LOBYTE(this) = v31 == 2;
                if ( v31 != 2 )
                  goto LABEL_58;
              }
              else
              {
                _InterlockedCompareExchange((volatile signed __int32 *)v151 + 14, 1, 0);
                this = *(unsigned int *)(this + 56);
                if ( (_DWORD)this != 1 )
                {
LABEL_58:
                  v27 = v151;
                  goto LABEL_46;
                }
              }
            }
            if ( ExternalPrivateResource >= 0 )
            {
              if ( v23 == 184 )
              {
                v32 = (DirectComposition::CVisualTargetMarshaler *)DirectComposition::Memory::AllocateAndClear(
                                                                     0x48uLL,
                                                                     0x74764344u,
                                                                     1);
                v33 = v151;
                if ( v32 )
                {
                  v34 = (struct DirectComposition::CResourceMarshaler *)DirectComposition::CVisualTargetMarshaler::CVisualTargetMarshaler(
                                                                          v32,
                                                                          (const struct DirectComposition::CSharedSystemResource *)((char *)v151 + 24));
                  goto LABEL_66;
                }
              }
              else
              {
                v35 = DirectComposition::Memory::AllocateAndClear(0x40uLL, 0x30734344u, 1);
                v33 = v151;
                if ( v35 )
                {
                  v34 = (struct DirectComposition::CResourceMarshaler *)DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>(
                                                                          (__int64)v35,
                                                                          (__int64)v151 + 24,
                                                                          v23);
LABEL_66:
                  v29 = v34;
                }
              }
              if ( v29 )
              {
                ExternalPrivateResource = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
                                            v7,
                                            v29);
                v9 = v29;
                this = 0LL;
                if ( ExternalPrivateResource < 0 )
                  v9 = 0LL;
              }
              else
              {
                if ( v23 == 184 )
                  v33[14] = 2;
                ObfDereferenceObject(v33);
                ExternalPrivateResource = -1073741801;
              }
              if ( ExternalPrivateResource >= 0 )
                ExternalPrivateResource = DirectComposition::CApplicationChannel::RegisterExternalResource(
                                            (__int64)v7,
                                            v9,
                                            v28,
                                            v23,
                                            2);
              break;
            }
          }
          break;
        case 4:
          if ( v5 >= 8 )
          {
            v145 = v6 + 2;
            v142 = v5 - 8;
            ExternalPrivateResource = DirectComposition::CApplicationChannel::ReleaseResource((size_t *)v7, v6[1]);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          break;
        case 5:
          this = (unsigned __int64)v6;
          if ( v5 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 4;
          v142 = v5 - 16;
          v36 = *((_QWORD *)v6 + 1);
          v37 = 0;
          ExternalPrivateResource = 0;
          this = v6[1];
          if ( !(_DWORD)this )
          {
            if ( *((_BYTE *)v7 + 60) == ((_DWORD)v36 != 0) )
              goto LABEL_94;
            *((_BYTE *)v7 + 60) = (_DWORD)v36 != 0;
            *((_DWORD *)v7 + 14) |= 1u;
            goto LABEL_93;
          }
          this = (unsigned int)(this - 1);
          if ( (_DWORD)this )
          {
            if ( (_DWORD)this != 1 )
            {
              ExternalPrivateResource = -1073741811;
              goto LABEL_94;
            }
            if ( *((_BYTE *)v7 + 62) != ((_DWORD)v36 != 0) )
            {
              *((_BYTE *)v7 + 62) = (_DWORD)v36 != 0;
              *((_DWORD *)v7 + 14) |= 4u;
LABEL_93:
              v37 = 1;
            }
          }
          else
          {
            v38 = (_DWORD)v36 != 0;
            if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *, __int64, unsigned __int64, __int64))(*(_QWORD *)v7 + 8LL))(
                   v7,
                   v36,
                   0x140000000uLL,
                   1LL) != 2 )
            {
              ExternalPrivateResource = -1073741790;
              goto LABEL_94;
            }
            if ( *((_BYTE *)v7 + 61) != v38 )
            {
              *((_BYTE *)v7 + 61) = v38;
              *((_DWORD *)v7 + 14) |= 2u;
              goto LABEL_93;
            }
          }
LABEL_94:
          if ( ExternalPrivateResource >= 0 && v37 )
            *((_BYTE *)v7 + 264) |= 1u;
          break;
        case 6:
          v39 = v6;
          v153 = v6;
          if ( v5 < 0x18 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 6;
          v142 = v5 - 24;
          v40 = *((_QWORD *)v6 + 1);
          v155 = v40;
          v41 = v6[1];
          ExternalPrivateResource = 0;
          v42 = v41 - 1;
          if ( v41 && v42 < v165[5].Region )
          {
            v42 *= v165[6].Alignment;
            this = *(_QWORD *)(v42 + v165[4].Alignment);
          }
          else
          {
            this = 0LL;
          }
          if ( this )
          {
            if ( *(_DWORD *)(this + 20) != (*(_DWORD *)(this + 24) ^ ~(_DWORD)this) )
              goto LABEL_362;
            v43 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)this + 104LL))(
                    this,
                    v42,
                    0x140000000uLL,
                    1LL);
            if ( v43 )
            {
              DirectComposition::CApplicationChannel::ProcessReturnedBatches(v165);
              v44 = 0;
              v45.QuadPart = 0LL;
              this = *(_QWORD *)(v43 + 72);
              if ( (*(_DWORD *)(this + 24) & 3) == 0 )
              {
                v44 = (*(_BYTE *)(v43 + 200) & 4) != 0;
                v45 = *(LARGE_INTEGER *)(v43 + 216);
                v9 = *(struct DirectComposition::CResourceMarshaler **)(v43 + 208);
                goto LABEL_128;
              }
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v47 = *(_QWORD *)(v43 + 72);
              if ( !v47 )
              {
LABEL_128:
                if ( !v44 && v40 > v45.QuadPart )
                  v9 = (struct DirectComposition::CResourceMarshaler *)((char *)v9 + v40 - v45.QuadPart);
                *((_QWORD *)v39 + 2) = v9;
                break;
              }
              while ( 2 )
              {
                this = *(_QWORD *)(v43 + 112);
                v44 = (*(_BYTE *)(v43 + 200) & 4) != 0;
                v9 = *(struct DirectComposition::CResourceMarshaler **)(v43 + 208);
                v45 = *(LARGE_INTEGER *)(v43 + 216);
                v48 = *(_DWORD *)(v47 + 24);
                if ( (v48 & 4) != 0 )
                {
                  if ( !*(_QWORD *)(v43 + 112) && !*(_QWORD *)(v43 + 144) )
                    this = PerformanceCounter.QuadPart;
                  v45.QuadPart = this;
                }
                if ( (v48 & 8) != 0 )
                {
                  if ( PerformanceCounter.QuadPart < this )
                    goto LABEL_121;
                  if ( (*(_BYTE *)(v43 + 200) & 4) != 0 )
                    goto LABEL_394;
                  if ( *(_BYTE *)(v47 + 28) )
                  {
                    v9 = (struct DirectComposition::CResourceMarshaler *)(PerformanceCounter.QuadPart
                                                                        - v45.QuadPart
                                                                        + *(_QWORD *)(v43 + 208));
                    goto LABEL_121;
                  }
                  if ( (*(_BYTE *)(v43 + 200) & 4) != 0 )
                  {
LABEL_394:
                    if ( !*(_BYTE *)(v47 + 28) )
                      v45 = PerformanceCounter;
                  }
LABEL_121:
                  v44 = *(_BYTE *)(v47 + 28);
                }
                if ( (v48 & 0x10) != 0 )
                {
                  v9 = *(struct DirectComposition::CResourceMarshaler **)(v47 + 32);
                  if ( PerformanceCounter.QuadPart >= this )
                    v45 = PerformanceCounter;
                }
                v47 = *(_QWORD *)(v47 + 16);
                if ( !v47 )
                {
                  v39 = v153;
                  v40 = v155;
                  goto LABEL_128;
                }
                continue;
              }
            }
          }
          ExternalPrivateResource = -1073741811;
          break;
        case 7:
          if ( v5 < 0x18 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 6;
          v142 = v5 - 24;
          v49 = *((_QWORD *)v6 + 2);
          v50 = v6[3];
          v51 = v6[2];
          v52 = v6[1];
          if ( !CInputManager::OwnsPointerId(*((_DWORD *)v7 + 684), v50) )
            goto LABEL_47;
          v53 = v52 - 1;
          if ( v52 && v53 < *((_QWORD *)v7 + 11) )
            this = *(_QWORD *)(*((_QWORD *)v7 + 12) * v53 + *((_QWORD *)v7 + 8));
          else
            this = 0LL;
          if ( !this )
            goto LABEL_23;
          if ( *(_DWORD *)(this + 20) != (*(_DWORD *)(this + 24) ^ ~(_DWORD)this) )
            goto LABEL_362;
          v54 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)this + 152LL))(this);
          v55 = (struct DirectComposition::CInteractionMarshaler *)v54;
          if ( !v54 )
            goto LABEL_23;
          if ( v51 )
          {
            if ( v51 != 1 )
            {
              ExternalPrivateResource = -1073741811;
              goto LABEL_182;
            }
            *(_QWORD *)&v164 = v50;
            *((_QWORD *)&v164 + 1) = v49;
            ExternalPrivateResource = 0;
            v56 = *(_DWORD *)(v54 + 304);
            this = *((unsigned int *)v55 + 77);
            if ( v56 != (_DWORD)this )
              goto LABEL_160;
            v57 = v56 + 1;
            v58 = -1;
            if ( v57 )
              v58 = v57;
            ExternalPrivateResource = v57 == 0 ? 0xC0000095 : 0;
            if ( v57 && v58 > (unsigned int)this )
            {
              this = v58;
              v59 = 8LL * v58;
              v161 = (v58 * (unsigned __int128)8uLL) >> 64;
              if ( is_mul_ok(v58, 8uLL) )
              {
                ExternalPrivateResource = 0;
              }
              else
              {
                v59 = -1LL;
                ExternalPrivateResource = -1073741675;
              }
              if ( ExternalPrivateResource >= 0 )
              {
                v60 = (void *)Win32AllocPoolImpl(256LL, v59, 0x77707355u);
                v61 = v60;
                if ( v60 )
                {
                  v62 = (const void *)*((_QWORD *)v55 + 37);
                  if ( v62 )
                  {
                    memmove(v60, v62, 8LL * *((unsigned int *)v55 + 76));
                    GreDeleteFastMutex(*((char **)v55 + 37));
                  }
                  *((_QWORD *)v55 + 37) = v61;
                  *((_DWORD *)v55 + 77) = v58;
                }
                else
                {
                  ExternalPrivateResource = -1073741801;
                }
                goto LABEL_160;
              }
            }
            else
            {
LABEL_160:
              if ( ExternalPrivateResource >= 0 && *((_DWORD *)v55 + 76) >= *((_DWORD *)v55 + 77) )
                ExternalPrivateResource = -1073741823;
            }
            if ( ExternalPrivateResource < 0 )
              break;
            v63 = (_OWORD *)Win32AllocPoolZInitImpl(256LL, 0x10uLL, 0x32644344u);
            if ( v63 )
            {
              *v63 = v164;
              this = *((unsigned int *)v55 + 76);
              *(_QWORD *)(*((_QWORD *)v55 + 37) + 8 * this) = v63;
              ++*((_DWORD *)v55 + 76);
            }
            else
            {
              ExternalPrivateResource = -1073741801;
            }
            goto LABEL_182;
          }
          v64 = *(_DWORD *)(v54 + 288) + 1;
          v65 = -1;
          if ( v64 )
            v65 = v64;
          ExternalPrivateResource = v64 == 0 ? 0xC0000095 : 0;
          if ( v64 && v65 > *((_DWORD *)v55 + 73) )
          {
            this = v65;
            v66 = 4LL * v65;
            v162 = (v65 * (unsigned __int128)4uLL) >> 64;
            if ( is_mul_ok(v65, 4uLL) )
            {
              ExternalPrivateResource = 0;
            }
            else
            {
              v66 = -1LL;
              ExternalPrivateResource = -1073741675;
            }
            if ( ExternalPrivateResource < 0 )
              break;
            v67 = (void *)Win32AllocPoolImpl(256LL, v66, 0x77707355u);
            v68 = v67;
            if ( v67 )
            {
              v69 = (const void *)*((_QWORD *)v55 + 35);
              if ( v69 )
              {
                memmove(v67, v69, 4LL * *((unsigned int *)v55 + 72));
                GreDeleteFastMutex(*((char **)v55 + 35));
              }
              *((_QWORD *)v55 + 35) = v68;
              *((_DWORD *)v55 + 73) = v65;
            }
            else
            {
              ExternalPrivateResource = -1073741801;
            }
          }
          if ( ExternalPrivateResource < 0 )
            break;
          this = *((unsigned int *)v55 + 72);
          *(_DWORD *)(*((_QWORD *)v55 + 35) + 4 * this) = v50;
          ++*((_DWORD *)v55 + 72);
          *((_DWORD *)v55 + 4) |= 0x80u;
LABEL_182:
          if ( ExternalPrivateResource < 0 )
            break;
          goto LABEL_381;
        case 8:
          this = (unsigned __int64)v6;
          if ( v5 < 0xC )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 3;
          v142 = v5 - 12;
          v70 = v6[2];
          this = v6[1];
          v146 = 0;
          v71 = (unsigned int)(this - 1);
          if ( (_DWORD)this && v71 < *((_QWORD *)v7 + 11) )
            v55 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v7 + 12) * v71 + *((_QWORD *)v7 + 8));
          else
            v55 = 0LL;
          if ( !v55 )
            goto LABEL_47;
          if ( *((_DWORD *)v55 + 5) != (*((_DWORD *)v55 + 6) ^ ~(_DWORD)v55) )
            KeBugCheck(0xC000A003);
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(*(_QWORD *)v55 + 232LL))(
                                      v55,
                                      v7,
                                      v70,
                                      &v146);
          if ( ExternalPrivateResource < 0 )
            break;
          v72 = v146 == 0;
          goto LABEL_380;
        case 9:
          this = (unsigned __int64)v6;
          if ( v5 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 4;
          v142 = v5 - 16;
          Handle = (void **)(v6 + 2);
          v74 = v6[1];
          v75 = v74 - 1;
          if ( v74 && v75 < *((_QWORD *)v7 + 11) )
          {
            v75 *= *((_QWORD *)v7 + 12);
            this = *(_QWORD *)(v75 + *((_QWORD *)v7 + 8));
          }
          else
          {
            this = 0LL;
          }
          if ( !this )
            goto LABEL_47;
          if ( *(_DWORD *)(this + 20) != (*(_DWORD *)(this + 24) ^ ~(_DWORD)this) )
            goto LABEL_362;
          v76 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)this + 72LL))(
                  this,
                  v75,
                  0x140000000uLL,
                  1LL);
          if ( v76 )
          {
            *Handle = (void *)-1LL;
            ExternalPrivateResource = ObOpenObjectByPointer(
                                        (PVOID)(v76 - 24),
                                        0x40u,
                                        0LL,
                                        3u,
                                        ExCompositionObjectType,
                                        0,
                                        Handle);
          }
          else
          {
            ExternalPrivateResource = -1073741637;
          }
          break;
        case 10:
          this = (unsigned __int64)v6;
          if ( v5 < 0xC )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 3;
          v142 = v5 - 12;
          v86 = v6[2];
          this = v6[1];
          v147 = 0;
          v87 = (unsigned int)(this - 1);
          if ( (_DWORD)this && v87 < *((_QWORD *)v7 + 11) )
            v55 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v7 + 12) * v87 + *((_QWORD *)v7 + 8));
          else
            v55 = 0LL;
          if ( !v55 )
            goto LABEL_47;
          if ( *((_DWORD *)v55 + 5) != (*((_DWORD *)v55 + 6) ^ ~(_DWORD)v55) )
            KeBugCheck(0xC000A003);
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, __int64, char *, __int64))(*(_QWORD *)v55 + 304LL))(
                                      v55,
                                      v86,
                                      &v147,
                                      1LL);
          if ( ExternalPrivateResource < 0 )
            break;
          v72 = v147 == 0;
          goto LABEL_380;
        case 12:
          this = (unsigned __int64)v6;
          if ( v5 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 4;
          v142 = v5 - 16;
          v98 = v6[2];
          this = v6[1];
          v143 = 0;
          v99 = (unsigned int)(this - 1);
          if ( (_DWORD)this && v99 < *((_QWORD *)v7 + 11) )
            v55 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v7 + 12) * v99 + *((_QWORD *)v7 + 8));
          else
            v55 = 0LL;
          if ( !v55 )
            goto LABEL_47;
          if ( *((_DWORD *)v55 + 5) != (*((_DWORD *)v55 + 6) ^ ~(_DWORD)v55) )
            KeBugCheck(0xC000A003);
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, _QWORD, unsigned __int64, char *))(*(_QWORD *)v55 + 248LL))(
                                      v55,
                                      v98,
                                      0x140000000uLL,
                                      &v143);
          if ( ExternalPrivateResource >= 0
            && *((_QWORD *)v55 + 5)
            && DirectComposition::CApplicationChannel::UnbindAnimation(v7, v55, v98) )
          {
            v100 = 1;
            v143 = 1;
          }
          else
          {
            v100 = v143;
          }
          goto LABEL_378;
        case 13:
          this = (unsigned __int64)v6;
          if ( v5 < 0x18 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 6;
          v142 = v5 - 24;
          v101 = *((_QWORD *)v6 + 2);
          v102 = v6[2];
          this = v6[1];
          v148 = 0;
          v103 = (unsigned int)(this - 1);
          if ( (_DWORD)this && v103 < *((_QWORD *)v7 + 11) )
            v55 = *(struct DirectComposition::CInteractionMarshaler **)(*((_QWORD *)v7 + 12) * v103 + *((_QWORD *)v7 + 8));
          else
            v55 = 0LL;
          if ( !v55 )
            goto LABEL_47;
          if ( *((_DWORD *)v55 + 5) != (*((_DWORD *)v55 + 6) ^ ~(_DWORD)v55) )
            KeBugCheck(0xC000A003);
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, __int64, __int64, char *))(*(_QWORD *)v55 + 264LL))(
                                      v55,
                                      v102,
                                      v101,
                                      &v148);
          if ( ExternalPrivateResource < 0 )
            break;
          v72 = v148 == 0;
          goto LABEL_380;
        case 14:
          v104 = v6;
          if ( v5 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v105 = v6 + 4;
          v145 = v105;
          v106 = v5 - 16;
          v142 = v106;
          v107 = v104[3];
          Src[1] = (v104[3] * (unsigned __int128)8uLL) >> 64;
          this = 8 * v107;
          if ( is_mul_ok(v107, 8uLL) )
          {
            ExternalPrivateResource = 0;
          }
          else
          {
            this = -1LL;
            ExternalPrivateResource = -1073741675;
          }
          if ( ExternalPrivateResource < 0 )
            break;
          if ( v106 < this )
          {
            ExternalPrivateResource = -1073741811;
            break;
          }
          v108 = v105;
          v145 = (unsigned int *)((char *)v105 + this);
          v142 = v106 - this;
          v109 = v104[2];
          this = v104[1];
          v149 = 0;
          v110 = 0LL;
          v111 = (unsigned int)(this - 1);
          if ( (_DWORD)this && v111 < *((_QWORD *)v7 + 11) )
            v9 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)v7 + 12) * v111 + *((_QWORD *)v7 + 8));
          if ( !v9 )
          {
            ExternalPrivateResource = -1073741790;
            goto LABEL_300;
          }
          if ( *((_DWORD *)v9 + 5) != (*((_DWORD *)v9 + 6) ^ ~(_DWORD)v9) )
            KeBugCheck(0xC000A003);
          if ( v107 )
          {
            v110 = (char *)DirectComposition::Memory::Allocate(8 * v107, 0x66624344u, (__int64)v104, 1);
            if ( !v110 )
            {
              ExternalPrivateResource = -1073741801;
LABEL_300:
              if ( v110 )
                GreDeleteFastMutex(v110);
              break;
            }
            v112 = 0;
            v113 = 0LL;
            do
            {
              *(_QWORD *)&v110[8 * v113] = *(_QWORD *)&v108[2 * v113];
              v113 = ++v112;
            }
            while ( v112 < v107 );
          }
          ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *, unsigned __int64, char *))(*(_QWORD *)v9 + 272LL))(
                                      v9,
                                      v109,
                                      v110,
                                      v107,
                                      &v149);
          if ( ExternalPrivateResource < 0 )
            goto LABEL_300;
          if ( !v149 )
            break;
          v114 = v9;
          goto LABEL_382;
        case 16:
          if ( v5 >= 0x10 )
          {
            v145 = v6 + 4;
            v142 = v5 - 16;
            ExternalPrivateResource = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
                                        v7,
                                        v6[1],
                                        v6[2],
                                        v6[3]);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          break;
        case 17:
          v115 = v6;
          if ( v5 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            break;
          }
          v116 = v6 + 4;
          v145 = (unsigned int *)v116;
          v117 = v5 - 16;
          v142 = v117;
          v118 = v115[3];
          this = 4 * v118;
          if ( v117 < 4 * v118 )
            goto LABEL_23;
          v145 = (unsigned int *)((char *)v116 + this);
          v142 = v117 - this;
          ExternalPrivateResource = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                                      v7,
                                      v115[1],
                                      v115[2],
                                      v116,
                                      v118);
          break;
        case 18:
          if ( v5 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 4;
          v142 = v5 - 16;
          v77 = v6[3];
          v78 = v6[2];
          v79 = v6[1];
          v80 = (_QWORD *)((char *)v7 + 64);
          v81 = v77 - 1;
          if ( v77 && v81 < *((_QWORD *)v7 + 11) )
          {
            v81 *= *((_QWORD *)v7 + 12);
            this = *(_QWORD *)(v81 + *v80);
          }
          else
          {
            this = 0LL;
          }
          if ( this )
          {
            if ( *(_DWORD *)(this + 20) != (*(_DWORD *)(this + 24) ^ ~(_DWORD)this) )
              goto LABEL_362;
            v80 = (_QWORD *)(v8 + 64);
            v9 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)this + 224LL))(
                                                                   this,
                                                                   v81,
                                                                   0x140000000uLL,
                                                                   1LL);
          }
          if ( !v9 )
          {
            ExternalPrivateResource = -1073741811;
            break;
          }
          v82 = v79 - 1;
          if ( v79 && v82 < v80[3] )
            v83 = *(struct DirectComposition::CResourceMarshaler **)(v80[4] * v82 + *v80);
          else
            v83 = 0LL;
          if ( !v83 )
            goto LABEL_47;
          if ( *((_DWORD *)v83 + 5) != (*((_DWORD *)v83 + 6) ^ ~(_DWORD)v83) )
            goto LABEL_362;
          v84 = *(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD))(*(_QWORD *)v83 + 312LL);
          v85 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)v9 + 8LL))(
                  v9,
                  v81,
                  v12,
                  v11);
          if ( v84(v83, v78, v85) )
            ExternalPrivateResource = DirectComposition::CApplicationChannel::BindAnimation(v7, v83, v78, v9);
          else
            ExternalPrivateResource = -1073741811;
          break;
        case 19:
          this = (unsigned __int64)v6;
          if ( v5 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 4;
          v142 = v5 - 16;
          v88 = *((_QWORD *)v6 + 1);
          this = v6[1];
          v89 = (unsigned int)(this - 1);
          if ( (_DWORD)this && v89 < *((_QWORD *)v7 + 11) )
            v90 = *(_QWORD *)(*((_QWORD *)v7 + 12) * v89 + *((_QWORD *)v7 + 8));
          else
            v90 = 0LL;
          if ( !v90 )
            goto LABEL_47;
          if ( *(_DWORD *)(v90 + 20) != (*(_DWORD *)(v90 + 24) ^ ~(_DWORD)v90) )
            goto LABEL_362;
          v91 = (__int64 *)((char *)v7 + 528);
          if ( *(_QWORD *)(v90 + 48) )
          {
            ExternalPrivateResource = -1073741790;
          }
          else if ( v88 )
          {
            ExternalPrivateResource = 0;
            this = *((unsigned int *)v7 + 143);
            v92 = *((_QWORD *)v7 + 69);
            if ( (_DWORD)this + *((_DWORD *)v7 + 144) == v92 )
            {
              v93 = v92 - *((unsigned int *)v7 + 142);
              v94 = (unsigned int)this;
              ExternalPrivateResource = DirectComposition::CDCompDynamicArrayBase::Grow(
                                          (DirectComposition::CApplicationChannel *)((char *)v7 + 528),
                                          1LL,
                                          0x626E4344u);
              if ( ExternalPrivateResource >= 0 && v94 > v93 )
              {
                v95 = *((unsigned int *)v7 + 142);
                *((_DWORD *)v7 + 142) = v95 + 1;
                v96 = *((_QWORD *)v7 + 70);
                v97 = *v91;
                Src[0] = *(_QWORD *)(v96 * v95 + *v91);
                memmove((void *)(v97 + v96 * (*((_QWORD *)v7 + 69) - 1LL)), Src, v96);
              }
            }
            if ( ExternalPrivateResource < 0 )
              break;
            ++*((_DWORD *)v7 + 144);
            *(_QWORD *)(v90 + 48) = v88;
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          if ( ExternalPrivateResource >= 0
            && *(_QWORD *)(v90 + 24) == 1LL
            && (*(unsigned __int8 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(*(_QWORD *)v90 + 24LL))(
                 v90,
                 v13,
                 v12,
                 v11) )
          {
            DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(
              (DirectComposition::CResourceMarshaler *)v90,
              (DirectComposition::CApplicationChannel *)((char *)v7 + 528));
          }
          break;
        case 20:
          if ( v5 >= 0x14 )
          {
            v145 = v6 + 5;
            v142 = v5 - 20;
            ExternalPrivateResource = DirectComposition::CApplicationChannel::AddVisualChild(
                                        v7,
                                        v6[1],
                                        v6[2],
                                        v6[3],
                                        v6[4]);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          break;
        case 21:
          this = (unsigned __int64)v6;
          if ( v5 < 0x48 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 18;
          v142 = v5 - 72;
          v119 = v6[5];
          v120 = v6[4];
          v121 = (const struct tagMsgRoutingInfo *)(v6 + 8);
          if ( !v6[6] )
            v121 = 0LL;
          v122 = (HWND)*((_QWORD *)v6 + 1);
          v123 = v6[1];
          ExternalPrivateResource = 0;
          v124 = v123 - 1;
          if ( v123 && v124 < *((_QWORD *)v7 + 11) )
          {
            v124 *= *((_QWORD *)v7 + 12);
            this = *(_QWORD *)(v124 + *((_QWORD *)v7 + 8));
          }
          else
          {
            this = 0LL;
          }
          if ( !this )
            goto LABEL_23;
          if ( *(_DWORD *)(this + 20) != (*(_DWORD *)(this + 24) ^ ~(_DWORD)this) )
            goto LABEL_362;
          v125 = (DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)this + 192LL))(
                                                          this,
                                                          v124,
                                                          0LL,
                                                          1LL);
          if ( !v125 )
            goto LABEL_23;
          this = v120 | v119;
          if ( (this & 0xFFFF7EC0) != 0 )
            goto LABEL_23;
          if ( v120 )
            ExternalPrivateResource = DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(
                                        v125,
                                        v7,
                                        v122,
                                        v121,
                                        v120,
                                        v119);
          break;
        case 22:
          this = (unsigned __int64)v6;
          if ( v5 < 0x10 )
          {
            ExternalPrivateResource = -1073741811;
            v18 = v13;
            goto LABEL_384;
          }
          v145 = v6 + 4;
          v142 = v5 - 16;
          v126 = *((_QWORD *)v6 + 1);
          v127 = v6[1];
          v157 = 0LL;
          v150[0] = 0;
          v128 = v127 - 1;
          if ( v127 && v128 < *((_QWORD *)v7 + 11) )
          {
            v128 *= *((_QWORD *)v7 + 12);
            this = *(_QWORD *)(v128 + *((_QWORD *)v7 + 8));
          }
          else
          {
            this = 0LL;
          }
          if ( !this )
            goto LABEL_47;
          if ( *(_DWORD *)(this + 20) != (*(_DWORD *)(this + 24) ^ ~(_DWORD)this) )
            KeBugCheck(0xC000A003);
          v129 = (DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)this + 192LL))(
                                                          this,
                                                          v128,
                                                          0x140000000uLL,
                                                          1LL);
          if ( !v129 )
          {
            ExternalPrivateResource = -1073741811;
            break;
          }
          ExternalPrivateResource = DirectComposition::CVisualMarshaler::EnsureWriteableInteraction(
                                      v129,
                                      v7,
                                      1,
                                      0,
                                      L"SetInputSink",
                                      &v157);
          v55 = v157;
          if ( ExternalPrivateResource >= 0 )
            ExternalPrivateResource = (*(__int64 (__fastcall **)(struct DirectComposition::CInteractionMarshaler *, _QWORD, __int64, char *))(*(_QWORD *)v157 + 264LL))(
                                        v157,
                                        0LL,
                                        v126,
                                        v150);
          if ( ExternalPrivateResource < 0 )
            break;
          v72 = v150[0] == 0;
          goto LABEL_380;
        case 23:
          if ( v5 >= 0xC )
          {
            v145 = v6 + 3;
            v142 = v5 - 12;
            ExternalPrivateResource = DirectComposition::CApplicationChannel::RemoveVisualChild(v7, v6[1], v6[2]);
          }
          else
          {
            ExternalPrivateResource = -1073741811;
          }
          break;
        default:
          goto LABEL_365;
      }
    }
LABEL_383:
    v18 = v141;
LABEL_384:
    v7 = (DirectComposition::CApplicationChannel *)v165;
    v5 = v142;
    v6 = v145;
    v9 = 0LL;
    v12 = 0x140000000uLL;
    v11 = 1LL;
    v8 = v160;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
    {
      McTemplateK0qp_EtwWriteTransfer(this, &DCompCommandType, 0x140000000uLL, v18, ExternalPrivateResource);
      v5 = v142;
      v6 = v145;
      goto LABEL_2;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
  {
    McTemplateK0x_EtwWriteTransfer(this, &DCompCommandsInBatch, 0x140000000uLL, *a5);
    v5 = v142;
  }
  if ( ExternalPrivateResource >= 0 && v5 )
    return (unsigned int)-1073741811;
  return (unsigned int)ExternalPrivateResource;
}
