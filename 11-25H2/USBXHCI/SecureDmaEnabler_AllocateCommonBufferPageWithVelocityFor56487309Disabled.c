/*
 * XREFs of SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled @ 0x140056008
 * Callers:
 *     CommonBuffer_AllocateCommonBufferPage @ 0x1400205B8 (CommonBuffer_AllocateCommonBufferPage.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x14003F2E8 (CommonBuffer_AcquireSecureBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E34 (XilCoreCommonBuffer_AllocateBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     SecureDmaEnabler_MapMemory @ 0x1400829B4 (SecureDmaEnabler_MapMemory.c)
 */

__int64 __fastcall SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  int v7; // edx
  int v8; // ebx
  __int64 v10; // rdi
  __int64 v11; // r9
  __int16 v12; // cx
  _DWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  void *v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+48h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v13[1] = 0;
  v15 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v13[0] = -1;
    else
      v13[0] = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v13[0] = 56;
  }
  v16 = 1;
  v17 = 1;
  v20 = off_14006B2B8;
  v19 = a2 + 128;
  v18 = *a1;
  v14 = SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01033 + 1536))(
         WdfDriverGlobals,
         v13,
         (unsigned int)ExDefaultNonPagedPoolType,
         1229146200LL,
         4096LL,
         &v21,
         &v22);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72),
        v7,
        18,
        20,
        (__int64)&WPP_363cf0d34eeb3ffef8744b3819ff9f62_Traceguids,
        v8);
    }
    goto LABEL_9;
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v21,
          off_14006B2B8);
  *(_QWORD *)(v10 + 16) = v21;
  *(_QWORD *)(v10 + 24) = a1;
  v11 = v22;
  v12 = v22;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_WORD *)(v10 + 42) = 0;
  *(_DWORD *)(v10 + 72) = 4096;
  *(_WORD *)(v10 + 40) = 8 * (((unsigned __int16)((v12 & 0xFFF) + 0x1FFF) >> 12) + 6);
  *(_QWORD *)(v10 + 64) = v11 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v10 + 76) = v11 & 0xFFF;
  MmBuildMdlForNonPagedPool((PMDL)(v10 + 32));
  v8 = SecureDmaEnabler_MapMemory(a1, v10 + 32, 4096LL, v10 + 96);
  if ( v8 < 0 )
  {
LABEL_9:
    if ( v21 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
    return (unsigned int)v8;
  }
  *(_QWORD *)v10 = v22;
  *(_QWORD *)(v10 + 8) = *(_QWORD *)(v10 + 96);
  *a3 = v10;
  if ( a4 )
    *a4 = v10 + 128;
  return (unsigned int)v8;
}
