/*
 * XREFs of AudioServerCreateStreamConnection @ 0x180108E00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18005CC3C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall AudioServerCreateStreamConnection(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 (__fastcall *v14)(std::_Ref_count_base *, _BYTE *, _BYTE *, __int64, _QWORD *); // r14
  int v15; // edi
  std::_Ref_count_base *v16[2]; // [rsp+38h] [rbp-90h]
  _BYTE v17[32]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v18[32]; // [rsp+68h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( a5 )
  {
    *a5 = 0LL;
    *(_OWORD *)v16 = 0LL;
    v9 = *((_QWORD *)&g_weakStreamMonitorManager + 1);
    if ( *((_QWORD *)&g_weakStreamMonitorManager + 1) )
    {
      v10 = *(_DWORD *)(*((_QWORD *)&g_weakStreamMonitorManager + 1) + 8LL);
      while ( v10 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
        if ( v11 == v10 )
        {
          *(_OWORD *)v16 = g_weakStreamMonitorManager;
          break;
        }
      }
    }
    if ( v16[0] )
    {
      v12 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = v12;
      if ( v12 )
      {
        *v12 = 0LL;
        v12[1] = 0LL;
        v14 = *(__int64 (__fastcall **)(std::_Ref_count_base *, _BYTE *, _BYTE *, __int64, _QWORD *))(*(_QWORD *)v16[0] + 24LL);
        std::wstring::wstring((__int64)v18, a3);
        std::wstring::wstring((__int64)v17, a2);
        v15 = v14(v16[0], v17, v18, a4, v13);
        std::wstring::_Tidy_deallocate((__int64)v17);
        std::wstring::_Tidy_deallocate((__int64)v18);
        if ( v15 >= 0 )
        {
          *a5 = v13;
          if ( v16[1] )
            std::_Ref_count_base::_Decref(v16[1]);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1524,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v15);
          if ( v16[1] )
            std::_Ref_count_base::_Decref(v16[1]);
          return (unsigned int)v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1522,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x8007000ELL);
        if ( v16[1] )
          std::_Ref_count_base::_Decref(v16[1]);
        return 2147942414LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x151F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8000FFFFLL);
      if ( v16[1] )
        std::_Ref_count_base::_Decref(v16[1]);
      return 2147549183LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
