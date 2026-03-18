/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x14040FD98
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14001BA6C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140043120 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1400431C8 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047804 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x140052FC4 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x14006BA1C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline @ 0x14006BB34 (Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402E0234 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140350100 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x140399E7C (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1403AC6BC (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1403B415C (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x1403E9824 (-HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hResource; // ebx
  ADAPTER_RENDER *v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // r9
  int v25; // ecx
  struct _EX_RUNDOWN_REF *v26; // rdx
  struct _EX_RUNDOWN_REF *v27; // rbx
  D3DKMT_CREATEALLOCATIONFLAGS v28; // eax
  DXGDEVICE *Count; // r9
  ULONG_PTR v30; // rax
  ULONG_PTR v31; // rcx
  UINT v32; // eax
  struct DXGAUTOPUSHLOCK *v33; // rdi
  DXGPUSHLOCK *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rcx
  ULONG_PTR v37; // r8
  UINT v38; // r10d
  __int64 v39; // rdx
  unsigned int v40; // edi
  unsigned __int64 v41; // rax
  __int64 v42; // r14
  ULONG_PTR v43; // rax
  void *v44; // rcx
  UINT j; // r14d
  DXGADAPTERALLOCATION_VGPU *v46; // rax
  DXGADAPTERALLOCATION_VGPU *v47; // rax
  __int64 *v48; // rcx
  __int64 v49; // rax
  __int64 **v50; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  DXGRESOURCE *v53; // rax
  DXGRESOURCE *v54; // rbx
  DXGRESOURCE *v55; // rax
  __int64 v56; // r9
  ADAPTER_RENDER *v57; // rcx
  __int64 v58; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // r14
  int v61; // eax
  __int64 v62; // r14
  D3DKMT_HANDLE hGlobalShare; // eax
  unsigned int v64; // eax
  __int64 v65; // r14
  int v66; // ecx
  __int64 v67; // rcx
  __int64 v68; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v70; // rdx
  __int64 v71; // r9
  __int64 v72; // r8
  int v73; // r12d
  __int64 NumAllocations; // rcx
  UINT PrivateDriverDataSize; // eax
  __int64 v76; // r14
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned int CurrentProcessSessionId; // eax
  ADAPTER_RENDER *v82; // r9
  ADAPTER_RENDER *v83; // rax
  ADAPTER_RENDER *v84; // r9
  __int64 v85; // rcx
  UINT v86; // r10d
  _QWORD *v87; // rdx
  __int64 v88; // r8
  __int64 v89; // rdx
  signed __int32 v90; // eax
  signed __int32 v91; // ett
  __int64 v92; // rcx
  bool v93; // r12
  struct _EPROCESS *v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rdi
  DXGADAPTER *v100; // rcx
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  __int64 v102; // r9
  __int64 v103; // r8
  DXGADAPTERALLOCATION_VGPU *v104; // rax
  DXGADAPTERALLOCATION_VGPU *v105; // rax
  __int64 *v106; // rcx
  __int64 v107; // rax
  __int64 **v108; // rdx
  __int64 v109; // rdx
  unsigned __int64 v110; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v111; // eax
  __int64 v112; // rax
  __int64 v113; // r9
  __int64 v114; // rdi
  ADAPTER_RENDER *v115; // rsi
  __int64 v116; // rax
  void *v117; // rsi
  __int64 v118; // r9
  __int64 v119; // rdi
  _QWORD *v120; // rax
  __int64 v121; // rcx
  struct _EX_RUNDOWN_REF *v122; // [rsp+50h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v123; // [rsp+58h] [rbp-41h] BYREF
  __int64 v124; // [rsp+60h] [rbp-39h]
  __int128 v125; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v126[16]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v127[72]; // [rsp+88h] [rbp-11h] BYREF
  char v128; // [rsp+E0h] [rbp+47h]
  unsigned int i; // [rsp+E0h] [rbp+47h]
  __int64 v130; // [rsp+E0h] [rbp+47h]
  D3DKMT_HANDLE v131; // [rsp+E8h] [rbp+4Fh]
  unsigned int v132; // [rsp+E8h] [rbp+4Fh]

  v15 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2088;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2088LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v122, 0LL);
  Current = DXGPROCESS::GetCurrent(v16);
  v125 = 0LL;
  v128 = BYTE1(*((_DWORD *)Current + 102)) & 1;
  *a8 = 0;
  hResource = a2->hResource;
  if ( !hResource )
  {
    Flags = a2->Flags;
    if ( (*(_BYTE *)&Flags & 1) == 0 )
      goto LABEL_55;
    if ( (*(_WORD *)&Flags & 0x1000) != 0 )
    {
      v53 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL, v17, v18, v19);
      v54 = v53;
      if ( v53 )
      {
        DXGRESOURCE::DXGRESOURCE(v53, (struct DXGDEVICE *)this);
        *((_QWORD *)v54 + 16) = 0LL;
        *((_DWORD *)v54 + 1) |= 4u;
      }
      else
      {
        v54 = 0LL;
      }
    }
    else
    {
      v55 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(128LL, v17, v18, v19);
      if ( !v55 )
        goto LABEL_205;
      v54 = DXGRESOURCE::DXGRESOURCE(v55, (struct DXGDEVICE *)this);
    }
    if ( v54 )
    {
      DXGPROCESS::CreateResourceHandleSafe(this[5], v54);
      if ( !*((_DWORD *)v54 + 4) )
      {
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2331;
LABEL_68:
        v15 = -1073741801;
LABEL_204:
        ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(v57, v54, 0LL);
        DXGRESOURCE::`scalar deleting destructor'(v54);
        goto LABEL_207;
      }
      *((_QWORD *)v54 + 6) = a2->hPrivateRuntimeResourceHandle;
      if ( (*(_DWORD *)&a2->Flags & 2) == 0 && !a4 )
      {
LABEL_198:
        *a8 = 1;
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v123, (struct _EX_RUNDOWN_REF *)v54);
        DXGRESOURCEREFERENCE::MoveAssign(a7, &v123);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v123);
        goto LABEL_207;
      }
      *((_DWORD *)v54 + 1) |= 1u;
      if ( a4 )
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v126);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v126);
        if ( (*(_DWORD *)&a2->Flags & 0x40) != 0 )
        {
          if ( a6 )
          {
            v58 = *((_QWORD *)a6 + 2);
            *((_QWORD *)v54 + 7) = v58;
            if ( v58 )
              goto LABEL_94;
            WdLogSingleEntry3(3LL, this, a6, -1073741811LL);
            WdLogGlobalForLineNumber = 2372;
          }
          else
          {
            WdLogSingleEntry2(3LL, this, -1073741811LL);
            WdLogGlobalForLineNumber = 2360;
          }
        }
        else
        {
          if ( v128 )
          {
            v61 = *((_DWORD *)Current + 102);
            if ( (v61 & 0x100) != 0 )
              v62 = *((_QWORD *)Current + 74);
            else
              v62 = (unsigned __int64)Current & -(__int64)((v61 & 0x80u) != 0);
            hGlobalShare = a2->hGlobalShare;
            v124 = v62 + 248;
            v131 = hGlobalShare;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v62 + 248));
            v64 = (v131 >> 6) & 0xFFFFFF;
            if ( v64 < *(_DWORD *)(v62 + 296)
              && (v65 = *(_QWORD *)(v62 + 280), ((v131 >> 25) & 0x60) == (*(_BYTE *)(v65 + 16LL * v64 + 8) & 0x60))
              && (*(_DWORD *)(v65 + 16LL * v64 + 8) & 0x2000) == 0
              && (v66 = *(_DWORD *)(v65 + 16LL * v64 + 8) & 0x1F) != 0 )
            {
              if ( v66 == 2 )
              {
                ObjectA = *(_QWORD *)(v65 + 16LL * v64);
              }
              else
              {
                WdLogSingleEntry0(2LL);
                ObjectA = 0LL;
                WdLogGlobalForLineNumber = 318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
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
            v67 = v124;
            _InterlockedDecrement((volatile signed __int32 *)(v124 + 16));
            ExReleasePushLockSharedEx(v67, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            Global = DXGGLOBAL::GetGlobal();
            ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2->hGlobalShare, 2);
          }
          *((_QWORD *)v54 + 7) = ObjectA;
          if ( ObjectA )
          {
LABEL_94:
            v68 = *((_QWORD *)v54 + 7);
            if ( v68 )
            {
              *(_DWORD *)(v68 + 12) |= 0x100u;
              IsEnabledDeviceUsageNoInline = Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline();
              v72 = *((_QWORD *)v54 + 7);
              v73 = IsEnabledDeviceUsageNoInline;
              NumAllocations = a2->NumAllocations;
              if ( *(_DWORD *)(v72 + 132) == (_DWORD)NumAllocations )
              {
                PrivateDriverDataSize = a2->PrivateDriverDataSize;
                if ( *(_DWORD *)(v72 + 128) == PrivateDriverDataSize || v128 )
                {
                  v76 = *((_QWORD *)v54 + 7);
                  if ( *(_DWORD *)(v76 + 72) == (unsigned int)PsGetCurrentProcessSessionId(
                                                                NumAllocations,
                                                                v70,
                                                                v72,
                                                                v71)
                    || (*(_DWORD *)(v76 + 12) & 8) != 0 )
                  {
                    v82 = *(ADAPTER_RENDER **)(v76 + 80);
                    if ( v82 == this[2] )
                    {
                      v83 = this[235];
                      if ( !v83
                        || *((_QWORD *)v83 + 391)
                        || (v84 = *(ADAPTER_RENDER **)(v76 + 96)) == 0LL
                        || v84 == v83
                        || (*((_BYTE *)this + 1901) & 1) != 0 && (*(_DWORD *)(v76 + 12) & 0x20) != 0 )
                      {
                        if ( (*(_DWORD *)(v76 + 12) & 1) != 0
                          && (!(unsigned int)PsIsProtectedProcess(*((_QWORD *)this[5] + 7), v77, v79)
                           || (unsigned int)PsIsProtectedProcessLight(*((_QWORD *)this[5] + 7))) )
                        {
                          WdLogSingleEntry3(3LL, this, *((_QWORD *)v54 + 7), -1073741811LL);
                          WdLogGlobalForLineNumber = 2495;
                        }
                        else if ( v73
                               || (*(_DWORD *)(*((_QWORD *)v54 + 7) + 12LL) & 0x4000) == 0
                               || DXGDEVICE::HasContextWithHintType(
                                    this,
                                    D3DKMT_CLIENTHINT_DX10|D3DKMT_CLIENTHINT_OPENGL) )
                        {
                          v85 = 0LL;
                          v86 = a2->NumAllocations;
                          v87 = *(_QWORD **)(*((_QWORD *)v54 + 7) + 136LL);
                          if ( !v86 )
                          {
LABEL_123:
                            if ( v15 >= 0 )
                            {
                              v89 = *((_QWORD *)v54 + 7);
                              _m_prefetchw((const void *)(v89 + 68));
                              v90 = *(_DWORD *)(v89 + 68);
                              do
                              {
                                if ( !v90 )
                                {
                                  *((_QWORD *)v54 + 7) = 0LL;
                                  WdLogSingleEntry3(3LL, this, 0LL, -1073741811LL);
                                  WdLogGlobalForLineNumber = 2581;
                                  goto LABEL_129;
                                }
                                v91 = v90;
                                v90 = _InterlockedCompareExchange((volatile signed __int32 *)(v89 + 68), v90 + 1, v90);
                              }
                              while ( v91 != v90 );
                              v92 = *(_QWORD *)(*((_QWORD *)v54 + 7) + 152LL);
                              if ( !v92 )
                                goto LABEL_143;
                              if ( *(ADAPTER_RENDER ***)(v92 + 80) == this )
                                ++*(_DWORD *)(v92 + 72);
                              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v126);
                              v93 = (*((_DWORD *)this[5] + 102) & 4) != 0;
                              DXGAUTOMUTEX::DXGAUTOMUTEX(
                                (DXGAUTOMUTEX *)v127,
                                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v54 + 7) + 152LL) + 8LL),
                                0);
                              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v127);
                              v94 = a5;
                              if ( !a5 )
                                v94 = (struct _EPROCESS *)*((_QWORD *)this[5] + 7);
                              v95 = *((_QWORD *)v54 + 7);
                              v96 = *(_QWORD *)(v95 + 152);
                              v97 = *(__int64 **)(v96 + 56);
                              if ( v97 == (__int64 *)(v96 + 56) )
                              {
LABEL_141:
                                WdLogSingleEntry3(3LL, this, v95, -1073741811LL);
                                WdLogGlobalForLineNumber = 2655;
                                v15 = -1073741811;
                              }
                              else if ( !v93 )
                              {
                                while ( *((_BYTE *)v97 + 16) || v94 != (struct _EPROCESS *)v97[3] )
                                {
                                  v97 = (__int64 *)*v97;
                                  if ( v97 == (__int64 *)(v96 + 56) )
                                    goto LABEL_141;
                                }
                              }
                              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v127);
                              if ( v15 >= 0 )
                              {
LABEL_143:
                                v98 = *((_QWORD *)v54 + 7);
                                v99 = *(_QWORD *)(v98 + 136);
                                if ( (*(_DWORD *)(v99 - 44) & 2) != 0 )
                                {
                                  if ( *(_DWORD *)(v98 + 132) != 1 )
                                  {
                                    v100 = (DXGADAPTER *)*((_QWORD *)this[2] + 2);
                                    if ( *((_DWORD *)v100 + 74) <= 1u || !DXGADAPTER::IsDxgmms2(v100) )
                                    {
                                      WdLogSingleEntry0(1LL);
                                      WdLogGlobalForLineNumber = 2672;
                                      DxgkLogInternalTriageEvent(
                                        0LL,
                                        262146,
                                        0xFFFFFFFFLL,
                                        L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetP"
                                         "hysicalAdapterCount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                                        2672LL,
                                        0LL,
                                        0LL,
                                        0LL,
                                        0LL);
                                    }
                                  }
                                  this[((*(_DWORD *)(v99 - 44) >> 6) & 0xF) + 83] = v54;
                                }
                              }
                            }
                            goto LABEL_130;
                          }
                          while ( 1 )
                          {
                            v88 = a3[v85].PrivateDriverDataSize;
                            if ( *((_DWORD *)v87 - 2) != (_DWORD)v88 )
                              break;
                            v87 = (_QWORD *)*v87;
                            v85 = (unsigned int)(v85 + 1);
                            if ( (unsigned int)v85 >= v86 )
                              goto LABEL_123;
                          }
                          WdLogSingleEntry5(3LL, this, *((_QWORD *)v54 + 7), (unsigned int)v85, v88, -1073741811LL);
                          WdLogGlobalForLineNumber = 2523;
                        }
                        else
                        {
                          WdLogSingleEntry3(3LL, this, *((_QWORD *)v54 + 7), -1073741811LL);
                          WdLogGlobalForLineNumber = 2504;
                        }
                      }
                      else
                      {
                        WdLogSingleEntry4(3LL, this, v76, v84, -1073741811LL);
                        WdLogGlobalForLineNumber = 2484;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry4(3LL, this, v76, *((_QWORD *)v82 + 2), -1073741811LL);
                      WdLogGlobalForLineNumber = 2460;
                    }
                  }
                  else
                  {
                    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v78, v77, v79, v80);
                    WdLogSingleEntry5(
                      3LL,
                      this,
                      *((_QWORD *)v54 + 7),
                      *(unsigned int *)(*((_QWORD *)v54 + 7) + 72LL),
                      CurrentProcessSessionId,
                      -1073741811LL);
                    WdLogGlobalForLineNumber = 2450;
                  }
                }
                else
                {
                  WdLogSingleEntry4(3LL, this, v72, PrivateDriverDataSize, -1073741811LL);
                  WdLogGlobalForLineNumber = 2438;
                }
              }
              else
              {
                WdLogSingleEntry4(3LL, this, v72, (unsigned int)NumAllocations, -1073741811LL);
                WdLogGlobalForLineNumber = 2422;
              }
LABEL_129:
              v15 = -1073741811;
            }
LABEL_130:
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v126);
            goto LABEL_203;
          }
          WdLogSingleEntry3(3LL, this, a2->hGlobalShare, -1073741811LL);
          WdLogGlobalForLineNumber = 2397;
        }
        v15 = -1073741811;
        goto LABEL_94;
      }
      SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                         this[2],
                         this[235],
                         (*(_DWORD *)&a2->Flags & 0x800) != 0,
                         v56);
      v102 = 0LL;
      *((_QWORD *)v54 + 7) = SharedResource;
      if ( !SharedResource )
      {
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2691;
        goto LABEL_68;
      }
      if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
        *((_DWORD *)SharedResource + 3) |= 0x8000u;
      v103 = a2->NumAllocations;
      v132 = v103;
      for ( i = 0; i < v132; ++i )
      {
        if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 209LL) == (_BYTE)v102 )
        {
          v105 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, 256LL, v102);
          v102 = 0LL;
          if ( !v105 )
            goto LABEL_159;
          *((_DWORD *)v105 + 1) = 0;
          *((_QWORD *)v105 + 1) = 0LL;
          *((_QWORD *)v105 + 2) = 0LL;
          *((_QWORD *)v105 + 4) = 0LL;
          *((_DWORD *)v105 + 10) = 0;
          *((_QWORD *)v105 + 7) = 0LL;
          *((_QWORD *)v105 + 6) = 0LL;
        }
        else
        {
          v104 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL, v102);
          v102 = 0LL;
          if ( v104 )
            v105 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v104);
          else
            v105 = 0LL;
          if ( !v105 )
          {
LABEL_159:
            WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
            v103 = v132;
            v15 = -1073741801;
            WdLogGlobalForLineNumber = 2715;
            goto LABEL_165;
          }
        }
        v106 = (__int64 *)((char *)v105 + 48);
        v107 = *((_QWORD *)v54 + 7) + 136LL;
        v108 = *(__int64 ***)(*((_QWORD *)v54 + 7) + 144LL);
        if ( *v108 != (__int64 *)v107 )
          goto LABEL_196;
        v103 = v132;
        v106[1] = (__int64)v108;
        *v106 = v107;
        *v108 = v106;
        *(_QWORD *)(v107 + 8) = v106;
      }
      *(_DWORD *)(*((_QWORD *)v54 + 7) + 132LL) = v103;
      *((_DWORD *)v54 + 1) |= 2u;
LABEL_165:
      if ( a9 )
        *(_QWORD *)(*((_QWORD *)v54 + 7) + 184LL) = *((_QWORD *)a9 + 52);
      v109 = *((_QWORD *)v54 + 7);
      *(_DWORD *)(v109 + 12) ^= ((unsigned __int8)*(_DWORD *)(v109 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 8;
      if ( v15 >= 0 && (unsigned int)v103 > 1 )
      {
        v110 = 8LL * (unsigned int)v103;
        v130 = (unsigned int)v103;
        if ( !is_mul_ok((unsigned int)v103, 8uLL) )
          v110 = -1LL;
        *(_QWORD *)(*((_QWORD *)v54 + 7) + 168LL) = operator new[](v110, 0x4B677844u, 256LL, v102);
        if ( !*(_QWORD *)(*((_QWORD *)v54 + 7) + 168LL) )
        {
          WdLogSingleEntry3(3LL, this, v130, -1073741801LL);
          WdLogGlobalForLineNumber = 2751;
          v15 = -1073741801;
        }
      }
      if ( (*(_DWORD *)&a2->Flags & 4) == 0
        && (unsigned int)PsIsProtectedProcess(*((_QWORD *)this[5] + 7), v109, v103)
        && !(unsigned int)PsIsProtectedProcessLight(*((_QWORD *)this[5] + 7)) )
      {
        *(_DWORD *)(*((_QWORD *)v54 + 7) + 12LL) |= 1u;
      }
      v111 = a2->Flags;
      if ( (*(_DWORD *)&v111 & 0x200000) != 0 )
      {
        if ( (*(_WORD *)&v111 & 0x400) != 0 && a2->NumAllocations && (a3->Flags.Value & 1) != 0 )
        {
          *(_DWORD *)(*((_QWORD *)v54 + 7) + 12LL) |= 0x4000u;
        }
        else
        {
          WdLogSingleEntry2(2LL, this, -1073741811LL);
          WdLogGlobalForLineNumber = 2784;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
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
        DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)v54 + 7), 0LL, 0);
        *((_QWORD *)v54 + 7) = 0LL;
LABEL_203:
        if ( v15 < 0 )
          goto LABEL_204;
        goto LABEL_198;
      }
      v112 = operator new(0x58uLL, 0x4B677844u, 64LL, v102);
      v114 = v112;
      if ( !v112 )
      {
        WdLogSingleEntry2(6LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2803;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
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
      *(_QWORD *)(v112 + 16) = 0LL;
      *(_QWORD *)(v112 + 24) = 0LL;
      *(_DWORD *)(v112 + 40) = 0;
      *(_QWORD *)(v112 + 32) = 0LL;
      *(_DWORD *)(v112 + 44) = 36;
      *(_DWORD *)(v112 + 48) = 75;
      *(_DWORD *)(v112 + 72) = 1;
      *(_QWORD *)(v112 + 80) = this;
      *(_QWORD *)(v112 + 64) = v112 + 56;
      *(_QWORD *)(v112 + 56) = v112 + 56;
      *(_QWORD *)(*((_QWORD *)v54 + 7) + 152LL) = v112;
      v115 = this[5];
      if ( (*((_DWORD *)v115 + 102) & 4) != 0 )
      {
        v116 = operator new(0x28uLL, 0x4B677844u, 256LL, v113);
        if ( v116 )
        {
          *(_QWORD *)(v116 + 32) = 0LL;
          *(_BYTE *)(v116 + 24) = 1;
        }
        v117 = 0LL;
        if ( !v116 )
          goto LABEL_190;
      }
      else
      {
        v117 = (void *)*((_QWORD *)v115 + 7);
        ObfReferenceObject(v117);
        v116 = operator new(0x28uLL, 0x4B677844u, 256LL, v118);
        if ( !v116 )
        {
LABEL_190:
          if ( v117 )
            ObfDereferenceObject(v117);
          WdLogSingleEntry1(6LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2840;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Out of memory allocating DXGPROCESSSHAREDACCESS class, returning 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_200;
        }
        *(_BYTE *)(v116 + 24) = 0;
        *(_QWORD *)(v116 + 32) = v117;
      }
      v119 = v114 + 56;
      v120 = (_QWORD *)(v116 + 8);
      v121 = *(_QWORD *)v119;
      if ( *(_QWORD *)(*(_QWORD *)v119 + 8LL) != v119 )
LABEL_196:
        __fastfail(3u);
      *v120 = v121;
      v120[1] = v119;
      *(_QWORD *)(v121 + 8) = v120;
      *(_QWORD *)v119 = v120;
      goto LABEL_198;
    }
LABEL_205:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 2319;
LABEL_206:
    v15 = -1073741801;
    goto LABEL_207;
  }
  v22 = this[5];
  DXGPUSHLOCK::AcquireShared((ADAPTER_RENDER *)((char *)v22 + 248));
  v23 = (hResource >> 6) & 0xFFFFFF;
  if ( v23 >= *((_DWORD *)v22 + 74) )
    goto LABEL_10;
  v24 = *((_QWORD *)v22 + 35);
  if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x60) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v24 + 16LL * v23 + 8) & 0x2000) != 0 )
    goto LABEL_10;
  v25 = *(_DWORD *)(v24 + 16LL * v23 + 8) & 0x1F;
  if ( !v25 )
    goto LABEL_10;
  if ( v25 != 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    v26 = 0LL;
    goto LABEL_11;
  }
  v26 = *(struct _EX_RUNDOWN_REF **)(v24 + 16LL * v23);
LABEL_11:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&a8, v26);
  _InterlockedDecrement((volatile signed __int32 *)v22 + 66);
  ExReleasePushLockSharedEx((char *)v22 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v122, (struct _EX_RUNDOWN_REF **)&a8);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a8);
  v27 = v122;
  if ( v122 )
  {
    v28 = a2->Flags;
    if ( (*(_DWORD *)&v28 & 0x20020) != 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 2138;
      goto LABEL_57;
    }
    Count = (DXGDEVICE *)v122[1].Count;
    if ( Count != (DXGDEVICE *)this )
    {
      WdLogSingleEntry4(3LL, this, a2->hResource, Count, -1073741811LL);
      WdLogGlobalForLineNumber = 2152;
LABEL_57:
      v15 = -1073741811;
      goto LABEL_207;
    }
    if ( (*(_WORD *)&v28 & 0x800) != 0 )
    {
      v30 = v122[7].Count;
      if ( !v30 || (*(_DWORD *)(v30 + 12) & 0x20) == 0 )
      {
        WdLogSingleEntry2(3LL, a2->hResource, -1073741811LL);
        WdLogGlobalForLineNumber = 2166;
        goto LABEL_57;
      }
    }
    if ( (HIDWORD(v122->Ptr) & 1) != 0 )
    {
      v31 = v122[7].Count;
      if ( !v31 )
      {
        WdLogSingleEntry3(3LL, this, v122, -1073741811LL);
        WdLogGlobalForLineNumber = 2180;
        goto LABEL_57;
      }
      v32 = a2->PrivateDriverDataSize;
      if ( *(_DWORD *)(v31 + 128) != v32 )
      {
        WdLogSingleEntry4(3LL, this, v122[7].Count, v32, -1073741811LL);
        WdLogGlobalForLineNumber = 2192;
        goto LABEL_57;
      }
      v33 = a11;
      v34 = (DXGPUSHLOCK *)(v31 + 32);
      *((_QWORD *)a11 + 1) = v34;
      DXGPUSHLOCK::AcquireExclusive(v34);
      *((_DWORD *)v33 + 4) = 2;
      v36 = 0LL;
      v37 = v27[7].Count;
      v38 = a2->NumAllocations;
      *(_QWORD *)&v125 = v33;
      if ( v38 )
      {
        while ( 1 )
        {
          v35 = (unsigned int)v36;
          v39 = a3[v36].PrivateDriverDataSize;
          if ( *(_DWORD *)(*(_QWORD *)(v37 + 136) - 8LL) != (_DWORD)v39 )
            break;
          v36 = (unsigned int)(v36 + 1);
          if ( (unsigned int)v36 >= v38 )
            goto LABEL_29;
        }
        WdLogSingleEntry5(3LL, this, v37, (unsigned int)v36, v39, -1073741811LL);
        WdLogGlobalForLineNumber = 2217;
        goto LABEL_57;
      }
LABEL_29:
      if ( (*(_DWORD *)(v37 + 12) & 0x100) != 0 )
      {
        WdLogSingleEntry3(3LL, this, v37, -1073741811LL);
        WdLogGlobalForLineNumber = 2228;
        goto LABEL_57;
      }
      v40 = v38 + *(_DWORD *)(v37 + 132);
      if ( v40 > 0x100 )
      {
        WdLogSingleEntry4(3LL, this, v37, 256LL, -1073741811LL);
        WdLogGlobalForLineNumber = 2240;
        goto LABEL_57;
      }
      *(_DWORD *)&a2->Flags |= 2u;
      if ( v40 > 1 )
      {
        v41 = 8LL * v40;
        if ( !is_mul_ok(v40, 8uLL) )
          v41 = -1LL;
        v42 = operator new[](v41, 0x4B677844u, 256LL, v35);
        if ( !v42 )
        {
          WdLogSingleEntry3(3LL, this, v40, -1073741801LL);
          WdLogGlobalForLineNumber = 2258;
          goto LABEL_206;
        }
        v43 = v27[7].Count;
        v44 = *(void **)(v43 + 168);
        if ( v44 != (void *)(v43 + 160) )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v44);
        *(_QWORD *)(v27[7].Count + 168) = v42;
      }
      for ( j = 0; j < a2->NumAllocations; *(_QWORD *)(v49 + 8) = v48 )
      {
        if ( *(_BYTE *)(*((_QWORD *)this[2] + 2) + 209LL) )
        {
          v46 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL, v35);
          if ( v46 )
            v47 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v46);
          else
            v47 = 0LL;
          if ( !v47 )
          {
LABEL_48:
            WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
            WdLogGlobalForLineNumber = 2279;
            goto LABEL_206;
          }
        }
        else
        {
          v47 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, 256LL, v35);
          if ( !v47 )
            goto LABEL_48;
          *((_DWORD *)v47 + 1) = 0;
          *((_QWORD *)v47 + 1) = 0LL;
          *((_QWORD *)v47 + 2) = 0LL;
          *((_QWORD *)v47 + 4) = 0LL;
          *((_DWORD *)v47 + 10) = 0;
          *((_QWORD *)v47 + 7) = 0LL;
          *((_QWORD *)v47 + 6) = 0LL;
        }
        v48 = (__int64 *)((char *)v47 + 48);
        v49 = v27[7].Count + 136;
        v50 = *(__int64 ***)(v27[7].Count + 144);
        if ( *v50 != (__int64 *)v49 )
          goto LABEL_196;
        *v48 = v49;
        ++j;
        v48[1] = (__int64)v50;
        *v50 = v48;
      }
      *(_DWORD *)(v27[7].Count + 132) = v40;
    }
    DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)&v27[10], 0);
    DXGAUTOMUTEX::Acquire(a10);
LABEL_55:
    DXGRESOURCEREFERENCE::MoveAssign(a7, &v122);
    *(_QWORD *)&v125 = 0LL;
    DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v125);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v122);
    return 0LL;
  }
  v15 = -1073741816;
  WdLogSingleEntry3(3LL, this, a2->hResource, -1073741816LL);
  WdLogGlobalForLineNumber = 2129;
LABEL_207:
  DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE((DXGAUTOPUSHLOCK **)&v125);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v122);
  return (unsigned int)v15;
}
