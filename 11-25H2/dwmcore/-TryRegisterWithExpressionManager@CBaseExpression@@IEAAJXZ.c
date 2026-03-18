/*
 * XREFs of ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800604F0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x18003B1F0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18005FFF0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x1801E1344 (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180245314 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1802458F4 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180245A14 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 * Callees:
 *     ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x18003AFE0 (-IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x180060BB0 (-IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x180060D00 (-IsReadyForEvaluation@CExpression@@MEBA_NXZ.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x180060D30 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingG.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180185B8C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1801992E4 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1801CBDD8 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpressio.c)
 *     ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1801F88A0 (-IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x180297F6C (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::TryRegisterWithExpressionManager(CBaseExpression *this)
{
  int v1; // edi
  bool (__fastcall *v3)(CBaseExpression *__hidden); // rax
  bool IsReadyForEvaluation; // al
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 *v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // edx
  CBaseExpression *v14; // r14
  __int64 v15; // r12
  _QWORD *v16; // rax
  void *v17; // r13
  _QWORD *inserted; // rdi
  HANDLE ProcessHeap; // rax
  _QWORD *v20; // rax
  void *v21; // r14
  __int64 v22; // rax
  bool (__fastcall *v23)(CKeyframeAnimation *); // rax
  bool IsAutoCompleteOnScreenOccluded; // al
  _QWORD *v25; // rsi
  _QWORD *v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  _QWORD *v29; // r14
  __int64 v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // edx
  struct CResource *v34; // rax
  struct _RTL_GENERIC_TABLE *v35; // rcx
  char *v36; // rdi
  char *v37; // rcx
  _QWORD *v38; // r13
  _QWORD *v39; // rdi
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // r8
  unsigned int v44; // eax
  void *v45; // rcx
  void *v46; // rcx
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  int v49; // r14d
  unsigned int v50; // eax
  int v51; // r14d
  unsigned int v52; // eax
  __int128 v53; // [rsp+30h] [rbp-59h]
  __int64 v54; // [rsp+40h] [rbp-49h] BYREF
  int v55; // [rsp+48h] [rbp-41h]
  void *v56; // [rsp+50h] [rbp-39h]
  __int128 Buffer; // [rsp+58h] [rbp-31h] BYREF
  void *v58; // [rsp+68h] [rbp-21h]
  int v59; // [rsp+70h] [rbp-19h] BYREF
  __int128 v60; // [rsp+78h] [rbp-11h] BYREF
  __int64 v61; // [rsp+88h] [rbp-1h]
  int v62; // [rsp+90h] [rbp+7h]
  char v64; // [rsp+F8h] [rbp+6Fh]
  unsigned __int8 NewElement; // [rsp+100h] [rbp+77h] BYREF
  CBaseExpression *v66; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = 0;
  if ( (*((_BYTE *)this + 224) & 0x10) == 0 )
  {
    v3 = *(bool (__fastcall **)(CBaseExpression *__hidden))(*(_QWORD *)this + 256LL);
    if ( v3 == CKeyframeAnimation::IsReadyForEvaluation )
    {
      IsReadyForEvaluation = CKeyframeAnimation::IsReadyForEvaluation(this);
    }
    else if ( v3 == CExpression::IsReadyForEvaluation )
    {
      IsReadyForEvaluation = CExpression::IsReadyForEvaluation(this);
    }
    else
    {
      IsReadyForEvaluation = v3 == CBaseExpression::IsReadyForEvaluation
                           ? CBaseExpression::IsReadyForEvaluation(this)
                           : v3(this);
    }
    if ( IsReadyForEvaluation )
    {
      v5 = *((_QWORD *)this + 3);
      v66 = this;
      v6 = *(_QWORD *)(v5 + 824);
      v54 = 0LL;
      v55 = 0;
      v56 = 0LL;
      v7 = *((_QWORD *)this + 7);
      if ( !v7 || !*(_BYTE *)(v7 + 18) )
        goto LABEL_37;
      v8 = *(__int64 **)(v6 + 392);
      v9 = *((unsigned int *)this + 46);
      HIDWORD(Buffer) = 0;
      v10 = v8;
      v11 = (__int64 *)v8[1];
      while ( !*((_BYTE *)v11 + 25) )
      {
        if ( *((_DWORD *)v11 + 7) >= (unsigned int)v9 )
        {
          v10 = v11;
          v11 = (__int64 *)*v11;
        }
        else
        {
          v11 = (__int64 *)v11[2];
        }
      }
      if ( v10 != v8 && !*((_BYTE *)v10 + 25) && (unsigned int)v9 >= *((_DWORD *)v10 + 7) )
      {
LABEL_37:
        v64 = 0;
        v31 = v6 + 32 * (*(unsigned int *)(v6 + 156) + 5LL);
        v32 = *(_DWORD *)(v31 + 24);
        v33 = v32 + 1;
        if ( v32 + 1 < v32 )
        {
          v51 = -2147024362;
          v52 = 181;
          v1 = -2147024362;
          goto LABEL_92;
        }
        if ( v33 <= *(_DWORD *)(v31 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)v31 + 8LL * v32) = this;
          *(_DWORD *)(v31 + 24) = v33;
          goto LABEL_12;
        }
        v51 = DynArrayImpl<1>::AddMultipleAndSet(v31, 8LL, v31, &v66);
        v1 = v51;
        if ( v51 < 0 )
        {
          v52 = 192;
LABEL_92:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, v52, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x5Eu, 0LL);
          goto LABEL_18;
        }
LABEL_12:
        v14 = v66;
        NewElement = 0;
        v58 = 0LL;
        v54 = *((_QWORD *)v66 + 24);
        *(_QWORD *)&v53 = v54;
        v55 = *((_DWORD *)v66 + 47);
        DWORD2(v53) = v55;
        v15 = *((_QWORD *)v66 + 25);
        Buffer = v53;
        v16 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v6 + 320), &Buffer);
        v17 = v58;
        inserted = v16;
        while ( v17 )
        {
          v46 = v17;
          v17 = (void *)*((_QWORD *)v17 + 2);
          operator delete(v46, 0x18uLL);
        }
        if ( inserted
          || (inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(v6 + 320), &v54, 0x18u, &NewElement)) != 0LL )
        {
          ProcessHeap = GetProcessHeap();
          v20 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
          if ( v20 )
          {
            *v20 = v15;
            v20[2] = 0LL;
            v20[1] = v14;
            v20[2] = inserted[2];
            inserted[2] = v20;
            if ( (*(_BYTE *)(v6 + 440) & 4) == 0 )
            {
              v34 = CBaseExpression::ResolveTargetNoRef(v66);
              if ( v34 )
              {
                v35 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)v34 + 6);
                v36 = 0LL;
                if ( v35 )
                {
                  v61 = 0LL;
                  v62 = 0;
                  v59 = v55;
                  v60 = 0LL;
                  v36 = (char *)RtlLookupElementGenericTable(v35, &v59);
                  DynArrayImpl<0>::~DynArrayImpl<0>(&v60);
                }
                v37 = v36 + 8;
                if ( !v36 )
                  v37 = 0LL;
                if ( v37 && *((_DWORD *)v37 + 6) )
                  *(_BYTE *)(v6 + 440) |= 4u;
              }
            }
            v1 = 0;
LABEL_18:
            v21 = v56;
            while ( v21 )
            {
              v45 = v21;
              v21 = (void *)*((_QWORD *)v21 + 2);
              operator delete(v45, 0x18uLL);
            }
            if ( v1 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xEBu, 0LL);
              return (unsigned int)v1;
            }
            v22 = *(_QWORD *)this;
            *((_BYTE *)this + 224) |= 0x10u;
            if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(v22 + 288))(this) )
              *(_BYTE *)(v6 + 440) |= 4u;
            v23 = *(bool (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 240LL);
            if ( v23 == CKeyframeAnimation::IsAutoCompleteOnScreenOccluded )
              IsAutoCompleteOnScreenOccluded = CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(this);
            else
              IsAutoCompleteOnScreenOccluded = v23(this);
            if ( !IsAutoCompleteOnScreenOccluded )
              return 0;
            v25 = (_QWORD *)(v6 + 520);
            v26 = (_QWORD *)v25[1];
            v27 = v25[3];
            v28 = 0x100000001B3LL
                * (HIBYTE(this) ^ (0x100000001B3LL
                                 * (BYTE6(this) ^ (0x100000001B3LL
                                                 * (BYTE5(this) ^ (0x100000001B3LL
                                                                 * (BYTE4(this) ^ (0x100000001B3LL
                                                                                 * (BYTE3(this) ^ (0x100000001B3LL
                                                                                                 * (BYTE2(this) ^ (0x100000001B3LL * (BYTE1(this) ^ (0x100000001B3LL * ((unsigned __int8)this ^ 0xCBF29CE484222325uLL)))))))))))))));
            v29 = *(_QWORD **)(v27 + 16 * (v25[6] & v28) + 8);
            if ( v29 != v26 )
            {
              while ( this != (CBaseExpression *)v29[2] )
              {
                if ( v29 == *(_QWORD **)(v27
                                       + 16
                                       * (v25[6] & (0x100000001B3LL
                                                  * (HIBYTE(this) ^ (0x100000001B3LL
                                                                   * (BYTE6(this) ^ (0x100000001B3LL
                                                                                   * (BYTE5(this) ^ (0x100000001B3LL * (BYTE4(this) ^ (0x100000001B3LL * (BYTE3(this) ^ (0x100000001B3LL * (BYTE2(this) ^ (0x100000001B3LL * (BYTE1(this) ^ (0x100000001B3LL * ((unsigned __int8)this ^ 0xCBF29CE484222325uLL)))))))))))))))))) )
                {
                  v26 = v29;
                  v38 = v29;
                  goto LABEL_49;
                }
                v29 = (_QWORD *)v29[1];
              }
              return 0;
            }
            v29 = (_QWORD *)v25[1];
            v38 = v29;
LABEL_49:
            if ( v25[2] == 0xAAAAAAAAAAAAAAALL )
              std::_Xlength_error("unordered_map/set too long");
            v39 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
            v39[2] = this;
            if ( (unsigned __int8)std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Check_rehash_required_1(v25) )
            {
              std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Rehash_for_1(v25);
              v29 = (_QWORD *)v25[1];
              v47 = (_QWORD *)(v25[3] + 16 * (v28 & v25[6]));
              v48 = (_QWORD *)v47[1];
              if ( v48 != v29 )
              {
                while ( 1 )
                {
                  v29 = v48;
                  if ( v39[2] == v48[2] )
                    break;
                  if ( v48 == (_QWORD *)*v47 )
                  {
                    v38 = v48;
                    v26 = v48;
                    goto LABEL_51;
                  }
                  v48 = (_QWORD *)v48[1];
                }
                v29 = (_QWORD *)*v48;
              }
              v38 = v29;
              v26 = v29;
            }
LABEL_51:
            v40 = (_QWORD *)v29[1];
            ++v25[2];
            *v39 = v26;
            v39[1] = v40;
            *v40 = v39;
            v29[1] = v39;
            v41 = v25[3];
            v42 = 2 * (v28 & v25[6]);
            v43 = *(_QWORD **)(v41 + 16 * (v28 & v25[6]));
            if ( v43 == (_QWORD *)v25[1] )
            {
              *(_QWORD *)(v41 + 16 * (v28 & v25[6])) = v39;
            }
            else
            {
              if ( v43 == v38 )
              {
                *(_QWORD *)(v41 + 16 * (v28 & v25[6])) = v39;
                return 0;
              }
              if ( *(_QWORD **)(v41 + 16 * (v28 & v25[6]) + 8) != v40 )
                return 0;
            }
            *(_QWORD *)(v41 + 8 * v42 + 8) = v39;
            return 0;
          }
          v44 = 1034;
        }
        else
        {
          v44 = 1030;
        }
        v1 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v44, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Bu, 0LL);
        if ( v64 )
          DynArray<CChannelContext *,1>::Remove(v6 + 288, &v66);
        else
          DynArray<CChannelContext *,1>::Remove(v6 + 32 * (*(unsigned int *)(v6 + 156) + 5LL), &v66);
        goto LABEL_18;
      }
      v12 = *(_DWORD *)(v6 + 312);
      v64 = 1;
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v49 = -2147024362;
        v50 = 181;
        v1 = -2147024362;
      }
      else
      {
        if ( v13 <= *(_DWORD *)(v6 + 308) )
        {
          *(_QWORD *)(*(_QWORD *)(v6 + 288) + 8LL * v12) = this;
          *(_DWORD *)(v6 + 312) = v13;
          goto LABEL_12;
        }
        v49 = DynArrayImpl<1>::AddMultipleAndSet(v6 + 288, 8LL, v9, &v66);
        v1 = v49;
        if ( v49 >= 0 )
          goto LABEL_12;
        v50 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, v50, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x5Au, 0LL);
      goto LABEL_18;
    }
  }
  return (unsigned int)v1;
}
