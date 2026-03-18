/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x1801F3BB0
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800AE180 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z @ 0x1801F3CDC (-Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1801F45C4 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(
        struct CConnection **this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        void *a5)
{
  CDrawListCache *v5; // rdi
  _QWORD *v8; // r14
  int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // eax
  CDrawListCache *v13; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  if ( a2 >= 0x10000 || (v8 = this + 105, a2 < *((_DWORD *)this + 216)) && *(_QWORD *)(*v8 + 8LL * a2) )
  {
    v9 = -2147024809;
    v11 = 1593;
  }
  else
  {
    v9 = CChannelContext::Create(a2, a3, a4, a5, this[710], &v13);
    if ( v9 < 0 )
    {
      v11 = 1604;
    }
    else
    {
      v10 = *((_DWORD *)this + 216);
      if ( a2 < v10 || (v14[0] = 0LL, v9 = DynArray<CChannelContext *,1>::AddAndSet(v8, a2 - v10 + 1, v14), v9 >= 0) )
      {
        *(_QWORD *)(*v8 + 8LL * a2) = v13;
        return (unsigned int)v9;
      }
      v11 = 1614;
    }
    v5 = v13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v11, 0LL);
  if ( v5 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v5);
  return (unsigned int)v9;
}
