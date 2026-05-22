/*
 * XREFs of _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x1801D6C62
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18009BA50 (--1-$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall AnimationDataProvider::CreateDataSource_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>(*(__int64 **)(a2 + 104));
  }
  return result;
}
