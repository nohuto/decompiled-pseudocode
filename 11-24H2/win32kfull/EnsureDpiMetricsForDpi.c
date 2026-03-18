/*
 * XREFs of EnsureDpiMetricsForDpi @ 0x1402873CC
 * Callers:
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1401B216C (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     EnsureArbitraryDpiMetricsForDpi @ 0x1402872EC (EnsureArbitraryDpiMetricsForDpi.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 * Callees:
 *     CreateScaledFont @ 0x1401CD670 (CreateScaledFont.c)
 *     Get96DpiMetrics @ 0x1402F1598 (Get96DpiMetrics.c)
 */

__int64 __fastcall EnsureDpiMetricsForDpi(__int64 a1, unsigned __int16 a2)
{
  INT v2; // ebx
  __int64 v4; // rsi
  Gre::Base *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 result; // rax
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int128 v17; // [rsp+60h] [rbp-28h]
  __int64 v18; // [rsp+70h] [rbp-18h]
  int v19; // [rsp+78h] [rbp-10h]

  v2 = a2;
  v4 = Get96DpiMetrics();
  CreateScaledFont(*(Gre::Base **)(v4 + 40), (__int64 *)(a1 + 40), a1 + 52, v2, (_DWORD *)(a1 + 48), a1 + 52, 0LL);
  v5 = *(Gre::Base **)(v4 + 8);
  v18 = 0LL;
  v19 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (unsigned int)CreateScaledFont(v5, (__int64 *)(a1 + 8), v6, v2, (_DWORD *)(a1 + 16), a1 + 20, (__int64)&v15) )
  {
    v8 = v16;
    v9 = v17;
    *(_DWORD *)(a1 + 28) = v16;
    v10 = *(_DWORD *)(a1 + 20) + v8 + 2;
    *(_DWORD *)(a1 + 24) = v9;
    v11 = DWORD1(v15) + 1;
    *(_DWORD *)(a1 + 36) = v10;
    *(_DWORD *)(a1 + 32) = v11;
  }
  CreateScaledFont(*(Gre::Base **)(v4 + 56), (__int64 *)(a1 + 56), v7, v2, 0LL, 0LL, 0LL);
  CreateScaledFont(*(Gre::Base **)(v4 + 64), (__int64 *)(a1 + 64), v12, v2, 0LL, 0LL, 0LL);
  result = CreateScaledFont(*(Gre::Base **)(v4 + 72), (__int64 *)(a1 + 72), v13, v2, 0LL, 0LL, 0LL);
  *(_DWORD *)a1 = 1;
  return result;
}
