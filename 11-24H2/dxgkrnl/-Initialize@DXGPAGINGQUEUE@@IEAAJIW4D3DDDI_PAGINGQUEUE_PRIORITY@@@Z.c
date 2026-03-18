/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x140396FF0
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x140396C98 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1400391D4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402F94BC (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1402FA1CC (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1403C0374 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  char v7; // r12
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v13; // rax
  DXGDEVICESYNCOBJECT **v14; // rdi
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v22; // eax
  _BYTE v23[16]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v24[16]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v25[10]; // [rsp+98h] [rbp-19h] BYREF
  unsigned int v26; // [rsp+120h] [rbp+6Fh] BYREF

  *((_DWORD *)this + 12) = a2;
  v4 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 209LL);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v6 + 760) + 8LL) + 840LL))(
           *(_QWORD *)(v4 + 792),
           a2,
           a3,
           (char *)this + 32);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), v8);
      WdLogGlobalForLineNumber = 117;
      return v9;
    }
  }
  memset(v25, 0, sizeof(v25));
  v11 = *((_QWORD *)this + 2);
  HIDWORD(v25[0]) |= 0x90u;
  LODWORD(v25[0]) = 5;
  v26 = 0;
  v25[1] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) + 3092LL);
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v23, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v23);
  v13 = DXGGLOBAL::GetGlobal();
  v14 = (DXGDEVICESYNCOBJECT **)((char *)this + 40);
  v15 = DXGGLOBAL::CreateSyncObject(
          (__int64)v13,
          *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
          *((struct DXGDEVICE **)this + 2),
          1 << a2,
          (__int64)v25,
          2u,
          0,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          &v26,
          0LL,
          0LL,
          0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), v15);
    WdLogGlobalForLineNumber = 159;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v23);
    return v16;
  }
  if ( v23[8] )
  {
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v23);
    v14 = (DXGDEVICESYNCOBJECT **)((char *)this + 40);
  }
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v17 + 248));
  v18 = (v26 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *(_DWORD *)(v17 + 296) )
  {
    v19 = *(_QWORD *)(v17 + 280);
    if ( ((v26 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
      && (*(_DWORD *)(v19 + 16 * v18 + 8) & 0x1F) != 0 )
    {
      v20 = 2 * (((unsigned __int64)v26 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v19 + 16 * (((unsigned __int64)v26 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v17 + 280) + 8 * v20 + 8) &= ~0x2000u;
      v14 = (DXGDEVICESYNCOBJECT **)((char *)this + 40);
    }
  }
  *(_QWORD *)(v17 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v17 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
LABEL_20:
    v22 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 0xAu);
    *((_DWORD *)this + 6) = v22;
    if ( !v22 )
    {
      v9 = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 199;
      return v9;
    }
    return v16;
  }
  result = DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
             *((DXGDEVICESYNCOBJECT **)this + 5),
             a2,
             (unsigned __int64 *)this + 7);
  v16 = result;
  if ( (int)result >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(*((_QWORD *)*v14 + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*v14);
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 832LL))(
      *((_QWORD *)this + 4),
      VidSchSyncObject,
      v25[1]);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
    goto LABEL_20;
  }
  return result;
}
