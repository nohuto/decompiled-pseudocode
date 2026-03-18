/*
 * XREFs of ?CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ @ 0x140083540
 * Callers:
 *     ?ReportMuxGpuChild@DISPLAY_MUX_PAIRING@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x140087884 (-ReportMuxGpuChild@DISPLAY_MUX_PAIRING@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U?$_tlgWrapSz@G@@U1@U2@U2@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3444AEBU?$_tlgWrapSz@G@@34446@Z @ 0x14000506C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNIC_ea_14000506C.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x1400853B4 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x140087DDC (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     ?UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z @ 0x14008880C (-UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::CheckForNewMuxPairing(DISPLAY_MUX_PAIRING *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  _DWORD *v5; // rax
  bool v6; // zf
  DISPLAY_MUX_PAIRING *v7; // rcx
  int updated; // edi
  __int64 v9; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // [rsp+90h] [rbp+7h] BYREF
  int v18; // [rsp+94h] [rbp+Bh] BYREF
  int v19; // [rsp+98h] [rbp+Fh] BYREF
  int v20; // [rsp+9Ch] [rbp+13h] BYREF
  void *v21; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+1Fh] BYREF
  void *v23; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+2Fh] BYREF
  unsigned __int16 *v25; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v26[3]; // [rsp+C8h] [rbp+3Fh] BYREF
  int v27; // [rsp+F8h] [rbp+6Fh] BYREF
  int v28; // [rsp+100h] [rbp+77h] BYREF
  int v29; // [rsp+108h] [rbp+7Fh] BYREF

  if ( DISPLAY_MUX_PAIRING::IsOperational(this) )
  {
    if ( *(_DWORD *)v2 == 1 )
    {
      v3 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        v4 = *(_DWORD **)(v2 + 16);
        if ( v4 )
        {
          v5 = (_DWORD *)*((_QWORD *)this + 3);
          if ( v5 )
          {
            v6 = *v4 == *v5;
            v7 = this;
            if ( v6 )
            {
              updated = -1073741823;
              v9 = 3LL;
            }
            else
            {
              updated = DISPLAY_MUX_PAIRING::UpdateMuxProperties(this, *(unsigned int *)(v3 + 72), 0LL);
              v7 = this;
              if ( updated >= 0 )
              {
                DISPLAY_MUX_PAIRING::SetPairingStatus(this, 2LL);
                if ( (unsigned int)dword_14015E5A8 > 5 )
                {
                  if ( tlgKeywordOn((__int64)&dword_14015E5A8, 0x400000000200LL) )
                  {
                    v13 = *((_QWORD *)this + 3);
                    v21 = (void *)(v13 + 32);
                    v27 = *(_DWORD *)(v13 + 28);
                    v28 = *(_DWORD *)(v13 + 24);
                    v29 = *(_DWORD *)(v13 + 356);
                    v14 = *(_QWORD *)(v13 + 16);
                    v15 = *((_QWORD *)this + 2);
                    v22 = v14;
                    v23 = (void *)(v15 + 32);
                    v17 = *(_DWORD *)(v15 + 28);
                    v18 = *(_DWORD *)(v15 + 24);
                    v19 = *(_DWORD *)(v15 + 356);
                    v24 = *(_QWORD *)(v15 + 16);
                    v16 = *((_QWORD *)this + 1);
                    v20 = 1;
                    v25 = (unsigned __int16 *)(v16 + 16);
                    v26[0] = 2048LL;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                      v15,
                      (__int64)&unk_14013F254,
                      v11,
                      v12,
                      (__int64)v26,
                      (__int64)&v20,
                      &v25,
                      (__int64)&v24,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64)&v17,
                      &v23,
                      (__int64)&v22,
                      (__int64)&v29,
                      (__int64)&v28,
                      (__int64)&v27,
                      &v21);
                  }
                }
                return 0LL;
              }
              v9 = 6LL;
            }
            DISPLAY_MUX_PAIRING::SetPairingStatus(v7, v9);
            return (unsigned int)updated;
          }
        }
      }
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 2083;
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 2075;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2068;
  }
  return 0LL;
}
