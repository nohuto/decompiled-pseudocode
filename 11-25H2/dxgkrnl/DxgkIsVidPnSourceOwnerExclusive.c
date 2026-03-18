/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1403D8700
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(ADAPTER_DISPLAY **a1, unsigned int a2, _BYTE *a3)
{
  int VidPnSourceOwnerType; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h]
  char v14; // [rsp+60h] [rbp-A0h]
  _BYTE v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2182;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2182);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2182);
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8632;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL != pDisplayAdapter", 8632LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15, 0LL) < 0 )
    goto LABEL_10;
  if ( !a1[390] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8642;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      8642LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[390], a2);
  if ( VidPnSourceOwnerType != 2 )
  {
    if ( VidPnSourceOwnerType != 3 )
    {
LABEL_10:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
      if ( v14 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v12);
      }
      return 0;
    }
    *a3 = 1;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v12);
  return 1;
}
