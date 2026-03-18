/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x14035E118
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402C3A40 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140021DDC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a2,
        struct CRefCountedBuffer **a3)
{
  UINT DriverPrivateDataSize; // eax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  struct CRefCountedBuffer *v9; // rbx
  UINT v10; // ecx
  size_t v11; // r8
  char *pDriverPrivateData; // rdx

  *a3 = 0LL;
  if ( *((int *)a1 + 684) < 0x2000 && !*((_BYTE *)a1 + 3036) )
    return 0LL;
  DriverPrivateDataSize = a2->DriverPrivateDataSize;
  if ( !DriverPrivateDataSize )
    return 0LL;
  v7 = DriverPrivateDataSize + 16;
  if ( (unsigned int)v7 < DriverPrivateDataSize )
  {
    WdLogSingleEntry1(3LL, a2->DriverPrivateDataSize);
    WdLogGlobalForLineNumber = 394;
  }
  else
  {
    v8 = operator new[](v7, 0x4B677844u, 66LL);
    v9 = (struct CRefCountedBuffer *)v8;
    if ( v8 )
    {
      v10 = a2->DriverPrivateDataSize;
      *(_QWORD *)v8 = 0LL;
      *(_DWORD *)(v8 + 8) = v10;
      *(_DWORD *)(v8 + 12) = 1;
      v11 = a2->DriverPrivateDataSize;
      pDriverPrivateData = (char *)a2->pDriverPrivateData;
      if ( &pDriverPrivateData[v11] < pDriverPrivateData
        || (unsigned __int64)&pDriverPrivateData[v11] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove((void *)(v8 + 16), pDriverPrivateData, v11);
      *a3 = v9;
      return 0LL;
    }
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1344;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for present private driver data",
    1344LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
