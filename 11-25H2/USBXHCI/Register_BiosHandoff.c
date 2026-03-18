/*
 * XREFs of Register_BiosHandoff @ 0x14000C998
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_PrepareHardware @ 0x14007DAC8 (Register_PrepareHardware.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     Register_ControllerStop @ 0x14000C7B8 (Register_ControllerStop.c)
 *     XilRegister_ReadUchar @ 0x14000CC84 (XilRegister_ReadUchar.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Register_WriteSecureMmio @ 0x14000E158 (Register_WriteSecureMmio.c)
 *     Etw_StartDeviceFail @ 0x14002DDDC (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_BiosHandoff(_QWORD *a1)
{
  __int64 v1; // rbp
  char Uchar; // al
  __int64 v4; // rcx
  char v5; // al
  int v6; // ebx
  int i; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d
  unsigned int v11; // ebx
  int Ulong; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  int v19; // [rsp+28h] [rbp-30h]
  char v20; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  Interval.QuadPart = 0LL;
  v1 = a1[8];
  if ( v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72LL), 4, 6, 50, (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids);
    Uchar = XilRegister_ReadUchar(a1, v1 + 3);
    v4 = a1[1];
    v5 = Uchar | 1;
    v20 = v5;
    if ( *(_BYTE *)(v4 + 1001) )
    {
      Register_WriteSecureMmio(a1, v1 + 3, 0LL, &v20);
    }
    else
    {
      *(_BYTE *)(v1 + 3) = v5;
      _InterlockedOr(v18, 0);
    }
    v6 = 20;
    for ( i = 0; ; i += 100 )
    {
      if ( (XilRegister_ReadUchar(a1, v1 + 2) & 1) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_11;
        v9 = a1[1];
        v10 = 51;
        v19 = i;
        LOBYTE(v8) = 4;
        goto LABEL_10;
      }
      if ( !v6 )
        break;
      --v6;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v9 = a1[1];
    if ( (*(_QWORD *)(v9 + 736) & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v9 + 72),
          v8,
          6,
          53,
          (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
          208);
      }
      v14 = 1LL;
LABEL_26:
      Etw_StartDeviceFail(a1[1], v8, v14);
      return (unsigned int)-1073741823;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 52;
      v19 = 2000;
      LOBYTE(v8) = 3;
LABEL_10:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v9 + 72),
        v8,
        6,
        v10,
        (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
        v19);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72LL), 3, 6, 49, (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids);
  }
LABEL_11:
  if ( (XilRegister_ReadUlong((__int64)a1, (unsigned int *)(a1[4] + 4LL)) & 1) != 0 )
    goto LABEL_12;
  v15 = a1[1];
  if ( _bittest64((const signed __int64 *)(v15 + 736), 0x3Fu) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v15 + 72), 2, 6, 54, (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids);
    v14 = 2LL;
    goto LABEL_26;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v15 + 72), 2, 6, 55, (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids);
  v16 = Register_ControllerStop((__int64)a1);
  v11 = v16;
  if ( v16 >= 0 )
  {
LABEL_12:
    if ( v1 )
    {
      Ulong = XilRegister_ReadUlong((__int64)a1, (unsigned int *)(v1 + 4));
      XilRegister_WriteUlong((__int64)a1, (_DWORD *)(v1 + 4), Ulong & 0x1FFFDFFF);
    }
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v17,
      6,
      56,
      (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
      v16);
  }
  return v11;
}
