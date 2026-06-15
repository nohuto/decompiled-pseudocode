/*
 * XREFs of ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x1801625A0
 * Callers:
 *     ?IsSubjectToConstraintResourceManagement@CConstraintModelResourceManager@@UEAA_NPEAUIMMDevice@@@Z @ 0x1800EE1F0 (-IsSubjectToConstraintResourceManagement@CConstraintModelResourceManager@@UEAA_NPEAUIMMDevice@@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800EAE84 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180160D34 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ?GetNext@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x18016130C (-GetNext@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180161448 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CConstraintModel::ResourceConstraintsApply(CConstraintModel *this, struct IMMDevice *a2)
{
  __int64 v3; // rdx
  __int64 StartPosition; // rax
  __int64 v5; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v9; // [rsp+20h] [rbp-69h] BYREF
  __int128 v10; // [rsp+30h] [rbp-59h] BYREF
  __m128i si128; // [rsp+40h] [rbp-49h]
  __int128 v12; // [rsp+50h] [rbp-39h]
  __m128i v13; // [rsp+60h] [rbp-29h]
  __int128 v14; // [rsp+70h] [rbp-19h]
  __m128i v15; // [rsp+80h] [rbp-9h]
  int v16; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  __int128 v18; // [rsp+A0h] [rbp+17h]

  if ( !*((_QWORD *)this + 17) && !*((_QWORD *)this + 26) )
    return 0;
  v10 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v10) = 0;
  v12 = 0LL;
  v13 = si128;
  LOWORD(v12) = 0;
  v14 = 0LL;
  v15 = si128;
  LOWORD(v14) = 0;
  v16 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( (int)CConstraintModel::GetEndpointInformationFromId(this, a2, (struct EndpointInfo *)&v10) < 0 )
    goto LABEL_16;
  if ( *((_QWORD *)this + 17) )
  {
    StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition((__int64)this + 128);
    v9 = StartPosition;
    while ( StartPosition )
    {
      if ( !*(_DWORD *)(*(_QWORD *)StartPosition + 8LL)
        && EndpointInfo::operator==(*(_QWORD *)StartPosition + 16LL, (__int64)&v10) )
      {
        goto LABEL_18;
      }
      ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNext(
        (__int64)this + 128,
        &v9);
      StartPosition = v9;
    }
  }
  if ( !*((_QWORD *)this + 26) )
  {
LABEL_16:
    EndpointInfo::~EndpointInfo((EndpointInfo *)&v10, v3);
    return 0;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = *(_QWORD **)(*((_QWORD *)this + 25) + 8 * v5);
    v7 = 0LL;
    if ( v6[1] )
      break;
LABEL_15:
    if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 26) )
      goto LABEL_16;
  }
  while ( !EndpointInfo::operator==((__int64)&v10, *(_QWORD *)(*v6 + 8 * v7)) )
  {
    if ( (unsigned __int64)++v7 >= v6[1] )
      goto LABEL_15;
  }
LABEL_18:
  EndpointInfo::~EndpointInfo((EndpointInfo *)&v10, v3);
  return 1;
}
