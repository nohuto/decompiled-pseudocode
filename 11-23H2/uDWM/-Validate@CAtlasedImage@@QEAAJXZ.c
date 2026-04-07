/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180041EA0
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180045020 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z @ 0x180036EB4 (--$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // edi
  int v3; // eax
  char *v4; // rax
  __int64 v5; // r8
  int v7; // eax
  int v8; // eax
  __int128 v9; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+50h] [rbp+7h]
  int v11; // [rsp+58h] [rbp+Fh]
  __int128 v12; // [rsp+60h] [rbp+17h] BYREF
  __int64 v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  char *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+B0h] [rbp+67h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v7 = CCompositor::CreateProxy<CAtlasedRectsMeshProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           (__int64 *)this + 11);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x368u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x181u, 0LL);
      return (unsigned int)v2;
    }
  }
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL)
                                                                           + 16LL)
                                                             + 840LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 16LL),
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 24LL),
             *((unsigned int *)this + 17));
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1A3u, 0LL);
        return (unsigned int)v2;
      }
    }
    goto LABEL_13;
  }
  v4 = (char *)this + 100;
  if ( !*((_BYTE *)this + 116) )
    v4 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = v4;
  v11 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v9, 0x10u);
  v14 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v12, 0x10u);
  v16 = 0;
  (*(void (__fastcall **)(CAtlasedImage *, int *))(*(_QWORD *)this + 32LL))(this, &v16);
  v2 = DynArrayImpl<0>::Grow((char **)&v9, 0x10u, v16, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x18Eu, 0LL);
LABEL_21:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v12);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v9);
    return (unsigned int)v2;
  }
  v2 = DynArrayImpl<0>::Grow((char **)&v12, 0x10u, v16, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x18Fu, 0LL);
    goto LABEL_21;
  }
  v2 = (*(__int64 (__fastcall **)(CAtlasedImage *, __int128 *))(*(_QWORD *)this + 16LL))(this, &v9);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x192u, 0LL);
    goto LABEL_21;
  }
  LOBYTE(v5) = (unsigned int)(*((_DWORD *)this + 30) - 18) > 3;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 16LL)
                                                                                       + 832LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 24LL),
         v5,
         *((unsigned int *)this + 17),
         v9,
         v12,
         v11);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x19Fu, 0LL);
    goto LABEL_21;
  }
  if ( (_QWORD)v12 != *((_QWORD *)&v12 + 1) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)&v12 = 0LL;
  }
  if ( (_QWORD)v9 != *((_QWORD *)&v9 + 1) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
LABEL_13:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
