/*
 * XREFs of ?IsBidirectionalSaDevice@CBtAudioResourceManagerBase@@IEAA_NW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800DEF44
 * Callers:
 *     ?OnSaDeviceCreation@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800DF320 (-OnSaDeviceCreation@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z.c)
 *     ?OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800DF380 (-OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBtAudioResourceManagerBase::IsBidirectionalSaDevice(__int64 a1, int a2, __int64 a3)
{
  char v3; // bl
  unsigned __int8 (__fastcall *v4)(__int64, __int128 *); // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == 1 )
    return 1;
  v3 = 0;
  if ( !a2 )
  {
    v4 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 152LL);
    v6 = *(_OWORD *)(a3 + 48);
    if ( v4(a1, &v6) )
      return 1;
  }
  return v3;
}
