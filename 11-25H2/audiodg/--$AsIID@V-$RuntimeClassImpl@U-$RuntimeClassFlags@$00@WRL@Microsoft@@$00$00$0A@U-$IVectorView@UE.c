/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14007730C
 * Callers:
 *     ?QueryInterface@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D510 (-QueryInterface@-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@U.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14002CD60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r11
  _QWORD *v14; // r8
  __int64 v15; // r11

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_30642dc2_8ecb_5dfe_9c32_259d61306cb3) )
    {
      *v8 = v9;
    }
    else
    {
      if ( !InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
      {
        if ( InlineIsEqualGUID(v11, &GUID_f0a9a686_2b1f_546a_8339_58c01533ec25) )
        {
          v9 = v15 + 8;
          *v14 = v15 + 8;
          v10 = 0;
        }
        else
        {
          v10 = -2147467262;
          v9 = 0LL;
        }
        if ( v10 < 0 )
          return (unsigned int)v10;
        goto LABEL_12;
      }
      *v12 = v13;
    }
    v10 = 0;
LABEL_12:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    return (unsigned int)v10;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
