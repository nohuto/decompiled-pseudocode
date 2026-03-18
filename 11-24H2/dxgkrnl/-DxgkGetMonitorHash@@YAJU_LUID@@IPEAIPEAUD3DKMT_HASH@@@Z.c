/*
 * XREFs of ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x14033D8C0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     DxgkGetPathsModality @ 0x14031E370 (DxgkGetPathsModality.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x14033DB60 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x14033DFA0 (-GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 */

__int64 __fastcall DxgkGetMonitorHash(struct _LUID a1, unsigned int a2, unsigned int *a3, struct D3DKMT_HASH *a4)
{
  int DisplayConfigBufferSizes; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int16 v12; // ax
  int PathsModality; // eax
  __int64 v15; // rax
  const wchar_t *v16; // r9
  int v17; // [rsp+50h] [rbp-39h] BYREF
  __int128 v18; // [rsp+58h] [rbp-31h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  __int16 v20; // [rsp+70h] [rbp-19h]
  __int128 v21; // [rsp+78h] [rbp-11h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  _DWORD *v23; // [rsp+90h] [rbp+7h]
  char v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  int v26; // [rsp+A0h] [rbp+17h]
  __int64 v27; // [rsp+A4h] [rbp+1Bh]
  __int64 v28; // [rsp+B0h] [rbp+27h]
  unsigned int v29; // [rsp+100h] [rbp+77h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 13168LL;
    v16 = L"pMonitorHashArraySize cannot be null";
LABEL_14:
    WdLogGlobalForLineNumber = v15;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v16, v15, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *a3 && !a4 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 13174LL;
    v16 = L"pMonitorHashArray cannot be null if caller reports non-zero size";
    goto LABEL_14;
  }
  v29 = 0;
  DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(2LL, &v29);
  v11 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes < 0 )
  {
    WdLogSingleEntry1(2LL, DisplayConfigBufferSizes);
    WdLogGlobalForLineNumber = 13183;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed (0x%I64x) to get display config buffer sizes",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v11 = v29;
    v17 = 0;
    v18 = 0LL;
    v19 = 0LL;
    v21 = 0LL;
    v20 = 0;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 1;
    v25 = 0;
    v26 = 1;
    v27 = 0LL;
    v28 = 0LL;
    CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v17, (unsigned __int16)v29, v9, v10);
    if ( v23 )
      v12 = *((_WORD *)v23 + 11);
    else
      v12 = 0;
    if ( v12 >= (unsigned int)v11 )
    {
      PathsModality = DxgkGetPathsModality(64LL, v23, 0LL);
      v11 = PathsModality;
      if ( PathsModality < 0 )
      {
        WdLogSingleEntry1(2LL, PathsModality);
        WdLogGlobalForLineNumber = 13198;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DxgkGetPathsModality failed (0x%I64x)",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        LODWORD(v11) = CCD_TOPOLOGY::GetMonitorHashsForPath((CCD_TOPOLOGY *)&v17, a1, a2, a3, a4);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, v11);
      WdLogGlobalForLineNumber = 13191;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate PathModality for 0x%I64x paths",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v11) = -1073741801;
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v17);
  }
  return (unsigned int)v11;
}
