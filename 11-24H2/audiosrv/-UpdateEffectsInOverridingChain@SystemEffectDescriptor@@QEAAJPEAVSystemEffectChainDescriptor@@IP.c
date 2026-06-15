/*
 * XREFs of ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180039868
 * Callers:
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003B694 (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 *     _lambda_2d17c7b0a2fd240c2934c03e6d818fe2_::operator() @ 0x180130B7C (_lambda_2d17c7b0a2fd240c2934c03e6d818fe2_--operator().c)
 *     _lambda_337836fad6503ddf3ac4b1bf88bbe274_::operator() @ 0x180130D5C (_lambda_337836fad6503ddf3ac4b1bf88bbe274_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180032B38 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18003A780 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        __int64 a1,
        SystemEffectChainDescriptor *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6)
{
  SystemEffectChainDescriptor *v6; // rax
  char *v8; // r14
  int v9; // esi
  unsigned int v10; // ebx
  int v11; // edi
  __int64 v12; // r12
  __int64 v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  void *v19; // rdi
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  char *v25; // rax
  unsigned int i; // ebx
  int j; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  const struct _GUID *v30; // rcx
  unsigned int v31; // r9d
  void *Block; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-38h]
  int v35; // [rsp+3Ch] [rbp-34h]
  struct _GUID *v36; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-28h]
  int v38; // [rsp+4Ch] [rbp-24h]
  __int64 v39; // [rsp+50h] [rbp-20h] BYREF
  __int64 v40; // [rsp+58h] [rbp-18h]
  void *v41; // [rsp+60h] [rbp-10h] BYREF
  int v42; // [rsp+68h] [rbp-8h]
  int v43; // [rsp+6Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v6 = a2;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v8 = 0LL;
  v39 = 0LL;
  v9 = 0;
  v40 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  while ( v11 < *((_DWORD *)v6 + 2) )
  {
    v13 = *(_QWORD *)(a1 + 16);
    if ( v13 )
    {
      v14 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, (unsigned int)v11);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v13, v14) != -1 )
      {
        v15 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, (unsigned int)v11);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v41, v15) )
        {
          v16 = 250LL;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          break;
        }
        goto LABEL_29;
      }
      v6 = a2;
    }
    if ( v11 < 0 || v11 >= *((_DWORD *)v6 + 2) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
      goto LABEL_32;
    }
    v23 = *(_QWORD *)v6;
    if ( v9 == v10 )
    {
      if ( v10 )
      {
        v10 = 2 * v9;
        if ( (v9 & 0x40000000) != 0 )
          goto LABEL_30;
      }
      else
      {
        v10 = 1;
      }
      if ( v10 > 0x7FFFFFFuLL || (v24 = _o__recalloc(v8, v10, 16LL)) == 0 )
      {
LABEL_30:
        v16 = 255LL;
        goto LABEL_7;
      }
      HIDWORD(v40) = v10;
      v8 = (char *)v24;
      v39 = v24;
    }
    v25 = &v8[16 * v9];
    if ( v25 )
      *(_OWORD *)v25 = *(_OWORD *)(v12 + v23);
    LODWORD(v40) = ++v9;
LABEL_29:
    ++v11;
    v12 += 16LL;
    v6 = a2;
  }
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  Block = 0LL;
  v34 = 0;
  v35 = 0;
  v17 = *(_QWORD *)(a1 + 16);
  v11 = a5;
  if ( v17 )
  {
    if ( !a5 )
    {
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, (__int64 *)(v17 + 40));
      if ( v34 != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL) )
      {
        v18 = 275LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_13;
      }
    }
  }
LABEL_32:
  for ( i = 0; i < a3; ++i )
  {
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v36, a4 + 16LL * i) )
    {
      v18 = 280LL;
      goto LABEL_12;
    }
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&Block, a4 + 16LL * i) )
    {
      v18 = 281LL;
      goto LABEL_12;
    }
  }
  if ( *(_QWORD *)(a1 + 16) && v11 == 1 )
  {
    for ( j = 0; ; ++j )
    {
      v28 = *(_QWORD *)(a1 + 16);
      if ( j >= *(_DWORD *)(v28 + 48) )
        break;
      if ( j < 0 || j >= *(_DWORD *)(v28 + 48) )
      {
        ATL::_AtlRaiseException(0xC000008C, v17);
        __debugbreak();
      }
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            &Block,
                            *(_QWORD *)(v28 + 40) + 16LL * j) )
      {
        v18 = 289LL;
        goto LABEL_12;
      }
    }
  }
LABEL_13:
  v19 = Block;
  if ( v42 > 0 )
  {
    v20 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v34, (const struct _GUID *)Block, 0, 0LL);
    v21 = v20;
    if ( v20 < 0 )
    {
      v22 = 391LL;
      goto LABEL_56;
    }
  }
  if ( v9 <= 0
    || (a6 != 1 || (v29 = *(_QWORD *)(a1 + 16)) == 0
      ? (v30 = 0LL, v31 = 0)
      : (v30 = *(const struct _GUID **)(v29 + 56), v31 = *(_DWORD *)(v29 + 64)),
        v20 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v37, v36, v31, v30),
        v21 = v20,
        v20 >= 0) )
  {
    if ( v19 )
      free(v19);
    if ( v36 )
      free(v36);
    if ( v8 )
      free(v8);
    if ( v41 )
      free(v41);
    return 0LL;
  }
  else
  {
    v22 = 398LL;
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v20);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v36);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v39);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v41);
    return v21;
  }
}
