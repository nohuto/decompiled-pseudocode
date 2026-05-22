/*
 * XREFs of ?OnDeviceUpdate@MPCEyeGazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801C3BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCEyeGazeProcessor::OnDeviceUpdate(MPCEyeGazeProcessor *this, struct DeviceInfo *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 2) == 1548 )
  {
    v2 = *((_DWORD *)a2 + 371);
    if ( v2 != *((_DWORD *)this + 914) )
    {
      *((_DWORD *)this + 914) = v2;
      if ( v2 )
      {
        v3 = **((_QWORD **)MPCManager::s_instance + 9);
        v10 = v3;
        while ( !*(_BYTE *)(v3 + 25) )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 40) + 88LL))(*(_QWORD *)(v3 + 40), v2);
          if ( v4 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x14E,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
              (const char *)(unsigned int)v4);
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
            &v10,
            v5,
            v6,
            v7);
          v3 = v10;
        }
      }
    }
  }
  return 0LL;
}
