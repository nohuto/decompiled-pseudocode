/*
 * XREFs of VslDetermineHotPatchType @ 0x14070D29C
 * Callers:
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslDetermineHotPatchType(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 result; // rax
  char v7; // cl
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int64 v10; // [rsp+30h] [rbp-78h]

  v3 = a2;
  v5 = a1;
  memset_0(v8, 0, 0x68uLL);
  v9 = v5;
  v10 = v3;
  result = VslpEnterIumSecureMode(2u, 0x4Au, 0, (__int64)v8);
  if ( (int)result >= 0 )
  {
    v7 = v10;
    *a3 = v10;
    if ( (v7 & 1) != 0 )
      _InterlockedIncrement(&dword_140F8E044);
    if ( (*a3 & 2) != 0 )
      _InterlockedIncrement(&dword_140F8E048);
  }
  return result;
}
