/*
 * XREFs of ?DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x1400840A0
 * Callers:
 *     ??1DISPLAY_MUX_PAIRING@@QEAA@XZ @ 0x1400826A8 (--1DISPLAY_MUX_PAIRING@@QEAA@XZ.c)
 *     ?RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x140087334 (-RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@.c)
 *     ?SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z @ 0x1400884C0 (-SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z.c)
 *     ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140088764 (-UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U?$_tlgWrapSz@G@@U1@U2@U2@U2@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3444AEBU?$_tlgWrapSz@G@@344464@Z @ 0x140005230 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNIC_ea_140005230.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z @ 0x140087B60 (-SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x140087DDC (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall DISPLAY_MUX_PAIRING::DestroyActivePairing(__int64 a1, int a2)
{
  DISPLAY_MUX_DEVICE *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+90h] [rbp-80h] BYREF
  int v12; // [rsp+94h] [rbp-7Ch] BYREF
  int v13; // [rsp+98h] [rbp-78h] BYREF
  int v14; // [rsp+9Ch] [rbp-74h] BYREF
  int v15; // [rsp+A0h] [rbp-70h] BYREF
  int v16; // [rsp+A4h] [rbp-6Ch] BYREF
  int v17; // [rsp+A8h] [rbp-68h] BYREF
  int v18; // [rsp+ACh] [rbp-64h] BYREF
  void *v19; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-58h] BYREF
  void *v21; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int16 *v23; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-38h] BYREF
  _DWORD v25[20]; // [rsp+E0h] [rbp-30h] BYREF

  if ( *(_DWORD *)a1 == 2 )
  {
    memset(v25, 0, 0x48uLL);
    v4 = *(DISPLAY_MUX_DEVICE **)(a1 + 8);
    v25[6] = 0;
    v25[0] = 3;
    v25[1] = 2;
    v25[7] = 2;
    v25[12] = 1;
    v25[13] = 2;
    DISPLAY_MUX_DEVICE::SetDeviceProperties(v4, (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v25);
    DISPLAY_MUX_PAIRING::SetPairingStatus(a1, 1LL);
    if ( (unsigned int)dword_14015E5A8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_14015E5A8, 0x400000000200LL) )
      {
        v7 = *(_QWORD *)(a1 + 24);
        v11 = a2;
        v19 = (void *)(v7 + 32);
        v12 = *(_DWORD *)(v7 + 28);
        v13 = *(_DWORD *)(v7 + 24);
        v14 = *(_DWORD *)(v7 + 356);
        v8 = *(_QWORD *)(v7 + 16);
        v9 = *(_QWORD *)(a1 + 16);
        v20 = v8;
        v21 = (void *)(v9 + 32);
        v15 = *(_DWORD *)(v9 + 28);
        v16 = *(_DWORD *)(v9 + 24);
        v17 = *(_DWORD *)(v9 + 356);
        v22 = *(_QWORD *)(v9 + 16);
        v10 = *(_QWORD *)(a1 + 8);
        v18 = 1;
        v23 = (unsigned __int16 *)(v10 + 16);
        v24 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v9,
          (__int64)&unk_14013F344,
          v5,
          v6,
          (__int64)&v24,
          (__int64)&v18,
          &v23,
          (__int64)&v22,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          &v21,
          (__int64)&v20,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          &v19,
          (__int64)&v11);
      }
    }
  }
}
