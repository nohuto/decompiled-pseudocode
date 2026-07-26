/*
 * XREFs of ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x14018DFD8
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x140142708 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ??0MINIPORT_HOOK_DRIVER@@QEAA@XZ @ 0x140147130 (--0MINIPORT_HOOK_DRIVER@@QEAA@XZ.c)
 *     ??1MINIPORT_HOOK_DRIVER@@QEAA@XZ @ 0x1401471A4 (--1MINIPORT_HOOK_DRIVER@@QEAA@XZ.c)
 *     ?FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ @ 0x140147264 (-FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ.c)
 */

NTSTATUS ndisMpHookNmrInitializeClient(void)
{
  _QWORD *PoolWithTag; // rax
  __int64 v1; // rdi
  struct MINIPORT_HOOK_DRIVER *v2; // rbx
  MINIPORT_HOOK_DRIVER *v3; // rsi
  NTSTATUS result; // eax
  NTSTATUS v5; // esi
  char *v6; // r14
  __int64 v7; // rdi
  MINIPORT_HOOK_DRIVER *i; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x108uLL, 0x6448704Du);
  if ( !PoolWithTag )
  {
    g_MiniportHookDrivers = 0LL;
    return -1073741670;
  }
  v1 = 2LL;
  v2 = (struct MINIPORT_HOOK_DRIVER *)(PoolWithTag + 1);
  *PoolWithTag = 2LL;
  v3 = (MINIPORT_HOOK_DRIVER *)(PoolWithTag + 1);
  do
  {
    MINIPORT_HOOK_DRIVER::MINIPORT_HOOK_DRIVER(v3);
    v3 = (MINIPORT_HOOK_DRIVER *)((char *)v3 + 128);
    --v1;
  }
  while ( v1 );
  g_MiniportHookDrivers = v2;
  if ( !v2 )
    return -1073741670;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead);
  *(_BYTE *)v2 = 1;
  MINIPORT_HOOK_DRIVER::FillDefaultHandlers(v2);
  result = NmrRegisterClient(&ClientCharacteristics, 0LL, &ndisMpHookNmrClientHandle);
  v5 = result;
  if ( result < 0 )
  {
    if ( g_MiniportHookDrivers )
    {
      v6 = (char *)g_MiniportHookDrivers - 8;
      v7 = *((_QWORD *)g_MiniportHookDrivers - 1);
      for ( i = (struct MINIPORT_HOOK_DRIVER *)((char *)g_MiniportHookDrivers + 128 * v7); v7; --v7 )
      {
        i = (MINIPORT_HOOK_DRIVER *)((char *)i - 128);
        MINIPORT_HOOK_DRIVER::~MINIPORT_HOOK_DRIVER(i);
      }
      if ( v6 )
        ExFreePoolWithTag(v6, 0x6448704Du);
    }
    g_MiniportHookDrivers = 0LL;
    return v5;
  }
  return result;
}
