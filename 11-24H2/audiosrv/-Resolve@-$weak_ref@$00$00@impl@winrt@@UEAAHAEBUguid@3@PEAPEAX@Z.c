/*
 * XREFs of ?Resolve@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800E70B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Resolve(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v5; // ett

  result = *(unsigned int *)(a1 + 24);
  do
  {
    if ( !(_DWORD)result )
    {
      *a3 = 0LL;
      return result;
    }
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), result + 1, result);
  }
  while ( v5 != (_DWORD)result );
  result = (***(__int64 (__fastcall ****)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 16));
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  return result;
}
