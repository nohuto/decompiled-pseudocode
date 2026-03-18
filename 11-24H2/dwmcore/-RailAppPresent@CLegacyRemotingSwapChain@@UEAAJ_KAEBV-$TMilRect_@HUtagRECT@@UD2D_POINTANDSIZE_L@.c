/*
 * XREFs of ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802CC950
 * Callers:
 *     <none>
 * Callees:
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18003023C (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800984C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x18020E580 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1802B5EA0 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802CCCA8 (-UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::RailAppPresent(CD3DDevice **this, __int64 a2, const struct tagRECT *a3)
{
  HRGN v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  CD3DDevice *v9; // rax
  int updated; // eax
  signed int v11; // ebx
  int v12; // eax
  signed int LastError; // eax
  HRGN hrgn; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+64h] [rbp-9Ch]
  __int64 v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  HRGN v24; // [rsp+A8h] [rbp-58h]
  LONG left; // [rsp+B8h] [rbp-48h]
  LONG top; // [rsp+BCh] [rbp-44h]
  FastRegion::CRegion *v27[10]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = 0LL;
  hrgn = 0LL;
  memset_0(v17, 0, 0x90uLL);
  v7 = 1;
  CD3DDevice::Flush(this[7]);
  v8 = a3->right - a3->left;
  v21 = 0LL;
  v19 = v8;
  v20 = a3->bottom - a3->top;
  v9 = this[14];
  v18 = a2;
  if ( !*(_DWORD *)v9 )
    goto LABEL_11;
  updated = CLegacyRemotingSwapChain::UpdateSectionBits((CLegacyRemotingSwapChain *)this);
  v11 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x11Eu, 0LL);
    goto LABEL_19;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v27, a3);
  CRegion::Intersect(this + 14, v27);
  v16.left = 0;
  v16.top = 0;
  FastRegion::CRegion::GetBoundingRect((LONG **)this + 14, &v16);
  v12 = CRegion::CreateHRGN((int **)this + 14, &hrgn);
  v11 = v12;
  if ( v12 >= 0 )
  {
    SetLastError(0);
    v6 = hrgn;
    if ( !OffsetRgn(hrgn, -a3->left, -a3->top) )
    {
      LastError = GetLastError();
      v11 = LastError;
      if ( LastError > 0 )
        v11 = (unsigned __int16)LastError | 0x80070000;
      if ( v11 >= 0 )
        v11 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x12Du, 0LL);
      FastRegion::CRegion::FreeMemory(v27);
      goto LABEL_17;
    }
    left = v16.left;
    v7 = 2;
    top = v16.top;
    v22 = 2;
    v23 = a2;
    v24 = v6;
    FastRegion::CRegion::FreeMemory(v27);
LABEL_11:
    v11 = (*(__int64 (__fastcall **)(CD3DDevice *, _BYTE *, _QWORD))(*(_QWORD *)this[12] + 56LL))(this[12], v17, v7);
    if ( ((v11 + 2147467263) & 0xFFFFFFFB) != 0 )
    {
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x142u, 0LL);
    }
    else
    {
      v11 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x13Eu, 0LL);
    }
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x129u, 0LL);
  FastRegion::CRegion::FreeMemory(v27);
  v6 = hrgn;
LABEL_17:
  if ( v6 )
    DeleteObject(v6);
LABEL_19:
  *(_DWORD *)this[14] = 0;
  return (unsigned int)v11;
}
