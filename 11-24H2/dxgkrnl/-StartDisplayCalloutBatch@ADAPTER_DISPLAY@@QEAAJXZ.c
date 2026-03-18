/*
 * XREFs of ?StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1403BA814
 * Callers:
 *     DxgkStartDisplayCalloutBatch @ 0x1403BA7F8 (DxgkStartDisplayCalloutBatch.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::StartDisplayCalloutBatch(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // edi
  __int64 v4; // [rsp+20h] [rbp-48h]
  _BYTE v5[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9027;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 9027LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (ADAPTER_DISPLAY *)((char *)this + 552), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  if ( *((_BYTE *)this + 600) )
  {
    v2 = -1073741811;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
    v4 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 9039;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Multiple display callout batches have been started on adapter 0x%I64x, returning 0x%I64x.",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    *((_BYTE *)this + 600) = 1;
    v2 = 0;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
  return v2;
}
