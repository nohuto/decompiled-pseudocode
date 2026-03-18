/*
 * XREFs of ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x1802351A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x18021340C (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ??$insert@V?$span_iterator@$$CBM@details@gsl@@$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@$$CBM@details@gsl@@1@Z @ 0x180256EFC (--$insert@V-$span_iterator@$$CBM@details@gsl@@$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashArray(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // esi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  char *v13; // [rsp+30h] [rbp-58h] BYREF
  char *v14; // [rsp+38h] [rbp-50h]
  char *v15; // [rsp+40h] [rbp-48h]
  _QWORD v16[4]; // [rsp+50h] [rbp-38h] BYREF
  struct CResourceTable *v17; // [rsp+98h] [rbp+10h] BYREF

  v17 = a2;
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  if ( v5 != a5 || (a5 & 3) != 0 )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xCAu, 0LL);
  }
  else
  {
    v9 = (_QWORD *)((char *)this + 160);
    v10 = (unsigned __int64)v5 >> 2;
    if ( !*((_BYTE *)a3 + 8) )
    {
      if ( *((_QWORD *)this + 20) != *((_QWORD *)this + 21) )
        *((_QWORD *)this + 21) = *v9;
      std::vector<float>::reserve((_QWORD *)this + 20, v10);
    }
    gsl::details::extent_type<-1>::extent_type<-1>(&v13, v10);
    if ( v13 == (char *)-1LL || !a4 && v13 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v11 = *((_QWORD *)this + 21);
    v14 = &a4[4 * (_QWORD)v13];
    v15 = v14;
    v16[1] = v14;
    v13 = a4;
    v16[0] = a4;
    v16[2] = a4;
    std::vector<float>::insert<gsl::details::span_iterator<float const>,0>(
      (_DWORD)v9,
      (unsigned int)&v17,
      v11,
      (unsigned int)v16,
      (__int64)&v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    CResource::NotifyOnChanged(this, 6u, 0LL);
  }
  return v6;
}
