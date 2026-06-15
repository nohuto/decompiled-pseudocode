/*
 * XREFs of ?Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z @ 0x180113B48
 * Callers:
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114A60 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHand.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U_tlgWrapperPtrSize@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU_tlgWrapperPtrSize@@6@Z @ 0x18000463C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U_tlgWrapperPtrSize@.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _freea @ 0x18004D97C (_freea.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_cb23c6bad18b717dd13912dc63130875_::operator() @ 0x180112C6C (_lambda_cb23c6bad18b717dd13912dc63130875_--operator().c)
 *     ?IsEnabled@AudioSrvTelemetryProvider@@SA_NE_K@Z @ 0x1801140E8 (-IsEnabled@AudioSrvTelemetryProvider@@SA_NE_K@Z.c)
 *     ?UIntToUShort@@YAJIPEAG@Z @ 0x180115660 (-UIntToUShort@@YAJIPEAG@Z.c)
 *     _alloca_probe @ 0x180167ED0 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::Initialize(CVolumeSoftware *this, struct IMMDevice *a2, const unsigned __int16 *a3)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // cl
  size_t v7; // rcx
  __int64 v8; // rax
  void *v9; // rsp
  WCHAR *p_Memory; // rsi
  WCHAR *v11; // rax
  unsigned int i; // r12d
  _DWORD *v13; // rax
  __int64 v14; // rdi
  float *v15; // rax
  _DWORD *v16; // rcx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+0h] [rbp-50h] BYREF
  int Memory; // [rsp+50h] [rbp+0h] BYREF
  _BYTE v24[4]; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v25; // [rsp+58h] [rbp+8h] BYREF
  const WCHAR *v26; // [rsp+60h] [rbp+10h] BYREF
  struct IMMDevice **v27; // [rsp+68h] [rbp+18h] BYREF
  CVolumeSoftware *v28; // [rsp+70h] [rbp+20h]
  const WCHAR **v29; // [rsp+78h] [rbp+28h]
  WCHAR *v30; // [rsp+80h] [rbp+30h] BYREF
  int v31; // [rsp+88h] [rbp+38h]
  struct IMMDevice *v32; // [rsp+E8h] [rbp+98h] BYREF
  const WCHAR *v33; // [rsp+F0h] [rbp+A0h] BYREF

  v33 = a3;
  v32 = a2;
  v27 = &v32;
  v28 = this;
  v29 = &v33;
  v4 = lambda_cb23c6bad18b717dd13912dc63130875_::operator()((__int64)&v27);
  if ( !AudioSrvTelemetryProvider::IsEnabled(v6, v5) )
    return v4;
  LOWORD(Memory) = 0;
  if ( (v4 & 0x80000000) == 0 && (int)UIntToUShort(*((_DWORD *)this + 29), (unsigned __int16 *)&Memory) < 0 )
    return v4;
  v7 = (16LL * (unsigned __int16)Memory + 16) & -(__int64)(16 * (unsigned __int64)(unsigned __int16)Memory < 16 * (unsigned __int64)(unsigned __int16)Memory + 16);
  if ( v7 )
  {
    if ( v7 > 0x400 )
    {
      v11 = (WCHAR *)malloc(v7);
      p_Memory = v11;
      if ( !v11 )
        goto LABEL_14;
      *(_DWORD *)v11 = 56797;
    }
    else
    {
      v8 = v7 + 15;
      if ( v7 + 15 < v7 )
        v8 = 0xFFFFFFFFFFFFFF0LL;
      v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Memory = (WCHAR *)&Memory;
      if ( &v22 == (__int64 *)-80LL )
        goto LABEL_14;
      Memory = 52428;
    }
    p_Memory += 8;
  }
  else
  {
    p_Memory = 0LL;
  }
LABEL_14:
  v26 = p_Memory;
  if ( p_Memory )
  {
    for ( i = 0; i < (unsigned __int16)Memory; *(float *)&p_Memory[8 * i++ + 6] = fmaxf(v15[2], fminf(v15[3], v15[1])) )
    {
      v13 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, i);
      v14 = 2LL * i;
      *(_DWORD *)&p_Memory[4 * v14] = v13[2];
      *(_DWORD *)&p_Memory[4 * v14 + 2] = v13[3];
      *(_DWORD *)&p_Memory[4 * v14 + 4] = v13[4];
      v15 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, i);
    }
    v16 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v16 > 4u && tlgKeywordOn((__int64)v16, 2LL) )
    {
      v30 = p_Memory;
      v31 = 16 * (unsigned __int16)Memory;
      v27 = (struct IMMDevice **)&Memory;
      LODWORD(v28) = v17;
      v24[0] = *((_BYTE *)this + 300);
      v25 = v4;
      v26 = v33;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v18,
        (int)&unk_1801ADD83,
        v19,
        v20,
        &v26,
        (__int64)&v25,
        (__int64)v24,
        (__int64 *)&v27,
        (__int64 *)&v30);
    }
    freea(p_Memory);
  }
  return v4;
}
