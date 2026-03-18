/*
 * XREFs of VslReapplyBootIndirectPatches @ 0x140C19B3C
 * Callers:
 *     MmReapplyBootPatchImports @ 0x140C56B08 (MmReapplyBootPatchImports.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslReapplyBootIndirectPatches(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]

  memset_0(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140F8DDEC);
  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 222LL, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140F8DDF0;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140F8DDF4;
  _InterlockedIncrement(v3);
  return result;
}
