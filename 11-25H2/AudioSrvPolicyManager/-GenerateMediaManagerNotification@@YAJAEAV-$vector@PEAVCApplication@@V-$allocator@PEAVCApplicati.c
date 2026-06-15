/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x180040A94
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180043298 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800211F8 (memset_0.c)
 *     ??$?4U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@$0A@@?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003F1BC (--$-4U-$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@$0A@@-$unique_ptr@UMEDIAMANAGER_N.c)
 *     ??1?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18003FD18 (--1-$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U-$default_delete@UMEDIAMANAGER_NOTIFICATION_B.c)
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x180040BD4 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x180041094 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GenerateMediaManagerNotification(__int64 a1, void **a2)
{
  unsigned int NotificationDataSize; // ebx
  __int64 v5; // rdx
  char *v6; // rsi
  char *v7; // rbx
  char *v8; // rax
  char *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  NotificationDataSize = GetNotificationDataSize(a1, &v15);
  if ( (NotificationDataSize & 0x80000000) != 0 )
  {
    v5 = 425LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)NotificationDataSize);
    return NotificationDataSize;
  }
  v6 = v15;
  v7 = v15 + 42;
  if ( (unsigned __int64)v15 >= 0xFFFFFFFFFFFFFFD6uLL )
  {
    NotificationDataSize = -2147024362;
    v5 = 429LL;
    goto LABEL_16;
  }
  v8 = (char *)operator new[]((SIZE_T)(v15 + 42), (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v15 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, (size_t)v7);
    *(_DWORD *)v9 = (_DWORD)v7;
    *((_DWORD *)v9 + 1) = 0x10000;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_DWORD *)v9 + 6) = 0;
    if ( v6 )
    {
      v12 = SetNotificationData(a1, v9 + 32, v6);
      NotificationDataSize = v12;
      if ( v12 < 0 )
      {
        v10 = (unsigned int)v12;
        v11 = 445LL;
        goto LABEL_9;
      }
      if ( (unsigned __int64)v6 > 0xFFFFFFFF )
      {
        NotificationDataSize = -2147024362;
        *((_DWORD *)v9 + 7) = -1;
        v10 = 2147942934LL;
        v11 = 447LL;
        goto LABEL_9;
      }
      *((_DWORD *)v9 + 7) = (_DWORD)v6;
    }
    std::unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>::operator=<std::default_delete<MEDIAMANAGER_NOTIFICATION_BLOCK>,0>(
      a2,
      (void **)&v15);
    NotificationDataSize = 0;
    goto LABEL_13;
  }
  NotificationDataSize = -2147024882;
  v10 = 2147942414LL;
  v11 = 432LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v10);
LABEL_13:
  std::unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>::~unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>((void **)&v15);
  return NotificationDataSize;
}
