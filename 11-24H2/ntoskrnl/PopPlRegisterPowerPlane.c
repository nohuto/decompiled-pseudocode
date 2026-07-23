/*
 * XREFs of PopPlRegisterPowerPlane @ 0x1404CADB8
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     PopPepIterateDeviceList @ 0x1405D8AB4 (PopPepIterateDeviceList.c)
 *     PopPlTraceLogPowerPlane @ 0x1405D9DE4 (PopPlTraceLogPowerPlane.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopPlInitPowerPlane @ 0x140764FE8 (PopPlInitPowerPlane.c)
 */

__int64 __fastcall PopPlRegisterPowerPlane(__int64 a1, __int64 a2, __int64 a3)
{
  int inited; // edi
  int v5; // r9d
  __int64 v6; // rbx
  int v7; // r9d
  int v8; // r9d
  int v10; // [rsp+20h] [rbp-49h]
  int v11; // [rsp+28h] [rbp-41h]
  __int16 v12; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h] BYREF
  __int64 v15; // [rsp+58h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-9h] BYREF
  __int16 *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]

  v13 = 0LL;
  LODWORD(v15) = 0;
  v14 = 0LL;
  if ( PopPowerPlane )
  {
    inited = -1073741768;
  }
  else if ( *(_DWORD *)(a1 + 4) )
  {
    inited = -1073741735;
  }
  else if ( *(_QWORD *)(a1 + 16) )
  {
    inited = PopPlInitPowerPlane(a1 + 24, a1, a2 + a1, &v13);
    if ( inited >= 0 )
    {
      v6 = v13;
      *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(a1 + 16);
      v15 = v6;
      PopPepIterateDeviceList(0, (unsigned int)PopPlActivateDeviceIterator, 0, v5, 1, 0, (__int64)&v14);
      PopPepIterateDeviceList(
        (unsigned int)PopPlCommitPowerPlaneRegistration,
        (unsigned int)PopPlRegisterDeviceIterator,
        (unsigned int)PopPlPublishInitialPowerDraw,
        v7,
        0,
        0,
        (__int64)&v14);
      PopPlTraceLogPowerPlane(v6);
      PopPepIterateDeviceList(0, (unsigned int)PopPlIdleDeviceIterator, 0, v8, 0, 1, (__int64)&v14);
    }
  }
  else
  {
    inited = -1073741811;
  }
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v12;
    v21 = 4;
    v20 = &v13;
    v12 = 1;
    v18 = 2;
    LODWORD(v13) = inited;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140E07680, (unsigned __int8 *)&byte_14004FB0F, a3, 1u, v10, v11, 4u, &v16);
  }
  return (unsigned int)inited;
}
