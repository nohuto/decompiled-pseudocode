/*
 * XREFs of ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802CE9E0
 * Callers:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1802D3A40 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x1802CF04C (-DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicViewer(RTL_SRWLOCK *this, struct CHolographicViewer *a2)
{
  unsigned int v3; // ebx
  bool v4; // di
  CompositorTracing *v5; // rcx
  unsigned int Ptr; // eax
  unsigned int v7; // r8d
  CHolographicInteropTaskQueue *v8; // rcx
  struct IUnknown *v9; // r8
  int v10; // eax
  __m128i v12; // [rsp+40h] [rbp-58h]
  struct CHolographicViewer *v13; // [rsp+A8h] [rbp+10h] BYREF

  v13 = a2;
  v12 = *(__m128i *)((char *)a2 + 124);
  v3 = *((_DWORD *)a2 + 22);
  v4 = 0;
  if ( CompositorTracing::IsEnabled() )
  {
    CompositorTracing::Instance();
    CompositorTracing::DwmHolographicViewerAdd_(v5, v3, _mm_cvtsi128_si32(_mm_srli_si128(v12, 12)));
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[28].Ptr;
  v7 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_13;
  }
  if ( v7 > HIDWORD(this[27].Ptr) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[25], 8, 1, &v13);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xC0u, 0LL);
      goto LABEL_13;
    }
  }
  else
  {
    *((_QWORD *)this[25].Ptr + Ptr) = v13;
    LODWORD(this[28].Ptr) = v7;
  }
  CMILRefCountImpl::AddReference((struct CHolographicViewer *)((char *)v13 + 8));
  v8 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v8 )
  {
    v9 = (struct IUnknown *)((char *)v13 + 72);
    if ( !v13 )
      v9 = 0LL;
    v4 = CHolographicInteropTaskQueue::PostMessageW(v8, 0x18u, v9, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_13:
  ReleaseSRWLockExclusive(this + 13);
  return v4;
}
