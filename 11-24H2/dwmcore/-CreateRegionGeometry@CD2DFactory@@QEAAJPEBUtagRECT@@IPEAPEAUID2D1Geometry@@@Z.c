/*
 * XREFs of ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x18014E84C
 * Callers:
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18014CFAC (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DFactory::CreateRegionGeometry(
        CD2DFactory *this,
        const struct tagRECT *a2,
        __int64 a3,
        struct ID2D1Geometry **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r8
  void (*v8)(void); // rax
  CCachedVisualImage *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *, __int64, CCachedVisualImage **))(*(_QWORD *)qword_1803FAAB8
                                                                                                  + 24LL))(
         qword_1803FAAB8,
         a2,
         a3,
         &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *a4 = v10;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x85u, 0LL);
    if ( v10 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
      if ( (char *)v8 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
          v10,
          (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
          v7);
      else
        v8();
    }
  }
  return v6;
}
