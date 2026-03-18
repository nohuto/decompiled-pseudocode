/*
 * XREFs of ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x1802B0150
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x180004FE0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 */

float __fastcall CGravityBounceAccelerator::Accelerate(
        CGravityBounceAccelerator *this,
        struct IntegrationState *a2,
        float a3)
{
  float v3; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  __int64 v7; // rcx

  v3 = 0.0;
  if ( COERCE_FLOAT(*((_DWORD *)a2 + 1) & _xmm) < 0.000099999997
    && COERCE_FLOAT(*((_DWORD *)this + 4) & _xmm) < 0.000099999997
    || (v5 = *((float *)a2 + 1) - *((float *)this + 4), COERCE_FLOAT(LODWORD(v5) & _xmm) <= 0.0049999999) )
  {
    v6 = *((float *)a2 + 2);
    if ( *((float *)a2 + 3) <= COERCE_FLOAT(LODWORD(v6) & _xmm) )
    {
      if ( COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.0000011920929 )
      {
        v3 = v6 * *((float *)this + 8);
        if ( *((_BYTE *)this + 40) )
        {
          if ( COERCE_FLOAT(LODWORD(v3) & _xmm) > COERCE_FLOAT(*((_DWORD *)this + 9) & _xmm) )
          {
            if ( (float)(*((float *)this + 11) > 0.0) == (float)(v6 > 0.0) )
              v3 = *((float *)this + 9) * *((float *)this + 7);
            else
              v3 = COERCE_FLOAT(LODWORD(v6) ^ _xmm) / 0.0099999998;
          }
        }
        else
        {
          *((_BYTE *)this + 40) = 1;
        }
        *((float *)this + 9) = v3;
        *((_DWORD *)this + 11) = *((_DWORD *)a2 + 2);
      }
    }
    else
    {
      v3 = COERCE_FLOAT(LODWORD(v6) ^ _xmm) / 0.0099999998;
    }
  }
  else
  {
    v3 = (float)(v5 > 0.0) * COERCE_FLOAT(*((_DWORD *)this + 6) ^ _xmm);
  }
  if ( *((_DWORD *)this + 12) && (unsigned int)dword_1803F8D18 > 4 && tlgKeywordOn((__int64)&dword_1803F8D18, 4LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (__int64)&unk_1803CF731);
  return v3;
}
