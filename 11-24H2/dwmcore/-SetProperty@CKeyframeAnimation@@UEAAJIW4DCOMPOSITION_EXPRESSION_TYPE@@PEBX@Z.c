/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18007E420
 * Callers:
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x18007BA60 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x18007D1C0 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18007D840 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801E2154 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1801EF690 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x18029E968 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x18029EBFC (-SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rax
  __int64 v7; // rax
  float v8; // xmm2_4
  __int64 v9; // rax
  __int64 v10; // rbp
  struct _RTL_GENERIC_TABLE *v11; // rcx
  char *v12; // rdi
  char *v13; // rax
  void *v14; // rsi
  char *v15; // rdx
  unsigned int i; // r8d
  __int64 v17; // rcx
  HANDLE ProcessHeap; // rax
  float v19; // xmm1_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // r8
  char v24; // cl
  char v25; // al
  float v26; // xmm6_4
  int v27; // eax
  unsigned int v28; // edi
  int v29; // r8d
  int v30; // r9d
  float v31; // xmm4_4
  int v32; // r8d
  int v33; // r9d
  unsigned int TracingCookie; // [rsp+30h] [rbp-58h] BYREF
  int Buffer; // [rsp+38h] [rbp-50h] BYREF
  LPVOID lpMem[2]; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+50h] [rbp-38h]
  int v38; // [rsp+58h] [rbp-30h]
  float v39; // [rsp+A0h] [rbp+18h] BYREF

  if ( a3 == 18 )
  {
    switch ( a2 )
    {
      case 23:
        v5 = *(_QWORD *)(a1 + 408);
        *(float *)(a1 + 512) = fminf(fmaxf(*a4, 0.0), 1.0);
        if ( *(_BYTE *)(v5 + 294) && *(_DWORD *)(a1 + 516) )
        {
          if ( !*(_QWORD *)(a1 + 352) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x2D5u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x819u, 0LL);
            return 2147500037LL;
          }
          v7 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 520) = 0;
          *(_BYTE *)(*(_QWORD *)(v7 + 824) + 440LL) |= 2u;
        }
        return 0LL;
      case 30:
        v19 = *a4;
        if ( *(float *)(a1 + 480) != *a4 )
        {
          if ( v19 != 0.0 )
          {
            if ( v19 >= 0.0 )
            {
              v21 = fmaxf(v19, 0.0625);
              v22 = FLOAT_16_0;
            }
            else
            {
              v21 = fmaxf(v19, -16.0);
              v22 = FLOAT_N0_0625;
            }
            v19 = fminf(v22, v21);
          }
          v23 = *(_QWORD *)(a1 + 352);
          *(float *)(a1 + 480) = v19;
          v24 = 16;
          v25 = *(_BYTE *)(v23 + 140);
          if ( v19 >= 0.0 )
            v24 = 0;
          *(_BYTE *)(v23 + 96) = v19 < 0.0;
          *(_BYTE *)(v23 + 140) = v25 & 0xEF | v24;
          CResource::InvalidateAnimationSources((CResource *)a1, 0x1Eu);
        }
        return 0LL;
      case 32:
        v8 = *a4;
        if ( *(float *)(a1 + 484) != *a4 )
        {
          v9 = *(_QWORD *)(a1 + 24);
          *(_BYTE *)(a1 + 536) |= 4u;
          *(float *)(a1 + 484) = fminf(1.0, fmaxf(v8, 0.0));
          v10 = *(_QWORD *)(v9 + 888);
          if ( v10 == *(_QWORD *)(v9 + 896) )
          {
            v20 = v10 + 1;
            v10 = 1LL;
            if ( v20 )
              v10 = v20;
          }
          v11 = *(struct _RTL_GENERIC_TABLE **)(a1 + 48);
          v12 = 0LL;
          if ( v11 )
          {
            *(_OWORD *)lpMem = 0LL;
            v37 = 0LL;
            v38 = 0;
            Buffer = 32;
            v13 = (char *)RtlLookupElementGenericTable(v11, &Buffer);
            v14 = lpMem[0];
            v12 = v13;
            if ( lpMem[0] != lpMem[1] )
            {
              if ( lpMem[0] )
              {
                ProcessHeap = GetProcessHeap();
                HeapFree(ProcessHeap, 0, v14);
              }
              lpMem[0] = 0LL;
            }
          }
          v15 = v12 + 8;
          if ( !v12 )
            v15 = 0LL;
          if ( v15 )
          {
            for ( i = 0; i < *((_DWORD *)v15 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8 * v17) + 232LL) = v10 )
              v17 = i++;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 824LL) + 440LL) |= 2u;
            CComposition::ScheduleCompositionPass(*(_QWORD *)(a1 + 24), 0LL, 8LL);
          }
        }
        return 0LL;
    }
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x852u, 0LL);
    return 2147942487LL;
  }
  if ( a3 != 42 )
    goto LABEL_6;
  if ( a2 != 15 )
  {
    if ( a2 == 29 )
    {
      if ( *a4 >= 1.0 )
      {
        CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, *a4);
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 4LL) & 0x40000000) != 0
          && (unsigned int)dword_1803F8D18 > 4
          && (unsigned __int8)tlgKeywordOn(&dword_1803F8D18, 4LL) )
        {
          v39 = v31;
          TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1803F8D18,
            (unsigned int)&unk_1803CE169,
            v32,
            v33,
            (__int64)&TracingCookie,
            (__int64)&v39);
        }
      }
      return 0LL;
    }
    goto LABEL_6;
  }
  v26 = *a4;
  if ( *a4 <= 0.0 )
    return 0LL;
  v27 = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, *a4);
  v28 = v27;
  if ( v27 >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 4LL) & 0x40000000) != 0
      && (unsigned int)dword_1803F8D18 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1803F8D18, 4LL) )
    {
      v39 = v26;
      TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1803F8D18,
        (unsigned int)&unk_1803CE20C,
        v29,
        v30,
        (__int64)&TracingCookie,
        (__int64)&v39);
    }
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x822u, 0LL);
  return v28;
}
