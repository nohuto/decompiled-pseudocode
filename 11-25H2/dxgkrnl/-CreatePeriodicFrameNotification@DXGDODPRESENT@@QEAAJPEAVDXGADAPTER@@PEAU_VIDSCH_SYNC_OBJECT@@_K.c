/*
 * XREFs of ?CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x14027AF74
 * Callers:
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1402FB13C (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x14027ACB0 (-CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU.c)
 */

__int64 __fastcall DXGDODPRESENT::CreatePeriodicFrameNotification(
        DXGDODPRESENT *this,
        struct DXGADAPTER *a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a6,
        unsigned __int64 *a7)
{
  unsigned int v8; // [rsp+20h] [rbp-38h]

  if ( (*((_DWORD *)a2 + 111) & 0x100) == 0 )
    return BLTQUEUE::CreatePeriodicFrameNotification(
             (struct _KTHREAD **)(*((_QWORD *)this + 1) + 2968LL * a5),
             a2,
             a3,
             (__int64)this,
             v8,
             a6,
             a7);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 4363;
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    0xFFFFFFFFLL,
    L"Dod CreatePeriodicFrameNotification() has only been tested on indirect display",
    4363LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225659LL;
}
