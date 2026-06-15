/*
 * XREFs of ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18016400C
 * Callers:
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x1801638D0 (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800EE200 (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x1800EE2C0 (-LogOutput@@YAXPEBGZZ.c)
 *     ?AddTail@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_ResourceInfo@@@Z @ 0x1801607D0 (-AddTail@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_Resource.c)
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBA_NPEBGAEAU_ResourceValue@@@Z @ 0x180161ECC (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBU_ResourceValue@@@Z @ 0x1801627E4 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x180163528 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseResourceGroup@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@HPEAGKPEAK2@Z @ 0x180164D4C (-ParseResourceGroup@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@HPEAGKPEAK2@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x180165084 (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseLimits(
        CConstraintModelXMLParser *a1,
        struct IXmlReader *a2,
        int *a3,
        __int64 a4,
        __int64 *a5)
{
  int *v5; // rsi
  int StartOrEndElement; // edi
  struct IXmlReader *v7; // r15
  CConstraintModelXMLParser *v8; // r12
  unsigned int v9; // r9d
  unsigned __int16 *v10; // rdx
  struct IXmlReader *v11; // r15
  CConstraintModelXMLParser *v12; // r12
  unsigned int v13; // r9d
  ATL::CAtlException *v15; // rbx
  ATL::CAtlException *v16; // rbx
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18; // rbx
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // rbx
  unsigned int v21; // [rsp+20h] [rbp-568h]
  int v22; // [rsp+44h] [rbp-544h]
  int v23; // [rsp+48h] [rbp-540h] BYREF
  int *v24; // [rsp+50h] [rbp-538h]
  int v25; // [rsp+58h] [rbp-530h] BYREF
  int v26; // [rsp+5Ch] [rbp-52Ch]
  __int64 v27; // [rsp+60h] [rbp-528h]
  struct IXmlReader *v28; // [rsp+70h] [rbp-518h]
  CConstraintModelXMLParser *v29; // [rsp+78h] [rbp-510h]
  __int64 *v30; // [rsp+80h] [rbp-508h]
  __int128 v31; // [rsp+88h] [rbp-500h] BYREF
  __int128 v32; // [rsp+98h] [rbp-4F0h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-4E0h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-4D0h] BYREF
  ATL::CAtlException *v35; // [rsp+C8h] [rbp-4C0h] BYREF
  ATL::CAtlException *v36; // [rsp+D0h] [rbp-4B8h] BYREF
  ATL::CAtlException *v37; // [rsp+D8h] [rbp-4B0h] BYREF
  ATL::CAtlException *v38; // [rsp+E0h] [rbp-4A8h] BYREF
  ATL::CAtlException *v39; // [rsp+E8h] [rbp-4A0h] BYREF
  ATL::CAtlException *v40; // [rsp+F0h] [rbp-498h] BYREF
  int v41; // [rsp+100h] [rbp-488h] BYREF
  unsigned int v42; // [rsp+104h] [rbp-484h] BYREF
  unsigned __int16 v43[258]; // [rsp+108h] [rbp-480h] BYREF
  __int64 v44; // [rsp+30Ch] [rbp-27Ch]
  int v45; // [rsp+314h] [rbp-274h]
  int v46; // [rsp+320h] [rbp-268h] BYREF
  unsigned int v47; // [rsp+324h] [rbp-264h] BYREF
  unsigned __int16 v48[258]; // [rsp+328h] [rbp-260h] BYREF
  __int64 v49; // [rsp+52Ch] [rbp-5Ch]
  int v50; // [rsp+534h] [rbp-54h]
  unsigned int v51; // [rsp+538h] [rbp-50h] BYREF

  v5 = a3;
  v29 = a1;
  v28 = a2;
  v24 = a3;
  v27 = a4;
  v30 = a5;
  StartOrEndElement = 0;
  LogOutput((size_t *)L"Parsing resource IDs and limits");
  v22 = 0;
  v23 = 1;
  while ( 1 )
  {
LABEL_2:
    if ( StartOrEndElement < 0 )
      return (unsigned int)StartOrEndElement;
    if ( !v23 )
      break;
    v7 = v28;
    v8 = v29;
    StartOrEndElement = CConstraintModelXMLParser::FindStartOrEndElement(v29, v28, L"Resource", L"Limits", 1, &v23);
    if ( StartOrEndElement >= 0 )
    {
      if ( !v23 )
        continue;
      memset_0(&v41, 0, 0x21CuLL);
      StartOrEndElement = CConstraintModelXMLParser::ParseSingleResource(v8, v7, v43, v9, &v42);
      if ( StartOrEndElement < 0 )
        continue;
      if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::Lookup(
             v27,
             v43,
             &v34) )
      {
        v10 = v43;
        goto LABEL_20;
      }
      LODWORD(v31) = *v5;
      *(_QWORD *)((char *)&v31 + 4) = 0LL;
      HIDWORD(v31) = -1;
      try
      {
        ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::SetAt(
          v27,
          v43,
          &v31);
      }
      catch ( ATL::CAtlException *v35 )
      {
        v15 = v35;
        if ( *(_DWORD *)v35 == -1073741571 )
          _o__resetstkoflw();
        StartOrEndElement = *(_DWORD *)v15;
        if ( *(int *)v15 < 0 )
          goto LABEL_25;
        v5 = v24;
      }
      try
      {
        v41 = *v5;
        v44 = 0LL;
        v45 = -1;
        StartOrEndElement = 0;
        ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::AddTail(v30, (__int64)&v41);
      }
      catch ( ATL::CAtlException *v36 )
      {
        v16 = v36;
        if ( *(_DWORD *)v36 == -1073741571 )
          _o__resetstkoflw();
        StartOrEndElement = *(_DWORD *)v16;
        if ( *(int *)v16 >= 0 )
        {
          v5 = v24;
          goto LABEL_14;
        }
LABEL_25:
        v5 = v24;
        continue;
      }
LABEL_14:
      ++*v5;
      ++v22;
      LogOutput((size_t *)L"Resource ID %s found with limit %d", v43, v42);
      continue;
    }
    StartOrEndElement = CConstraintModelXMLParser::FindStartOrEndElement(v8, v7, L"ResourceGroup", L"Limits", 1, &v23);
    if ( StartOrEndElement >= 0 )
    {
      if ( v23 )
      {
        memset_0(&v46, 0, 0x21CuLL);
        StartOrEndElement = CConstraintModelXMLParser::ParseResourceGroup(v8, v7, 1, v48, v21, &v47, &v51);
        if ( StartOrEndElement >= 0 )
        {
          if ( !ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::Lookup(
                  v27,
                  v48,
                  &v34) )
          {
            LODWORD(v32) = *v5;
            *(_QWORD *)((char *)&v32 + 4) = 1LL;
            HIDWORD(v32) = -1;
            try
            {
              ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::SetAt(
                v27,
                v48,
                &v32);
            }
            catch ( ATL::CAtlException *v37 )
            {
              v17 = v37;
              if ( *(_DWORD *)v37 == -1073741571 )
                _o__resetstkoflw();
              StartOrEndElement = *(_DWORD *)v17;
              if ( *(int *)v17 < 0 )
                goto LABEL_25;
              v5 = v24;
            }
            try
            {
              v46 = *v5;
              v49 = 1LL;
              v50 = -1;
              StartOrEndElement = 0;
              ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::AddTail(v30, (__int64)&v46);
            }
            catch ( ATL::CAtlException *v38 )
            {
              v18 = v38;
              if ( *(_DWORD *)v38 == -1073741571 )
                _o__resetstkoflw();
              StartOrEndElement = *(_DWORD *)v18;
              if ( *(int *)v18 < 0 )
                goto LABEL_25;
              v5 = v24;
            }
            ++*v5;
            ++v22;
            LogOutput((size_t *)L"Resource group ID %s found with limit %d", v48, v47);
            v26 = 0;
            v25 = 1;
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
LABEL_28:
                  if ( StartOrEndElement < 0 )
                    return (unsigned int)StartOrEndElement;
                  if ( !v25 )
                  {
                    if ( !v26 )
                      StartOrEndElement = -2147024809;
                    goto LABEL_2;
                  }
                  v11 = v28;
                  v12 = v29;
                  StartOrEndElement = CConstraintModelXMLParser::FindStartOrEndElement(
                                        v29,
                                        v28,
                                        L"Resource",
                                        L"ResourceGroup",
                                        0,
                                        &v25);
                  if ( StartOrEndElement >= 0 )
                  {
                    if ( v25 )
                    {
                      memset_0(&v41, 0, 0x21CuLL);
                      StartOrEndElement = CConstraintModelXMLParser::ParseSingleResource(v12, v11, v43, v13, &v42);
                      if ( StartOrEndElement >= 0 )
                        break;
                    }
                  }
                }
                if ( !ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::Lookup(
                        v27,
                        v43,
                        &v34) )
                  break;
                StartOrEndElement = -2147024713;
                LogError(
                  (size_t *)L"Repeated resource type limit declaration for resource ID %s in XML not allowed",
                  v43);
              }
              *(_QWORD *)&v33 = (unsigned int)*v5;
              DWORD2(v33) = 1;
              HIDWORD(v33) = v46;
              try
              {
                ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::SetAt(
                  v27,
                  v43,
                  &v33);
              }
              catch ( ATL::CAtlException *v39 )
              {
                v19 = v39;
                if ( *(_DWORD *)v39 == -1073741571 )
                  _o__resetstkoflw();
                StartOrEndElement = *(_DWORD *)v19;
                if ( *(int *)v19 < 0 )
                {
LABEL_39:
                  v5 = v24;
                  goto LABEL_28;
                }
                v5 = v24;
              }
              try
              {
                v41 = *v5;
                v44 = 0x100000000LL;
                v42 *= v47;
                v45 = v46;
                StartOrEndElement = 0;
                ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::AddTail(v30, (__int64)&v41);
              }
              catch ( ATL::CAtlException *v40 )
              {
                v20 = v40;
                if ( *(_DWORD *)v40 == -1073741571 )
                  _o__resetstkoflw();
                StartOrEndElement = *(_DWORD *)v20;
                if ( *(int *)v20 < 0 )
                  goto LABEL_39;
                v5 = v24;
              }
              ++*v5;
              ++v26;
              ++v22;
              LogOutput((size_t *)L"Resource ID %s in resource group ID %s found with limit %d", v43, v48, v42);
            }
          }
          v10 = v48;
LABEL_20:
          StartOrEndElement = -2147024713;
          LogError((size_t *)L"Repeated resource type limit declaration for resource ID %s in XML not allowed", v10);
        }
      }
    }
  }
  if ( (unsigned int)(v22 - 1) > 0xE )
    return (unsigned int)-2147024809;
  return (unsigned int)StartOrEndElement;
}
