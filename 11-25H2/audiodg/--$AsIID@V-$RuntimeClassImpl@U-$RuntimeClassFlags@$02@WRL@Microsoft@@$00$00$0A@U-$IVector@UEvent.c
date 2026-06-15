/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1400773D0
 * Callers:
 *     ?QueryInterface@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D7C0 (-QueryInterface@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14002CD60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::Collections::IVector<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>>(
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
  const struct _GUID *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_128f7285_6e28_5ff3_9cbc_ae2a0527ca6f)
      || InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v8 = v9;
      v10 = 0;
      goto LABEL_13;
    }
    if ( InlineIsEqualGUID(v11, &GUID_f0a9a686_2b1f_546a_8339_58c01533ec25) )
    {
      *v8 = v13;
    }
    else
    {
      if ( !InlineIsEqualGUID(v12, &GUID_3d5d819d_3fce_4ca2_b167_e4a7f7e96630) )
      {
        v10 = -2147467262;
LABEL_12:
        if ( v10 < 0 )
          return (unsigned int)v10;
LABEL_13:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
        return (unsigned int)v10;
      }
      *v8 = v14 + 8;
    }
    v10 = 0;
    goto LABEL_12;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
