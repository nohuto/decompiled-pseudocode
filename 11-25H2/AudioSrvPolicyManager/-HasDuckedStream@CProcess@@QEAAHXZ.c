/*
 * XREFs of ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800351A0
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180035120 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x18000DBB0 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x1800162C0 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x18001955C (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180037818 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcess::HasDuckedStream(CProcess *this)
{
  unsigned int v2; // r14d
  signed int i; // ebx
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 j; // rsi

  v2 = 0;
  if ( CProcess::SubjectToStreamClassPolicyGains(this) )
  {
    for ( i = 0; i < *((_DWORD *)this + 68); ++i )
    {
      v8 = *(_QWORD *)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
                        (__int64)this + 256,
                        i);
      if ( i < 0 || i >= *((_DWORD *)this + 68) )
      {
        ATL::_AtlRaiseException(v5, v4);
        JUMPOUT(0x1800352A6LL);
      }
      v9 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(*((_QWORD *)this + 32) + 32LL * i, v4, v6, v7);
      for ( j = 0LL; (unsigned int)j < 0x18; j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(v8 + 4 * j)
          && (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, bool))(*(_QWORD *)g_StreamClassPolicyManager
                                                                                            + 32LL))(
               g_StreamClassPolicyManager,
               *((unsigned int *)this + 41),
               v9,
               (unsigned int)j,
               0,
               *(_DWORD *)(*((_QWORD *)this + 28) + 208LL) != 0) )
        {
          v2 = 1;
          break;
        }
      }
    }
  }
  return v2;
}
