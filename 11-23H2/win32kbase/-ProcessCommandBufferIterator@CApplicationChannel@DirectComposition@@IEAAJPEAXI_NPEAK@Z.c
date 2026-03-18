/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C002D710 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002C184 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C002D5E0 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0065480 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C00657B8 (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C00871C0 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C0092738 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00927E8 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00928D8 (-OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C00930A8 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C0093514 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C00A6B78 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C00A6C8C (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C00AA68C (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1C013D2AC (McTemplateK0qp_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C013D97C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C013EC18 (McTemplateK0x_EtwWriteTransfer.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64_&_ @ 0x1C016DF00 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C020C0D4 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C020C4A0 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C020C54C (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C020C7CC (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x1C020CFB0 (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        unsigned __int64 this,
        char *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r10
  char *v7; // r11
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  int ExternalSharedResource; // ebx
  unsigned int *v12; // rdx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // edx
  struct DirectComposition::CResourceMarshaler *v16; // rax
  struct DirectComposition::CResourceMarshaler *v17; // rsi
  int v18; // eax
  __int64 v19; // rbx
  unsigned int v20; // r14d
  unsigned int v21; // edx
  struct DirectComposition::CResourceMarshaler *v22; // rax
  struct DirectComposition::CResourceMarshaler *v23; // rsi
  char v24; // al
  int v25; // eax
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  struct DirectComposition::CResourceMarshaler *v29; // rbx
  struct DirectComposition::CResourceMarshaler *v30; // rsi
  unsigned int v31; // edx
  DirectComposition::CApplicationChannel *v32; // r14
  int v33; // eax
  unsigned int *v34; // rdx
  __int64 v35; // rbx
  char *v36; // r14
  unsigned int v37; // r15d
  struct DirectComposition::CResourceMarshaler *v38; // rax
  struct DirectComposition::CResourceMarshaler *v39; // rsi
  int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned int v42; // esi
  unsigned int v43; // r15d
  struct DirectComposition::CResourceMarshaler *v44; // r14
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r13
  size_t *v48; // r10
  struct DirectComposition::CResourceMarshaler *v49; // r14
  char v50; // si
  unsigned __int64 v51; // rax
  struct DirectComposition::CResourceMarshaler *v52; // rdx
  unsigned __int64 v53; // r13
  unsigned int v55; // r15d
  struct DirectComposition::CResourceMarshaler *v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned int v59; // esi
  unsigned int v60; // edx
  struct DirectComposition::CResourceMarshaler *v61; // rax
  __int64 v62; // r8
  struct DirectComposition::CResourceMarshaler *v63; // r14
  int v64; // eax
  unsigned int v65; // esi
  unsigned int v66; // r15d
  unsigned int v67; // ebx
  unsigned int v68; // edx
  DirectComposition::CApplicationChannel *v69; // rax
  __int64 v70; // r13
  struct DirectComposition::CResourceMarshaler *v71; // rax
  __int64 v72; // rbx
  DirectComposition::CApplicationChannel *v73; // rsi
  int v74; // eax
  unsigned __int64 v75; // rdx
  __int64 i; // r9
  unsigned __int64 v77; // r13
  __int64 v78; // rdx
  unsigned int v79; // r15d
  unsigned int v80; // edx
  __int64 UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64; // rsi
  unsigned __int64 v82; // r14
  NSInstrumentation::CLeakTrackingAllocator *v83; // r15
  int v84; // eax
  __int64 v85; // r15
  char *v86; // rdi
  struct DirectComposition::CResourceMarshaler *v87; // rax
  struct DirectComposition::CResourceMarshaler *v88; // r14
  __int64 v89; // r8
  DirectComposition::CApplicationChannel *v90; // r15
  int v91; // eax
  unsigned __int64 v92; // rdx
  unsigned int v93; // edx
  struct DirectComposition::CResourceMarshaler *v94; // rax
  struct DirectComposition::CResourceMarshaler *v95; // rsi
  unsigned __int64 v96; // rdx
  unsigned int v97; // r8d
  void *v98; // r9
  unsigned int v99; // edx
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // kr00_8
  char *v102; // rax
  char *v103; // r14
  _QWORD *v104; // r15
  DirectComposition::CApplicationChannel *v105; // rcx
  __int64 v106; // r8
  void *v107; // rdx
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // kr10_8
  char *v110; // rax
  char *v111; // r14
  _QWORD *v112; // r15
  DirectComposition::CApplicationChannel *v113; // rcx
  __int64 v114; // r8
  void *v115; // rdx
  __int64 v116; // rax
  unsigned __int64 v117; // kr20_8
  unsigned __int64 v118; // kr30_8
  int v119; // r8d
  char v120; // r9
  struct DirectComposition::CResourceMarshaler *Quota; // rsi
  char *v122; // rax
  char *v123; // r13
  unsigned int v124; // r15d
  bool v125; // al
  unsigned int *v126; // r10
  unsigned __int64 v127; // r8
  _QWORD *Pool2; // rax
  unsigned int v129; // edx
  char v130; // r13
  const struct tagMsgRoutingInfo *v131; // r9
  char *v132; // [rsp+60h] [rbp-1B8h]
  unsigned __int8 v133; // [rsp+68h] [rbp-1B0h] BYREF
  char v134; // [rsp+69h] [rbp-1AFh] BYREF
  char v135; // [rsp+6Ah] [rbp-1AEh] BYREF
  char v136; // [rsp+6Bh] [rbp-1ADh] BYREF
  char v137; // [rsp+6Ch] [rbp-1ACh] BYREF
  char v138; // [rsp+6Dh] [rbp-1ABh] BYREF
  char v139[2]; // [rsp+6Eh] [rbp-1AAh] BYREF
  unsigned int v140; // [rsp+70h] [rbp-1A8h]
  unsigned int v141; // [rsp+74h] [rbp-1A4h]
  struct DirectComposition::CResourceMarshaler *v142; // [rsp+78h] [rbp-1A0h]
  unsigned __int64 v143; // [rsp+80h] [rbp-198h]
  struct DirectComposition::CResourceMarshaler *v144; // [rsp+88h] [rbp-190h]
  unsigned int v145; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int64 v146; // [rsp+98h] [rbp-180h]
  struct DirectComposition::CResourceMarshaler *v147; // [rsp+A0h] [rbp-178h] BYREF
  unsigned __int64 v148; // [rsp+A8h] [rbp-170h] BYREF
  __int64 v149; // [rsp+B0h] [rbp-168h] BYREF
  unsigned __int64 v150; // [rsp+B8h] [rbp-160h] BYREF
  struct DirectComposition::CResourceMarshaler *v151; // [rsp+C0h] [rbp-158h]
  __int64 v152; // [rsp+C8h] [rbp-150h]
  __int64 v153; // [rsp+D0h] [rbp-148h]
  _QWORD Src[3]; // [rsp+D8h] [rbp-140h] BYREF
  struct DirectComposition::CResourceMarshaler *v155; // [rsp+F0h] [rbp-128h] BYREF
  _QWORD v156[3]; // [rsp+F8h] [rbp-120h] BYREF
  char *v157; // [rsp+110h] [rbp-108h]
  _QWORD v158[2]; // [rsp+120h] [rbp-F8h] BYREF
  PVOID BackTrace[20]; // [rsp+130h] [rbp-E8h] BYREF
  DirectComposition::CApplicationChannel *v160; // [rsp+220h] [rbp+8h]

  v160 = (DirectComposition::CApplicationChannel *)this;
  v5 = a4;
  v7 = a2;
  v132 = a2;
  v8 = this;
  v146 = this;
  v9 = this;
  v143 = this;
  v10 = 0LL;
  ExternalSharedResource = 0;
  while ( ExternalSharedResource >= 0 && a3 >= 4 )
  {
    v12 = a5;
    ++*a5;
    v13 = *(_DWORD *)v7;
    v140 = v13;
    v141 = v13;
    if ( v13 == 8 )
    {
      if ( a3 < 0x18 )
        goto LABEL_365;
      v132 = v7 + 24;
      a3 -= 24;
      v19 = *((_QWORD *)v7 + 2);
      v20 = *((_DWORD *)v7 + 2);
      v21 = *((_DWORD *)v7 + 1);
      v134 = 0;
      v22 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
              (DirectComposition::CApplicationChannel *)v8,
              v21);
      v23 = v22;
      if ( v22 )
      {
        ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned __int64, _QWORD, __int64, char *))(*(_QWORD *)v22 + 208LL))(
                                   v22,
                                   v8,
                                   v20,
                                   v19,
                                   &v134);
        if ( ExternalSharedResource >= 0
          && *((_QWORD *)v23 + 5)
          && DirectComposition::CApplicationChannel::UnbindAnimation(
               (DirectComposition::CApplicationChannel *)v8,
               v23,
               v20) )
        {
          v24 = 1;
          v134 = 1;
        }
        else
        {
          v24 = v134;
        }
        if ( ExternalSharedResource >= 0 )
        {
          if ( v24 )
          {
            v25 = *((_DWORD *)v23 + 4);
            if ( (v25 & 2) == 0 )
            {
              if ( (v25 & 1) != 0 )
              {
                if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                        *((unsigned int *)v23 + 9),
                                        170LL) )
                  this = 424LL;
                else
                  this = 416LL;
                *((_QWORD *)v23 + 1) = *(_QWORD *)(v9 + this);
                *(_QWORD *)(v9 + this) = v23;
              }
              *((_DWORD *)v23 + 4) |= 2u;
              *(_BYTE *)(v8 + 240) |= 1u;
            }
          }
        }
      }
      else
      {
        ExternalSharedResource = -1073741790;
      }
      goto LABEL_37;
    }
    if ( v13 != 13 )
    {
      if ( v13 != 12 )
      {
        switch ( v13 )
        {
          case 0u:
            Quota = 0LL;
            v142 = 0LL;
            v122 = v7;
            if ( a3 >= 0x18 && v5 )
            {
              v7 += 24;
              v132 = v7;
              a3 -= 24;
              v123 = (char *)*((_QWORD *)v122 + 1);
              v124 = *((_DWORD *)v122 + 4);
              v140 = v124;
              if ( !v124 )
                ExternalSharedResource = -1073741811;
              if ( ExternalSharedResource < 0 )
              {
                v10 = 0LL;
              }
              else
              {
                Quota = (struct DirectComposition::CResourceMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                                                          (NSInstrumentation::CLeakTrackingAllocator *)this,
                                                                          260LL,
                                                                          v124,
                                                                          0x66624344u);
                v142 = Quota;
                v7 = v132;
                v5 = a4;
                if ( !Quota )
                {
                  ExternalSharedResource = -1073741801;
                  v10 = 0LL;
LABEL_263:
                  v9 = v143;
                  goto LABEL_264;
                }
                if ( &v123[v124] < v123 || (unsigned __int64)&v123[v124] > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(Quota, v123, v124);
                v7 = v132;
                v12 = a5;
                v10 = 0LL;
                v5 = a4;
              }
              if ( ExternalSharedResource >= 0 )
              {
                ExternalSharedResource = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
                                           v160,
                                           Quota,
                                           v124,
                                           0,
                                           v12);
                v7 = v132;
                v5 = a4;
              }
              goto LABEL_263;
            }
            ExternalSharedResource = -1073741811;
LABEL_264:
            if ( !Quota )
              goto LABEL_40;
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Quota);
            break;
          case 1u:
            this = (unsigned __int64)v7;
            if ( a3 < 0x10 )
              goto LABEL_365;
            v42 = *((_DWORD *)v7 + 2);
            v141 = v42;
            if ( v42 - 1 > 0xCC )
              goto LABEL_365;
            v132 = v7 + 16;
            a3 -= 16;
            if ( *((_DWORD *)v7 + 3) )
            {
              ExternalSharedResource = DirectComposition::CApplicationChannel::CreateExternalSharedResource(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         v42);
              goto LABEL_38;
            }
            v43 = *((_DWORD *)v7 + 1);
            v140 = v43;
            v144 = 0LL;
            v147 = 0LL;
            ExternalSharedResource = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(
                                       (DirectComposition::CApplicationChannel *)v8,
                                       v42,
                                       &v147);
            if ( ExternalSharedResource < 0 )
              goto LABEL_74;
            v44 = v147;
            v142 = v147;
            ExternalSharedResource = 0;
            if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v147 + 16LL))(v147) )
              ExternalSharedResource = DirectComposition::CConnection::AcquireShellResourceAccess(*(DirectComposition::CConnection **)(v8 + 40));
            if ( ExternalSharedResource < 0 )
              goto LABEL_280;
            ExternalSharedResource = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))v44)(v44);
            if ( ExternalSharedResource < 0 )
              goto LABEL_280;
            ExternalSharedResource = 0;
            this = *(_QWORD *)(v8 + 136);
            if ( *(_QWORD *)(v8 + 152) >= this )
            {
              v45 = *(_QWORD *)(v8 + 136);
              v46 = this + 1;
              if ( this + 1 < this )
              {
                ExternalSharedResource = -1073741675;
                v46 = -1LL;
              }
              if ( ExternalSharedResource < 0 )
                goto LABEL_279;
              v47 = *(_QWORD *)(v8 + 128);
              if ( v46 <= v47 )
                goto LABEL_67;
              if ( !v47 )
                v47 = 64LL;
              do
              {
                if ( v47 >= v46 || v47 >= 0x400 )
                  break;
                v118 = v47;
                v152 = (v47 * (unsigned __int128)2uLL) >> 64;
                v47 *= 2LL;
                if ( is_mul_ok(v118, 2uLL) )
                {
                  ExternalSharedResource = 0;
                }
                else
                {
                  ExternalSharedResource = -1073741675;
                  v47 = -1LL;
                }
              }
              while ( ExternalSharedResource >= 0 );
              while ( ExternalSharedResource >= 0 )
              {
                if ( v47 >= v46 )
                  break;
                if ( v47 + 1024 < v47 )
                {
                  ExternalSharedResource = -1073741675;
                  v47 = -1LL;
                }
                else
                {
                  v47 += 1024LL;
                  ExternalSharedResource = 0;
                }
              }
              v108 = 0LL;
              this = (unsigned __int64)v160;
              if ( ExternalSharedResource >= 0 )
              {
                v109 = *((_QWORD *)v160 + 18);
                v108 = v47 * v109;
                v153 = (v47 * (unsigned __int128)v109) >> 64;
                if ( is_mul_ok(v47, v109) )
                {
                  ExternalSharedResource = 0;
                }
                else
                {
                  v108 = -1LL;
                  ExternalSharedResource = -1073741675;
                }
              }
              if ( ExternalSharedResource < 0 )
              {
LABEL_228:
                v43 = v140;
                v44 = v142;
LABEL_67:
                v8 = (unsigned __int64)v160;
                if ( ExternalSharedResource < 0 )
                  goto LABEL_279;
                ++*((_QWORD *)v160 + 17);
              }
              else
              {
                if ( *((_BYTE *)v160 + 120) )
                  v110 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                   v160,
                                   260LL,
                                   v108,
                                   0x746C4344u);
                else
                  v110 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                   gpLeakTrackingAllocator,
                                   260LL,
                                   v108,
                                   0x746C4344u);
                v111 = v110;
                if ( v110 )
                {
                  v112 = (_QWORD *)(v146 + 144);
                  v113 = v160;
                  v114 = *((_QWORD *)v160 + 17);
                  if ( v114 )
                  {
                    memmove(v110, *((const void **)v160 + 14), *v112 * v114);
                    v113 = v160;
                  }
                  memset(&v111[*((_QWORD *)v113 + 17) * *v112], 0, *v112 * (v47 - *((_QWORD *)v113 + 17)));
                  v115 = (void *)*((_QWORD *)v160 + 14);
                  if ( v115 )
                    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v115);
                  *((_QWORD *)v160 + 14) = v111;
                  *((_QWORD *)v160 + 16) = v47;
                  goto LABEL_228;
                }
