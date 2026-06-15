/*
 * XREFs of std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Do_call @ 0x18003AAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Do_call(__int64 a1)
{
  return CApplicationManager::OnStreamStopped(
           (CApplicationManager *)a1,
           *(CApplication ***)(a1 + 8),
           *(struct IAudioSessionInfo **)(a1 + 16),
           *(struct IAudioStreamInfo **)(a1 + 24));
}
