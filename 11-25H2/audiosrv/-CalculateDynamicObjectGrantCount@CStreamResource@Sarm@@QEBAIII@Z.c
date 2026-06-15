/*
 * XREFs of ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAIII@Z @ 0x18011B4F0
 * Callers:
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x18011B4BC (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@55555AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x180004898 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U.c)
 */

__int64 __fastcall Sarm::CStreamResource::CalculateDynamicObjectGrantCount(__int64 this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebx
  char v5; // di
  unsigned int v6; // r11d
  Sarm::CStreamResource *v7; // r9
  unsigned int v8; // eax
  unsigned int v10; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v11; // [rsp+74h] [rbp+1Bh] BYREF
  unsigned int v12; // [rsp+78h] [rbp+1Fh] BYREF
  int v13; // [rsp+7Ch] [rbp+23h] BYREF
  int v14; // [rsp+80h] [rbp+27h] BYREF
  __int64 v15; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v16[4]; // [rsp+90h] [rbp+37h] BYREF
  int v17; // [rsp+C0h] [rbp+67h] BYREF
  char v18; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v19; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(this + 68);
  v4 = 0;
  v5 = *(_BYTE *)(this + 88);
  v6 = a3;
  v7 = (Sarm::CStreamResource *)this;
  if ( a2 >= v3 )
    a2 = *(_DWORD *)(this + 68);
  if ( !v5 )
  {
    a3 = *(unsigned int *)(this + 80);
    if ( a2 < (unsigned int)a3 )
    {
      if ( *(_DWORD *)(this + 72) >= *(_DWORD *)(this + 64) )
        v4 = a2;
    }
    else
    {
      v8 = v6;
      if ( a2 - (unsigned int)a3 < v6 )
        v8 = a2 - a3;
      this = (unsigned int)a3 + v8;
      if ( (unsigned int)this < *((_DWORD *)v7 + 16) )
        this = 0LL;
      v4 = this;
    }
  }
  if ( (unsigned int)dword_1801CC2B0 > 5 )
  {
    v17 = *((_DWORD *)v7 + 13);
    v13 = *((_DWORD *)v7 + 16);
    v14 = *((_DWORD *)v7 + 20);
    v15 = (__int64)v7 + 16;
    v16[0] = *((_QWORD *)v7 + 5);
    v11 = a2;
    v18 = v5;
    v19 = v4;
    v10 = v6;
    v12 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      this,
      (__int64)&unk_1801A379B,
      a3,
      (__int64)v7,
      (__int64)v16,
      &v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  return v4;
}
