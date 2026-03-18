/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403E0558
 * Callers:
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1401F6478 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1402DCA5C (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1403E0340 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403345B4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033599C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x14039BB80 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // rsi
  struct DXGDEVICE *v10; // rax
  _QWORD *i; // rdi
  SESSION_ADAPTER *v12; // rcx
  unsigned int v13; // edx
  SESSION_ADAPTER *v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // rdx
  unsigned int v17; // esi
  SESSION_ADAPTER *v18; // rax
  __int64 v19; // rcx
  SESSION_ADAPTER *v20; // rdx
  struct DXGHWQUEUE *v21; // r13
  __int64 v22; // rax
  __int64 v23; // r15
  struct DXGDEVICE *v24; // rbx
  __int64 v25; // r9
  const char *v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r9
  const char *v29; // rdx
  void *v30; // r13
  __int64 *v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r9
  const char *v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // r9
  const char *v39; // rdx
  __int64 v40; // [rsp+60h] [rbp-A8h]
  SESSION_ADAPTER *v41; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v42[16]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v43; // [rsp+80h] [rbp-88h]
  void *v44; // [rsp+88h] [rbp-80h]
  _BYTE v45[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v46[16]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v47[16]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v48[16]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v49[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v50[24]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v51[24]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v52[24]; // [rsp+118h] [rbp+10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp+28h] BYREF
  char v54; // [rsp+160h] [rbp+58h]
  _BYTE v55[160]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v56[160]; // [rsp+208h] [rbp+100h] BYREF
  _BYTE v57[160]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v58[160]; // [rsp+348h] [rbp+240h] BYREF

  v2 = *(_QWORD *)this;
  v54 = 0;
  v41 = 0LL;
  v43 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 18664);
  v7 = 0;
  v44 = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    v9 = v6 + 216;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
    v10 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v10 && v10 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18656LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 14); i != (_QWORD *)((char *)this + 112); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v12 = (SESSION_ADAPTER *)*((_QWORD *)this + 9);
      v13 = *((_DWORD *)this + 24);
      v7 = *((_DWORD *)this + 13);
      v44 = (void *)*((_QWORD *)this + 8);
      v43 = v13;
      if ( v12 == (SESSION_ADAPTER *)((char *)this + 80) )
      {
        v14 = (SESSION_ADAPTER *)v42;
        v15 = 0;
        v41 = (SESSION_ADAPTER *)v42;
        if ( v13 )
        {
          while ( 1 )
          {
            v16 = v15++;
            *((_QWORD *)v14 + v16) = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v16);
            if ( v15 >= *((_DWORD *)this + 24) )
              break;
            v14 = v41;
          }
        }
      }
      else
      {
        v41 = v12;
      }
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 9) = 0LL;
      v5 = *((_QWORD *)this + 7);
      v8 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    if ( v43 )
    {
      v17 = 0;
      if ( v7 )
      {
        v18 = v41;
        v19 = 0LL;
        v40 = 0LL;
        do
        {
          v20 = (SESSION_ADAPTER *)((char *)v18 + v19);
          if ( v17 >= v43 )
            v20 = v18;
          if ( !*(_QWORD *)v20 )
            goto LABEL_34;
          if ( v17 < v43 )
            v18 = (SESSION_ADAPTER *)((char *)v18 + v19);
          v21 = *(struct DXGHWQUEUE **)v18;
          v22 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v18 + 104LL));
          if ( v22 >= 0 )
          {
            if ( v22 )
              goto LABEL_33;
            v23 = *((_QWORD *)v21 + 2);
            v24 = *(struct DXGDEVICE **)(v23 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v24);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v49,
              *(struct DXGADAPTER **)(*((_QWORD *)v24 + 2) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v24, 2, v25, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v55, v26);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 200LL) != 4 )
              DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v23, v21, (struct COREDEVICEACCESS *)v55);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 32), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
            {
              v19 = v40;
              goto LABEL_33;
            }
            v27 = *(_QWORD *)(v23 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v46,
              (struct DXGDEVICE *)v27);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v50,
              *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, v27, 2, v28, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v56, v29);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 200LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v27, (struct DXGCONTEXT ***)v23, (struct COREDEVICEACCESS *)v56);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v27 + 16), (struct DXGDEVICE *)v27);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 141;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NewReferenceCount >= 0", 141LL, 0LL, 0LL, 0LL, 0LL);
          }
          v19 = v40;
LABEL_33:
          v18 = v41;
LABEL_34:
          v19 += 8LL;
          ++v17;
          v40 = v19;
        }
        while ( v17 < v7 );
      }
    }
    if ( v7 <= 1 )
    {
      if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v37 = *(_QWORD *)(v8 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v48,
          (struct DXGDEVICE *)v37);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v52,
          *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, v37, 2, v38, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v58, v39);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v37, (struct DXGCONTEXT ***)v8, (struct COREDEVICEACCESS *)v58);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v37 + 16), (struct DXGDEVICE *)v37);
      }
    }
    else
    {
      v30 = v44;
      v31 = (__int64 *)v44;
      v32 = v7;
      do
      {
        v33 = *v31;
        if ( *v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v34 = *(_QWORD *)(v33 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v47,
            (struct DXGDEVICE *)v34);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v51,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, v34, 2, v35, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v57, v36);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v34, (struct DXGCONTEXT ***)v33, (struct COREDEVICEACCESS *)v57);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v34 + 16), (struct DXGDEVICE *)v34);
        }
        ++v31;
        --v32;
      }
      while ( v32 );
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v30);
    }
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
  }
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)&v41);
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
