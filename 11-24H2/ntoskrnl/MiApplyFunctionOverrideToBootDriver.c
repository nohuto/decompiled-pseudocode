/*
 * XREFs of MiApplyFunctionOverrideToBootDriver @ 0x140C5A7D8
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787C90 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     RtlInitializeImageSystemOverride @ 0x1408F3378 (RtlInitializeImageSystemOverride.c)
 */

__int64 __fastcall MiApplyFunctionOverrideToBootDriver(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // r9
  _OWORD v10[3]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+60h] [rbp-98h]
  int v12; // [rsp+68h] [rbp-90h]
  _BYTE v13[8]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp-80h]
  __int64 v15; // [rsp+80h] [rbp-78h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  v3 = *(_DWORD *)(BugCheckParameter2 + 64);
  if ( v1 != PsNtosImageBase && v1 != PsHalImageBase )
  {
    if ( (MiFlags & 0x8000) != 0 )
    {
      memset_0(v13, 0, 0x68uLL);
      v14 = v1;
      v15 = 1LL;
      v4 = VslpEnterIumSecureMode(2u, 228LL, 0, (__int64)v13);
    }
    else
    {
      v5 = RtlInitializeImageSystemOverride((__int64)v13, v3, 1);
      v6 = *(_OWORD *)(v5 + 16);
      v10[0] = *(_OWORD *)v5;
      v7 = *(_OWORD *)(v5 + 32);
      v10[1] = v6;
      *(_QWORD *)&v6 = *(_QWORD *)(v5 + 48);
      v12 = *(_DWORD *)(v5 + 56);
      v10[2] = v7;
      v11 = v6;
      v4 = RtlApplyFunctionOverrideFixupsToImage(v1, v3, (__int64)&unk_140E2D9C0, v8, (__int64)v10);
    }
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
      KeBugCheckEx(0x1Au, 0x1084uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48), v4);
  }
  return 1LL;
}
