/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x14035B064
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001294C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        unsigned int a2,
        char *a3,
        struct CRefCountedBuffer **a4)
{
  size_t v6; // rdi
  _DWORD *v8; // rbx
  size_t v9; // rsi

  v6 = a2;
  *a4 = 0LL;
  if ( *((int *)a1 + 684) < 0x2000 && !*((_BYTE *)a1 + 3036) || *((_DWORD *)a1 + 570) < 0x5007u || !a2 )
    return 0LL;
  if ( a2 + 16 < a2 )
  {
    v9 = a2;
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 393;
    v8 = 0LL;
  }
  else
  {
    v8 = (_DWORD *)operator new[](a2 + 16, 0x4B677844u, 66LL, (__int64)a4);
    v9 = v6;
  }
  if ( v8 )
  {
    *(_QWORD *)v8 = 0LL;
    v8[2] = v6;
    v8[3] = 1;
    if ( &a3[v9] < a3 || (unsigned __int64)&a3[v9] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v8 + 4, a3, v9);
    *a4 = (struct CRefCountedBuffer *)v8;
    return 0LL;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 2741;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate memory for present private driver data",
    2741LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
