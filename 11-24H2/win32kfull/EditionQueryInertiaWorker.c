/*
 * XREFs of EditionQueryInertiaWorker @ 0x1402AE7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140159B58 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401B7F74 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionQueryInertiaWorker(struct tagPOINT a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  bool v6; // zf
  const struct _D3DMATRIX *v8; // rdx
  const struct tagRECT *v9; // rcx
  struct tagPOINT v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = ValidateHwnd(*(_QWORD *)(a2 + 120));
  v5 = 0;
  if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a2 + 184) & 0x20) != 0 )
  {
    v6 = v4 == 0;
LABEL_4:
    LOBYTE(v5) = !v6;
    return v5;
  }
  if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
  {
    v10 = a1;
    if ( !DCEHitTestWindow((const struct tagRECT *)(a2 + 40), (const struct _D3DMATRIX *)(a2 + 56), &v10, 0LL) )
      return 0LL;
  }
  if ( !v4 || (*(_DWORD *)(v4 + 380) & 0x40000000) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 184) & 4) == 0 )
    {
      v10.x = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 158);
    }
    if ( !v4 || (*(_DWORD *)(v4 + 380) & 0x40000000) != 0 )
      return 1LL;
  }
  v8 = *(const struct _D3DMATRIX **)(v4 + 216);
  v9 = (const struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL);
  v10 = a1;
  if ( !v8 )
  {
    v6 = !DCEPtInRect(v9, a1);
    goto LABEL_4;
  }
  return DCEHitTestWindow(v9, v8, &v10, 0LL) != 0;
}
