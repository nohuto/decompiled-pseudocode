/*
 * XREFs of ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x180074214
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013CB8C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18013F840 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CSpatialAudioTech *__fastcall CSpatialAudioTechnologies::GetTechnologyByID(
        CSpatialAudioTechnologies *this,
        const struct _GUID *a2)
{
  unsigned __int8 i; // bl
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0; i < (unsigned int)g_ListOfSpatialTech[0]; ++i )
  {
    v4 = *(_QWORD *)&g_ListOfSpatialTech[8 * i + 8];
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 16LL))(v4, v8);
    v6 = *v5 - *(_QWORD *)&a2->Data1;
    if ( *v5 == *(_QWORD *)&a2->Data1 )
      v6 = v5[1] - *(_QWORD *)a2->Data4;
    if ( !v6 )
      return *(const struct CSpatialAudioTech **)&g_ListOfSpatialTech[8 * i + 8];
  }
  return 0LL;
}
