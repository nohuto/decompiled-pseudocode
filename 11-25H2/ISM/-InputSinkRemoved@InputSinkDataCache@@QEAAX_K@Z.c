/*
 * XREFs of ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x18004FC60
 * Callers:
 *     NotifyInputSinkRemoved @ 0x18004F170 (NotifyInputSinkRemoved.c)
 * Callees:
 *     ??$_Emplace_reallocate@W4NotificationType@@AEA_KH@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K$$QEAH@Z @ 0x18004F1B0 (--$_Emplace_reallocate@W4NotificationType@@AEA_KH@-$vector@VNotificationData@@V-$allocator@VNoti.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@PEAU32@@Z @ 0x18004FD70 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSinkDataCache::InputSinkRemoved(PSRWLOCK SRWLock, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 i; // r8
  __int64 v6; // rax
  _QWORD *Ptr; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  PSRWLOCK v14; // [rsp+78h] [rbp+20h]

  v12 = a2;
  AcquireSRWLockExclusive(SRWLock);
  v14 = SRWLock;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)&v12 + i) ^ (unsigned __int64)v4);
  v6 = 2 * (v4 & (__int64)SRWLock[7].Ptr);
  Ptr = SRWLock[4].Ptr;
  v8 = (_QWORD *)Ptr[v6 + 1];
  if ( v8 == SRWLock[2].Ptr )
  {
LABEL_8:
    v8 = 0LL;
  }
  else
  {
    v9 = (_QWORD *)Ptr[v6];
    while ( a2 != v8[2] )
    {
      if ( v8 == v9 )
        goto LABEL_8;
      v8 = (_QWORD *)v8[1];
    }
  }
  if ( !v8 )
    v8 = SRWLock[2].Ptr;
  if ( v8 != SRWLock[2].Ptr )
  {
    v11 = 0;
    v13 = 3;
    v10 = SRWLock[10].Ptr;
    if ( v10 == SRWLock[11].Ptr )
    {
      std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,int>(
        (__int64 *)&SRWLock[9],
        (__int64)v10,
        &v13,
        &v12,
        &v11);
    }
    else
    {
      *(_DWORD *)v10 = 3;
      v10[1] = a2;
      v10[2] = 0LL;
      v10[3] = 0LL;
      SRWLock[10].Ptr = (char *)SRWLock[10].Ptr + 96;
    }
    std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Unchecked_erase(
      &SRWLock[1],
      v8);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
