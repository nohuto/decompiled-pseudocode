/*
 * XREFs of NotifyInputSinkParented @ 0x18004F310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x18004F4C0 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     _anonymous_namespace_::GetLuidFromInputSinkHandle @ 0x18004F558 (_anonymous_namespace_--GetLuidFromInputSinkHandle.c)
 *     ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x18004F59C (-SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18004F6B8 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18004F848 (--$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@V.c)
 */

__int64 __fastcall NotifyInputSinkParented(void *a1, __int64 a2)
{
  RTL_SRWLOCK *Instance; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 i; // rdx
  __int64 v8; // rcx
  _QWORD *Ptr; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  NotificationData *v14; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 LuidFromInputSinkHandle; // [rsp+30h] [rbp-20h] BYREF
  char v19[24]; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  Instance = (RTL_SRWLOCK *)InputSinkDataCache::GetInstance();
  LuidFromInputSinkHandle = anonymous_namespace_::GetLuidFromInputSinkHandle(a2);
  v5 = LuidFromInputSinkHandle;
  v21 = anonymous_namespace_::GetLuidFromInputSinkHandle(a1);
  AcquireSRWLockExclusive(Instance);
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v8 = *((unsigned __int8 *)&v21 + i);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  Ptr = Instance[4].Ptr;
  v10 = 2 * (v6 & (__int64)Instance[7].Ptr);
  v11 = (_QWORD *)Ptr[2 * (v6 & (__int64)Instance[7].Ptr) + 1];
  if ( v11 == Instance[2].Ptr )
  {
LABEL_7:
    v11 = 0LL;
  }
  else
  {
    while ( v21 != v11[2] )
    {
      if ( v11 == (_QWORD *)Ptr[v10] )
        goto LABEL_7;
      v11 = (_QWORD *)v11[1];
    }
  }
  if ( !v11 )
    v11 = Instance[2].Ptr;
  if ( v11 == Instance[2].Ptr )
  {
    v12 = std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
            &Instance[1],
            v19,
            &v21);
    v20 = 0;
    *(_QWORD *)(*(_QWORD *)v12 + 24LL) = LuidFromInputSinkHandle;
    v13 = Instance[10].Ptr;
    if ( v13 == Instance[11].Ptr )
    {
      v14 = (NotificationData *)std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
                                  (int)Instance + 72,
                                  (_DWORD)v13,
                                  (unsigned int)&v20,
                                  (unsigned int)&v21,
                                  (__int64)&LuidFromInputSinkHandle);
    }
    else
    {
      v17 = v21;
      *(_DWORD *)v13 = 0;
      v13[1] = v17;
      v13[2] = 0LL;
      v13[3] = v5;
      v14 = (NotificationData *)Instance[10].Ptr;
      Instance[10].Ptr = (char *)v14 + 96;
    }
    NotificationData::SetInputSinkHandle(v14, a1);
  }
  else if ( v11[3] != LuidFromInputSinkHandle )
  {
    v11[3] = LuidFromInputSinkHandle;
    v16 = Instance[10].Ptr;
    v20 = 1;
    if ( v16 == Instance[11].Ptr )
    {
      std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
        (_DWORD)Instance + 72,
        (_DWORD)v16,
        (unsigned int)&v20,
        (unsigned int)&v21,
        (__int64)&LuidFromInputSinkHandle);
    }
    else
    {
      v16[1] = v21;
      *(_DWORD *)v16 = 1;
      v16[2] = 0LL;
      v16[3] = v5;
      Instance[10].Ptr = (char *)Instance[10].Ptr + 96;
    }
  }
  ReleaseSRWLockExclusive(Instance);
  return 1LL;
}
