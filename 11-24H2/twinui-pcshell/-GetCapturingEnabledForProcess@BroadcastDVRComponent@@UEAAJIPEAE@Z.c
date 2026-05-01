/*
 * XREFs of ?GetCapturingEnabledForProcess@BroadcastDVRComponent@@UEAAJIPEAE@Z @ 0x18005C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005C8DC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetCapturingEnabledForProcess(BroadcastDVRComponent *this, int a2, bool *a3)
{
  _QWORD *i; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  std::_Ref_count_base *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 j; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    *a3 = 1;
    for ( i = (_QWORD *)**((_QWORD **)this + 33); i != *((_QWORD **)this + 33); i = (_QWORD *)j )
    {
      v7 = i[6];
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v8 = i[5];
      dwProcessId = 0;
      v9 = (std::_Ref_count_base *)i[6];
      GetWindowThreadProcessId(*(HWND *)v8, &dwProcessId);
      if ( a2 == dwProcessId )
      {
        *a3 = (*(_DWORD *)(v8 + 56) & 0x80) != 0;
        if ( v9 )
          std::_Ref_count_base::_Decref(v9);
        return 0LL;
      }
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      v13 = i[2];
      if ( *(_BYTE *)(v13 + 25) )
      {
        for ( j = i[1]; !*(_BYTE *)(j + 25) && i == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
          i = (_QWORD *)j;
      }
      else
      {
        j = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
              v13,
              v10,
              v11,
              v12);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
