/*
 * XREFs of ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1802AA87C
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801CC94C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x180297F6C (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1802993D0 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(CNaturalAnimation *this)
{
  struct CResource *v2; // rax
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  char v6; // cl
  int v7; // eax
  char v8; // al
  int v9; // xmm0_4
  int v10; // xmm1_4
  char v11; // al
  int v12; // xmm0_4
  unsigned int v14; // [rsp+20h] [rbp-19h]
  __int64 v15; // [rsp+30h] [rbp-9h] BYREF
  int v16; // [rsp+38h] [rbp-1h]
  CPathData *v17; // [rsp+70h] [rbp+37h] BYREF
  int v18; // [rsp+78h] [rbp+3Fh]

  if ( (*((_BYTE *)this + 572) & 0x30) == 0x30 )
    return 0;
  memset_0(&v15, 0, 0x40uLL);
  v17 = 0LL;
  v18 = 0;
  v2 = CBaseExpression::ResolveTargetNoRef(this);
  v3 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, __int64 *))(*(_QWORD *)v2 + 136LL))(
         v2,
         *((unsigned int *)this + 47),
         &v15);
  v4 = v3;
  if ( v3 < 0 )
  {
    v14 = 691;
    goto LABEL_7;
  }
  v5 = *((_QWORD *)this + 25);
  if ( !v5
    || !*(_BYTE *)(v5 + 4)
    || (v3 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v15, (const struct SubchannelMaskInfo *)v5),
        v4 = v3,
        v3 >= 0) )
  {
    if ( *((_DWORD *)this + 40) != 17 )
    {
      switch ( *((_DWORD *)this + 40) )
      {
        case 0x12:
          v11 = *((_BYTE *)this + 572);
          v12 = v15;
          if ( (v11 & 0x10) == 0 )
            *((_DWORD *)this + 80) = v15;
          if ( (v11 & 0x20) == 0 )
            *((_DWORD *)this + 86) = v12;
          break;
        case 0x23:
          v8 = *((_BYTE *)this + 572);
          v9 = HIDWORD(v15);
          v10 = v15;
          if ( (v8 & 0x10) == 0 )
          {
            *((_DWORD *)this + 80) = v15;
            *((_DWORD *)this + 81) = v9;
          }
          if ( (v8 & 0x20) == 0 )
          {
            *((_DWORD *)this + 86) = v10;
            *((_DWORD *)this + 87) = v9;
          }
          break;
        case 0x34:
          v6 = *((_BYTE *)this + 572);
          v7 = v16;
          if ( (v6 & 0x10) == 0 )
          {
            *((_QWORD *)this + 40) = v15;
            *((_DWORD *)this + 82) = v7;
          }
          if ( (v6 & 0x20) == 0 )
          {
            *((_QWORD *)this + 43) = v15;
            *((_DWORD *)this + 88) = v7;
          }
          break;
        default:
          v4 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2EDu, 0LL);
          goto LABEL_8;
      }
    }
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v17);
    return 0;
  }
  v14 = 702;
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v14, 0LL);
LABEL_8:
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v17);
  return v4;
}
