/*
 * XREFs of ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180046E74
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001180C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x180138488 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180035780 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180046F24 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 */

_BYTE *__fastcall EffectPack::MarkSystemEffectsForResolution(unsigned __int64 *a1, unsigned int a2)
{
  int *v2; // rdi
  unsigned __int64 *v4; // rbp
  unsigned __int64 *v5; // r14
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE *result; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-20h] BYREF

  v12[0] = 0;
  v2 = v12;
  v12[1] = 1;
  v4 = a1 + 180;
  v5 = a1 + 182;
  v6 = a1 + 184;
  do
  {
    v7 = *v2;
    v8 = gsl::span<SystemEffectDescriptor,-1>::operator[](v4, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v8, a2);
    v9 = gsl::span<SystemEffectDescriptor,-1>::operator[](v5, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v9, a2);
    v10 = gsl::span<SystemEffectDescriptor,-1>::operator[](v6, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v10, a2);
    result = v13;
    ++v2;
  }
  while ( v2 != (int *)v13 );
  return result;
}
