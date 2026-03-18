/*
 * XREFs of ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1403B6660
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(ADAPTER_DISPLAY *this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 VidPnSourceId; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6489;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pOutputDisplayModeList != NULL",
      6489LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2->VidPnSourceId, *((unsigned int *)this + 24));
    v9 = *((unsigned int *)this + 24);
    v8 = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 6494;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified invalid VidPN source ID 0x%I64x (only %I64d are supported)",
      v8,
      v9,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 292) && *(_BYTE *)(4024 * VidPnSourceId + *((_QWORD *)this + 16) + 1100) )
  {
    WdLogSingleEntry0(4LL);
    v5 = 4024LL * a2->VidPnSourceId;
    v6 = *((_QWORD *)this + 16);
    WdLogGlobalForLineNumber = 6505;
    a2->pModeList = *(D3DKMT_DISPLAYMODE **)(v6 + v5 + 1088);
    result = 0LL;
    a2->ModeCount = *(_DWORD *)(*((_QWORD *)this + 16) + v5 + 1096);
  }
  else
  {
    return 3221226021LL;
  }
  return result;
}