LABEL_279:
                ExternalSharedResource = -1073741801;
                v44 = v142;
                v43 = v140;
                v8 = (unsigned __int64)v160;
              }
              v48 = (size_t *)(v146 + 144);
              goto LABEL_70;
            }
            v45 = *(_QWORD *)(v8 + 160);
            v48 = (size_t *)(v8 + 144);
            for ( i = *(_QWORD *)(v8 + 112); *(_QWORD *)(v45 * *(_QWORD *)(v8 + 144) + i); v45 = (v45 + 1) % this )
              ;
            *(_QWORD *)(v8 + 160) = (v45 + 1) % this;
LABEL_70:
            if ( ExternalSharedResource >= 0 )
            {
              Src[0] = v44;
              memmove((void *)(*(_QWORD *)(v8 + 112) + v45 * *v48), Src, *v48);
              *((_DWORD *)v44 + 8) = v45 + 1;
              ++*(_QWORD *)(v8 + 152);
              if ( *(int *)(v8 + 24) <= 2 )
              {
                *((_QWORD *)v44 + 1) = *(_QWORD *)(v8 + 408);
                *(_QWORD *)(v8 + 408) = v44;
              }
            }
            v42 = v141;
            if ( ExternalSharedResource < 0 )
LABEL_280:
              (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v44 + 72LL))(
                v44,
                1LL);
