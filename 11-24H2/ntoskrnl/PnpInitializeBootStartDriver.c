/*
 * XREFs of PnpInitializeBootStartDriver @ 0x140C66118
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C6351C (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C636C8 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x140C67B48 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14043B204 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404A044C (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     VfDriverInitStarting @ 0x140B82248 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x140B8A494 (VfDriverInitSuccess.c)
 *     PnpDoPolicyCheck @ 0x140BDE638 (PnpDoPolicyCheck.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140C22BD4 (PnpNotifyEarlyLaunchImageLoad.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 */

__int64 __fastcall PnpInitializeBootStartDriver(
        unsigned __int16 *a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v12; // ecx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int128 v18; // xmm0
  int v19; // ebx
  int inited; // esi
  _BYTE v22[4]; // [rsp+38h] [rbp-49h] BYREF
  int v23; // [rsp+3Ch] [rbp-45h]
  __int128 v24; // [rsp+40h] [rbp-41h]
  __int128 v25; // [rsp+50h] [rbp-31h]
  __int128 v26; // [rsp+60h] [rbp-21h]
  __int128 v27; // [rsp+70h] [rbp-11h]
  __int64 v28; // [rsp+80h] [rbp-1h]
  __int64 v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+90h] [rbp+Fh]
  int v31; // [rsp+94h] [rbp+13h]
  int v32; // [rsp+98h] [rbp+17h]
  int v33; // [rsp+9Ch] [rbp+1Bh]

  memset_0(v22, 0, 0x68uLL);
  v12 = 0;
  a7 = 0;
  if ( a6 )
  {
    if ( a4 )
    {
      v13 = *(_OWORD *)(a4 + 72);
      v14 = *(_OWORD *)(a4 + 176);
      v23 = *(_DWORD *)(a4 + 280) & 1;
      v30 = *(_DWORD *)(a4 + 216);
      v32 = *(_DWORD *)(a4 + 228);
      v28 = *(_QWORD *)(a4 + 192);
      v15 = *(_DWORD *)(a4 + 220);
      v24 = v13;
      v31 = v15;
      v16 = *a2;
      v33 = *(_DWORD *)(a4 + 232);
      v17 = *(_QWORD *)(a4 + 200);
      v25 = v16;
      v29 = v17;
      v18 = *(_OWORD *)(a4 + 160);
      v27 = v14;
      v26 = v18;
    }
    else
    {
      v24 = *(_OWORD *)a1;
    }
    PnpNotifyEarlyLaunchImageLoad((__int64)v22, (__int64)&a7);
    v12 = a7;
  }
  if ( PnpDoPolicyCheck(v12, 1) || !a6 )
  {
    inited = VfDriverInitStarting();
    PnpDiagnosticTraceObject(&KMPnPEvt_BootInit_Start, a1);
    v19 = IopInitializeBuiltinDriver((_DWORD)a1, (_DWORD)a2, a3, a4, a5, a8);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_BootInit_Stop, a1, v19);
    if ( v19 >= 0 )
      VfDriverInitSuccess(inited);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v19;
}
