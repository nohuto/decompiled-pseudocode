/*
 * XREFs of ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x18002CCC4
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18002CF9C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 * Callees:
 *     ??1?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x180022304 (--1-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??1?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18002BC5C (--1-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 */

void __fastcall ContextualProcessorBuffer::InputSample::~InputSample(ContextualProcessorBuffer::InputSample *this)
{
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)this + 144);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)this + 80);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)this + 16);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this);
}
