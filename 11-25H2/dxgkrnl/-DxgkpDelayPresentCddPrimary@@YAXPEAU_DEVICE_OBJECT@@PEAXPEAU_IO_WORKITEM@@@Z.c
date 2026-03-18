/*
 * XREFs of ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403E85B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14001EA80 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004FDB4 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140197B38 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1402845E8 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x140284668 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140310DD0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033599C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035601C (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DxgkpDelayPresentCddPrimary(PVOID IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *v5; // rax
  __int64 v6; // rcx
  struct DXGSESSIONDATA *v7; // r13
  struct _KPROCESS *v8; // rbx
  unsigned __int64 v9; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  struct DXGDEVICE *v11; // rsi
  struct DXGCONTEXT *v12; // r15
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  struct DXGGLOBAL *v24; // rax
  struct DXGCONTEXT *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // r9
  const char *v28; // rdx
  __int64 HighPart; // [rsp+20h] [rbp-E0h]
  __int64 LowPart; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+28h] [rbp-D8h]
  struct DXGDEVICE *v33; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  char v36; // [rsp+70h] [rbp-90h]
  void *Base; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v38[4]; // [rsp+80h] [rbp-80h] BYREF
  size_t NumOfElements; // [rsp+A0h] [rbp-60h]
  __int16 v40; // [rsp+A8h] [rbp-58h]
  _BYTE v41[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-48h]
  char v43; // [rsp+C0h] [rbp-40h]
  _BYTE v44[16]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v45[24]; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF
  char v47; // [rsp+120h] [rbp+20h]
  _BYTE v48[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v49[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v50[88]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v51[160]; // [rsp+1D0h] [rbp+D0h] BYREF

  v33 = 0LL;
  v34 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 118));
  v7 = v5;
  if ( v5 )
  {
    v47 = 0;
    v8 = (struct _KPROCESS *)*((_QWORD *)v5 + 2332);
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v6) != v8 )
    {
      KeStackAttachProcess(v8, &ApcState);
      v47 = 1;
    }
    v9 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(Context, &v33, &v34, 0LL, 0);
    v11 = v33;
    v12 = v34;
    if ( CddDeviceAndContextForCurrentSession >= 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v35, v33);
      v14 = *(_QWORD *)(*((_QWORD *)v11 + 235) + 3120LL);
      Base = v38;
      v38[0] = 0LL;
      LODWORD(NumOfElements) = 1;
      v40 = 1;
      if ( v38 )
      {
        v38[0] = v12;
        qsort(Base, (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
        v15 = 1LL;
        v16 = Base;
        while ( v15 < (unsigned int)NumOfElements )
        {
          if ( *((_QWORD *)Base + v15) == *((_QWORD *)Base + v15 - 1) )
            goto LABEL_16;
          ++v15;
        }
        if ( (_DWORD)NumOfElements )
        {
          while ( 1 )
          {
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v16[v9++] + 440LL));
            if ( v9 >= (unsigned int)NumOfElements )
              break;
            v16 = Base;
          }
        }
        v40 = 256;
      }
LABEL_16:
      v42 = *(_QWORD *)(v14 + 16);
      v43 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v11, 1, v17, 0);
      if ( Base )
      {
        v18 = COREDEVICEACCESS::AcquireExclusive((__int64)v48, 1u);
        if ( v18 >= 0 )
        {
          if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v14 + 16))
            && (!(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v14, Context[1].LowPart)
             || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v14, Context[1].LowPart) == 3) )
          {
            if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v14, Context[1].LowPart, 0) )
            {
              if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v14, Context[1].LowPart) )
              {
                if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible((ADAPTER_DISPLAY *)v14, Context[1].LowPart) )
                {
                  v20 = ADAPTER_DISPLAY::PresentCddPrimary(
                          (PERESOURCE **)v14,
                          v12,
                          Context[1].LowPart,
                          (struct COREDEVICEACCESS *)v48);
                  if ( v20 < 0 )
                  {
                    v21 = v20;
                    WdLogSingleEntry3(2LL, Context[1].LowPart, *(_QWORD *)(v14 + 16), v20);
                    v32 = *(_QWORD *)(v14 + 16);
                    LowPart = Context[1].LowPart;
                    WdLogGlobalForLineNumber = 421;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapter 0x%I6"
                       "4x (Status = 0x%I64x).",
                      LowPart,
                      v32,
                      v21,
                      0LL,
                      0LL);
                  }
                }
              }
            }
          }
        }
        else
        {
          v19 = v18;
          WdLogSingleEntry2(2LL, v11, v18);
          WdLogGlobalForLineNumber = 393;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).",
            (__int64)v11,
            v19,
            0LL,
            0LL,
            0LL);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&Base);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v35);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 384;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Out of memory - could not initialize context array lock exclusive.",
          384LL,
          0LL,
          0LL,
          0LL,
          0LL);
        COREACCESS::~COREACCESS((COREACCESS *)v50, v22);
        COREACCESS::~COREACCESS((COREACCESS *)v49, v23);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&Base);
        if ( v36 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v35 + 136));
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      v13 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry3(2LL, Context->HighPart, Context->LowPart, CddDeviceAndContextForCurrentSession);
      v31 = Context->LowPart;
      HighPart = Context->HighPart;
      WdLogGlobalForLineNumber = 364;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get CDD device and context for adapter 0x%I64x%08I64x in console session (Status = 0x%I64x).",
        HighPart,
        v31,
        v13,
        0LL,
        0LL);
    }
    v24 = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v24 + 118), v7);
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v25 = v34;
        v26 = *((_QWORD *)v34 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v44,
          (struct DXGDEVICE *)v26);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v45,
          *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, v26, 2, v27, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v51, v28);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v26, (struct DXGCONTEXT ***)v34, (struct COREDEVICEACCESS *)v51);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v26 + 16), (struct DXGDEVICE *)v26);
      }
      v11 = v33;
    }
    if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Context);
    if ( v47 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 334;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire console session mode change shared lock.",
      334LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Context);
  }
}
