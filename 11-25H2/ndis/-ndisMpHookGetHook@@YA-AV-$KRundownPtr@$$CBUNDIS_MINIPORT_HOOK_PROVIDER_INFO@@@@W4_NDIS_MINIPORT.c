/*
 * XREFs of ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x140152058
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x140151C60 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     ?TryAcquire@KRundownBase@@QEAA_NXZ @ 0x1400033D8 (-TryAcquire@KRundownBase@@QEAA_NXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x14016C1E0 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

__int64 __fastcall ndisMpHookGetHook(__int64 a1)
{
  struct MINIPORT_HOOK_DRIVER *v2; // rcx
  char v3; // al
  char *v4; // rdi
  KRundownBase *v5; // rcx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  KLockThisShared::KLockThisShared(
    (KLockThisShared *)&v7,
    (struct KPushLockBase *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead);
  v2 = g_MiniportHookDrivers;
  v3 = *((_BYTE *)g_MiniportHookDrivers + 128);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  if ( v3 )
  {
    v4 = (char *)v2 + 152;
    v5 = (KRundownBase *)((char *)v2 + 136);
    *(_QWORD *)(a1 + 8) = v5;
    if ( v4 && KRundownBase::TryAcquire(v5) )
    {
      ++*(_DWORD *)(a1 + 16);
      *(_QWORD *)a1 = v4;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a1;
  }
  KLockHolder::~KLockHolder(&v7);
  return a1;
}
