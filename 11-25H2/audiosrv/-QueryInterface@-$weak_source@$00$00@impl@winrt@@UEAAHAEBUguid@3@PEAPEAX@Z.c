/*
 * XREFs of ?QueryInterface@?$weak_source@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800E21D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax

  if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReferenceSource> && a2[1] == 0x46000000000000C0LL )
  {
    *a3 = a1;
    v3 = a1 + 16;
    if ( !a1 )
      v3 = 24LL;
    _InterlockedIncrement((volatile signed __int32 *)v3);
    return 0LL;
  }
  else
  {
    v5 = a1 + 8;
    if ( !a1 )
      v5 = 16LL;
    return (***(__int64 (__fastcall ****)(_QWORD))v5)(*(_QWORD *)v5);
  }
}
