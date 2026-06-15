/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800EDCA8
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800EB570 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800EDCA8 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800EE800 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800A035C (--1-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     ??0EndpointInfo@@QEAA@AEBV0@@Z @ 0x1800EA654 (--0EndpointInfo@@QEAA@AEBV0@@Z.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800EAE84 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800ED3A8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800EDCA8 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EF23C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18016288C (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
        CConstraintModelResourceManager *a1,
        const struct EndpointInfo *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  int v7; // r13d
  const struct EndpointInfo *v8; // r15
  unsigned int v9; // r12d
  _UNKNOWN **v10; // rcx
  int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  _QWORD *v19; // rcx
  unsigned __int64 v20; // r14
  unsigned int v21; // esi
  CConstraintModelResourceManager *v22; // rdi
  __int64 v23; // rdx
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v27; // [rsp+38h] [rbp-C8h]
  unsigned int v28; // [rsp+3Ch] [rbp-C4h]
  const struct EndpointInfo *v29; // [rsp+40h] [rbp-C0h]
  CConstraintModelResourceManager *v30; // [rsp+48h] [rbp-B8h]
  _QWORD *v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h]
  int v34; // [rsp+68h] [rbp-98h]
  _QWORD *v35; // [rsp+70h] [rbp-90h]
  const struct EndpointInfo *v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[128]; // [rsp+80h] [rbp-80h] BYREF

  v28 = a4;
  v27 = a3;
  v36 = a2;
  v30 = a1;
  EndpointInfo::EndpointInfo((EndpointInfo *)v37, a2);
  v7 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v8 = 0LL;
  v9 = -1;
  if ( a6 <= 0x14 )
  {
    v12 = *((_QWORD *)a1 + 7);
    if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *>>::SetCount(
                             &v31,
                             *(_QWORD *)(v12 + 208)) )
      ATL::AtlThrowImpl(-2147024882);
    v13 = *(_QWORD *)(v12 + 208);
    v14 = v31;
    if ( v13 )
    {
      v15 = v31;
      v16 = *(_QWORD *)(v12 + 200) - (_QWORD)v31;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + v16);
        ++v15;
        --v13;
      }
      while ( v13 );
    }
    v11 = 0;
    v17 = v32;
    if ( v32 )
    {
      v18 = 0LL;
      do
      {
        if ( v7 )
          goto LABEL_23;
        if ( v18 >= v17 )
          ATL::AtlThrowImpl(-2147024809);
        v19 = (_QWORD *)v14[v18];
        v35 = v19;
        v8 = 0LL;
        v29 = 0LL;
        v9 = -1;
        v20 = 0LL;
        if ( v19[1] )
        {
          while ( 1 )
          {
            v8 = *(const struct EndpointInfo **)(*v19 + 8 * v20);
            if ( EndpointInfo::operator==((__int64)v37, (__int64)v8) )
            {
              v7 = 1;
            }
            else
            {
              v25 = 0;
              v26 = -1;
              CConstraintModelResourceManager::GetEndpointStatus((struct _RTL_CRITICAL_SECTION *)v30, v8, &v25, &v26);
              if ( v25 )
              {
                v29 = v8;
                v9 = v26;
                goto LABEL_19;
              }
            }
            v8 = v29;
LABEL_19:
            ++v20;
            v19 = v35;
            if ( v20 >= v35[1] )
            {
              v14 = v31;
              break;
            }
          }
        }
        ++v18;
      }
      while ( v18 < v17 );
      if ( v7 )
      {
LABEL_23:
        if ( v8 )
        {
          v21 = v27;
          if ( (v9 & 0xFFFFFFFE) >= (v27 & 0xFFFFFFFE) )
          {
            if ( !a5 )
            {
              v22 = v30;
              v11 = CConstraintModelResourceManager::RevokeEndpointResources(v30, v8);
              if ( v11 >= 0 )
              {
                if ( a6 )
                  Sleep(0x32u);
                v11 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(v22, v36, v21, v28, 0, a6 + 1);
              }
            }
          }
          else
          {
            v11 = -2005139334;
          }
        }
      }
    }
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_34;
  }
  v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_a5774a8bafb0327b6b857065801df2a8_Traceguids, a6);
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v11 = -2005139334;
LABEL_34:
  if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x100) != 0 && *((_BYTE *)v10 + 25) >= 4u )
    WPP_SF_D((__int64)v10[2], 0x1Fu, (__int64)&WPP_a5774a8bafb0327b6b857065801df2a8_Traceguids, v11);
  ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>::~CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>((void **)&v31);
  EndpointInfo::~EndpointInfo((EndpointInfo *)v37, v23);
  return (unsigned int)v11;
}