LABEL_74:
            if ( ExternalSharedResource < 0 )
              goto LABEL_36;
            if ( v42 == 2 )
            {
              v116 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v147 + 80LL))(v147);
              DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
                (DirectComposition::CApplicationChannel *)v8,
                *(struct DirectComposition::CAnimationTimeList **)(v116 + 80));
            }
            v49 = v147;
            v144 = v147;
            ExternalSharedResource = 0;
            v50 = v43;
            if ( !v43 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_82;
            }
            v51 = *(_QWORD *)(v8 + 80);
            if ( v43 > v51 )
            {
              v52 = (struct DirectComposition::CResourceMarshaler *)(v43 - v51);
              v142 = v52;
              v53 = *(_QWORD *)(v8 + 72);
              if ( v43 <= v53 )
              {
LABEL_80:
                if ( ExternalSharedResource >= 0 )
                {
                  v8 = (unsigned __int64)v160;
                  *((_QWORD *)v160 + 10) += v52;
                  goto LABEL_82;
                }
                goto LABEL_287;
              }
              if ( !v53 )
                v53 = 64LL;
              do
              {
                if ( v53 >= v43 || v53 >= 0x400 )
                  break;
                v117 = v53;
                Src[1] = (v53 * (unsigned __int128)2uLL) >> 64;
                v53 *= 2LL;
                if ( is_mul_ok(v117, 2uLL) )
                {
                  ExternalSharedResource = 0;
                }
                else
                {
                  ExternalSharedResource = -1073741675;
                  v53 = -1LL;
                }
              }
              while ( ExternalSharedResource >= 0 );
              while ( ExternalSharedResource >= 0 )
              {
                if ( v53 >= v43 )
                  break;
                if ( v53 + 1024 < v53 )
                {
                  ExternalSharedResource = -1073741675;
                  v53 = -1LL;
                }
                else
                {
                  v53 += 1024LL;
                  ExternalSharedResource = 0;
                }
              }
              v100 = 0LL;
              if ( ExternalSharedResource >= 0 )
              {
                v101 = *((_QWORD *)v160 + 11);
                v100 = v53 * v101;
                Src[2] = (v53 * (unsigned __int128)v101) >> 64;
                if ( is_mul_ok(v53, v101) )
                {
                  ExternalSharedResource = 0;
                }
                else
                {
                  v100 = -1LL;
                  ExternalSharedResource = -1073741675;
                }
              }
              if ( ExternalSharedResource >= 0 )
              {
                if ( *((_BYTE *)v160 + 64) )
                  v102 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                   v160,
                                   260LL,
                                   v100,
                                   0x746C4344u);
                else
                  v102 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                   gpLeakTrackingAllocator,
                                   260LL,
                                   v100,
                                   0x746C4344u);
                v103 = v102;
                if ( !v102 )
                {
LABEL_287:
                  ExternalSharedResource = -1073741801;
                  v49 = v144;
                  v43 = v140;
                  v8 = (unsigned __int64)v160;
                  goto LABEL_82;
                }
                v104 = (_QWORD *)(v146 + 88);
                v105 = v160;
                v106 = *((_QWORD *)v160 + 10);
                if ( v106 )
                {
                  memmove(v102, *((const void **)v160 + 7), *v104 * v106);
                  v105 = v160;
                }
                memset(&v103[*((_QWORD *)v105 + 10) * *v104], 0, *v104 * (v53 - *((_QWORD *)v105 + 10)));
                v107 = (void *)*((_QWORD *)v160 + 7);
                if ( v107 )
                  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v107);
                *((_QWORD *)v160 + 7) = v103;
                *((_QWORD *)v160 + 9) = v53;
              }
              v43 = v140;
              v49 = v144;
              v52 = v142;
              goto LABEL_80;
            }
            if ( *(_QWORD *)(*(_QWORD *)(v8 + 88) * (v43 - 1) + *(_QWORD *)(v8 + 56)) )
              ExternalSharedResource = -1073741790;
