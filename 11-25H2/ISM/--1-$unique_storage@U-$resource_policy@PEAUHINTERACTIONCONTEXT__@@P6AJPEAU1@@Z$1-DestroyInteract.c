/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHINTERACTIONCONTEXT__@@P6AJPEAU1@@Z$1?DestroyInteractionContext@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180156FB8
 * Callers:
 *     ??1?$unique_ptr@VGestureTracker@@U?$default_delete@VGestureTracker@@@std@@@std@@QEAA@XZ @ 0x180156F84 (--1-$unique_ptr@VGestureTracker@@U-$default_delete@VGestureTracker@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<HINTERACTIONCONTEXT__ *,long (*)(HINTERACTIONCONTEXT__ *),&long DestroyInteractionContext(HINTERACTIONCONTEXT__ *),wistd::integral_constant<unsigned __int64,0>,HINTERACTIONCONTEXT__ *,HINTERACTIONCONTEXT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINTERACTIONCONTEXT__ *,long (*)(HINTERACTIONCONTEXT__ *),&long DestroyInteractionContext(HINTERACTIONCONTEXT__ *),wistd::integral_constant<unsigned __int64,0>,HINTERACTIONCONTEXT__ *,HINTERACTIONCONTEXT__ *,0,std::nullptr_t>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return DestroyInteractionContext();
  return result;
}
