/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1403765D8
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x140374788 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002D620 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ?VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14003641C (-VidSchWaitForSingleSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14005257C (-RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402B3760 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct DXGCONTEXT *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // ebx
  struct _LIST_ENTRY **v10; // r12
  struct _LIST_ENTRY *v11; // rdx
  _QWORD *v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  const wchar_t *v18; // r9
  int v19; // eax
  _QWORD *v20; // rsi
  _QWORD *v21; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_CONTEXT *v25[64]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 904);
  v8 = *(_QWORD *)(v4 + 912);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 944, 0LL);
  *(_QWORD *)(v4 + 952) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v7 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 20) && *(_DWORD *)(v4 + 936) >= 0x40u )
  {
    v9 = 0;
    memset(v25, 0, sizeof(v25));
    v10 = (struct _LIST_ENTRY **)(v4 + 920);
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == (struct _LIST_ENTRY *)v10 || !v11 )
        break;
      ADAPTER_RENDER::RemoveFromCddPrimarySyncContextList((ADAPTER_RENDER *)v4, v11);
      *v12 = 0LL;
      v13 = v12 - 20;
      if ( a2 != (struct DXGCONTEXT *)(v12 - 20)
        && (v13[49] & 0x10) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13[2] + 16LL) + 736LL) + 8LL)
                                                     + 792LL))(v13[32])
        && v9 < 0x40 )
      {
        v14 = v9++;
        v25[v14] = (struct _VIDSCH_CONTEXT *)v13[32];
      }
    }
    if ( v9 )
    {
      v15 = *((_QWORD *)a2 + 2);
      v23 = ++v8;
      v16 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(v15 + 16) + 736LL),
              0,
              0LL,
              v9,
              v25,
              1u,
              &VidSchSyncObject,
              0,
              &v23,
              0);
      if ( v16 < 0 )
      {
        v17 = v16;
        WdLogSingleEntry2(2LL, v16, a2);
        v18 = L"ret = 0x%I64x Context 0x%I64x: Failed to submit signal for sync object";
        WdLogGlobalForLineNumber = 3873;
LABEL_15:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v18, v17, (__int64)a2, 0LL, 0LL, 0LL);
        goto LABEL_22;
      }
      *(_QWORD *)(v4 + 912) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 22) < v8 )
  {
    if ( (*((_DWORD *)a2 + 98) & 0x10) == 0 )
    {
      v19 = VIDSCH_EXPORT::VidSchWaitForSingleSyncObject(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 736LL),
              *((struct _VIDSCH_CONTEXT **)a2 + 32),
              VidSchSyncObject,
              v8);
      if ( v19 < 0 )
      {
        v17 = v19;
        WdLogSingleEntry2(2LL, v19, a2);
        v18 = L"ret = 0x%I64x Context 0x%I64x: Failed to submit wait for sync object";
        WdLogGlobalForLineNumber = 3896;
        goto LABEL_15;
      }
    }
    *((_QWORD *)a2 + 22) = v8;
  }
LABEL_22:
  v20 = (_QWORD *)((char *)a2 + 160);
  if ( !*v20 )
  {
    v21 = *(_QWORD **)(v4 + 928);
    if ( *v21 != v4 + 920 )
      __fastfail(3u);
    *v20 = v4 + 920;
    v20[1] = v21;
    *v21 = v20;
    *(_QWORD *)(v4 + 928) = v20;
    ++*(_DWORD *)(v4 + 936);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  *(_QWORD *)(v4 + 952) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 944, 0LL);
  KeLeaveCriticalRegion();
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
}
