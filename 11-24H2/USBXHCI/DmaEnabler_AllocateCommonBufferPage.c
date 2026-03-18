/*
 * XREFs of DmaEnabler_AllocateCommonBufferPage @ 0x140018768
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140017334 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056294 (XilCoreCommonBuffer_AllocateBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DmaEnabler_AllocateCommonBufferPage(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  int v7; // edx
  int v8; // edi
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  int v12; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+44h] [rbp-3Ch]
  int v14; // [rsp+54h] [rbp-2Ch]
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  void *v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+A0h] [rbp+20h] BYREF
  int v21; // [rsp+A8h] [rbp+28h] BYREF
  int v22; // [rsp+ACh] [rbp+2Ch]

  v20 = 0LL;
  v14 = 0;
  v17 = 0LL;
  v13 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v12 = -1;
    else
      v12 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v12 = 56;
  }
  v15 = 1;
  v16 = 1;
  v19 = off_14006AE38;
  v18 = a2 + 24;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0xA )
      v21 = -1;
    else
      v21 = *(_DWORD *)(WdfStructures + 80);
  }
  else
  {
    v21 = 8;
  }
  v22 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, int *, int *, __int64 *))(WdfFunctions_01033
                                                                                                + 3064))(
         WdfDriverGlobals,
         *a1,
         a3,
         &v21,
         &v12,
         &v20);
  if ( v8 >= 0 )
  {
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v20,
                     off_14006AE38);
    v9[2] = v20;
    *v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 176))(WdfDriverGlobals, v20);
    v9[1] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 184))(WdfDriverGlobals, v20);
    v10 = a5;
    *a4 = v9;
    *v10 = v9 + 3;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v7,
      18,
      12,
      (__int64)&WPP_4656eba9686234bf83124d5041977f77_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
