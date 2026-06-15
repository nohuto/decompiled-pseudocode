/*
 * XREFs of ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x18001968C
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800309E4 (--1CProcess@@MEAA@XZ.c)
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800327C0 (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180034E38 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::GetValueAt(
        __int64 a1,
        signed int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
  {
    ATL::_AtlRaiseException(a1, a2);
    JUMPOUT(0x1800196AFLL);
  }
  return *(_QWORD *)(a1 + 8) + 8LL * a2;
}
