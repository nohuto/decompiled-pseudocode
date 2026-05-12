/*
 * XREFs of NvmeControllerGetRegisterAddress @ 0x1400EEE44
 * Callers:
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     NvmeGetDeviceBaseEx @ 0x140072AA0 (NvmeGetDeviceBaseEx.c)
 */

__int64 __fastcall NvmeControllerGetRegisterAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 result; // rax
  unsigned int i; // ecx
  __int64 v8; // r8

  v3 = *(_DWORD *)(a2 + 52);
  result = 0LL;
  if ( v3 )
  {
    for ( i = 0; i < v3; ++i )
    {
      v8 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v8 + 16LL * i) == a3 )
        return NvmeGetDeviceBaseEx(
                 *(_QWORD *)(a1 + 128),
                 *(_DWORD *)(a2 + 8),
                 *(_DWORD *)(a2 + 4),
                 *(_QWORD *)(v8 + 16LL * i),
                 *(_DWORD *)(v8 + 16LL * i + 8),
                 *(_BYTE *)(v8 + 16LL * i + 12) == 0);
    }
  }
  return result;
}
