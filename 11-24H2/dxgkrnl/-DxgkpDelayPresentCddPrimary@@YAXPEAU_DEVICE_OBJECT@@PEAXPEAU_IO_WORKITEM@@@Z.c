/*
 * XREFs of ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403C29C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004F834 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140199FC4 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CEF28 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140346DD8 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1403C2FA8 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1403C3028 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

void __fastcall DxgkpDelayPresentCddPrimary(PVOID IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v5; // dl
  struct DXGSESSIONDATA *v6; // rax
  __int64 v7; // rcx
  struct DXGSESSIONDATA *v8; // r13
  struct _KPROCESS *v9; // rbx
  unsigned __int64 v10; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  struct DXGDEVICE *v12; // rsi
  struct DXGCONTEXT *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  struct DXGGLOBAL *v25; // rax
  struct DXGCONTEXT *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // r9
  const char *v29; // rdx
  __int64 HighPart; // [rsp+20h] [rbp-E0h]
  __int64 LowPart; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+28h] [rbp-D8h]
  __int64 v33; // [rsp+28h] [rbp-D8h]
  struct DXGDEVICE *v34; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  char v37; // [rsp+70h] [rbp-90h]
  void *Base; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v39[4]; // [rsp+80h] [rbp-80h] BYREF
  size_t NumOfElements; // [rsp+A0h] [rbp-60h]
  __int16 v41; // [rsp+A8h] [rbp-58h]
  _BYTE v42[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char v44; // [rsp+C0h] [rbp-40h]
  _BYTE v45[16]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v46[24]; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF
  char v48; // [rsp+120h] [rbp+20h]
  _BYTE v49[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v50[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v51[88]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v52[160]; // [rsp+1D0h] [rbp+D0h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 122), v5);
  v8 = v6;
  if ( v6 )
  {
    v48 = 0;
    v9 = (struct _KPROCESS *)*((_QWORD *)v6 + 2332);
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v7) != v9 )
    {
      KeStackAttachProcess(v9, &ApcState);
      v48 = 1;
    }
    v10 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(Context, &v34, &v35, 0LL, 0);
    v12 = v34;
    v13 = v35;
    if ( CddDeviceAndContextForCurrentSession >= 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v36, v34);
      v15 = *(_QWORD *)(*((_QWORD *)v12 + 237) + 3120LL);
      Base = v39;
      v39[0] = 0LL;
      LODWORD(NumOfElements) = 1;
      v41 = 1;
      if ( v39 )
      {
        v39[0] = v13;
        qsort(Base, (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
        v16 = 1LL;
        v17 = Base;
        while ( v16 < (unsigned int)NumOfElements )
        {
          if ( *((_QWORD *)Base + v16) == *((_QWORD *)Base + v16 - 1) )
            goto LABEL_16;
          ++v16;
        }
        if ( (_DWORD)NumOfElements )
        {
          while ( 1 )
          {
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v17[v10++] + 440LL));
            if ( v10 >= (unsigned int)NumOfElements )
              break;
            v17 = Base;
          }
        }
        v41 = 256;
      }
LABEL_16:
      v43 = *(_QWORD *)(v15 + 16);
      v44 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v12, 1, v18, 0);
      if ( Base )
      {
        v19 = COREDEVICEACCESS::AcquireExclusive((__int64)v49, 1u);
        if ( v19 >= 0 )
        {
          if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v15 + 16))
            && (!(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v15, Context[1].LowPart)
             || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v15, Context[1].LowPart) == 3) )
          {
            if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v15, Context[1].LowPart, 0) )
            {
              if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v15, Context[1].LowPart) )
              {
                if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible((ADAPTER_DISPLAY *)v15, Context[1].LowPart) )
                {
                  v21 = ADAPTER_DISPLAY::PresentCddPrimary(
                          (PERESOURCE **)v15,
                          v13,
                          Context[1].LowPart,
                          (struct COREDEVICEACCESS *)v49);
                  if ( v21 < 0 )
                  {
                    v22 = v21;
                    WdLogSingleEntry3(2LL, Context[1].LowPart, *(_QWORD *)(v15 + 16), v21);
                    v33 = *(_QWORD *)(v15 + 16);
                    LowPart = Context[1].LowPart;
                    WdLogGlobalForLineNumber = 424;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000LL,
                      0xFFFFFFFFLL,
                      L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapter 0x%I6"
                       "4x (Status = 0x%I64x).",
                      LowPart,
                      v33,
                      v22,
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
          v20 = v19;
          WdLogSingleEntry2(2LL, v12, v19);
          WdLogGlobalForLineNumber = 396;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).",
            (__int64)v12,
            v20,
            0LL,
            0LL,
            0LL);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&Base);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v36);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 387;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Out of memory - could not initialize context array lock exclusive.",
          387LL,
          0LL,
          0LL,
          0LL,
          0LL);
        COREACCESS::~COREACCESS((COREACCESS *)v51, v23);
        COREACCESS::~COREACCESS((COREACCESS *)v50, v24);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&Base);
        if ( v37 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v36 + 136));
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      v14 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry3(2LL, Context->HighPart, Context->LowPart, CddDeviceAndContextForCurrentSession);
      v32 = Context->LowPart;
      HighPart = Context->HighPart;
      WdLogGlobalForLineNumber = 367;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get CDD device and context for adapter 0x%I64x%08I64x in console session (Status = 0x%I64x).",
        HighPart,
        v32,
        v14,
        0LL,
        0LL);
    }
    v25 = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v25 + 122), v8);
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v26 = v35;
        v27 = *((_QWORD *)v35 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v45,
          (struct DXGDEVICE *)v27);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v46,
          *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, v27, 2, v28, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v52, v29);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v27, (struct DXGCONTEXT ***)v35, (struct COREDEVICEACCESS *)v52);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v52);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v27 + 16), (struct DXGDEVICE *)v27);
      }
      v12 = v34;
    }
    if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Context);
    if ( v48 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 337;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire console session mode change shared lock.",
      337LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Context);
  }
}
