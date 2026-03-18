/*
 * XREFs of EditionQueryInertiaWorker @ 0x1C01F6EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C01226C0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0150B38 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0150F64 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall EditionQueryInertiaWorker(struct tagPOINT a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  const struct tagWND *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  const struct _D3DMATRIX *v9; // rdx
  const struct tagRECT *v10; // rcx
  struct tagPOINT v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v6 = (const struct tagWND *)ValidateHwnd(*(_QWORD *)(a2 + 120));
  if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
  {
    v12 = a1;
    if ( !DCEHitTestWindow((const struct tagRECT *)(a2 + 40), (const struct _D3DMATRIX *)(a2 + 56), &v12, 0LL) )
      return 0LL;
  }
  if ( v6 && !(unsigned int)IsCompositionInputWindow(v6, v5, v7, v8) )
    goto LABEL_16;
  if ( (*(_DWORD *)(a2 + 184) & 4) == 0 )
  {
    v12.x = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 147);
  }
  if ( v6 )
  {
LABEL_16:
    if ( !(unsigned int)IsCompositionInputWindow(v6, v5, v7, v8) )
    {
      v9 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      v10 = (const struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL);
      v12 = a1;
      if ( !v9 )
      {
        LOBYTE(v4) = DCEPtInRect(v10, a1);
        return v4;
      }
      if ( !DCEHitTestWindow(v10, v9, &v12, 0LL) )
        return 0LL;
    }
  }
  return 1LL;
}
