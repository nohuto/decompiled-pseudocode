/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x1402313D4
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402312A8 (RtlGuardCheckExceptionHandler.c)
 *     RtlpControlFlowGuardEnforced @ 0x1402313B4 (RtlpControlFlowGuardEnforced.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     KiIsSecureFlushRequired @ 0x1403FC6BC (KiIsSecureFlushRequired.c)
 *     HvlGetEnlightenmentInfo @ 0x140584060 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x140588CEC (HvlpDetermineEnlightenments.c)
 *     VslpGetNestedPageProtectionFlags @ 0x14070E5E0 (VslpGetNestedPageProtectionFlags.c)
 *     PsLocateSystemDlls @ 0x140771D50 (PsLocateSystemDlls.c)
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     MiInitializeStrongCode @ 0x140BE0444 (MiInitializeStrongCode.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     KiAreCodePatchesAllowed @ 0x140C28C20 (KiAreCodePatchesAllowed.c)
 *     KiIsKernelCfgActive @ 0x140C28C84 (KiIsKernelCfgActive.c)
 *     PspIumInitialize @ 0x140C37F94 (PspIumInitialize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslGetNestedPageProtectionFlags(_QWORD *a1)
{
  __int64 v2; // rcx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  int v16; // r8d
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  _BYTE v20[16]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v21; // [rsp+30h] [rbp-78h]
  char v22; // [rsp+32h] [rbp-76h]
  __int64 v23; // [rsp+38h] [rbp-70h]

  memset_0(v20, 0, 0x68uLL);
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
  {
    if ( !VslpNestedPageProtectionFlags )
    {
      LOBYTE(v2) = 2;
      if ( (int)VslpEnterIumSecureMode(v2, 251LL, 0LL, v20) >= 0 )
      {
        v4 = (2 * (v21 & 1) + 4) | 0x20;
        if ( (v21 & 2) == 0 )
          v4 = 2 * (v21 & 1) + 4;
        v5 = v4 | 0x10;
        if ( (v21 & 4) != 0 )
          v5 = v4;
        v6 = v5 | 0x40;
        if ( (v21 & 8) == 0 )
          v6 = v5;
        v7 = v6 | 0x80;
        if ( (v21 & 0x10) == 0 )
          v7 = v6;
        v8 = v7 | 0x100;
        if ( (v21 & 0x20) == 0 )
          v8 = v7;
        v9 = v8 | 0x200;
        if ( (v21 & 0x40) == 0 )
          v9 = v8;
        v10 = v9 | 0x400;
        if ( (v21 & 0x80u) == 0 )
          v10 = v9;
        v11 = v10 | 0x800;
        if ( (v21 & 0x100) == 0 )
          v11 = v10;
        v12 = v11 | 0x1000;
        if ( (v21 & 0x200) == 0 )
          v12 = v11;
        v13 = v12 | 0x2000;
        VslpSecurePtRoot = v23;
        if ( (v21 & 0x400) == 0 )
          v13 = v12;
        v14 = v13 | 0x20000;
        if ( (v21 & 0x4000) == 0 )
          v14 = v13;
        v15 = v14 | 0x4000;
        if ( (v21 & 0x800) == 0 )
          v15 = v14;
        v16 = v15 | 0x8000;
        if ( (v21 & 0x1000) == 0 )
          v16 = v15;
        v17 = v16 | 0x10000;
        if ( (v21 & 0x2000) == 0 )
          v17 = v16;
        v18 = v17 | 0x40000;
        if ( (v21 & 0x8000) == 0 )
          v18 = v17;
        v19 = v18 | 0x80000;
        if ( (v22 & 1) == 0 )
          v19 = v18;
        VslpNestedPageProtectionFlags = v19;
      }
    }
  }
  if ( a1 )
    *a1 = VslpSecurePtRoot;
  return (unsigned int)VslpNestedPageProtectionFlags;
}
