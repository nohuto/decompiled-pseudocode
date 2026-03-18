/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1403C1E0C
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1403C1DF0 (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1403C1F64 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // ebx
  DXGADAPTER *v3; // rcx
  struct _LUID *v4; // rdx
  __int64 v5; // r11
  _BYTE v7[16]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9082;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 9082LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (ADAPTER_DISPLAY *)((char *)this + 544), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( !*((_BYTE *)this + 592) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9087;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_DisplayCalloutBatchStarted", 9087LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)this + 592) = 0;
  if ( *((ADAPTER_DISPLAY **)this + 75) != (ADAPTER_DISPLAY *)((char *)this + 600) )
  {
    DXGGLOBAL::GetGlobal();
    v3 = (DXGADAPTER *)*((_QWORD *)this + 2);
    v8 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v3, v4, 0LL, &v8);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch(
           (DXGDISPLAYCALLOUTQUEUE *)(v5 + 1776),
           (struct _LIST_ENTRY *)((char *)this + 600),
           v8);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  return v2;
}
