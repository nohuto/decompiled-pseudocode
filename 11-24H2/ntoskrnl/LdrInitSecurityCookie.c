/*
 * XREFs of LdrInitSecurityCookie @ 0x140A658DC
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140A6587C (MiProcessLoadConfigForDriver.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A659D8 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall LdrInitSecurityCookie(unsigned __int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 Config; // rax
  _DWORD *v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  RtlImageNtHeaderEx(1, a1, 0LL, &v13);
  Config = LdrImageDirectoryEntryToLoadConfig(a1);
  v8 = (_DWORD *)Config;
  if ( !Config )
    goto LABEL_7;
  if ( *(_DWORD *)Config >= 0x70u )
  {
    v9 = *(_QWORD *)(Config + 88);
    if ( v9 > a1 && v9 < a1 + v4 - 8 )
      goto LABEL_16;
    goto LABEL_5;
  }
  if ( *(_DWORD *)Config < 4u )
LABEL_7:
    v8 = 0LL;
LABEL_5:
  v9 = 0LL;
  if ( !v8 )
    return 0LL;
LABEL_16:
  if ( *v8 < 0x94u || (v8[36] & 0x800) == 0 )
  {
    if ( !v9 || *(_QWORD *)v9 != 0x2B992DDFA232LL )
      return 0LL;
    v11 = __rdtsc();
    v12 = (v9 ^ (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) ^ HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16)) & 0xFFFFFFFFFFFFLL;
    if ( v12 == 0x2B992DDFA232LL || !v12 )
      v12 = 0x2B992DDFA233LL;
    *(_QWORD *)v9 = v12;
  }
  return 1LL;
}
