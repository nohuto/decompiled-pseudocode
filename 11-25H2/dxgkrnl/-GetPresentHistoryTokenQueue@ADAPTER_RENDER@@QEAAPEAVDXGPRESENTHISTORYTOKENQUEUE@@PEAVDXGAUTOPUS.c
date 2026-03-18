/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x140343E30
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140317908 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403B4660 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x140400520 (DxgkGetPresentHistoryReadyEvent.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??1DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1401E605C (--1DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x140386330 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x14040D3FC (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 */

struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        ADAPTER_RENDER *this,
        DXGPUSHLOCK **a2,
        int a3)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  const void **v8; // rsi
  __int64 v9; // rdi
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  __int64 v11; // r9
  _QWORD *v12; // r14
  DXGPRESENTHISTORYTOKENQUEUE *v13; // rax
  const wchar_t *v14; // r9
  int v15; // r15d
  unsigned __int64 v16; // rax
  char *v17; // rax
  char *v18; // r14
  DXGPRESENTHISTORYTOKENQUEUE *v19; // rax
  DXGPRESENTHISTORYTOKENQUEUE *v20; // rsi

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = (const void **)((char *)this + 1016);
  v9 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 252)
    || (result = (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)*v8 + ProcessSessionId)) == 0LL )
  {
    if ( !a3 )
      return 0LL;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)a2);
    DXGPUSHLOCK::AcquireExclusive(a2[1]);
    *((_DWORD *)a2 + 4) = 2;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 252) )
    {
      v15 = v9 + 4;
      v16 = 8LL * (unsigned int)(v9 + 4);
      if ( !is_mul_ok((unsigned int)(v9 + 4), 8uLL) )
        v16 = -1LL;
      v17 = (char *)operator new[](v16, 0x4B677844u, 256LL, v11);
      v18 = v17;
      if ( !v17 )
      {
        WdLogSingleEntry2(2LL, this, v9);
        v14 = L"No memory for the new Present History Token queue session table on ADAPTER_RENDER 0x%I64x for session 0x%I64x";
        WdLogGlobalForLineNumber = 2600;
LABEL_9:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, (__int64)this, v9, 0LL, 0LL, 0LL);
        return 0LL;
      }
      if ( *v8 )
        memmove(v17, *v8, 8LL * *((unsigned int *)this + 252));
      memset(&v18[8 * *((unsigned int *)this + 252)], 0, 8LL * (unsigned int)(v15 - *((_DWORD *)this + 252)));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)*v8);
      *v8 = v18;
      v12 = (_QWORD *)((char *)this + 1016);
      *((_DWORD *)this + 252) = v15;
    }
    else
    {
      v12 = (_QWORD *)((char *)this + 1016);
    }
    if ( *((_QWORD *)*v8 + v9) )
      return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*v12 + 8 * v9);
    v13 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new(0x4850uLL, 0x4B677844u, 64LL, v11);
    if ( v13 )
    {
      v19 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v13);
      v20 = v19;
      if ( v19 )
      {
        if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v19) < 0 )
        {
          DXGPRESENTHISTORYTOKENQUEUE::~DXGPRESENTHISTORYTOKENQUEUE(v20);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v20);
          return 0LL;
        }
        *(_QWORD *)(*((_QWORD *)this + 127) + 8 * v9) = v20;
        return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*v12 + 8 * v9);
      }
    }
    WdLogSingleEntry2(2LL, this, v9);
    v14 = L"No memory for the new Present History Token queue on ADAPTER_RENDER 0x%I64x for session 0x%I64x";
    WdLogGlobalForLineNumber = 2636;
    goto LABEL_9;
  }
  return result;
}
