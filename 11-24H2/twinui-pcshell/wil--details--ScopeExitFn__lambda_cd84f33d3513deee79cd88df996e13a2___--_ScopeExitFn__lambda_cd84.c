/*
 * XREFs of wil::details::ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___::_ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___ @ 0x18039D504
 * Callers:
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$0 @ 0x1806E5B38 (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad7757e6b1c49cd959dc880d2101d1e__&_::Run_::_1_::dtor$0 @ 0x1806E5B4A (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cad7757e6b1c49cd959dc880d2101d1e__-_--Run_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___::_ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_DWORD *)(result + 776) = 0;
  }
  return result;
}
