/*
 * XREFs of ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800312D4
 * Callers:
 *     ?IsFormatSupportedOnHostConnector@AudioEndpointInfo@@UEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180135050 (-IsFormatSupportedOnHostConnector@AudioEndpointInfo@@UEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 * Callees:
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180031680 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall EffectPack::IsFormatSupportedOnHostConnector(EffectPack *this, const struct WAVEFORMATEXTENSIBLE *a2)
{
  __int64 v2; // rsi
  char v5; // bl
  char *v6; // r8
  char v7; // si
  int i; // eax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  GUID v11; // xmm0
  GUID v12; // xmm1
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r12
  PROPVARIANT *v16; // rdx
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rdi
  _QWORD *v19; // r12
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  const struct tWAVEFORMATEX ***v22; // r14
  const struct tWAVEFORMATEX ***v23; // r15
  unsigned int m; // ecx
  int j; // eax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  int k; // eax
  PROPVARIANT *v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v35; // [rsp+30h] [rbp-20h]

  v2 = *((_QWORD *)this + 198);
  v5 = 0;
  if ( !IsCompressedSpatialFormat(&a2->Format) )
  {
    if ( *(_BYTE *)(v2 + 8235)
      || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)v2) )
    {
      if ( !*((_QWORD *)this + 180) )
        goto LABEL_74;
      SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)this + 181));
      if ( !*((_QWORD *)this + 182) )
        goto LABEL_74;
      SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)this + 183));
      if ( !*((_QWORD *)this + 184) )
        goto LABEL_74;
      SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)this + 185));
      if ( !*((_QWORD *)this + 214) )
        goto LABEL_74;
      v6 = (char *)*((_QWORD *)this + 215);
    }
    else
    {
      v6 = (char *)this + 2000;
    }
    v7 = 1;
    if ( *((_DWORD *)v6 + 2) )
    {
      for ( i = 0; i < *((_DWORD *)v6 + 2); ++i )
      {
        v9 = (_QWORD *)(*(_QWORD *)v6 + 16LL * i);
        v10 = *v9 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *v9 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v10 = v9[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( !v10 )
        {
          if ( i != -1 )
          {
            v11 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            goto LABEL_18;
          }
          break;
        }
      }
      for ( j = 0; j < *((_DWORD *)v6 + 2); ++j )
      {
        v27 = (_QWORD *)(*(_QWORD *)v6 + 16LL * j);
        v28 = *v27 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
        if ( *v27 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
          v28 = v27[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
        if ( !v28 )
        {
          if ( j != -1 )
          {
            v11 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            goto LABEL_18;
          }
          break;
        }
      }
      v11 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, 0LL);
LABEL_18:
      v12 = GUID_00000000_0000_0000_0000_000000000000;
    }
    else
    {
      v12 = GUID_00000000_0000_0000_0000_000000000000;
      v11 = GUID_00000000_0000_0000_0000_000000000000;
    }
    if ( *((_QWORD *)this + 236) )
    {
      v13 = *((_QWORD *)this + 237);
      v14 = 0;
      v15 = *((_QWORD *)this + 198);
      *(GUID *)pvar = v11;
      while ( 1 )
      {
        if ( v14 >= *(_DWORD *)(v13 + 16) )
          goto LABEL_26;
        v16 = (PROPVARIANT *)(*(_QWORD *)v13 + 16LL * v14);
        v17 = (_BYTE *)*v16 - (char *)pvar[0];
        if ( *v16 == pvar[0] )
          v17 = (_BYTE *)v16[1] - (char *)pvar[1];
        if ( !v17 )
          break;
        ++v14;
      }
      if ( v14 == -1 )
      {
LABEL_26:
        *(GUID *)pvar = v11;
        goto LABEL_27;
      }
      *(GUID *)pvar = v11;
      for ( k = 0; ; ++k )
      {
        if ( k >= *(_DWORD *)(v13 + 16) )
          goto LABEL_71;
        v30 = (PROPVARIANT *)(*(_QWORD *)v13 + 16LL * k);
        v31 = (_BYTE *)*v30 - (char *)pvar[0];
        if ( *v30 == pvar[0] )
          v31 = (_BYTE *)v30[1] - (char *)pvar[1];
        if ( !v31 )
          break;
      }
      if ( k == -1 )
      {
LABEL_71:
        *(GUID *)pvar = v12;
        goto LABEL_27;
      }
      if ( k < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v30);
        __debugbreak();
      }
      *(_OWORD *)pvar = *(_OWORD *)(*(_QWORD *)(v13 + 8) + 16LL * k);
LABEL_27:
      v18 = *(_QWORD **)(v15 + 272);
      v19 = *(_QWORD **)(v15 + 280);
      while ( v18 != v19 )
      {
        v20 = (_QWORD *)*v18;
        v21 = *(_QWORD *)*v18 - (unsigned __int64)pvar[0];
        if ( !v21 )
          v21 = v20[1] - (unsigned __int64)pvar[1];
        if ( !v21 )
        {
          v22 = (const struct tWAVEFORMATEX ***)v20[2];
          v23 = (const struct tWAVEFORMATEX ***)v20[3];
          while ( v22 != v23 )
          {
            if ( (unsigned int)CompareWaveFormat(&a2->Format, **v22) )
              return v7;
            ++v22;
          }
        }
        ++v18;
      }
      return 0;
    }
LABEL_74:
    _o_terminate();
    __debugbreak();
    JUMPOUT(0x180031678LL);
  }
  v35 = 0LL;
  *(_OWORD *)pvar = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(v2 + 72) + 40LL))(
         *(_QWORD *)(v2 + 72),
         &PKEY_Endpoint_SPDIFFormatSupport,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && LODWORD(pvar[1]) >= 0xC
    && LODWORD(pvar[1]) == 16LL * *(unsigned int *)(v35 + 8) + 12 )
  {
    for ( m = 0; m < *(_DWORD *)(v35 + 8); ++m )
    {
      v32 = 16LL * m;
      v33 = *(_QWORD *)&a2->SubFormat.Data1 - *(_QWORD *)(v32 + v35 + 12);
      if ( !v33 )
        v33 = *(_QWORD *)a2->SubFormat.Data4 - *(_QWORD *)(v32 + v35 + 20);
      if ( !v33 )
      {
        v5 = 1;
        break;
      }
    }
  }
  PropVariantClear(pvar);
  return v5;
}
