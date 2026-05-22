/*
 * XREFs of ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x18002BB7C
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18002BB2C (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x180021F00 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXXZ @ 0x18002B4A8 (-_Tidy@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextual.c)
 *     ??1?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18002BC5C (--1-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18002CF9C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorBuffer::~ContextualProcessorBuffer(ContextualProcessorBuffer *this)
{
  __int64 v2; // rcx
  ContextualProcessorBuffer::InputSample *v3; // rcx

  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
  *((_QWORD *)this + 3) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision(this);
  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((char *)this + 88);
  v3 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(v3);
    std::_Deallocate<16,0>(
      *((char **)this + 8),
      (const struct std::nothrow_t *)(16 * ((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) >> 4)));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Tidy((__int64)this + 40);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
