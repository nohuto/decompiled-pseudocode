/*
 * XREFs of ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180045BBC
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180045940 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18001B800 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001D8FC (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001D9BC (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001E904 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18001E978 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180044F40 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180045008 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x180045688 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180045730 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
        char *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a2,
        enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *a3)
{
  wchar_t *v5; // rax
  __int64 v6; // rbx
  signed int v7; // edi
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  const void *Buffer; // rax
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // edx
  char *v19; // rcx
  int v20; // esi
  int v21; // edi
  int v22; // esi
  ATL::Checked *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  const void *v27; // rax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int16 *v33[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  wchar_t *Str; // [rsp+78h] [rbp+48h] BYREF

  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &Str,
    a1);
  if ( *((int *)Str - 4) < 0 || (v5 = wcsstr(Str, L"_")) == 0LL || (v6 = v5 - Str, (_DWORD)v6 == -1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A5,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
  }
  else
  {
    v7 = 0;
    if ( (int)v6 >= 0 )
      v7 = v5 - Str;
    if ( v7 < *((_DWORD *)Str - 4) )
    {
      Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(&Str);
      ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((__int64 *)v33, Str, v7, Manager);
    }
    else
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        v33,
        &Str);
    }
    if ( ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber((char *)v33[0]) )
    {
      *(_DWORD *)_o__errno(v10, v9, v11) = 0;
      Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)v33);
      v14 = _o__wtoi(Buffer);
      if ( *(_DWORD *)_o__errno(v16, v15, v17) )
      {
        v12 = 690LL;
      }
      else if ( v14 <= 5 )
      {
        v18 = 0;
        if ( (int)v6 + 1 >= 0 )
          v18 = v6 + 1;
        v19 = (char *)Str;
        v20 = *((_DWORD *)Str - 4);
        if ( 0x7FFFFFFF - v18 < 0 )
          ATL::AtlThrowImpl(-2147024809);
        v21 = *((_DWORD *)Str - 4);
        if ( v18 <= v20 )
          v21 = v18;
        if ( v21 > 0 )
        {
          v22 = v20 - v21;
          v23 = (ATL::Checked *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)&Str);
          ATL::Checked::memmove_s(v23, (void *)(2LL * (v22 + 1)), (char *)v23 + 2 * v21, (void *)(2LL * (v22 + 1)));
          ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v22);
          v19 = (char *)Str;
        }
        if ( ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(v19) )
        {
          *(_DWORD *)_o__errno(v25, v24, v26) = 0;
          v27 = ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)&Str);
          v28 = (unsigned int)_o__wtoi(v27);
          if ( *(_DWORD *)_o__errno(v30, v29, v31) )
          {
            v12 = 708LL;
          }
          else
          {
            if ( (unsigned int)v28 <= eCapture )
            {
              *a2 = v28;
              *(_DWORD *)a3 = v14;
              ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v33);
              ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&Str);
              return 0LL;
            }
            v12 = 711LL;
          }
        }
        else
        {
          v12 = 702LL;
        }
      }
      else
      {
        v12 = 693LL;
      }
    }
    else
    {
      v12 = 683LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v33);
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&Str);
  return 2147942487LL;
}
