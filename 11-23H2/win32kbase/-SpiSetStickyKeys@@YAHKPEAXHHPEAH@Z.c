/*
 * XREFs of ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014E9E0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00A3090 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AEFC4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     FastWriteProfileValue @ 0x1C0135550 (FastWriteProfileValue.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01B74B0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1C0205B58 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1C0207590 (ApiSetEditionPostShellHookMessages.c)
 */

__int64 __fastcall SpiSetStickyKeys(int a1, _WORD *a2, int a3, unsigned int a4, int *a5)
{
  int v9; // ebp
  int v10; // r9d
  unsigned int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int16 v16[40]; // [rsp+40h] [rbp-88h] BYREF

  memset(v16, 0, sizeof(v16));
  v9 = dword_1C02905F4 & 1;
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 8 )
    return 0LL;
  a2[3] = 0;
  v10 = *((_DWORD *)a2 + 1);
  if ( (v10 & 0x1FF) != v10 )
    return 0LL;
  v11 = v10 | 2;
  if ( (dword_1C02905F4 & 2) == 0 )
    v11 = *((_DWORD *)a2 + 1) & 0xFFFFFFFD;
  *((_DWORD *)a2 + 1) = v11;
  if ( a3 )
  {
    RtlStringCchPrintfW(v16, 40LL, L"%d");
    v12 = -1LL;
    do
      ++v12;
    while ( v16[v12] );
    a4 = (unsigned int)FastWriteProfileValue(0LL, 0xEu, (const WCHAR *)L"Flags", 1u, v16, 2 * (int)v12 + 2);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v15[0] = 0LL;
  memmove(v15, &gStickyKeys, (unsigned int)gStickyKeys);
  memmove(&gStickyKeys, a2, *(unsigned int *)a2);
  LODWORD(gStickyKeys) = 8;
  if ( (dword_1C02905F4 & 1) == 0 )
  {
    if ( v9 )
      xxxTurnOffStickyKeys();
  }
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook(1LL);
  ApiSetEditionPostShellHookMessages(v13, 1LL, v15, &gStickyKeys);
  return 1LL;
}
