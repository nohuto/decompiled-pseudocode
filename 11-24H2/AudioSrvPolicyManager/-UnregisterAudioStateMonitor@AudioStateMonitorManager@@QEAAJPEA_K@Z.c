/*
 * XREFs of ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x18001BDC8
 * Callers:
 *     ?UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z @ 0x1800349E0 (-UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?RPEAX@?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@QEBA_KAEBQEAX@Z @ 0x18001BF2C (--$-RPEAX@-$_Uhash_compare@PEAXU-$hash@PEAX@std@@U-$equal_to@PEAX@2@@std@@QEBA_KAEBQEAX@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18001BF64 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$defau.c)
 */

__int64 __fastcall AudioStateMonitorManager::UnregisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 v13; // rax
  _QWORD *v14; // r10
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0xCBF29CE484222325uLL;
  v19 = v2;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a2 + i);
    v8 = 0x100000001B3LL;
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v9 = *((_QWORD *)this + 10);
  v10 = *((_QWORD *)this + 8);
  v11 = *(_QWORD *)(v9 + 16 * (v5 & *((_QWORD *)this + 13)) + 8);
  if ( v11 == v10 )
  {
LABEL_8:
    v11 = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(v9 + 16 * (v5 & *((_QWORD *)this + 13)));
    while ( *a2 != *(_QWORD *)(v11 + 16) )
    {
      if ( v11 == v8 )
        goto LABEL_8;
      v11 = *(_QWORD *)(v11 + 8);
    }
  }
  if ( !v11 )
    v11 = *((_QWORD *)this + 8);
  if ( v11 == v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x80070490LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
    return 2147943568LL;
  }
  else
  {
    v13 = std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>::operator()<void *>(v8, v11 + 16);
    v16 = 2 * (*((_QWORD *)this + 13) & v13);
    if ( *(_QWORD **)(v15 + 16 * (*((_QWORD *)this + 13) & v13) + 8) == v14 )
    {
      if ( *(_QWORD **)(v15 + 16 * (*((_QWORD *)this + 13) & v13)) == v14 )
        *(_QWORD *)(v15 + 16 * (*((_QWORD *)this + 13) & v13)) = v10;
      else
        v10 = v14[1];
      *(_QWORD *)(v15 + 8 * v16 + 8) = v10;
    }
    else if ( *(_QWORD **)(v15 + 16 * (*((_QWORD *)this + 13) & v13)) == v14 )
    {
      *(_QWORD *)(v15 + 16 * (*((_QWORD *)this + 13) & v13)) = *v14;
    }
    v17 = *v14;
    --*((_QWORD *)this + 9);
    *(_QWORD *)v14[1] = v17;
    *(_QWORD *)(v17 + 8) = v14[1];
    std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>>(
      v17,
      v14);
    *a2 = 0LL;
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
