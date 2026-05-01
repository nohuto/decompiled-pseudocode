/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18069D860
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18069D990 (-__abi_QueryInterface@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@W7E$AA.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18069D9A0 (-__abi_QueryInterface@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@WBA@E$.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18069D9B0 (-__abi_QueryInterface@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@WBI@E$.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18069D9C0 (-__abi_QueryInterface@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@WCA@E$.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18069D9D0 (-__abi_QueryInterface@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@WCI@E$.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801884FC (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180188F14 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B79B8 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform____CustomBox_VSize_Foundation_Windows___Details_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
        Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // r11
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // r10
  Platform::Guid *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void **v10; // r11
  __int64 v11; // rax
  __int64 v12; // rcx
  Platform::Guid *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  struct Platform::Guid *v16; // r10

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(v5, &_uuidof__AU__IBox_VSize_Foundation_Windows___Platform__)
    || (-(__int64)(*(_QWORD *)(v3 + 64) != 0LL) & (v3 + 56)) != 0
    && Platform::Guid::Equals(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v4 = v3;
    v12 = v3 + 56;
    goto LABEL_18;
  }
  if ( Platform::Guid::Equals(v6, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62) )
  {
    v11 = (v9 + 8) & -(__int64)(v9 != 0);
LABEL_8:
    *v10 = (void *)v11;
    v12 = v8;
LABEL_18:
    __abi_FTMWeakRefData::Increment(v12);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v7, &_uuidof__AUIPrintable_Details_Platform__) )
  {
    v15 = v14 + 16;
LABEL_11:
    v11 = v15 & -(__int64)(v14 != 0);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(v13, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v15 = v14 + 32;
    goto LABEL_11;
  }
  if ( (-(__int64)(*(_QWORD *)(v14 + 64) != 0LL) & v8) != 0 )
    return (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                           (__abi_FTMWeakRefData *)(v8 & -(__int64)(*(_QWORD *)(v14 + 64) != 0LL)),
                           v16,
                           v10) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
