/*
 * XREFs of ?get_Value@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180036190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::get_Value(
        __int64 a1,
        _QWORD *a2)
{
  __int128 v2; // xmm1
  unsigned int v3; // ebx

  v2 = *(_OWORD *)(a1 + 72);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 80) )
  {
    *a2 = 0LL;
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_180059F00 + 40LL))(
             qword_180059F00,
             *(unsigned int *)(v2 + 4),
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a2);
  }
  else
  {
    *a2 = v2;
    if ( (_QWORD)v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return v3;
}
