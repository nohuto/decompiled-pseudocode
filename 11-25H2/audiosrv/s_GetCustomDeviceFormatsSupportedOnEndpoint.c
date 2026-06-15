/*
 * XREFs of s_GetCustomDeviceFormatsSupportedOnEndpoint @ 0x1800802A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 s_GetCustomDeviceFormatsSupportedOnEndpoint()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 304LL))(g_PolicyConfig);
}
