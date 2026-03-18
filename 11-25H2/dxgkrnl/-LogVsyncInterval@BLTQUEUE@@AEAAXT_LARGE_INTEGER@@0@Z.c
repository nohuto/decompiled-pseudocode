/*
 * XREFs of ?LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z @ 0x1403875F4
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140305090 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@23@Z @ 0x1400013B8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14000145C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

void __fastcall BLTQUEUE::LogVsyncInterval(
        BLTQUEUE *this,
        union _LARGE_INTEGER a2,
        union _LARGE_INTEGER a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  LONGLONG v7; // rax
  unsigned int v8; // edi
  DXGDODPRESENT *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+38h] BYREF

  v4 = *((_QWORD *)this + 61);
  v5 = 0LL;
  if ( v4 && *((_DWORD *)this + 34) == 3 )
  {
    v7 = 1000 * (a2.QuadPart - v4) / a3.QuadPart;
    v8 = v7;
    if ( (unsigned int)v7 > 0x28 )
      v8 = 10 * ((unsigned int)v7 / 0xA);
    v9 = *(DXGDODPRESENT **)this;
    if ( v8 > 0x64 )
      v8 = 100;
    if ( v9 )
      v5 = *(_QWORD *)((char *)DXGDODPRESENT::GetAdapter(v9) + 412);
    v10 = dword_14015B5B8;
    v11 = qword_14015B5D0;
    if ( (unsigned int)dword_14015B5B8 > 5 )
    {
      v12 = 0x400000000800LL;
      if ( (qword_14015B5C8 & 0x400000000800LL) != 0 && (qword_14015B5D0 & 0x400000000800LL) == qword_14015B5D0 )
      {
        v16 = *((_DWORD *)this + 65);
        v13 = v5;
        v17 = v8;
        v14 = 16779264LL;
        v15[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          qword_14015B5D0,
          (int)&unk_14013E1D9,
          0x400000000800LL,
          (__int64)v15,
          (__int64)&v14,
          (__int64)&v17,
          (__int64)&v13,
          (__int64)&v16);
        v11 = qword_14015B5D0;
        v10 = dword_14015B5B8;
      }
      if ( v10 > 5 && (qword_14015B5C8 & 0x800) != 0 && (v11 & 0x800) == v11 )
      {
        v16 = *((_DWORD *)this + 65);
        v15[0] = v5;
        v17 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v11,
          (__int64)&unk_14013E191,
          v12,
          a4,
          (__int64)&v17,
          (__int64)v15,
          (__int64)&v16);
      }
    }
  }
}
