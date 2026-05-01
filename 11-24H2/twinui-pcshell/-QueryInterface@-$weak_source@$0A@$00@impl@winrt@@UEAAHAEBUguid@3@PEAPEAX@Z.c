/*
 * XREFs of ?QueryInterface@?$weak_source@$0A@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802DF5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_source<0,1>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax

  v3 = *a2 - *(_QWORD *)L"8";
  if ( *a2 == *(_QWORD *)L"8" )
    v3 = a2[1] - 0x46000000000000C0LL;
  if ( v3 )
  {
    v6 = a1 + 8;
    if ( !a1 )
      v6 = 16LL;
    return (***(__int64 (__fastcall ****)(_QWORD))v6)(*(_QWORD *)v6);
  }
  else
  {
    *a3 = a1;
    v4 = a1 + 16;
    if ( !a1 )
      v4 = 24LL;
    _InterlockedIncrement((volatile signed __int32 *)v4);
    return 0LL;
  }
}
