/*
 * XREFs of Interrupter_CreateInterrupter @ 0x14007BA04
 * Callers:
 *     Interrupter_Create @ 0x14007B958 (Interrupter_Create.c)
 *     Interrupter_PrepareHardware @ 0x14007C5D0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x140019E0C (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Controller_IsSecureDevice @ 0x1400328B8 (Controller_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x140055934 (DynamicLock_Create.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 *     Counter_CreateInterrupterInstance @ 0x14007F12C (Counter_CreateInterrupterInstance.c)
 */

__int64 __fastcall Interrupter_CreateInterrupter(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edi
  int v12; // r9d
  int v13; // edi
  unsigned __int16 v14; // r9
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  char v19; // al
  bool v20; // zf
  _QWORD *v21; // rcx
  _OWORD v23[2]; // [rsp+48h] [rbp-A1h] BYREF
  __int128 v24; // [rsp+68h] [rbp-81h]
  void *v25; // [rsp+78h] [rbp-71h]
  _QWORD *v26; // [rsp+80h] [rbp-69h] BYREF
  __int64 v27; // [rsp+88h] [rbp-61h]
  _QWORD v28[18]; // [rsp+98h] [rbp-51h] BYREF
  __int64 v31; // [rsp+150h] [rbp+67h] BYREF

  memset(v28, 0, 0x64uLL);
  memset((char *)v23 + 4, 0, 20);
  v31 = 0LL;
  v26 = 0LL;
  if ( a4 || a5 || a7 )
  {
    memset(v28, 0, 0x68uLL);
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x1D )
        LODWORD(v28[0]) = -1;
      else
        LODWORD(v28[0]) = *(_DWORD *)(WdfStructures + 232);
    }
    else
    {
      LODWORD(v28[0]) = 104;
    }
    LODWORD(v28[2]) = 2;
    v28[3] = Interrupter_WdfEvtInterruptIsr;
    v28[4] = 0LL;
    v28[5] = Interrupter_WdfEvtInterruptEnable;
    v28[6] = Interrupter_WdfEvtInterruptDisable;
    HIDWORD(v28[11]) = 2;
    v28[8] = a4;
    v28[9] = a5;
    if ( Controller_IsSecureDevice(a2) )
    {
      v28[7] = Interrupter_WdfEvtInterruptWorkItem;
      if ( !*(_BYTE *)(*(_QWORD *)(a2 + 88) + 137LL) )
        LOBYTE(v28[11]) = 1;
    }
    else
    {
      v28[4] = Interrupter_WdfEvtInterruptDpc;
    }
    DWORD1(v23[0]) = 0;
    *(_QWORD *)&v23[1] = 0LL;
    v24 = 0LL;
    if ( v15 )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v23[0]) = -1;
      else
        LODWORD(v23[0]) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v23[0]) = 56;
    }
    v25 = off_14006B178;
    *((_QWORD *)&v23[1] + 1) = 0x100000001LL;
    *((_QWORD *)&v23[0] + 1) = Interrupter_WdfEvtCleanupCallback;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _OWORD *, __int64 *))(WdfFunctions_01033
                                                                                                + 1128))(
           WdfDriverGlobals,
           a1,
           v28,
           v23,
           &v31);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v11;
      v12 = 13;
      goto LABEL_12;
    }
    v13 = a3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 14;
      goto LABEL_34;
    }
  }
  else
  {
    memset((char *)v23 + 4, 0, 20);
    *((_QWORD *)&v24 + 1) = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v23[0]) = -1;
      else
        LODWORD(v23[0]) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v23[0]) = 56;
    }
    v25 = off_14006B178;
    *(_QWORD *)&v24 = a1;
    *((_QWORD *)&v23[1] + 1) = 0x100000001LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _OWORD *, __int64 *))(WdfFunctions_01033 + 1656))(
           WdfDriverGlobals,
           v23,
           &v31);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 11;
LABEL_12:
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 72),
          v10,
          9,
          v12,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
          v9);
        return v11;
      }
      return v11;
    }
    v13 = a3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 12;
LABEL_34:
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a2 + 72),
        4u,
        9u,
        v14,
        (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
        v31,
        v13);
    }
  }
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v31,
          off_14006B178);
  v27 = v16;
  *(_QWORD *)v16 = v31;
  *(_QWORD *)(v16 + 8) = a2;
  *(_DWORD *)(v16 + 32) = v13;
  if ( !Controller_IsSecureDevice(a2) || *(_BYTE *)(*(_QWORD *)(a2 + 88) + 137LL) )
  {
    v18 = 0;
    v19 = 0;
  }
  else
  {
    v18 = 1;
    v19 = 1;
  }
  *(_BYTE *)(v17 + 232) = v19;
  v9 = DynamicLock_Create(v31, *(_QWORD *)(a2 + 72), v18, (__int64 *)(v17 + 224));
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v11;
    v12 = 15;
    goto LABEL_12;
  }
  Counter_CreateInterrupterInstance(v27);
  v20 = a7 == 0LL;
  *a6 = v27;
  if ( !v20 )
  {
    memset(v23, 0, sizeof(v23));
    v25 = 0LL;
    v24 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v23[0]) = -1;
      else
        LODWORD(v23[0]) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v23[0]) = 56;
    }
    v25 = off_14006AFC0;
    *((_QWORD *)&v23[1] + 1) = 0x100000001LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD **))(WdfFunctions_01033 + 1624))(
           WdfDriverGlobals,
           v31,
           v23,
           &v26);
    v11 = v9;
    if ( v9 >= 0 )
    {
      *v26 = a1;
      v21 = a7;
      v26[1] = a2;
      *v21 = v26;
      return v11;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 16;
      goto LABEL_12;
    }
  }
  return v11;
}
