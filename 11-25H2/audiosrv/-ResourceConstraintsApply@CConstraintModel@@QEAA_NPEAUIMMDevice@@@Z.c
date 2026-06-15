/*
 * XREFs of ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x1801597F0
 * Callers:
 *     ?IsSubjectToConstraintResourceManagement@CConstraintModelResourceManager@@UEAA_NPEAUIMMDevice@@@Z @ 0x1800E9500 (-IsSubjectToConstraintResourceManagement@CConstraintModelResourceManager@@UEAA_NPEAUIMMDevice@@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800E6708 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800E6A38 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z @ 0x180157F84 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@AEAVEndpointInfo@@@Z.c)
 *     ?GetNext@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x18015855C (-GetNext@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180158698 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CConstraintModel::ResourceConstraintsApply(CConstraintModel *this, struct IMMDevice *a2)
{
  __int64 StartPosition; // rax
  __int64 v4; // rdi
  _QWORD *v5; // r14
  __int64 v6; // rsi
  __int64 v8; // [rsp+20h] [rbp-69h] BYREF
  __int128 v9; // [rsp+30h] [rbp-59h] BYREF
  __m128i si128; // [rsp+40h] [rbp-49h]
  __int128 v11; // [rsp+50h] [rbp-39h]
  __m128i v12; // [rsp+60h] [rbp-29h]
  __int128 v13; // [rsp+70h] [rbp-19h]
  __m128i v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  __int128 v17; // [rsp+A0h] [rbp+17h]

  if ( !*((_QWORD *)this + 17) && !*((_QWORD *)this + 26) )
    return 0;
  v9 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v9) = 0;
  v11 = 0LL;
  v12 = si128;
  LOWORD(v11) = 0;
  v13 = 0LL;
  v14 = si128;
  LOWORD(v13) = 0;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( (int)CConstraintModel::GetEndpointInformationFromId(this, a2, (struct EndpointInfo *)&v9) < 0 )
    goto LABEL_16;
  if ( *((_QWORD *)this + 17) )
  {
    StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition((__int64)this + 128);
    v8 = StartPosition;
    while ( StartPosition )
    {
      if ( !*(_DWORD *)(*(_QWORD *)StartPosition + 8LL)
        && EndpointInfo::operator==(*(_QWORD *)StartPosition + 16LL, (__int64)&v9) )
      {
        goto LABEL_18;
      }
      ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNext(
        (__int64)this + 128,
        &v8);
      StartPosition = v8;
    }
  }
  if ( !*((_QWORD *)this + 26) )
  {
LABEL_16:
    EndpointInfo::~EndpointInfo((EndpointInfo *)&v9);
    return 0;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD **)(*((_QWORD *)this + 25) + 8 * v4);
    v6 = 0LL;
    if ( v5[1] )
      break;
LABEL_15:
    if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 26) )
      goto LABEL_16;
  }
  while ( !EndpointInfo::operator==((__int64)&v9, *(_QWORD *)(*v5 + 8 * v6)) )
  {
    if ( (unsigned __int64)++v6 >= v5[1] )
      goto LABEL_15;
  }
LABEL_18:
  EndpointInfo::~EndpointInfo((EndpointInfo *)&v9);
  return 1;
}
