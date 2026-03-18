/*
 * XREFs of ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1403DB6A8
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x14026ECA0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CTTMDEVICE@@QEAA@W4TTM_DEVICE_TYPE@@@Z @ 0x1401F2CB8 (--0CTTMDEVICE@@QEAA@W4TTM_DEVICE_TYPE@@@Z.c)
 *     ?Initialize@CTTMDEVICE@@QEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBG@Z @ 0x1403DB8FC (-Initialize@CTTMDEVICE@@QEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBG@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1403DBA60 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateTtmDevice(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        struct DXGADAPTER *a4,
        unsigned int a5,
        unsigned int a6,
        wchar_t *Src,
        CTTMDEVICE **a8)
{
  __int64 v11; // rax
  CTTMDEVICE *v13; // rax
  CTTMDEVICE *v14; // rbx
  int v15; // eax
  __int64 v16; // rbp
  int v17; // eax
  const wchar_t *v18; // r9

  if ( a8 && (a3 || a4) && ((a5 + 3) & 0xFFFFFFFD) != 0 )
  {
    v11 = operator new(0x398uLL, 0x4B677844u, 256LL, (__int64)a4);
    if ( !v11 || (v13 = (CTTMDEVICE *)CTTMDEVICE::CTTMDEVICE(v11, 1299018836), (v14 = v13) == 0LL) )
    {
      WdLogSingleEntry2(6LL, a5, a4);
      WdLogGlobalForLineNumber = 7451;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate new TTM device for target 0x%I64x on adapter 0x%I64x.",
        a5,
        (__int64)a4,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v15 = CTTMDEVICE::Initialize(v13, a3, a4, a5, a6, Src);
    v16 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry3(2LL, a5, a4, v15);
      v18 = L"Failed to initialize TTM device for target 0x%I64x on adapter 0x%I64x, (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 7465;
      goto LABEL_10;
    }
    v17 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
            (CSERIALIZEDWORKQUEUE *)(a1 + 376),
            (void (*)(void *))DXGSESSIONMGR::CreateTtmDeviceWorker,
            v14);
    v16 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry3(2LL, a5, a4, v17);
      v18 = L"Failed to queue a Serialized work item to create TTM device for target 0x%I64x on adapter 0x%I64x, (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 7479;
LABEL_10:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v18, a5, (__int64)a4, v16, 0LL, 0LL);
      return (unsigned int)v16;
    }
    *a8 = v14;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7439;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified invalid paramters, returing 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
