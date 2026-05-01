/*
 * XREFs of ?GetRegistration@UwpWindowWrapperBase@@UEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@XZ @ 0x180192860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall UwpWindowWrapperBase::GetRegistration(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 232LL))(*(_QWORD *)(a1 + 264));
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 328);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *a2 = *(_QWORD *)(a1 + 320);
  a2[1] = *(_QWORD *)(a1 + 328);
  return a2;
}