LABEL_82:
            if ( ExternalSharedResource < 0 )
              goto LABEL_97;
            v155 = v49;
            memmove((void *)(*(_QWORD *)(v8 + 56) + *(_QWORD *)(v8 + 88) * (v43 - 1)), &v155, *(_QWORD *)(v8 + 88));
            ++*(_QWORD *)(v8 + 96);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000000LL) != 0 )
              McTemplateK0qqqxxqtt_EtwWriteTransfer(
                v141,
                *((_DWORD *)v49 + 8),
                *(_DWORD *)(v8 + 28),
                *(_DWORD *)(v8 + 28),
                *((_DWORD *)v49 + 8),
                v43,
                *((_DWORD *)v49 + 8),
                v50,
                v141,
                0,
                0);
            goto LABEL_36;
          case 2u:
            this = (unsigned __int64)v7;
            if ( a3 < 0x18 )
              goto LABEL_365;
            v97 = *((_DWORD *)v7 + 4);
            if ( v97 - 1 > 0xCC )
              goto LABEL_365;
            v132 = v7 + 24;
            a3 -= 24;
            v98 = (void *)*((_QWORD *)v7 + 1);
            v99 = *((_DWORD *)v7 + 1);
            if ( *((_DWORD *)v7 + 5) )
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenExternalSharedWriteResource(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         v99,
                                         v97,
                                         v98);
            else
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenExternalSharedReadResource(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         v99,
                                         v97,
                                         v98);
            goto LABEL_38;
          case 3u:
            if ( a3 < 8 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_40;
            }
            v132 = v7 + 8;
            a3 -= 8;
            v55 = *((_DWORD *)v7 + 1);
            ExternalSharedResource = 0;
            v56 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    (DirectComposition::CApplicationChannel *)v8,
                    v55);
            v49 = v56;
            if ( v56 )
            {
              v57 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v56 + 168LL))(v56);
              if ( v57 )
              {
                v95 = *(struct DirectComposition::CResourceMarshaler **)(v57 + 192);
                if ( v95 )
                {
                  if ( (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v95 + 104LL))(v95) )
                    DirectComposition::CApplicationChannel::ReleaseResource(
                      (DirectComposition::CApplicationChannel *)v8,
                      v95);
                }
              }
              v58 = v55 - 1;
              if ( v55 && v58 < *(_QWORD *)(v8 + 80) )
              {
                v156[0] = 0LL;
                memmove((void *)(*(_QWORD *)(v8 + 56) + v58 * *(_QWORD *)(v8 + 88)), v156, *(_QWORD *)(v8 + 88));
                --*(_QWORD *)(v8 + 96);
              }
