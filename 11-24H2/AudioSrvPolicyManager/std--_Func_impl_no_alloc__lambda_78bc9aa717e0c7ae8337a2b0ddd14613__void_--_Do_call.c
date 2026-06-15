/*
 * XREFs of std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Do_call @ 0x18001CEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Do_call(__int64 a1)
{
  return CApplicationManager::OnStreamStarted(
           (CApplicationManager *)a1,
           *(CApplication ***)(a1 + 8),
           *(struct IAudioSessionInfo **)(a1 + 16),
           *(struct IAudioStreamInfo **)(a1 + 24));
}
