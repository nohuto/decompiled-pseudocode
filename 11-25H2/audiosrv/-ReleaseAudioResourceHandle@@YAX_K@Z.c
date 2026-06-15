/*
 * XREFs of ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800BFA00
 * Callers:
 *     ??1SaDeviceParams@@QEAA@XZ @ 0x180027A34 (--1SaDeviceParams@@QEAA@XZ.c)
 *     ?Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800F2B10 (-Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ReleaseAudioResourceHandle(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  (*(void (__fastcall **)(struct IAudioResourceManager *, __int64 *))(*(_QWORD *)g_AudioResourceManager + 40LL))(
    g_AudioResourceManager,
    &v1);
}
