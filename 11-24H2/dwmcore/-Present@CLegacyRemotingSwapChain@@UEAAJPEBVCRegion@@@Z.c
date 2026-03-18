/*
 * XREFs of ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802CC7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x18020E580 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1802B5EA0 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802CCCA8 (-UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Present(CD3DDevice **this, int **a2)
{
  HGDIOBJ v2; // rsi
  _DWORD **v5; // rbx
  int updated; // eax
  unsigned int v7; // edi
  int HRGN; // eax
  int v9; // eax
  int v10; // eax
  HGDIOBJ ho; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  ho = 0LL;
  if ( *((int *)g_pComposition + 1566) <= 3 )
  {
    CD3DDevice::Flush(this[7]);
    v5 = (_DWORD **)(this + 14);
    if ( *(_DWORD *)this[14] )
    {
      updated = CLegacyRemotingSwapChain::UpdateSectionBits((CLegacyRemotingSwapChain *)this);
      v7 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xE6u, 0LL);
        goto LABEL_16;
      }
    }
    if ( a2 )
    {
      HRGN = CRegion::CreateHRGN(a2, (HRGN *)&ho);
      v7 = HRGN;
      if ( HRGN < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, HRGN, 0xECu, 0LL);
LABEL_8:
        v2 = ho;
        goto LABEL_14;
      }
    }
    else
    {
      v9 = CRegion::CreateHRGN((int **)this + 14, (HRGN *)&ho);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xF0u, 0LL);
        goto LABEL_8;
      }
    }
    v2 = ho;
    v10 = (*(__int64 (__fastcall **)(CD3DDevice *, HGDIOBJ, _QWORD, _QWORD))(*(_QWORD *)this[11] + 24LL))(
            this[11],
            ho,
            0LL,
            0LL);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xF3u, 0LL);
    goto LABEL_14;
  }
  v7 = -2003304309;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0xF8u, 0LL);
  v5 = (_DWORD **)(this + 14);
LABEL_14:
  if ( v2 )
    DeleteObject(v2);
LABEL_16:
  **v5 = 0;
  return v7;
}
