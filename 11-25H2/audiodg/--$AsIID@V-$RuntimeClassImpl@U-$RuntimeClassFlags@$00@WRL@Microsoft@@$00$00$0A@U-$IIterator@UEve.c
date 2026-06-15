/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UEventRegistrationToken@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UEventRegistrationToken@@@Collections@Foundation@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14007726C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UEventRegistrationToken@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D4F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterato.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14002CD60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<EventRegistrationToken>>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v7, &GUID_22d5ac8b_b1f8_555a_b6bf_7434519f4535) )
    {
      v11 = v10;
    }
    else
    {
      if ( !InlineIsEqualGUID(v8, &GUID_00000038_0000_0000_c000_000000000046) )
        return (unsigned int)-2147467262;
      v11 = v12 + 8;
      v10 = v12 + 8;
    }
    *v9 = v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    return v3;
  }
  *v5 = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return 0LL;
}
