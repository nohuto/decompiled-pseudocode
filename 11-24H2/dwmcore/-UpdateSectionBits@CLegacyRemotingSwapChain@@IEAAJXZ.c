/*
 * XREFs of ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802CCCA8
 * Callers:
 *     ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802CC7D0 (-Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802CC950 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800615A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::UpdateSectionBits(int **this)
{
  int v1; // ebx
  int *v3; // r8
  __int64 v4; // rcx
  int v5; // eax
  int *v6; // rcx
  int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  int v9; // edi
  _BYTE v11[8]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-48h]
  int *v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  v1 = 0;
  if ( !*((_BYTE *)this + 200) )
  {
    FastRegion::CRegion::BeginIterator(this + 14, (__int64)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      v16 = 0;
      v17 = 0;
      v3 = this[9];
      v17 = *v13;
      v19 = v13[2];
      v4 = 2 * v15;
      v16 = *(_DWORD *)(v14 + 4 * v4);
      v5 = *(_DWORD *)(v14 + 4 * v4 + 4);
      v6 = this[8];
      v18 = v5;
      v7 = (*(__int64 (__fastcall **)(int *, int *, int *))(*(_QWORD *)v6 + 128LL))(v6, &v16, v3);
      v9 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1B6u, 0LL);
      if ( !v1 || v1 >= 0 && v9 < 0 )
        v1 = v9;
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  return (unsigned int)v1;
}
