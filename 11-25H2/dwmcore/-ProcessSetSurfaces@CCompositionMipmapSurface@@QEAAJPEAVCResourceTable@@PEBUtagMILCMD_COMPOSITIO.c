/*
 * XREFs of ?ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES@@PEBXI@Z @ 0x1802A1BE0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180189850 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1801B9698 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionMipmapSurface::ProcessSetSurfaces(
        CCompositionMipmapSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES *a3,
        _DWORD *a4)
{
  CResourceTable *v6; // r8
  unsigned int v8; // ebx
  __int64 i; // rsi
  struct CResource *ResourceWithoutType; // rcx
  int v11; // eax
  int v12; // ecx
  __int64 j; // rsi
  __int64 v14; // r15
  struct CResource *v15; // rax
  __int64 v16; // r9
  int v17; // r12d
  int v18; // r13d
  __int64 v19; // rbx
  __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int v25; // [rsp+20h] [rbp-58h]
  _DWORD v26[18]; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp+8h]
  unsigned int v30; // [rsp+A0h] [rbp+28h]

  v6 = a2;
  if ( *((unsigned int *)a3 + 2) <= (unsigned __int64)((__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) >> 5) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 2); i = (unsigned int)(i + 1) )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, a4[6 * i + 1]);
      if ( a4[6 * i] >= *((_DWORD *)this + 34)
        || ResourceWithoutType
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
              ResourceWithoutType,
              41LL)
        || (v11 = a4[6 * i + 2], v11 < 0)
        || (v12 = a4[6 * i + 3], v12 < 0)
        || a4[6 * i + 4] < v11
        || a4[6 * i + 5] < v12 )
      {
        v25 = 219;
        goto LABEL_3;
      }
      v6 = a2;
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a3 + 2); v6 = a2 )
    {
      v14 = 0LL;
      v15 = CResourceTable::GetResourceWithoutType(v6, a4[6 * j + 1]);
      v17 = a4[2 * v16 + 2];
      v18 = a4[2 * v16 + 3];
      v19 = (unsigned int)a4[2 * v16];
      v30 = a4[2 * v16 + 4];
      v26[2] = v30;
      v27 = a4[2 * v16 + 5];
      v26[3] = v27;
      v26[0] = v17;
      v26[1] = v18;
      if ( v15 )
      {
        v20 = *((_QWORD *)this + 12);
        v21 = 32LL * (unsigned int)v19;
        v14 = (__int64)v15;
        if ( *(struct CResource **)(v21 + v20) != v15
          || !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
                (unsigned int *)(v21 + v20 + 8),
                v26) )
        {
          *(_BYTE *)(v21 + v20 + 24) = 1;
          *((_BYTE *)this + 160) = 1;
        }
      }
      v22 = 32 * v19;
      wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(
        (__int64 *)(v22 + *((_QWORD *)this + 12)),
        v14);
      v23 = *((_QWORD *)this + 12);
      j = (unsigned int)(j + 1);
      *(_DWORD *)(v22 + v23 + 8) = v17;
      *(_DWORD *)(v22 + v23 + 12) = v18;
      *(_DWORD *)(v22 + v23 + 16) = v30;
      *(_DWORD *)(v22 + v23 + 20) = v27;
    }
    return 0;
  }
  else
  {
    v25 = 191;
LABEL_3:
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v25, 0LL);
  }
  return v8;
}
