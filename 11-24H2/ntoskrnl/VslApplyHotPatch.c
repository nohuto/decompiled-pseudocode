/*
 * XREFs of VslApplyHotPatch @ 0x140589EBC
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v13; // xmm1_8
  int v14; // ecx
  _BYTE v15[8]; // [rsp+20h] [rbp-81h] BYREF
  __int64 v16; // [rsp+28h] [rbp-79h]
  __int128 v17; // [rsp+30h] [rbp-71h]
  __int64 v18; // [rsp+40h] [rbp-61h]
  __int64 v19; // [rsp+48h] [rbp-59h]
  __int64 v20; // [rsp+50h] [rbp-51h]
  int v21; // [rsp+58h] [rbp-49h]

  memset_0(v15, 0, 0x68uLL);
  _InterlockedIncrement(&VslpHotpatchStats);
  v21 = a7;
  v16 = a1;
  *(_QWORD *)&v17 = a2;
  *((_QWORD *)&v17 + 1) = a3;
  v18 = a4;
  v19 = a5;
  v20 = a6;
  result = VslpEnterIumSecureMode(2u, 0x4Du, 0, (__int64)v15);
  if ( (int)result < 0 )
  {
    _InterlockedIncrement(dword_140F8E028);
  }
  else
  {
    _InterlockedIncrement(&dword_140F8E024);
    if ( a8 )
    {
      v13 = v18;
      v14 = v19;
      *(_OWORD *)a8 = v17;
      *(_QWORD *)(a8 + 16) = v13;
      *(_DWORD *)(a8 + 24) = v14;
    }
  }
  return result;
}