LABEL_97:
              DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)v8, v49);
            }
            else
            {
              ExternalSharedResource = -1073741790;
            }
            goto LABEL_36;
          case 4u:
            if ( a3 < 0x18 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_40;
            }
            v132 = v7 + 24;
            a3 -= 24;
            ExternalSharedResource = DirectComposition::CApplicationChannel::GetAnimationTime(
                                       (DirectComposition::CApplicationChannel *)v8,
                                       *((_DWORD *)v7 + 1),
                                       *((_QWORD *)v7 + 1),
                                       (__int64 *)v7 + 2);
            goto LABEL_38;
          case 5u:
            this = (unsigned __int64)v7;
            if ( a3 < 0x18 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_40;
            }
            v132 = v7 + 24;
            a3 -= 24;
            ExternalSharedResource = DirectComposition::CApplicationChannel::CapturePointer(
                                       v8,
                                       *((unsigned int *)v7 + 1),
                                       *((unsigned int *)v7 + 2),
                                       *((unsigned int *)v7 + 3),
                                       *((_QWORD *)v7 + 2));
            goto LABEL_38;
          case 6u:
            if ( a3 >= 0x10 )
            {
              v132 = v7 + 16;
              a3 -= 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         (void **)v7 + 1);
              goto LABEL_38;
            }
            ExternalSharedResource = -1073741811;
            goto LABEL_40;
          case 7u:
            if ( a3 < 0xC )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_40;
            }
            v132 = v7 + 12;
            a3 -= 12;
            v14 = *((_DWORD *)v7 + 2);
            v15 = *((_DWORD *)v7 + 1);
            v135 = 0;
            v16 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    (DirectComposition::CApplicationChannel *)v8,
                    v15);
            v17 = v16;
            if ( v16 )
            {
              ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *))(*(_QWORD *)v16 + 264LL))(
                                         v16,
                                         v14,
                                         &v135);
              if ( ExternalSharedResource >= 0 )
              {
                if ( v135 )
                {
                  v18 = *((_DWORD *)v17 + 4);
                  if ( (v18 & 2) == 0 )
                  {
                    if ( (v18 & 1) != 0 )
                    {
                      if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                              *((unsigned int *)v17 + 9),
                                              170LL) )
                        this = 424LL;
                      else
                        this = 416LL;
                      *((_QWORD *)v17 + 1) = *(_QWORD *)(v9 + this);
                      *(_QWORD *)(v9 + this) = v17;
                    }
                    *((_DWORD *)v17 + 4) |= 2u;
                    *(_BYTE *)(v8 + 240) |= 1u;
                  }
                }
              }
            }
            else
            {
              ExternalSharedResource = -1073741790;
            }
            goto LABEL_38;
          case 9u:
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_40;
            }
            v132 = v7 + 16;
            a3 -= 16;
            v59 = *((_DWORD *)v7 + 2);
            v60 = *((_DWORD *)v7 + 1);
            v133 = 0;
            v61 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    (DirectComposition::CApplicationChannel *)v8,
                    v60);
            v63 = v61;
            if ( v61 )
            {
              ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, unsigned __int8 *))(*(_QWORD *)v61 + 216LL))(
                                         v61,
                                         v59,
                                         v62,
                                         &v133);
              if ( ExternalSharedResource >= 0 && *((_QWORD *)v63 + 5) )
              {
                v125 = DirectComposition::CApplicationChannel::UnbindAnimation(
                         (DirectComposition::CApplicationChannel *)v8,
                         v63,
                         v59);
                this = v133;
                if ( v125 )
                  this = 1LL;
                v133 = this;
              }
              else
              {
                this = v133;
              }
              if ( ExternalSharedResource >= 0 )
              {
                if ( (_BYTE)this )
                {
                  v64 = *((_DWORD *)v63 + 4);
                  if ( (v64 & 2) == 0 )
                  {
                    if ( (v64 & 1) != 0 )
                    {
                      if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                              *((unsigned int *)v63 + 9),
                                              170LL) )
                        this = 424LL;
                      else
                        this = 416LL;
                      *((_QWORD *)v63 + 1) = *(_QWORD *)(v9 + this);
                      *(_QWORD *)(v9 + this) = v63;
                    }
                    *((_DWORD *)v63 + 4) |= 2u;
                    *(_BYTE *)(v8 + 240) |= 1u;
                  }
                }
              }
            }
            else
            {
              ExternalSharedResource = -1073741790;
            }
            goto LABEL_37;
          case 0xAu:
            if ( a3 >= 0x18 )
            {
              v132 = v7 + 24;
              a3 -= 24;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_DWORD *)v7 + 2),
                                         *((void **)v7 + 2));
              goto LABEL_38;
            }
            ExternalSharedResource = -1073741811;
            goto LABEL_40;
          case 0xBu:
            v126 = (unsigned int *)v7;
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_39;
            }
            v7 += 16;
            v132 = v7;
            a3 -= 16;
            v127 = v126[3];
            v156[1] = (v126[3] * (unsigned __int128)8uLL) >> 64;
            this = 8 * v127;
            if ( is_mul_ok(v127, 8uLL) )
            {
              ExternalSharedResource = 0;
            }
            else
            {
              this = -1LL;
              ExternalSharedResource = -1073741675;
            }
            if ( ExternalSharedResource < 0 )
              goto LABEL_39;
            if ( a3 < this )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_39;
            }
            v132 = &v7[this];
            a3 -= this;
            ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                                       (DirectComposition::CApplicationChannel *)v8,
                                       v126[1],
                                       v126[2],
                                       (const unsigned __int64 *)v7,
                                       v127);
            goto LABEL_38;
          case 0xEu:
            this = (unsigned __int64)v7;
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_40;
            }
            v7 += 16;
            v132 = v7;
            a3 -= 16;
            v77 = *(unsigned int *)(this + 12);
            v142 = (struct DirectComposition::CResourceMarshaler *)v77;
            v78 = 4 * v77;
            if ( a3 < 4 * v77 )
              goto LABEL_365;
            v157 = v7;
            v132 = &v7[v78];
            a3 -= v78;
            LODWORD(v144) = a3;
            v79 = *(_DWORD *)(this + 8);
            v141 = v79;
            v80 = *(_DWORD *)(this + 4);
            ExternalSharedResource = 0;
            v136 = 0;
            UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = 0LL;
            v151 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v160, v80);
            if ( !v151 )
              ExternalSharedResource = -1073741790;
            if ( !v77 )
              goto LABEL_149;
            if ( ExternalSharedResource < 0 )
              goto LABEL_141;
            v156[2] = (v77 * (unsigned __int128)8uLL) >> 64;
            v82 = 8 * v77;
            if ( is_mul_ok(v77, 8uLL) )
            {
              ExternalSharedResource = 0;
            }
            else
            {
              ExternalSharedResource = -1073741675;
              v82 = -1LL;
            }
            if ( ExternalSharedResource < 0 )
              goto LABEL_141;
            v145 = 1717715780;
            v149 = 260LL;
            v83 = gpLeakTrackingAllocator;
            v150 = v82;
            v84 = *(_DWORD *)gpLeakTrackingAllocator;
            if ( *(_DWORD *)gpLeakTrackingAllocator )
            {
              if ( v84 != 1 )
              {
                if ( v84 == 2 )
                {
                  v148 = 0LL;
                  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                          gpLeakTrackingAllocator,
                          0x66624344u,
                          &v148) )
                  {
                    v158[0] = &v149;
                    v158[1] = &v145;
                    UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(v83, v158, &v150);
                    goto LABEL_139;
                  }
                  v130 = 0;
                  if ( v82 < 0x1000 || (v82 & 0xFFF) != 0 )
                  {
                    v130 = 1;
                    v82 += 16LL;
                    v150 = v82;
                  }
                  UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = ExAllocatePool2(
                                                                                                     263LL,
                                                                                                     v82,
                                                                                                     v129);
                  if ( UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 )
                  {
                    _InterlockedIncrement64((volatile signed __int64 *)v83 + 16);
                    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
                    if ( v130
                      && (unsigned __int64)(UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 & 0xFFF)
                       + 16 < 0x1000 )
                    {
                      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                              v83,
                                              UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64,
                                              v148,
                                              BackTrace) )
                      {
                        UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 += 16LL;
                        v77 = (unsigned __int64)v142;
                        goto LABEL_139;
                      }
                    }
                    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                                 v83,
                                                 UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64,
                                                 v148,
                                                 BackTrace) )
                    {
                      v77 = (unsigned __int64)v142;
                      goto LABEL_139;
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)v83 + 17);
                    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64);
                  }
                  v77 = (unsigned __int64)v142;
                }
