/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800752C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008B2C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  int v5; // ebx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_18;
  }
  if ( *a2 != -1350114592 )
  {
    if ( *a2 == -883834674
      && a2[1] == *(_DWORD *)&GUID_cb51c0ce_8fe6_4636_b202_861faa07d8f3.Data2
      && a2[2] == *(_DWORD *)GUID_cb51c0ce_8fe6_4636_b202_861faa07d8f3.Data4
      && a2[3] == *(_DWORD *)&GUID_cb51c0ce_8fe6_4636_b202_861faa07d8f3.Data4[4] )
    {
      goto LABEL_26;
    }
    goto LABEL_6;
  }
  if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
LABEL_18:
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
LABEL_6:
  a1 += 8LL;
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    v4 = a1 + 8;
    if ( *a2 == 764386780
      && a2[1] == *(_DWORD *)&GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2.Data2
      && a2[2] == *(_DWORD *)GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2.Data4
      && a2[3] == *(_DWORD *)&GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2.Data4[4]
      || (v4 += 8LL, *a2 == 801469316)
      && a2[1] == *(_DWORD *)&GUID_2fc57384_a068_44d7_a331_30982fcf7177.Data2
      && a2[2] == *(_DWORD *)GUID_2fc57384_a068_44d7_a331_30982fcf7177.Data4
      && a2[3] == *(_DWORD *)&GUID_2fc57384_a068_44d7_a331_30982fcf7177.Data4[4]
      || (v4 += 8LL, *a2 == -868224427)
      && a2[1] == *(_DWORD *)&GUID_cc3ff255_a83d_5aed_8187_70f64bbd9e51.Data2
      && a2[2] == *(_DWORD *)GUID_cc3ff255_a83d_5aed_8187_70f64bbd9e51.Data4
      && a2[3] == *(_DWORD *)&GUID_cc3ff255_a83d_5aed_8187_70f64bbd9e51.Data4[4] )
    {
      *a3 = v4;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_27;
  }
LABEL_26:
  *a3 = a1;
  v5 = 0;
LABEL_27:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v5;
}
