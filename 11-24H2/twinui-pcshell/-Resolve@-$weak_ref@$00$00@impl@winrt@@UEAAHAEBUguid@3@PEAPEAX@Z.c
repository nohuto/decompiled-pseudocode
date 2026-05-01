/*
 * XREFs of ?Resolve@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801A56C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Resolve(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed __int32 v3; // eax
  signed __int32 v5; // ett
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 24);
  while ( v3 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v3 + 1, v3);
    if ( v5 == v3 )
    {
      result = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD *))(a1 + 16))(*(_QWORD *)(a1 + 16), a2, a3);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
      return result;
    }
  }
  *a3 = 0LL;
  return 0LL;
}
