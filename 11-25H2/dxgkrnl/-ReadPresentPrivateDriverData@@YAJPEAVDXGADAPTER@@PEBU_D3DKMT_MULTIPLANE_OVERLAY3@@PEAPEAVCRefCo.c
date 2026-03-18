/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x14037A554
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402B61C0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001294C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a2,
        struct CRefCountedBuffer **a3,
        __int64 a4)
{
  UINT DriverPrivateDataSize; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  struct CRefCountedBuffer *v10; // rbx
  UINT v11; // ecx
  size_t v12; // r8
  char *pDriverPrivateData; // rdx

  *a3 = 0LL;
  if ( *((int *)a1 + 684) < 0x2000 && !*((_BYTE *)a1 + 3036) )
    return 0LL;
  DriverPrivateDataSize = a2->DriverPrivateDataSize;
  if ( !DriverPrivateDataSize )
    return 0LL;
  v8 = DriverPrivateDataSize + 16;
  if ( (unsigned int)v8 < DriverPrivateDataSize )
  {
    WdLogSingleEntry1(3LL, a2->DriverPrivateDataSize);
    WdLogGlobalForLineNumber = 393;
  }
  else
  {
    v9 = operator new[](v8, 0x4B677844u, 66LL, a4);
    v10 = (struct CRefCountedBuffer *)v9;
    if ( v9 )
    {
      v11 = a2->DriverPrivateDataSize;
      *(_QWORD *)v9 = 0LL;
      *(_DWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v9 + 12) = 1;
      v12 = a2->DriverPrivateDataSize;
      pDriverPrivateData = (char *)a2->pDriverPrivateData;
      if ( &pDriverPrivateData[v12] < pDriverPrivateData
        || (unsigned __int64)&pDriverPrivateData[v12] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove((void *)(v9 + 16), pDriverPrivateData, v12);
      *a3 = v10;
      return 0LL;
    }
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1342;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for present private driver data",
    1342LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
