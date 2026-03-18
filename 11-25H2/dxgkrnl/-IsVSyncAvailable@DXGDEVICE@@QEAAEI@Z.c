/*
 * XREFs of ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x14037A144
 * Callers:
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z @ 0x140180F4C (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401D7EAC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall DXGDEVICE::IsVSyncAvailable(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  char v4; // bl
  __int64 v5; // rdi

  v2 = *((_QWORD *)this + 235);
  v3 = a2;
  if ( !v2 )
    return 1;
  v4 = 1;
  if ( !*(_QWORD *)(v2 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10513;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDisplayAdapter()", 10513LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = *(_QWORD *)(v2 + 3120);
  if ( !v5 )
    return 0;
  if ( (unsigned int)v3 >= *(_DWORD *)(v5 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6425;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_BYTE *)(3984 * v3 + *(_QWORD *)(v5 + 128) + 760) )
    return 0;
  return v4;
}
