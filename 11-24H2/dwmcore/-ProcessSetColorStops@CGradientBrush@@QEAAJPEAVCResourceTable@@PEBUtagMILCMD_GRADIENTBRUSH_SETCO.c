/*
 * XREFs of ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x1801DD8E4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CColorGradientStop@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801DDAD0 (-IsOfType@CColorGradientStop@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1801DDAE0 (--$_Emplace_reallocate@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PE.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801DDBDC (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetColorStops(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS *a3,
        _DWORD *a4,
        unsigned int a5)
{
  char *v5; // rsi
  unsigned int v6; // r12d
  char *v8; // rdi
  __int64 i; // r15
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  char v14; // al
  char *v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-40h]
  _QWORD v18[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  char *v20; // [rsp+50h] [rbp-10h]
  _DWORD *v22; // [rsp+B8h] [rbp+58h]

  v22 = a4;
  v5 = 0LL;
  v6 = 0;
  v20 = 0LL;
  v19 = 0LL;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v17 = 197;
LABEL_22:
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v17, 0LL);
    v15 = (char *)v19;
  }
  else
  {
    v8 = (char *)*((_QWORD *)&v19 + 1);
    for ( i = 0LL; (unsigned int)i < a5 >> 2; i = (unsigned int)(i + 1) )
    {
      v10 = a4[i];
      if ( v10 && v10 < *((_DWORD *)a2 + 7) && (v11 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v10 + v11)) )
        v12 = *(_QWORD *)(*((_DWORD *)a2 + 6) * v10 + v11 + 8);
      else
        v12 = 0LL;
      v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL);
      if ( v13 == CColorGradientStop::IsOfType )
        v14 = CColorGradientStop::IsOfType(v12, 23LL);
      else
        v14 = v13(v12, 23LL);
      if ( !v14 )
      {
        v17 = 206;
        goto LABEL_22;
      }
      v18[0] = v12;
      if ( v8 == v5 )
      {
        std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v19, v8, v18);
        v5 = v20;
        v8 = (char *)*((_QWORD *)&v19 + 1);
      }
      else
      {
        *(_QWORD *)v8 = v12;
        v8 += 8;
        *((_QWORD *)&v19 + 1) = v8;
      }
      a4 = v22;
    }
    v15 = (char *)v19;
    gsl::details::extent_type<-1>::extent_type<-1>(v18, (int)((__int64)&v8[-v19] >> 3));
    v18[1] = v15;
    if ( v18[0] == -1LL || !v15 && v18[0] )
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    CGradientBrush::SetStops(this);
  }
  if ( v15 )
    std::_Deallocate<16,0>(v15, (v5 - v15) & 0xFFFFFFFFFFFFFFF8uLL);
  return v6;
}