LABEL_341:
                UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = 0LL;
                goto LABEL_139;
              }
              if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                      gpLeakTrackingAllocator,
                      0x66624344u)
                || v82 + 16 < v82 )
              {
                goto LABEL_341;
              }
              Pool2 = (_QWORD *)ExAllocatePool2(v149 | 3, v82 + 16, v145);
              UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = (__int64)Pool2;
              if ( Pool2 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)v83 + 14);
                *Pool2 = 1717715780LL;
                UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = (__int64)(Pool2 + 2);
                if ( Pool2 != (_QWORD *)-16LL )
                  goto LABEL_141;
              }
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v83 + 1),
                (const void *)0x66624344);
            }
            else
            {
              UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 = ExAllocatePool2(
                                                                                                 263LL,
                                                                                                 v82,
                                                                                                 1717715780LL);
              if ( UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 )
                _InterlockedIncrement64((volatile signed __int64 *)v83 + 14);
            }
LABEL_139:
            if ( !UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 )
              ExternalSharedResource = -1073741801;
LABEL_141:
            v85 = 0LL;
            if ( ExternalSharedResource >= 0 )
            {
              v86 = v157;
              do
              {
                if ( (unsigned int)v85 >= v77 )
                  break;
                v87 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v160, *(_DWORD *)&v86[4 * v85]);
                *(_QWORD *)(UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 + 8 * v85) = v87;
                if ( !v87 )
                  ExternalSharedResource = -1073741811;
                v85 = (unsigned int)(v85 + 1);
              }
              while ( ExternalSharedResource >= 0 );
              v13 = v140;
              a3 = (unsigned int)v144;
            }
            v79 = v141;
