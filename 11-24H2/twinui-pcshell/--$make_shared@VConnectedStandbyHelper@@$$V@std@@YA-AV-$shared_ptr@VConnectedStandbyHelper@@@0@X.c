/*
 * XREFs of ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1804175DC
 * Callers:
 *     ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180249660 (-SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180423A90 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801CE0D4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<ConnectedStandbyHelper,>(_QWORD *a1)
{
  char *v2; // rbx
  _QWORD *v3; // rdi
  int UniqueContext; // eax
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rax

  v2 = (char *)operator new(0x40uLL);
  *(_OWORD *)v2 = 0LL;
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  v3 = v2 + 16;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<ConnectedStandbyHelper>::`vftable';
  *((_OWORD *)v2 + 1) = 0LL;
  *((_OWORD *)v2 + 2) = 0LL;
  *((_OWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  UniqueContext = SHTaskPoolGetUniqueContext();
  *((_QWORD *)v2 + 5) = 0LL;
  *((_DWORD *)v2 + 8) = UniqueContext;
  v2[48] = 0;
  *((_QWORD *)v2 + 7) = 0LL;
  *a1 = v2 + 16;
  a1[1] = v2;
  if ( v2 != (char *)-16LL )
  {
    v5 = *((_QWORD *)v2 + 3);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
      v6 = (volatile signed __int32 *)a1[1];
      if ( v6 )
      {
        v7 = v3;
        v8 = a1[1];
        _InterlockedIncrement(v6 + 3);
      }
      else
      {
        v8 = 0LL;
        v7 = 0LL;
      }
      *v3 = v7;
      v9 = (std::_Ref_count_base *)v3[1];
      v3[1] = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v6 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
    }
  }
  return a1;
}
