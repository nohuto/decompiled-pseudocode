/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403D8328
 * Callers:
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1401FCD88 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x140346FDC (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1403D8110 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CDB4C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CEF28 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x140393D54 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v8; // rsi
  struct DXGDEVICE *v9; // rax
  _QWORD *i; // rdi
  SESSION_ADAPTER *v11; // rcx
  unsigned int v12; // edx
  SESSION_ADAPTER *v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned int v16; // r14d
  SESSION_ADAPTER *v17; // rax
  __int64 v18; // rcx
  SESSION_ADAPTER *v19; // rdx
  struct DXGHWQUEUE *v20; // r13
  __int64 v21; // rax
  __int64 v22; // r15
  struct DXGDEVICE *v23; // rbx
  __int64 v24; // r9
  const char *v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r9
  const char *v28; // rdx
  void *v29; // r13
  __int64 *v30; // r14
  __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // r9
  const char *v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // r9
  const char *v38; // rdx
  __int64 v39; // [rsp+60h] [rbp-A8h]
  SESSION_ADAPTER *v40; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v41[16]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+80h] [rbp-88h]
  void *v43; // [rsp+88h] [rbp-80h]
  _BYTE v44[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v45[16]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v46[16]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v47[16]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v48[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v49[24]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v50[24]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v51[24]; // [rsp+118h] [rbp+10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp+28h] BYREF
  char v53; // [rsp+160h] [rbp+58h]
  _BYTE v54[160]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v55[160]; // [rsp+208h] [rbp+100h] BYREF
  _BYTE v56[160]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v57[160]; // [rsp+348h] [rbp+240h] BYREF

  v2 = *(_QWORD *)this;
  v53 = 0;
  v40 = 0LL;
  v42 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 18664);
  v7 = 0;
  v43 = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6 + 216, 0LL);
    *(_QWORD *)(v6 + 224) = KeGetCurrentThread();
    v9 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v9 && v9 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18656LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 14); i != (_QWORD *)((char *)this + 112); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v11 = (SESSION_ADAPTER *)*((_QWORD *)this + 9);
      v12 = *((_DWORD *)this + 24);
      v7 = *((_DWORD *)this + 13);
      v43 = (void *)*((_QWORD *)this + 8);
      v42 = v12;
      if ( v11 == (SESSION_ADAPTER *)((char *)this + 80) )
      {
        v13 = (SESSION_ADAPTER *)v41;
        v14 = 0;
        v40 = (SESSION_ADAPTER *)v41;
        if ( v12 )
        {
          while ( 1 )
          {
            v15 = v14++;
            *((_QWORD *)v13 + v15) = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v15);
            if ( v14 >= *((_DWORD *)this + 24) )
              break;
            v13 = v40;
          }
        }
      }
      else
      {
        v40 = v11;
      }
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 9) = 0LL;
      v5 = *((_QWORD *)this + 7);
      v8 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    *(_QWORD *)(v6 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 216, 0LL);
    KeLeaveCriticalRegion();
    if ( v42 )
    {
      v16 = 0;
      if ( v7 )
      {
        v17 = v40;
        v18 = 0LL;
        v39 = 0LL;
        do
        {
          v19 = (SESSION_ADAPTER *)((char *)v17 + v18);
          if ( v16 >= v42 )
            v19 = v17;
          if ( !*(_QWORD *)v19 )
            goto LABEL_34;
          if ( v16 < v42 )
            v17 = (SESSION_ADAPTER *)((char *)v17 + v18);
          v20 = *(struct DXGHWQUEUE **)v17;
          v21 = _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v17 + 104LL));
          if ( v21 >= 0 )
          {
            if ( v21 )
              goto LABEL_33;
            v22 = *((_QWORD *)v20 + 2);
            v23 = *(struct DXGDEVICE **)(v22 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v23);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v48,
              *(struct DXGADAPTER **)(*((_QWORD *)v23 + 2) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v23, 2, v24, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v54, v25);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 2) + 16LL) + 200LL) != 4 )
              DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v22, v20, (struct COREDEVICEACCESS *)v54);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 32), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
            {
              v18 = v39;
              goto LABEL_33;
            }
            v26 = *(_QWORD *)(v22 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v45,
              (struct DXGDEVICE *)v26);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v49,
              *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, v26, 2, v27, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v55, v28);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 200LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v26, (struct DXGCONTEXT ***)v22, (struct COREDEVICEACCESS *)v55);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v26 + 16), (struct DXGDEVICE *)v26);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 141;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"NewReferenceCount >= 0",
              141LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v18 = v39;
LABEL_33:
          v17 = v40;
LABEL_34:
          v18 += 8LL;
          ++v16;
          v39 = v18;
        }
        while ( v16 < v7 );
      }
    }
    if ( v7 <= 1 )
    {
      if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v36 = *(_QWORD *)(v8 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v47,
          (struct DXGDEVICE *)v36);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v51,
          *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, v36, 2, v37, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v57, v38);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v36, (struct DXGCONTEXT ***)v8, (struct COREDEVICEACCESS *)v57);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v36 + 16), (struct DXGDEVICE *)v36);
      }
    }
    else
    {
      v29 = v43;
      v30 = (__int64 *)v43;
      v31 = v7;
      do
      {
        v32 = *v30;
        if ( *v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v33 = *(_QWORD *)(v32 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v46,
            (struct DXGDEVICE *)v33);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v50,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, v33, 2, v34, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v56, v35);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v33, (struct DXGCONTEXT ***)v32, (struct COREDEVICEACCESS *)v56);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v33 + 16), (struct DXGDEVICE *)v33);
        }
        ++v30;
        --v31;
      }
      while ( v31 );
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29);
    }
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
  }
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)&v40);
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