LABEL_149:
            v88 = v151;
            if ( ExternalSharedResource < 0 )
            {
              v90 = v160;
            }
            else
            {
              v89 = v79;
              v90 = v160;
              ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, __int64, unsigned __int64, char *))(*(_QWORD *)v151 + 256LL))(
                                         v151,
                                         v160,
                                         v89,
                                         UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64,
                                         v77,
                                         &v136);
            }
            if ( ExternalSharedResource < 0 )
            {
              if ( UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64 )
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  gpLeakTrackingAllocator,
                  (void *)UntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64);
            }
            else if ( v136 )
            {
              v91 = *((_DWORD *)v88 + 4);
              if ( (v91 & 2) == 0 )
              {
                if ( (v91 & 1) != 0 )
                {
                  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                          *((unsigned int *)v88 + 9),
                                          170LL) )
                    this = 424LL;
                  else
                    this = 416LL;
                  v96 = v143;
                  *((_QWORD *)v88 + 1) = *(_QWORD *)(v143 + this);
                  *(_QWORD *)(v96 + this) = v88;
                }
                *((_DWORD *)v88 + 4) |= 2u;
                *((_BYTE *)v90 + 240) |= 1u;
              }
            }
            goto LABEL_36;
          case 0xFu:
            if ( a3 >= 0x10 )
            {
              v132 = v7 + 16;
              a3 -= 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_DWORD *)v7 + 2),
                                         *((_DWORD *)v7 + 3));
              goto LABEL_38;
            }
            ExternalSharedResource = -1073741811;
            goto LABEL_40;
          case 0x10u:
            if ( a3 >= 0x10 )
            {
              v132 = v7 + 16;
              a3 -= 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_QWORD *)v7 + 1));
              goto LABEL_38;
            }
            ExternalSharedResource = -1073741811;
            goto LABEL_40;
          case 0x11u:
            if ( a3 < 0x14 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_40;
            }
            v132 = v7 + 20;
            a3 -= 20;
            v65 = *((_DWORD *)v7 + 4);
            v66 = *((_DWORD *)v7 + 3);
            v67 = *((_DWORD *)v7 + 2);
            v68 = *((_DWORD *)v7 + 1);
            v137 = 0;
            v69 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
                    (DirectComposition::CApplicationChannel *)v8,
                    v68);
            this = (unsigned __int64)v69;
            if ( !v69 )
            {
              ExternalSharedResource = -1073741790;
              goto LABEL_36;
            }
            v70 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v69 + 168LL))(v69);
            if ( !v70 )
              goto LABEL_348;
            v71 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v160, v67);
            if ( !v71 )
              goto LABEL_348;
            v72 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v71 + 168LL))(v71);
            if ( !v72 )
              goto LABEL_348;
            if ( v65 )
            {
              v93 = v65;
              v73 = v160;
              v94 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v160, v93);
              if ( !v94
                || (v10 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v94 + 168LL))(v94)) == 0 )
              {
LABEL_348:
                ExternalSharedResource = -1073741811;
                goto LABEL_36;
              }
            }
            else
            {
              v73 = v160;
            }
            ExternalSharedResource = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _QWORD, __int64, char *))(*(_QWORD *)v70 + 288LL))(
                                       v70,
                                       v73,
                                       v72,
                                       v66,
                                       v10,
                                       &v137);
            if ( ExternalSharedResource >= 0 )
            {
              if ( v137 )
              {
                v74 = *(_DWORD *)(v70 + 16);
                if ( (v74 & 2) == 0 )
                {
                  if ( (v74 & 1) != 0 )
                  {
                    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                            *(unsigned int *)(v70 + 36),
                                            170LL) )
                      this = 424LL;
                    else
                      this = 416LL;
                    v75 = v143;
                    *(_QWORD *)(v70 + 8) = *(_QWORD *)(v143 + this);
                    *(_QWORD *)(v75 + this) = v70;
                  }
                  *(_DWORD *)(v70 + 16) |= 2u;
                  *((_BYTE *)v73 + 240) |= 1u;
                }
              }
            }
            goto LABEL_36;
          case 0x12u:
            if ( a3 < 0x48 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_40;
            }
            v132 = v7 + 72;
            a3 -= 72;
            v131 = (const struct tagMsgRoutingInfo *)(v7 + 32);
            if ( !*((_DWORD *)v7 + 6) )
              v131 = 0LL;
            ExternalSharedResource = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                                       (DirectComposition::CApplicationChannel *)v8,
                                       *((_DWORD *)v7 + 1),
                                       *((HWND *)v7 + 1),
                                       v131,
                                       *((_DWORD *)v7 + 4),
                                       *((_DWORD *)v7 + 5));
            goto LABEL_38;
          case 0x13u:
            if ( a3 >= 0x10 )
            {
              v132 = v7 + 16;
              a3 -= 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetVisualInputSink(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         *((void **)v7 + 1));
              goto LABEL_38;
            }
            ExternalSharedResource = -1073741811;
            goto LABEL_40;
          case 0x14u:
            if ( a3 >= 0xC )
            {
              v132 = v7 + 12;
              a3 -= 12;
              ExternalSharedResource = DirectComposition::CApplicationChannel::RemoveVisualChild(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_DWORD *)v7 + 2));
              goto LABEL_38;
            }
            ExternalSharedResource = -1073741811;
            goto LABEL_40;
          default:
            goto LABEL_365;
        }
        goto LABEL_38;
      }
      v34 = (unsigned int *)v7;
      if ( a3 < 0x10 )
      {
        ExternalSharedResource = -1073741811;
        goto LABEL_40;
      }
      v7 += 16;
      v132 = v7;
      a3 -= 16;
      v35 = v34[3];
      this = ((_DWORD)v35 + 3) & 0xFFFFFFFC;
      if ( (unsigned int)this < (unsigned int)v35 || a3 < (unsigned int)this )
      {
LABEL_365:
        ExternalSharedResource = -1073741811;
        goto LABEL_40;
      }
      v36 = v7;
      v132 = &v7[(unsigned int)this];
      a3 -= this;
      v37 = v34[2];
      v38 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
              (DirectComposition::CApplicationChannel *)v8,
              v34[1]);
      v39 = v38;
      if ( v38 )
      {
        v138 = 0;
        ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned __int64, _QWORD, char *, __int64, char *))(*(_QWORD *)v38 + 240LL))(
                                   v38,
                                   v8,
                                   v37,
                                   v36,
                                   v35,
                                   &v138);
        if ( ExternalSharedResource >= 0 )
        {
          if ( v138 )
          {
            v40 = *((_DWORD *)v39 + 4);
            if ( (v40 & 2) == 0 )
            {
              if ( (v40 & 1) != 0 )
              {
                if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                        *((unsigned int *)v39 + 9),
                                        170LL) )
                  this = 424LL;
                else
                  this = 416LL;
                v41 = v143;
                *((_QWORD *)v39 + 1) = *(_QWORD *)(v143 + this);
                *(_QWORD *)(v41 + this) = v39;
              }
              *((_DWORD *)v39 + 4) |= 2u;
              *(_BYTE *)(v8 + 240) |= 1u;
            }
          }
        }
      }
      else
      {
        ExternalSharedResource = -1073741790;
      }
      goto LABEL_36;
    }
    if ( a3 < 0x10 )
    {
      ExternalSharedResource = -1073741811;
      goto LABEL_40;
    }
    v132 = v7 + 16;
    a3 -= 16;
    v26 = *((_DWORD *)v7 + 3);
    v27 = *((_DWORD *)v7 + 2);
    v28 = *((_DWORD *)v7 + 1);
    v29 = 0LL;
    v30 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v160, v28);
    if ( v30 )
    {
      if ( !v26 )
      {
        v32 = v160;
LABEL_32:
        v139[0] = 0;
        ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)v30 + 248LL))(
                                   v30,
                                   v32,
                                   v27,
                                   v29,
                                   v139);
        if ( ExternalSharedResource >= 0 )
        {
          if ( v139[0] )
          {
            v33 = *((_DWORD *)v30 + 4);
            if ( (v33 & 2) == 0 )
            {
              if ( (v33 & 1) != 0 )
              {
                if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                        *((unsigned int *)v30 + 9),
                                        170LL) )
                  this = 424LL;
                else
                  this = 416LL;
                v92 = v143;
                *((_QWORD *)v30 + 1) = *(_QWORD *)(v143 + this);
                *(_QWORD *)(v92 + this) = v30;
              }
              *((_DWORD *)v30 + 4) |= 2u;
              *((_BYTE *)v32 + 240) |= 1u;
            }
          }
        }
        goto LABEL_35;
      }
      v31 = v26;
      v32 = v160;
      v29 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v160, v31);
      if ( v29 )
        goto LABEL_32;
      ExternalSharedResource = -1073741811;
    }
    else
    {
      ExternalSharedResource = -1073741790;
      v32 = v160;
    }
LABEL_35:
    if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0
      && ExternalSharedResource >= 0
      && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                            *((unsigned int *)v30 + 9),
                            129LL) )
    {
      McTemplateK0qqqqq_EtwWriteTransfer(
        this,
        (unsigned int)&DCompResourcePropertyUpdate,
        v119,
        *((_DWORD *)v32 + 7),
        *((_DWORD *)v30 + 8),
        v28,
        v120,
        v27);
    }
LABEL_36:
    v9 = v143;
LABEL_37:
    v10 = 0LL;
LABEL_38:
    v7 = v132;
LABEL_39:
    v5 = a4;
LABEL_40:
    v8 = (unsigned __int64)v160;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    {
      McTemplateK0qp_EtwWriteTransfer(this, &DCompCommandType, 0x1C0000000uLL, v13, ExternalSharedResource);
      v7 = v132;
      v8 = (unsigned __int64)v160;
      v5 = a4;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    McTemplateK0x_EtwWriteTransfer(this, &DCompCommandsInBatch, 0x1C0000000uLL, *a5);
  if ( ExternalSharedResource >= 0 && a3 )
    return (unsigned int)-1073741811;
  return (unsigned int)ExternalSharedResource;
}
