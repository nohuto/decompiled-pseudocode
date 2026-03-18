/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x14040B038
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14000C48C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035AC0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x140042EF8 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x14004324C (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047224 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x140052C74 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x14006B6E4 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline @ 0x14006B7FC (Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x14032CC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033A190 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x140391DDC (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x14039E65C (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1403A5C54 (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x1403E2B84 (-HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        ADAPTER_RENDER **this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        char a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct _EX_RUNDOWN_REF **a7,
        unsigned __int8 *a8,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a9,
        struct DXGAUTOMUTEX *a10,
        struct DXGAUTOPUSHLOCK *a11)
{
  int v15; // r15d
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hResource; // ebx
  ADAPTER_RENDER *v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // r9
  int v22; // ecx
  struct _EX_RUNDOWN_REF *v23; // rdx
  struct _EX_RUNDOWN_REF *v24; // rbx
  D3DKMT_CREATEALLOCATIONFLAGS v25; // eax
  DXGDEVICE *Count; // r9
  ULONG_PTR v27; // rax
  ULONG_PTR v28; // rcx
  UINT v29; // eax
  struct DXGAUTOPUSHLOCK *v30; // rdi
  DXGPUSHLOCK *v31; // rcx
  __int64 v32; // rcx
  ULONG_PTR v33; // r8
  UINT v34; // r10d
  __int64 v35; // rdx
  unsigned int v36; // edi
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  ULONG_PTR v39; // rax
  void *v40; // rcx
  UINT j; // r14d
  DXGADAPTERALLOCATION_VGPU *v42; // rax
  DXGADAPTERALLOCATION_VGPU *v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rax
  __int64 **v46; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  DXGRESOURCE *v49; // rax
  DXGRESOURCE *v50; // rbx
  DXGRESOURCE *v51; // rax
  ADAPTER_RENDER *v52; // rcx
  __int64 v53; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // r14
  int v56; // eax
  __int64 v57; // r14
  D3DKMT_HANDLE hGlobalShare; // eax
  unsigned int v59; // eax
  __int64 v60; // r14
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 v67; // r8
  int v68; // r12d
  __int64 NumAllocations; // rcx
  UINT PrivateDriverDataSize; // eax
  __int64 v71; // r14
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned int CurrentProcessSessionId; // eax
  ADAPTER_RENDER *v77; // r9
  ADAPTER_RENDER *v78; // rax
  ADAPTER_RENDER *v79; // r9
  __int64 v80; // rcx
  UINT v81; // r10d
  _QWORD *v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rdx
  signed __int32 v85; // eax
  signed __int32 v86; // ett
  __int64 v87; // rcx
  bool v88; // r12
  struct _EPROCESS *v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 *v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rdi
  DXGADAPTER *v95; // rcx
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  char v97; // r9
  __int64 v98; // r8
  DXGADAPTERALLOCATION_VGPU *v99; // rax
  DXGADAPTERALLOCATION_VGPU *v100; // rax
  __int64 *v101; // rcx
  __int64 v102; // rax
  __int64 **v103; // rdx
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v106; // eax
  __int64 v107; // rax
  __int64 v108; // rdi
  ADAPTER_RENDER *v109; // rsi
  __int64 v110; // rax
  void *v111; // rsi
  __int64 v112; // rdi
  _QWORD *v113; // rax
  __int64 v114; // rcx
  struct _EX_RUNDOWN_REF *v115; // [rsp+50h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v116; // [rsp+58h] [rbp-41h] BYREF
  __int64 v117; // [rsp+60h] [rbp-39h]
  __int128 v118; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v119[16]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v120[72]; // [rsp+88h] [rbp-11h] BYREF
  char v121; // [rsp+E0h] [rbp+47h]
  unsigned int i; // [rsp+E0h] [rbp+47h]
  __int64 v123; // [rsp+E0h] [rbp+47h]
  D3DKMT_HANDLE v124; // [rsp+E8h] [rbp+4Fh]
  unsigned int v125; // [rsp+E8h] [rbp+4Fh]

  v15 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2123;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2123LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v115, 0LL);
  Current = DXGPROCESS::GetCurrent(v16);
  v118 = 0LL;
  v121 = BYTE1(*((_DWORD *)Current + 102)) & 1;
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_55;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v49 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL);
      v50 = v49;
      if ( v49 )
      {
        DXGRESOURCE::DXGRESOURCE(v49, (struct DXGDEVICE *)this);
        *((_QWORD *)v50 + 16) = 0LL;
        *((_DWORD *)v50 + 1) |= 4u;
      }
      else
      {
        v50 = 0LL;
      }
    }
    else
    {
      v51 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(128LL);
      if ( !v51 )
        goto LABEL_205;
      v50 = DXGRESOURCE::DXGRESOURCE(v51, (struct DXGDEVICE *)this);
    }
    if ( v50 )
    {
      DXGPROCESS::CreateResourceHandleSafe(this[5], v50);
      if ( !*((_DWORD *)v50 + 4) )
      {
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2366;
LABEL_68:
        v15 = -1073741801;
LABEL_204:
        ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(v52, v50, 0LL);
        DXGRESOURCE::`scalar deleting destructor'(v50);
        goto LABEL_207;
      }
      *((_QWORD *)v50 + 6) = a2->hPrivateRuntimeResourceHandle;
      if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
      {
LABEL_198:
        *a8 = 1;
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v116, (struct _EX_RUNDOWN_REF *)v50);
        DXGRESOURCEREFERENCE::MoveAssign(a7, &v116);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v116);
        goto LABEL_207;
      }
      *((_DWORD *)v50 + 1) |= 1u;
      if ( a4 )
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v119);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v119);
        if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
        {
          if ( a6 )
          {
            v53 = *((_QWORD *)a6 + 2);
            *((_QWORD *)v50 + 7) = v53;
            if ( v53 )
              goto LABEL_94;
            WdLogSingleEntry3(3LL, this, a6, -1073741811LL);
            WdLogGlobalForLineNumber = 2407;
          }
          else
          {
            WdLogSingleEntry2(3LL, this, -1073741811LL);
            WdLogGlobalForLineNumber = 2395;
          }
        }
        else
        {
          if ( v121 )
          {
            v56 = *((_DWORD *)Current + 102);
            if ( (v56 & 0x100) != 0 )
              v57 = *((_QWORD *)Current + 74);
            else
              v57 = (unsigned __int64)Current & -(__int64)((v56 & 0x80u) != 0);
            hGlobalShare = a2->hGlobalShare;
            v117 = v57 + 248;
            v124 = hGlobalShare;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v57 + 248));
            v59 = (v124 >> 6) & 0xFFFFFF;
            if ( v59 < *(_DWORD *)(v57 + 296)
              && (v60 = *(_QWORD *)(v57 + 280), ((v124 >> 25) & 0x60) == (*(_BYTE *)(v60 + 16LL * v59 + 8) & 0x60))
              && (*(_DWORD *)(v60 + 16LL * v59 + 8) & 0x2000) == 0
              && (v61 = *(_DWORD *)(v60 + 16LL * v59 + 8) & 0x1F) != 0 )
            {
              if ( v61 == 2 )
              {
                ObjectA = *(_QWORD *)(v60 + 16LL * v59);
              }
              else
              {
                WdLogSingleEntry0(2LL);
                ObjectA = 0LL;
                WdLogGlobalForLineNumber = 318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Handle type mismatch",
                  318LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              ObjectA = 0LL;
            }
            v62 = v117;
            _InterlockedDecrement((volatile signed __int32 *)(v117 + 16));
            ExReleasePushLockSharedEx(v62, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal();
            ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
          }
          *((_QWORD *)v50 + 7) = ObjectA;
          if ( ObjectA )
          {
LABEL_94:
            v63 = *((_QWORD *)v50 + 7);
            if ( v63 )
            {
              *(_DWORD *)(v63 + 12) |= 0x100u;
              IsEnabledDeviceUsageNoInline = Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline();
              v67 = *((_QWORD *)v50 + 7);
              v68 = IsEnabledDeviceUsageNoInline;
              NumAllocations = a2->NumAllocations;
              if ( *(_DWORD *)(v67 + 132) == (_DWORD)NumAllocations )
              {
                PrivateDriverDataSize = a2->PrivateDriverDataSize;
                if ( *(_DWORD *)(v67 + 128) == PrivateDriverDataSize || v121 )
                {
                  v71 = *((_QWORD *)v50 + 7);
                  if ( *(_DWORD *)(v71 + 72) == (unsigned int)PsGetCurrentProcessSessionId(
                                                                NumAllocations,
                                                                v65,
                                                                v67,
                                                                v66)
                    || (*(_DWORD *)(v71 + 12) & 8) != 0 )
                  {
                    v77 = *(ADAPTER_RENDER **)(v71 + 80);
                    if ( v77 == this[2] )
                    {
                      v78 = this[237];
                      if ( !v78
                        || *((_QWORD *)v78 + 391)
                        || (v79 = *(ADAPTER_RENDER **)(v71 + 96)) == 0LL
                        || v79 == v78
                        || (*((_BYTE *)this + 1917) & 1) != 0 && (*(_DWORD *)(v71 + 12) & 0x20) != 0 )
                      {
                        if ( (*(_DWORD *)(v71 + 12) & 1) != 0
                          && (!(unsigned int)PsIsProtectedProcess(*((_QWORD *)this[5] + 7), v72, v74)
                           || (unsigned int)PsIsProtectedProcessLight(*((_QWORD *)this[5] + 7))) )
                        {
                          WdLogSingleEntry3(3LL, this, *((_QWORD *)v50 + 7), -1073741811LL);
                          WdLogGlobalForLineNumber = 2530;
                        }
                        else if ( v68
                               || (*(_DWORD *)(*((_QWORD *)v50 + 7) + 12LL) & 0x4000) == 0
                               || DXGDEVICE::HasContextWithHintType(
                                    this,
                                    D3DKMT_CLIENTHINT_DX10|D3DKMT_CLIENTHINT_OPENGL) )
                        {
                          v80 = 0LL;
                          v81 = a2->NumAllocations;
                          v82 = *(_QWORD **)(*((_QWORD *)v50 + 7) + 136LL);
                          if ( !v81 )
                          {
LABEL_123:
                            if ( v15 >= 0 )
                            {
                              v84 = *((_QWORD *)v50 + 7);
                              _m_prefetchw((const void *)(v84 + 68));
                              v85 = *(_DWORD *)(v84 + 68);
                              do
                              {
                                if ( !v85 )
                                {
                                  *((_QWORD *)v50 + 7) = 0LL;
                                  WdLogSingleEntry3(3LL, this, 0LL, -1073741811LL);
                                  WdLogGlobalForLineNumber = 2616;
                                  goto LABEL_129;
                                }
                                v86 = v85;
                                v85 = _InterlockedCompareExchange((volatile signed __int32 *)(v84 + 68), v85 + 1, v85);
                              }
                              while ( v86 != v85 );
                              v87 = *(_QWORD *)(*((_QWORD *)v50 + 7) + 152LL);
                              if ( !v87 )
                                goto LABEL_143;
                              if ( *(ADAPTER_RENDER ***)(v87 + 80) == this )
                                ++*(_DWORD *)(v87 + 72);
                              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v119);
                              v88 = (*((_DWORD *)this[5] + 102) & 4) != 0;
                              DXGAUTOMUTEX::DXGAUTOMUTEX(
                                (DXGAUTOMUTEX *)v120,
                                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v50 + 7) + 152LL) + 8LL),
                                0);
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v120);
                              v89 = a5;
                              if ( !a5 )
                                v89 = (struct _EPROCESS *)*((_QWORD *)this[5] + 7);
                              v90 = *((_QWORD *)v50 + 7);
                              v91 = *(_QWORD *)(v90 + 152);
                              v92 = *(__int64 **)(v91 + 56);
                              if ( v92 == (__int64 *)(v91 + 56) )
                              {
LABEL_141:
                                WdLogSingleEntry3(3LL, this, v90, -1073741811LL);
                                WdLogGlobalForLineNumber = 2690;
                                v15 = -1073741811;
                              }
                              else if ( !v88 )
                              {
                                while ( *((_BYTE *)v92 + 16) || v89 != (struct _EPROCESS *)v92[3] )
                                {
                                  v92 = (__int64 *)*v92;
                                  if ( v92 == (__int64 *)(v91 + 56) )
                                    goto LABEL_141;
                                }
                              }
                              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v120);
                              if ( v15 >= 0 )
                              {
LABEL_143:
                                v93 = *((_QWORD *)v50 + 7);
                                v94 = *(_QWORD *)(v93 + 136);
                                if ( (*(_DWORD *)(v94 - 44) & 2) != 0 )
                                {
                                  if ( *(_DWORD *)(v93 + 132) != 1 )
                                  {
                                    v95 = (DXGADAPTER *)*((_QWORD *)this[2] + 2);
                                    if ( *((_DWORD *)v95 + 74) <= 1u || !DXGADAPTER::IsDxgmms2(v95) )
                                    {
                                      WdLogSingleEntry0(1LL);
                                      WdLogGlobalForLineNumber = 2707;
                                      DxgkLogInternalTriageEvent(
                                        0LL,
                                        262146LL,
                                        0xFFFFFFFFLL,
                                        L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetP"
                                         "hysicalAdapterCount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                                        2707LL,
                                        0LL,
                                        0LL,
                                        0LL,
                                        0LL);
                                    }
                                  }
                                  this[((*(_DWORD *)(v94 - 44) >> 6) & 0xF) + 83] = v50;
                                }
                              }
                            }
                            goto LABEL_130;
                          }
                          while ( 1 )
                          {
                            v83 = a3[v80].PrivateDriverDataSize;
                            if ( *((_DWORD *)v82 - 2) != (_DWORD)v83 )
                              break;
                            v82 = (_QWORD *)*v82;
                            v80 = (unsigned int)(v80 + 1);
                            if ( (unsigned int)v80 >= v81 )
                              goto LABEL_123;
                          }
                          WdLogSingleEntry5(3LL, this, *((_QWORD *)v50 + 7), (unsigned int)v80, v83, -1073741811LL);
                          WdLogGlobalForLineNumber = 2558;
                        }
                        else
                        {
                          WdLogSingleEntry3(3LL, this, *((_QWORD *)v50 + 7), -1073741811LL);
                          WdLogGlobalForLineNumber = 2539;
                        }
                      }
                      else
                      {
                        WdLogSingleEntry4(3LL, this, v71, v79, -1073741811LL);
                        WdLogGlobalForLineNumber = 2519;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry4(3LL, this, v71, *((_QWORD *)v77 + 2), -1073741811LL);
                      WdLogGlobalForLineNumber = 2495;
                    }
                  }
                  else
                  {
                    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v73, v72, v74, v75);
                    WdLogSingleEntry5(
                      3LL,
                      this,
                      *((_QWORD *)v50 + 7),
                      *(unsigned int *)(*((_QWORD *)v50 + 7) + 72LL),
                      CurrentProcessSessionId,
                      -1073741811LL);
                    WdLogGlobalForLineNumber = 2485;
                  }
                }
                else
                {
                  WdLogSingleEntry4(3LL, this, v67, PrivateDriverDataSize, -1073741811LL);
                  WdLogGlobalForLineNumber = 2473;
                }
              }
              else
              {
                WdLogSingleEntry4(3LL, this, v67, (unsigned int)NumAllocations, -1073741811LL);
                WdLogGlobalForLineNumber = 2457;
              }
LABEL_129:
              v15 = -1073741811;
            }
LABEL_130:
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v119);
            goto LABEL_203;
          }
          WdLogSingleEntry3(3LL, this, a2->hGlobalShare, -1073741811LL);
          WdLogGlobalForLineNumber = 2432;
        }
        v15 = -1073741811;
        goto LABEL_94;
      }
      SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(this[2], this[237], (*(_DWORD *)&a2->Flags & 0x800) != 0);
      v97 = 0;
      *((_QWORD *)v50 + 7) = SharedResource;
      if ( !SharedResource )
      {
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2726;
        goto LABEL_68;
      }
      if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
        *((_DWORD *)SharedResource + 3) |= 0x8000u;
      v98 = a2->NumAllocations;
      v125 = v98;
      for ( i = 0; i < v125; ++i )
      {
        if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 209LL) == v97 )
        {
          v100 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, 256LL);
          v97 = 0;
          if ( !v100 )
            goto LABEL_159;
          *((_DWORD *)v100 + 1) = 0;
          *((_QWORD *)v100 + 1) = 0LL;
          *((_QWORD *)v100 + 2) = 0LL;
          *((_QWORD *)v100 + 4) = 0LL;
          *((_DWORD *)v100 + 10) = 0;
          *((_QWORD *)v100 + 7) = 0LL;
          *((_QWORD *)v100 + 6) = 0LL;
        }
        else
        {
          v99 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL);
          v97 = 0;
          if ( v99 )
            v100 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v99);
          else
            v100 = 0LL;
          if ( !v100 )
          {
LABEL_159:
            WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
            v98 = v125;
            v15 = -1073741801;
            WdLogGlobalForLineNumber = 2750;
            goto LABEL_165;
          }
        }
        v101 = (__int64 *)((char *)v100 + 48);
        v102 = *((_QWORD *)v50 + 7) + 136LL;
        v103 = *(__int64 ***)(*((_QWORD *)v50 + 7) + 144LL);
        if ( *v103 != (__int64 *)v102 )
          goto LABEL_196;
        v98 = v125;
        v101[1] = (__int64)v103;
        *v101 = v102;
        *v103 = v101;
        *(_QWORD *)(v102 + 8) = v101;
      }
      *(_DWORD *)(*((_QWORD *)v50 + 7) + 132LL) = v98;
      *((_DWORD *)v50 + 1) |= 2u;
LABEL_165:
      if ( a9 )
        *(_QWORD *)(*((_QWORD *)v50 + 7) + 184LL) = *((_QWORD *)a9 + 52);
      v104 = *((_QWORD *)v50 + 7);
      *(_DWORD *)(v104 + 12) ^= ((unsigned __int8)*(_DWORD *)(v104 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 8;
      if ( v15 >= 0 && (unsigned int)v98 > 1 )
      {
        v105 = 8LL * (unsigned int)v98;
        v123 = (unsigned int)v98;
        if ( !is_mul_ok((unsigned int)v98, 8uLL) )
          v105 = -1LL;
        *(_QWORD *)(*((_QWORD *)v50 + 7) + 168LL) = operator new[](v105, 0x4B677844u, 256LL);
        if ( !*(_QWORD *)(*((_QWORD *)v50 + 7) + 168LL) )
        {
          WdLogSingleEntry3(3LL, this, v123, -1073741801LL);
          WdLogGlobalForLineNumber = 2786;
          v15 = -1073741801;
        }
      }
      if ( (*(_DWORD *)&a2->Flags & 4) == 0
        && (unsigned int)PsIsProtectedProcess(*((_QWORD *)this[5] + 7), v104, v98)
        && !(unsigned int)PsIsProtectedProcessLight(*((_QWORD *)this[5] + 7)) )
      {
        *(_DWORD *)(*((_QWORD *)v50 + 7) + 12LL) |= 1u;
      }
      v106 = a2->Flags;
      if ( (*(_DWORD *)&v106 & 0x200000) != 0 )
      {
        if ( (*(_WORD *)&v106 & 0x400) != 0 && a2->NumAllocations && (a3->Flags.Value & 1) != 0 )
        {
          *(_DWORD *)(*((_QWORD *)v50 + 7) + 12LL) |= 0x4000u;
        }
        else
        {
          WdLogSingleEntry2(2LL, this, -1073741811LL);
          WdLogGlobalForLineNumber = 2819;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Device 0x%I64x: Attempting to create shared displayable resource without expected flags, returning 0x%I64x",
            (__int64)this,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          v15 = -1073741811;
        }
      }
      if ( (*(_DWORD *)&a2->Flags & 0x10) == 0 )
      {
        if ( v15 >= 0 )
          goto LABEL_198;
        goto LABEL_202;
      }
      if ( v15 < 0 )
      {
LABEL_202:
        DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v50 + 7), 0LL, 0);
        *((_QWORD *)v50 + 7) = 0LL;
LABEL_203:
        if ( v15 < 0 )
          goto LABEL_204;
        goto LABEL_198;
      }
      v107 = operator new(0x58uLL, 0x4B677844u, 64LL);
      v108 = v107;
      if ( !v107 )
      {
        WdLogSingleEntry2(6LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2838;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Device 0x%I64x: Out of memory allocating DXGSHAREDRESOURCEACCESS class, returning 0x%I64x",
          (__int64)this,
          -1073741801LL,
          0LL,
          0LL,
          0LL);
LABEL_200:
        v15 = -1073741801;
        goto LABEL_202;
      }
      *(_QWORD *)(v107 + 16) = 0LL;
      *(_QWORD *)(v107 + 24) = 0LL;
      *(_DWORD *)(v107 + 40) = 0;
      *(_QWORD *)(v107 + 32) = 0LL;
      *(_DWORD *)(v107 + 44) = 36;
      *(_DWORD *)(v107 + 48) = 75;
      *(_DWORD *)(v107 + 72) = 1;
      *(_QWORD *)(v107 + 80) = this;
      *(_QWORD *)(v107 + 64) = v107 + 56;
      *(_QWORD *)(v107 + 56) = v107 + 56;
      *(_QWORD *)(*((_QWORD *)v50 + 7) + 152LL) = v107;
      v109 = this[5];
      if ( (*((_DWORD *)v109 + 102) & 4) != 0 )
      {
        v110 = operator new(0x28uLL, 0x4B677844u, 256LL);
        if ( v110 )
        {
          *(_QWORD *)(v110 + 32) = 0LL;
          *(_BYTE *)(v110 + 24) = 1;
        }
        v111 = 0LL;
        if ( !v110 )
          goto LABEL_190;
      }
      else
      {
        v111 = (void *)*((_QWORD *)v109 + 7);
        ObfReferenceObject(v111);
        v110 = operator new(0x28uLL, 0x4B677844u, 256LL);
        if ( !v110 )
        {
LABEL_190:
          if ( v111 )
            ObfDereferenceObject(v111);
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2875;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Out of memory allocating DXGPROCESSSHAREDACCESS class, returning 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_200;
        }
        *(_BYTE *)(v110 + 24) = 0;
        *(_QWORD *)(v110 + 32) = v111;
      }
      v112 = v108 + 56;
      v113 = (_QWORD *)(v110 + 8);
      v114 = *(_QWORD *)v112;
      if ( *(_QWORD *)(*(_QWORD *)v112 + 8LL) != v112 )
LABEL_196:
        __fastfail(3u);
      *v113 = v114;
      v113[1] = v112;
      *(_QWORD *)(v114 + 8) = v113;
      *(_QWORD *)v112 = v113;
      goto LABEL_198;
    }
LABEL_205:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 2354;
LABEL_206:
    v15 = -1073741801;
    goto LABEL_207;
  }
  v19 = this[5];
  DXGPUSHLOCK::AcquireShared((ADAPTER_RENDER *)((char *)v19 + 248));
  v20 = (hResource >> 6) & 0xFFFFFF;
  if ( v20 >= *((_DWORD *)v19 + 74) )
    goto LABEL_10;
  v21 = *((_QWORD *)v19 + 35);
  if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v21 + 16LL * v20 + 8) & 0x2000) != 0 )
    goto LABEL_10;
  v22 = *(_DWORD *)(v21 + 16LL * v20 + 8) & 0x1F;
  if ( !v22 )
    goto LABEL_10;
  if ( v22 != 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    v23 = 0LL;
    goto LABEL_11;
  }
  v23 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * v20);
LABEL_11:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&a8, v23);
  _InterlockedDecrement((volatile signed __int32 *)v19 + 66);
  ExReleasePushLockSharedEx((char *)v19 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v115, (struct _EX_RUNDOWN_REF **)&a8);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a8);
  v24 = v115;
  if ( v115 )
  {
    v25 = a2->Flags;
    if ( (*(_DWORD *)&v25 & 0x20020) != 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 2173;
      goto LABEL_57;
    }
    Count = (DXGDEVICE *)v115[1].Count;
    if ( Count != (DXGDEVICE *)this )
    {
      WdLogSingleEntry4(3LL, this, a2->hResource, Count, -1073741811LL);
      WdLogGlobalForLineNumber = 2187;
LABEL_57:
      v15 = -1073741811;
      goto LABEL_207;
    }
    if ( (*(_WORD *)&v25 & 0x800) != 0 )
    {
      v27 = v115[7].Count;
      if ( !v27 || (*(_DWORD *)(v27 + 12) & 0x20) == 0 )
      {
        WdLogSingleEntry2(3LL, a2->hResource, -1073741811LL);
        WdLogGlobalForLineNumber = 2201;
        goto LABEL_57;
      }
    }
    if ( (HIDWORD(v115->Ptr) & 1) != 0 )
    {
      v28 = v115[7].Count;
      if ( !v28 )
      {
        WdLogSingleEntry3(3LL, this, v115, -1073741811LL);
        WdLogGlobalForLineNumber = 2215;
        goto LABEL_57;
      }
      v29 = a2->PrivateDriverDataSize;
      if ( *(_DWORD *)(v28 + 128) != v29 )
      {
        WdLogSingleEntry4(3LL, this, v115[7].Count, v29, -1073741811LL);
        WdLogGlobalForLineNumber = 2227;
        goto LABEL_57;
      }
      v30 = a11;
      v31 = (DXGPUSHLOCK *)(v28 + 32);
      *((_QWORD *)a11 + 1) = v31;
      DXGPUSHLOCK::AcquireExclusive(v31);
      *((_DWORD *)v30 + 4) = 2;
      v32 = 0LL;
      v33 = v24[7].Count;
      v34 = a2->NumAllocations;
      *(_QWORD *)&v118 = v30;
      if ( v34 )
      {
        while ( 1 )
        {
          v35 = a3[v32].PrivateDriverDataSize;
          if ( *(_DWORD *)(*(_QWORD *)(v33 + 136) - 8LL) != (_DWORD)v35 )
            break;
          v32 = (unsigned int)(v32 + 1);
          if ( (unsigned int)v32 >= v34 )
            goto LABEL_29;
        }
        WdLogSingleEntry5(3LL, this, v33, (unsigned int)v32, v35, -1073741811LL);
        WdLogGlobalForLineNumber = 2252;
        goto LABEL_57;
      }
LABEL_29:
      if ( (*(_DWORD *)(v33 + 12) & 0x100) != 0 )
      {
        WdLogSingleEntry3(3LL, this, v33, -1073741811LL);
        WdLogGlobalForLineNumber = 2263;
        goto LABEL_57;
      }
      v36 = v34 + *(_DWORD *)(v33 + 132);
      if ( v36 > 0x100 )
      {
        WdLogSingleEntry4(3LL, this, v33, 256LL, -1073741811LL);
        WdLogGlobalForLineNumber = 2275;
        goto LABEL_57;
      }
      *(_DWORD *)&a2->Flags |= 2u;
      if ( v36 > 1 )
      {
        v37 = 8LL * v36;
        if ( !is_mul_ok(v36, 8uLL) )
          v37 = -1LL;
        v38 = operator new[](v37, 0x4B677844u, 256LL);
        if ( !v38 )
        {
          WdLogSingleEntry3(3LL, this, v36, -1073741801LL);
          WdLogGlobalForLineNumber = 2293;
          goto LABEL_206;
        }
        v39 = v24[7].Count;
        v40 = *(void **)(v39 + 168);
        if ( v40 != (void *)(v39 + 160) )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v40);
        *(_QWORD *)(v24[7].Count + 168) = v38;
      }
      for ( j = 0; j < a2->NumAllocations; *(_QWORD *)(v45 + 8) = v44 )
      {
        if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 209LL) )
        {
          v42 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL);
          if ( v42 )
            v43 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v42);
          else
            v43 = 0LL;
          if ( !v43 )
          {
LABEL_48:
            WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
            WdLogGlobalForLineNumber = 2314;
            goto LABEL_206;
          }
        }
        else
        {
          v43 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, 256LL);
          if ( !v43 )
            goto LABEL_48;
          *((_DWORD *)v43 + 1) = 0;
          *((_QWORD *)v43 + 1) = 0LL;
          *((_QWORD *)v43 + 2) = 0LL;
          *((_QWORD *)v43 + 4) = 0LL;
          *((_DWORD *)v43 + 10) = 0;
          *((_QWORD *)v43 + 7) = 0LL;
          *((_QWORD *)v43 + 6) = 0LL;
        }
        v44 = (__int64 *)((char *)v43 + 48);
        v45 = v24[7].Count + 136;
        v46 = *(__int64 ***)(v24[7].Count + 144);
        if ( *v46 != (__int64 *)v45 )
          goto LABEL_196;
        *v44 = v45;
        ++j;
        v44[1] = (__int64)v46;
        *v46 = v44;
      }
      *(_DWORD *)(v24[7].Count + 132) = v36;
    }
    DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)&v24[10], 0);
    DXGAUTOMUTEX::Acquire(a10);
LABEL_55:
    DXGRESOURCEREFERENCE::MoveAssign(a7, &v115);
    *(_QWORD *)&v118 = 0LL;
    DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v118);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v115);
    return 0LL;
  }
  v15 = -1073741816;
  WdLogSingleEntry3(3LL, this, a2->hResource, -1073741816LL);
  WdLogGlobalForLineNumber = 2164;
LABEL_207:
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v118);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v115);
  return (unsigned int)v15;
}
