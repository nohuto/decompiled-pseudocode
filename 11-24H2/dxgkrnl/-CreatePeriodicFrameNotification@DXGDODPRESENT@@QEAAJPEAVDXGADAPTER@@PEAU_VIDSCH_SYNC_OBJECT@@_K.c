/*
 * XREFs of ?CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x140281BEC
 * Callers:
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1403E31A4 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x140281928 (-CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU.c)
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
             (struct _KTHREAD **)(*((_QWORD *)this + 1) + 3040LL * a5),
             a2,
             a3,
             (__int64)this,
             v8,
             a6,
             a7);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 4953;
  DxgkLogInternalTriageEvent(
    0LL,
    262146LL,
    0xFFFFFFFFLL,
    L"Dod CreatePeriodicFrameNotification() has only been tested on indirect display",
    4953LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225659LL;
}
