/*
 * XREFs of ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140372AB0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1403691B8 (-GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x140372D50 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     DxgkGetPathsModality @ 0x140375C90 (DxgkGetPathsModality.c)
 */

__int64 __fastcall DxgkGetMonitorHash(struct _LUID a1, unsigned int a2, unsigned int *a3, struct D3DKMT_HASH *a4)
{
  int DisplayConfigBufferSizes; // eax
  __int64 v9; // rdi
  unsigned __int16 v10; // ax
  int PathsModality; // eax
  __int64 v13; // rax
  const wchar_t *v14; // r9
  int v15; // [rsp+50h] [rbp-39h] BYREF
  __int128 v16; // [rsp+58h] [rbp-31h]
  __int64 v17; // [rsp+68h] [rbp-21h]
  __int16 v18; // [rsp+70h] [rbp-19h]
  __int128 v19; // [rsp+78h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  char v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  int v24; // [rsp+A0h] [rbp+17h]
  __int64 v25; // [rsp+A4h] [rbp+1Bh]
  __int64 v26; // [rsp+B0h] [rbp+27h]
  unsigned int v27; // [rsp+100h] [rbp+77h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    v13 = 13107LL;
    v14 = L"pMonitorHashArraySize cannot be null";
LABEL_14:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *a3 && !a4 )
  {
    WdLogSingleEntry0(2LL);
    v13 = 13113LL;
    v14 = L"pMonitorHashArray cannot be null if caller reports non-zero size";
    goto LABEL_14;
  }
  v27 = 0;
  DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(2LL, &v27);
  v9 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes < 0 )
  {
    WdLogSingleEntry1(2LL, DisplayConfigBufferSizes);
    WdLogGlobalForLineNumber = 13122;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed (0x%I64x) to get display config buffer sizes",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v9 = v27;
    v15 = 0;
    v16 = 0LL;
    v17 = 0LL;
    v19 = 0LL;
    v18 = 0;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 1;
    v23 = 0;
    v24 = 1;
    v25 = 0LL;
    v26 = 0LL;
    CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v15, v27);
    if ( v21 )
      v10 = *(_WORD *)(v21 + 22);
    else
      v10 = 0;
    if ( v10 >= (unsigned int)v9 )
    {
      PathsModality = DxgkGetPathsModality(64LL);
      v9 = PathsModality;
      if ( PathsModality < 0 )
      {
        WdLogSingleEntry1(2LL, PathsModality);
        WdLogGlobalForLineNumber = 13137;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkGetPathsModality failed (0x%I64x)",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        LODWORD(v9) = CCD_TOPOLOGY::GetMonitorHashsForPath((CCD_TOPOLOGY *)&v15, a1, a2, a3, a4);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, v9);
      WdLogGlobalForLineNumber = 13130;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate PathModality for 0x%I64x paths",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v9) = -1073741801;
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v15);
  }
  return (unsigned int)v9;
}
