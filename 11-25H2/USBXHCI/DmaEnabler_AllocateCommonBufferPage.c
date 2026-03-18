/*
 * XREFs of DmaEnabler_AllocateCommonBufferPage @ 0x14003BD24
 * Callers:
 *     CommonBuffer_AllocateCommonBufferPage @ 0x1400205B8 (CommonBuffer_AllocateCommonBufferPage.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E34 (XilCoreCommonBuffer_AllocateBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DmaEnabler_AllocateCommonBufferPage(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v7; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v9; // r8
  int v10; // edx
  int v11; // edi
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  _DWORD v15[2]; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-38h] BYREF
  __int128 v17; // [rsp+4Ch] [rbp-34h]
  int v18; // [rsp+5Ch] [rbp-24h]
  int v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+64h] [rbp-1Ch]
  __int64 v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  void *v23; // [rsp+78h] [rbp-8h]
  __int64 v24; // [rsp+98h] [rbp+18h] BYREF

  v24 = 0LL;
  v18 = 0;
  v21 = 0LL;
  v7 = a1;
  v17 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
    {
      v16 = -1;
    }
    else
    {
      a1 = (_QWORD *)*(unsigned int *)(WdfStructures + 304);
      v16 = *(_DWORD *)(WdfStructures + 304);
    }
  }
  else
  {
    v16 = 56;
  }
  v19 = 1;
  v20 = 1;
  v23 = off_14006AE38;
  v22 = a2 + 24;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0xA )
    {
      v15[0] = -1;
    }
    else
    {
      a1 = (_QWORD *)*(unsigned int *)(WdfStructures + 80);
      v15[0] = *(_DWORD *)(WdfStructures + 80);
    }
  }
  else
  {
    v15[0] = 8;
  }
  v15[1] = 0;
  IsEnabledDeviceUsageNoInline = Feature_UMPERS__private_IsEnabledDeviceUsageNoInline(a1, a2, 0xFFFFFFFFLL);
  v9 = 4096LL;
  if ( IsEnabledDeviceUsageNoInline )
    v9 = a3;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _DWORD *, int *, __int64 *))(WdfFunctions_01033 + 3064))(
          WdfDriverGlobals,
          *v7,
          v9,
          v15,
          &v16,
          &v24);
  if ( v11 >= 0 )
  {
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                      WdfDriverGlobals,
                      v24,
                      off_14006AE38);
    v12[2] = v24;
    *v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 176))(WdfDriverGlobals, v24);
    v12[1] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 184))(WdfDriverGlobals, v24);
    v13 = a5;
    *a4 = v12;
    *v13 = v12 + 3;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v7[1] + 72LL),
      v10,
      18,
      12,
      (__int64)&WPP_c5e831fbd2e6367adfdb400587a90d75_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
