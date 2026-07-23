/*
 * XREFs of MiApplyFunctionOverrideToBootDriver @ 0x140C5C968
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C5DBC4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787BC0 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     RtlInitializeImageSystemOverride @ 0x14093C4E0 (RtlInitializeImageSystemOverride.c)
 */

__int64 __fastcall MiApplyFunctionOverrideToBootDriver(ULONG_PTR BugCheckParameter2)
{
  PVOID v1; // rdi
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // r9
  __int64 v10[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v11; // [rsp+40h] [rbp-B8h]
  __int128 v12; // [rsp+50h] [rbp-A8h]
  __int64 v13; // [rsp+60h] [rbp-98h]
  int v14; // [rsp+68h] [rbp-90h]
  _BYTE v15[8]; // [rsp+70h] [rbp-88h] BYREF
  PVOID v16; // [rsp+78h] [rbp-80h]
  __int64 v17; // [rsp+80h] [rbp-78h]

  v1 = *(PVOID *)(BugCheckParameter2 + 48);
  v3 = *(_DWORD *)(BugCheckParameter2 + 64);
  if ( v1 != PsNtosImageBase && v1 != PsHalImageBase )
  {
    if ( (MiFlags & 0x8000) != 0 )
    {
      memset_0(v15, 0, 0x68uLL);
      v16 = v1;
      v17 = 1LL;
      v4 = VslpEnterIumSecureMode(2u, 0xE4u, 0, (__int64)v15);
    }
    else
    {
      v5 = RtlInitializeImageSystemOverride((__int64)v15, v3, 1);
      v6 = *(_OWORD *)(v5 + 16);
      *(_OWORD *)v10 = *(_OWORD *)v5;
      v7 = *(_OWORD *)(v5 + 32);
      v11 = v6;
      *(_QWORD *)&v6 = *(_QWORD *)(v5 + 48);
      v14 = *(_DWORD *)(v5 + 56);
      v12 = v7;
      v13 = v6;
      v4 = RtlApplyFunctionOverrideFixupsToImage(v1, v3, (__int64)&unk_140E2DB00, v8, (__int64)v10);
    }
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
      KeBugCheckEx(0x1Au, 0x1084uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48), v4);
  }
  return 1LL;
}
