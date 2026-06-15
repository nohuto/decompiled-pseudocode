/*
 * XREFs of ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x18005E130
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18005E040 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1e3a2485e9e200bd7646026f56d618b4__void_::_Do_call @ 0x1800F8E40 (std--_Func_impl_no_alloc__lambda_1e3a2485e9e200bd7646026f56d618b4__void_--_Do_call.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::OnMfxEffectsChanged(CAudioStream *this, void *a2)
{
  wil::details *v2; // rcx

  v2 = (wil::details *)*((_QWORD *)this + 45);
  if ( v2 )
    wil::details::SetEvent(v2, a2);
}
