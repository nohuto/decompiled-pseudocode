/*
 * XREFs of MiApplyFunctionOverrideToBootDriver @ 0x140C4944C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140778A40 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     RtlInitializeImageSystemOverride @ 0x140A79C78 (RtlInitializeImageSystemOverride.c)
 */

__int64 __fastcall MiApplyFunctionOverrideToBootDriver(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rt1
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // r9
  _OWORD v11[3]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-98h]
  int v13; // [rsp+68h] [rbp-90h]
  _BYTE v14[8]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp-80h]
  __int64 v16; // [rsp+80h] [rbp-78h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  v3 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
  v4 = *(_DWORD *)(BugCheckParameter2 + 64);
  if ( v1 != v3 && v1 != PsHalImageBase )
  {
    if ( (MiFlags & 0x8000) != 0 )
    {
      memset_0(v14, 0, 0x68uLL);
      v15 = v1;
      v16 = 1LL;
      v5 = VslpEnterIumSecureMode(2u, 0xE4u, 0, (__int64)v14);
    }
    else
    {
      v6 = RtlInitializeImageSystemOverride((__int64)v14, v4, 1);
      v7 = *(_OWORD *)(v6 + 16);
      v11[0] = *(_OWORD *)v6;
      v8 = *(_OWORD *)(v6 + 32);
      v11[1] = v7;
      *(_QWORD *)&v7 = *(_QWORD *)(v6 + 48);
      v13 = *(_DWORD *)(v6 + 56);
      v11[2] = v8;
      v12 = v7;
      v5 = RtlApplyFunctionOverrideFixupsToImage(v1, v4, (__int64)&unk_140E2D780, v9, (__int64)v11);
    }
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741637 )
      KeBugCheckEx(0x1Au, 0x1084uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48), v5);
  }
  return 1LL;
}
