/*
 * XREFs of ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800327C0
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180032740 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x1800164E0 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x18001968C (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180034E38 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcess::HasDuckedStream(CProcess *this)
{
  unsigned int v2; // r14d
  signed int i; // ebx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 j; // rsi

  v2 = 0;
  if ( CProcess::SubjectToStreamClassPolicyGains(this) )
  {
    for ( i = 0; i < *((_DWORD *)this + 68); ++i )
    {
      v6 = *(_QWORD *)ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
                        (__int64)this + 256,
                        i);
      if ( i < 0 || i >= *((_DWORD *)this + 68) )
      {
        ATL::_AtlRaiseException(v5, v4);
        JUMPOUT(0x1800328C6LL);
      }
      v7 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(*((_QWORD *)this + 32) + 32LL * i);
      for ( j = 0LL; (unsigned int)j < 0x18; j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(v6 + 4 * j)
          && (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, bool))(*(_QWORD *)g_StreamClassPolicyManager
                                                                                            + 32LL))(
               g_StreamClassPolicyManager,
               *((unsigned int *)this + 41),
               v7,
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
