/*
 * XREFs of ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800E9C50
 * Callers:
 *     ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x1800E9B70 (-AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@AEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x180210C28 (--$_Emplace_reallocate@ULightEntry@CVisual@@@-$vector@ULightEntry@CVisual@@V-$allocator@ULightEn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::AddLight(unsigned __int64 *a1, __int64 a2, int a3, char a4)
{
  unsigned int v5; // esi
  unsigned __int64 *v6; // rcx
  _QWORD *i; // rax
  unsigned __int64 Count; // rax
  CPtrArrayBase *v11; // rcx
  int v12; // eax
  _OWORD *v13; // rdx
  _OWORD *v15; // rdx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF

  v5 = 0;
  v6 = a1 + 37;
  if ( a3 )
  {
    v15 = (_OWORD *)a1[38];
    *(_QWORD *)&v16 = a2;
    BYTE8(v16) = a4;
    *(_DWORD *)((char *)&v16 + 9) = 0;
    *(_WORD *)((char *)&v16 + 13) = 0;
    HIBYTE(v16) = 0;
    if ( v15 == (_OWORD *)a1[39] )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(v6, v15, &v16);
    }
    else
    {
      *v15 = v16;
      a1[38] += 16LL;
    }
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 32), a1);
  }
  else
  {
    for ( i = (_QWORD *)*v6; i != (_QWORD *)v6[1]; i += 2 )
    {
      if ( *i == a2 )
        goto LABEL_6;
    }
    Count = CPtrArray<CVisual>::GetCount((_QWORD *)(a2 + 32));
    v12 = CPtrArrayBase::InsertAt(v11, (unsigned __int64)a1, Count);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x457u, 0LL);
      return v5;
    }
LABEL_6:
    v13 = (_OWORD *)a1[35];
    *(_QWORD *)&v16 = a2;
    BYTE8(v16) = a4;
    *(_DWORD *)((char *)&v16 + 9) = 0;
    *(_WORD *)((char *)&v16 + 13) = 0;
    HIBYTE(v16) = 0;
    if ( v13 == (_OWORD *)a1[36] )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(a1 + 34, v13, &v16);
    }
    else
    {
      *v13 = v16;
      a1[35] += 16LL;
    }
  }
  (*(void (__fastcall **)(unsigned __int64 *, __int64))(*a1 + 80))(a1, 5LL);
  (*(void (__fastcall **)(unsigned __int64 *, _QWORD, __int64))(*a1 + 80))(a1, *(_BYTE *)(a2 + 169) != 0 ? 1 : 11, a2);
  return v5;
}
