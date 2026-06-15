/*
 * XREFs of ??$?4U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@$0A@@?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003F1BC
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x180040A94 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall std::unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>::operator=<std::default_delete<MEDIAMANAGER_NOTIFICATION_BLOCK>,0>(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    operator delete(v4, (const struct std::nothrow_t *)0x21);
  return a1;
}
