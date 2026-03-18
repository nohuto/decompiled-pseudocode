/*
 * XREFs of UsbhGetLanguageIdString @ 0x14002686C
 * Callers:
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x140026E60 (UsbhSyncSendCommandToDevice.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003DB54 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhGetLanguageIdString(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *Pool2; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // r12
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  int v19; // eax
  unsigned int v20; // edx
  int v21; // r15d
  PDEVICE_OBJECT v23; // rcx
  int v24; // r9d
  int v25; // esi
  PDEVICE_OBJECT v26; // rcx
  int v27; // r9d
  _WORD *v28; // rsi
  _WORD *v29; // rdi
  unsigned __int64 v30; // rcx
  unsigned __int8 *v31; // rax
  unsigned __int64 i; // rcx
  int v33; // [rsp+58h] [rbp-18h]
  __int16 v34; // [rsp+60h] [rbp-10h] BYREF
  int v35; // [rsp+62h] [rbp-Eh]
  __int16 v36; // [rsp+66h] [rbp-Ah]
  _DWORD *v37; // [rsp+68h] [rbp-8h]
  unsigned __int16 v38; // [rsp+B8h] [rbp+48h] BYREF

  v37 = PdoExt(a2);
  if ( !*((_BYTE *)v37 + 1415) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v23 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v24 = 23;
LABEL_58:
    WPP_RECORDER_SF_(v23->DeviceExtension, 0, 1, v24, (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids);
    return 3221225659LL;
  }
  Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, 255LL, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  v38 = 255;
  FdoExt(a1);
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 827609959;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 255LL;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
    }
  }
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 844387175;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
    }
  }
  v34 = 1664;
  v35 = 768;
  v36 = 255;
  v11 = UsbhSyncSendCommandToDevice(a1, a2, (unsigned int)&v34, (_DWORD)Pool2, (__int64)&v38);
  v13 = v11;
  v33 = v11;
  if ( _bittest(&UsbhLogMask, 8u) && a1 && (v14 = *(_QWORD *)(a1 + 64)) != 0 )
  {
    v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 880), 0xFFFFFFFF);
    v16 = v38;
    v17 = *(_QWORD *)(v14 + 888) + 32LL * ((unsigned int)(v15 - 1) & *(_DWORD *)(v14 + 884));
    *(_DWORD *)v17 = 861164391;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_QWORD *)(v17 + 16) = v16;
    *(_QWORD *)(v17 + 24) = v13;
  }
  else
  {
    LOWORD(v16) = v38;
  }
  if ( (v13 & 0xC0000000) == 0xC0000000 )
  {
    v25 = 0;
LABEL_55:
    UsbhException(
      a1,
      *((unsigned __int16 *)v37 + 714),
      63LL,
      Pool2,
      (unsigned __int16)v16,
      v33,
      v25,
      usbfile_idstring_c,
      2017,
      0);
    ExFreePoolWithTag(Pool2, 0);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v23 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v24 = 24;
    goto LABEL_58;
  }
  v18 = *Pool2;
  if ( v18 > (unsigned __int16)v16 )
  {
    v25 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v26 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_55;
    v27 = 10;
LABEL_40:
    WPP_RECORDER_SF_(v26->DeviceExtension, 0, 1, v27, (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids);
    goto LABEL_55;
  }
  if ( (unsigned __int8)v18 <= 2u )
  {
    v25 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v26 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_55;
    v27 = 11;
    goto LABEL_40;
  }
  if ( Pool2[1] != 3 )
  {
    v25 = -1072693246;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v26 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_55;
    v27 = 12;
    goto LABEL_40;
  }
  v19 = v18 & 1;
  if ( v19 )
  {
    v25 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        13,
        (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids,
        v19);
    goto LABEL_55;
  }
  v20 = (*Pool2 >> 1) - 1;
  if ( *Pool2 >> 1 == 1 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225659LL;
  }
  v28 = Pool2 + 2;
  v29 = Pool2;
  v30 = 2LL * v20;
  v31 = &Pool2[v30];
  for ( i = v30 >> 1; i; --i )
    *v29++ = *v28++;
  *(_WORD *)v31 = 0;
  *(_DWORD *)(a3 + 4) = (unsigned __int16)v16;
  *(_QWORD *)(a3 + 8) = Pool2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
      v20);
  v21 = 0;
  while ( *(_WORD *)Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          v12,
          26,
          (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
          v21++,
          *(_WORD *)Pool2);
    }
    Pool2 += 2;
  }
  return 0LL;
}
