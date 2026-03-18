/*
 * XREFs of ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1802CE89C
 * Callers:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802D1338 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z @ 0x1802CEDC8 (-DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicDisplay(RTL_SRWLOCK *this, struct CHolographicDisplay *a2)
{
  unsigned int v2; // ebp
  const struct _GUID *v3; // rbx
  bool v5; // di
  CompositorTracing *v6; // rcx
  unsigned int Ptr; // eax
  unsigned int v8; // r8d
  CHolographicInteropTaskQueue *v9; // rcx
  struct IUnknown *v10; // r8
  int v11; // eax
  struct CHolographicDisplay *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v2 = *((_DWORD *)a2 + 24);
  v3 = (const struct _GUID *)((char *)a2 + 100);
  v5 = 0;
  if ( CompositorTracing::IsEnabled() )
  {
    CompositorTracing::Instance();
    CompositorTracing::DwmHolographicDisplayAdd_(v6, v2, v3);
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[17].Ptr;
  v8 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_13;
  }
  if ( v8 > HIDWORD(this[16].Ptr) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[14], 8, 1, &v13);
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xC0u, 0LL);
      goto LABEL_13;
    }
  }
  else
  {
    *((_QWORD *)this[14].Ptr + Ptr) = v13;
    LODWORD(this[17].Ptr) = v8;
  }
  CMILRefCountImpl::AddReference((struct CHolographicDisplay *)((char *)v13 + 8));
  v9 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v9 )
  {
    v10 = (struct IUnknown *)((char *)v13 + 80);
    if ( !v13 )
      v10 = 0LL;
    v5 = CHolographicInteropTaskQueue::PostMessageW(v9, 6u, v10, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_13:
  ReleaseSRWLockExclusive(this + 13);
  return v5;
}
