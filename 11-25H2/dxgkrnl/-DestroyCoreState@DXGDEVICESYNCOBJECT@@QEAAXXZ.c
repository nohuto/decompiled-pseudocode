/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x140334FFC
 * Callers:
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1401886BC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403347DC (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334BBC (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334CA4 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140335B54 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x14033BE70 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005F2BC (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DdiCloseNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CLOSENATIVEFENCE@@@Z @ 0x14019F4FC (-DdiCloseNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CLOSENATIVEFENCE@@@Z.c)
 *     ?GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVADAPTER_RENDER@@@Z @ 0x1401EE9D4 (-GetNativeFenceMonitoredValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVA.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x14032CE90 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  ADAPTER_RENDER *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r9
  struct VIDMM_MONITORED_FENCE_STORAGE *NativeFenceMonitoredValueStorage; // r8
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rdx
  _BYTE v20[16]; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v21[3]; // [rsp+60h] [rbp-48h] BYREF

  v2 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(*((_QWORD *)v2 + 2) + 209LL) )
  {
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 123;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
        123LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_QWORD *)this + 12) )
    {
      if ( !g_NativeFenceDebugTest )
      {
        v21[0] = *((unsigned __int64 *)this + 12);
        v4 = *((_QWORD *)this + 2);
        memset(&v21[1], 0, 32);
        if ( (int)ADAPTER_RENDER::DdiCloseNativeFence(
                    *(ADAPTER_RENDER **)(v4 + 16),
                    (struct _DXGKARG_CLOSENATIVEFENCE *)v21,
                    v3) < 0 )
        {
          WdLogSingleEntry1(3LL, this);
          WdLogGlobalForLineNumber = 136;
        }
      }
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( *((_QWORD *)this + 17) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                         + 8LL)
                                             + 1120LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 744LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 800LL));
      *((_QWORD *)this + 17) = 0LL;
    }
    if ( (*((_BYTE *)this + 92) & 1) != 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(this);
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 736LL);
      v8 = *(_QWORD *)(v7 + 8);
      LOBYTE(v7) = (*((_DWORD *)this + 18) & 0x420) == 0;
      (*(void (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *, _QWORD, __int64, _QWORD))(v8 + 680))(
        VidSchSyncObject,
        *(_QWORD *)(v6 + 800),
        v7,
        *((_QWORD *)this + 3));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 3));
      *((_BYTE *)this + 92) &= ~1u;
      *((_QWORD *)this + 3) = 0LL;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    }
    if ( *((_QWORD *)this + 6) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
      v11 = *((_QWORD *)this + 2);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 64LL);
      if ( v12 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v9 + 8) + 912LL))(
        *(_QWORD *)(*(_QWORD *)(v11 + 16) + 768LL),
        v13,
        CurrentValueStorage);
      *((_QWORD *)this + 6) = 0LL;
    }
    if ( *((_QWORD *)this + 15) )
    {
      NativeFenceMonitoredValueStorage = DXGSYNCOBJECT::GetNativeFenceMonitoredValueStorage(
                                           *((DXGSYNCOBJECT **)this + 4),
                                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      v18 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 64LL);
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 8);
      else
        v19 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v17 + 8) + 912LL))(
        *(_QWORD *)(v16 + 768),
        v19,
        NativeFenceMonitoredValueStorage);
      *((_QWORD *)this + 15) = 0LL;
    }
  }
}
