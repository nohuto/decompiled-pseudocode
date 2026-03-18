/*
 * XREFs of ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1401EEDC0
 * Callers:
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1402F9478 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14032CEE8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SetHostHandle(DXGSYNCOBJECT *this, int a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  struct _KTHREAD **v9; // rsi
  char *v10; // rdi
  __int64 v11; // rax

  if ( (*((_BYTE *)this + 408) & 1) == 0 )
  {
    *((_DWORD *)this + 24) = a3;
    return 0LL;
  }
  v7 = operator new(0x18uLL, 0x4B677844u, 256LL, a4);
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 20) = a3;
    v9 = (struct _KTHREAD **)((char *)this + 32);
    *(_DWORD *)(v7 + 16) = a2;
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v10 = (char *)this + 104;
    v11 = *(_QWORD *)v10;
    if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 )
      __fastfail(3u);
    *v8 = v11;
    v8[1] = v10;
    *(_QWORD *)(v11 + 8) = v8;
    *(_QWORD *)v10 = v8;
    DXGFASTMUTEX::Release(v9);
    return 0LL;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 6183;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate DXG_HOST_HANDLE_MAP",
    6183LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
