/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14027BE44
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14027BD18 (RtlGuardCheckExceptionHandler.c)
 *     RtlpControlFlowGuardEnforced @ 0x14027BE24 (RtlpControlFlowGuardEnforced.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KiIsSecureFlushRequired @ 0x14040213C (KiIsSecureFlushRequired.c)
 *     HvlGetEnlightenmentInfo @ 0x140586CE0 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x14058B9FC (HvlpDetermineEnlightenments.c)
 *     VslpGetNestedPageProtectionFlags @ 0x140710A50 (VslpGetNestedPageProtectionFlags.c)
 *     PsLocateSystemDlls @ 0x140771B30 (PsLocateSystemDlls.c)
 *     PiIsDriverBlocked @ 0x1409C6E6C (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     MiInitializeStrongCode @ 0x140BDE444 (MiInitializeStrongCode.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     KiAreCodePatchesAllowed @ 0x140C26BD0 (KiAreCodePatchesAllowed.c)
 *     KiIsKernelCfgActive @ 0x140C26C34 (KiIsKernelCfgActive.c)
 *     PspIumInitialize @ 0x140C35E54 (PspIumInitialize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslGetNestedPageProtectionFlags(_QWORD *a1)
{
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  _BYTE v19[16]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v20; // [rsp+30h] [rbp-78h]
  char v21; // [rsp+32h] [rbp-76h]
  __int64 v22; // [rsp+38h] [rbp-70h]

  memset_0(v19, 0, 0x68uLL);
  if ( *(_QWORD *)&HvlpVsmVtlCallVa
    && !VslpNestedPageProtectionFlags
    && (int)VslpEnterIumSecureMode(2u, 251LL, 0, (__int64)v19) >= 0 )
  {
    v3 = (2 * (v20 & 1) + 4) | 0x20;
    if ( (v20 & 2) == 0 )
      v3 = 2 * (v20 & 1) + 4;
    v4 = v3 | 0x10;
    if ( (v20 & 4) != 0 )
      v4 = v3;
    v5 = v4 | 0x40;
    if ( (v20 & 8) == 0 )
      v5 = v4;
    v6 = v5 | 0x80;
    if ( (v20 & 0x10) == 0 )
      v6 = v5;
    v7 = v6 | 0x100;
    if ( (v20 & 0x20) == 0 )
      v7 = v6;
    v8 = v7 | 0x200;
    if ( (v20 & 0x40) == 0 )
      v8 = v7;
    v9 = v8 | 0x400;
    if ( (v20 & 0x80u) == 0 )
      v9 = v8;
    v10 = v9 | 0x800;
    if ( (v20 & 0x100) == 0 )
      v10 = v9;
    v11 = v10 | 0x1000;
    if ( (v20 & 0x200) == 0 )
      v11 = v10;
    v12 = v11 | 0x2000;
    VslpSecurePtRoot = v22;
    if ( (v20 & 0x400) == 0 )
      v12 = v11;
    v13 = v12 | 0x20000;
    if ( (v20 & 0x4000) == 0 )
      v13 = v12;
    v14 = v13 | 0x4000;
    if ( (v20 & 0x800) == 0 )
      v14 = v13;
    v15 = v14 | 0x8000;
    if ( (v20 & 0x1000) == 0 )
      v15 = v14;
    v16 = v15 | 0x10000;
    if ( (v20 & 0x2000) == 0 )
      v16 = v15;
    v17 = v16 | 0x40000;
    if ( (v20 & 0x8000) == 0 )
      v17 = v16;
    v18 = v17 | 0x80000;
    if ( (v21 & 1) == 0 )
      v18 = v17;
    VslpNestedPageProtectionFlags = v18;
  }
  if ( a1 )
    *a1 = VslpSecurePtRoot;
  return (unsigned int)VslpNestedPageProtectionFlags;
}
