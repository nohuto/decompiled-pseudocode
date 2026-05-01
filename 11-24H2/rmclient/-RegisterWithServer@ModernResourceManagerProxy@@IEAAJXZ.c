/*
 * XREFs of ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003EF0
 * Callers:
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180002FB8 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x180003060 (-get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800033D0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180003A70 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x18000565C (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceManagerProxy::RegisterWithServer(ModernResourceManagerProxy *this)
{
  _QWORD *v2; // rdi
  char *v3; // r14
  int Pointer; // ebx
  int v6; // eax
  int v7; // [rsp+40h] [rbp-38h]

  v2 = (_QWORD *)((char *)this + 56);
  v3 = (char *)this + 56;
  if ( *((_QWORD *)this + 7) )
    return 0;
  Pointer = (unsigned int)NdrClientCall3(
                            (MIDL_STUBLESS_PROXY_INFO *)&stru_18001ECE0,
                            0,
                            0LL,
                            *((_QWORD *)this + 2),
                            (char *)this + 40,
                            (char *)this + 48).Pointer;
  if ( Pointer >= 0 )
  {
    v6 = RtlSubscribeWnfStateChangeNotification(
           v3,
           *((_QWORD *)this + 5),
           0LL,
           ModernResourceManagerProxy::CommitMemoryLevelChangeCallback,
           this,
           0LL,
           0,
           0,
           Pointer);
    if ( v6 >= 0 )
    {
      v6 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 64,
             *((_QWORD *)this + 6),
             0LL,
             ModernResourceManagerProxy::CommitMemoryLimitChangeCallback,
             this,
             0LL,
             0,
             0,
             v7);
      if ( v6 >= 0 )
        return 0;
    }
    Pointer = v6 | 0x10000000;
  }
  if ( *v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *v2 = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  return (unsigned int)Pointer;
}
