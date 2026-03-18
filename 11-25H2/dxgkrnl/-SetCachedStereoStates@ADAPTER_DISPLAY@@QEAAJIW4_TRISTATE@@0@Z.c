/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x140198A14
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C09D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rsi
  unsigned int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+28h] [rbp-30h]

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6599;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 6599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *(_DWORD *)(a1 + 96);
  if ( (unsigned int)v5 < v8 )
  {
    v10 = 3984 * v5;
    *(_DWORD *)(v10 + *(_QWORD *)(a1 + 128) + 1116) = a3;
    *(_DWORD *)(v10 + *(_QWORD *)(a1 + 128) + 1120) = a4;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v5, v8);
    v11 = *(unsigned int *)(a1 + 96);
    WdLogGlobalForLineNumber = 6604;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified invalid VidPN source ID 0x%I64x (only %I64d are supported)",
      v5,
      v11,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
