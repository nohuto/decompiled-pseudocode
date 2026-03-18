/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B0590
 * Callers:
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800ADA40 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800AF200 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800AF9B0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800331B0 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801EBE64 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1802A873C (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x1802A89CC (-SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // rax
  float v9; // xmm2_4
  __int64 v10; // rax
  __int64 v11; // r14
  struct _RTL_GENERIC_TABLE *v12; // rcx
  char *v13; // rbx
  char *v14; // rax
  void *v15; // rsi
  char *v16; // rdx
  __int64 i; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  HANDLE ProcessHeap; // rax
  void *v22; // rcx
  signed int LastError; // eax
  float v24; // xmm1_4
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm0_4
  __int64 v28; // r9
  char v29; // dl
  char v30; // al
  float v31; // xmm6_4
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // r8
  __int64 v38; // r9
  DWORD v39; // xmm4_4
  int v40; // r8d
  int v41; // r9d
  unsigned int lpArgToCompletionRoutine; // [rsp+20h] [rbp-39h]
  int TracingCookie; // [rsp+40h] [rbp-19h] BYREF
  LARGE_INTEGER DueTime; // [rsp+48h] [rbp-11h] BYREF
  int Buffer; // [rsp+50h] [rbp-9h] BYREF
  LPVOID lpMem[2]; // [rsp+58h] [rbp-1h]
  __int64 v47; // [rsp+68h] [rbp+Fh]
  int v48; // [rsp+70h] [rbp+17h]
  void *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( a3 != 18 )
  {
    if ( a3 == 42 )
    {
      if ( a2 == 15 )
      {
        v31 = *a4;
        if ( *a4 > 0.0 )
        {
          v32 = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, *a4);
          v6 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x822u, 0LL);
            return v6;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 4LL) & 0x40000000) != 0
            && (unsigned int)dword_180404D18 > 4
            && (unsigned __int8)tlgKeywordOn(&dword_180404D18, 4LL, v33, v34) )
          {
            TracingCookie = LODWORD(v31);
            DueTime.LowPart = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_180404D18,
              (unsigned int)&unk_1803D9140,
              v35,
              v36,
              (__int64)&DueTime,
              (__int64)&TracingCookie);
          }
        }
        return 0;
      }
      if ( a2 == 29 )
      {
        if ( *a4 >= 1.0 )
        {
          CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, *a4);
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 4LL) & 0x40000000) != 0
            && (unsigned int)dword_180404D18 > 4
            && (unsigned __int8)tlgKeywordOn(&dword_180404D18, 4LL, v37, v38) )
          {
            DueTime.LowPart = v39;
            TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_180404D18,
              (unsigned int)&unk_1803D9182,
              v40,
              v41,
              (__int64)&TracingCookie,
              (__int64)&DueTime);
          }
        }
        return 0;
      }
    }
    goto LABEL_7;
  }
  if ( a2 != 23 )
  {
    if ( a2 == 30 )
    {
      v24 = *a4;
      if ( *(float *)(a1 + 480) != *a4 )
      {
        if ( v24 != 0.0 )
        {
          if ( v24 >= 0.0 )
          {
            v26 = fmaxf(v24, 0.0625);
            v27 = FLOAT_16_0;
          }
          else
          {
            v26 = fmaxf(v24, -16.0);
            v27 = FLOAT_N0_0625;
          }
          v24 = fminf(v27, v26);
        }
        v28 = *(_QWORD *)(a1 + 352);
        v29 = 16;
        *(float *)(a1 + 480) = v24;
        v30 = *(_BYTE *)(v28 + 140);
        if ( v24 >= 0.0 )
          v29 = 0;
        *(_BYTE *)(v28 + 96) = v24 < 0.0;
        *(_BYTE *)(v28 + 140) = v30 & 0xEF | v29;
        CResource::InvalidateAnimationSources((CResource *)a1, 0x1Eu);
      }
      return 0;
    }
    if ( a2 == 32 )
    {
      v9 = *a4;
      if ( *(float *)(a1 + 484) != *a4 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        *(_BYTE *)(a1 + 536) |= 4u;
        *(float *)(a1 + 484) = fminf(1.0, fmaxf(v9, 0.0));
        v11 = *(_QWORD *)(v10 + 888);
        if ( v11 == *(_QWORD *)(v10 + 896) )
        {
          v25 = v11 + 1;
          v11 = 1LL;
          if ( v25 )
            v11 = v25;
        }
        v12 = *(struct _RTL_GENERIC_TABLE **)(a1 + 48);
        v13 = 0LL;
        if ( v12 )
        {
          *(_OWORD *)lpMem = 0LL;
          v47 = 0LL;
          v48 = 0;
          Buffer = 32;
          v14 = (char *)RtlLookupElementGenericTable(v12, &Buffer);
          v15 = lpMem[0];
          v13 = v14;
          if ( lpMem[0] != lpMem[1] )
          {
            if ( lpMem[0] )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v15);
            }
            lpMem[0] = 0LL;
          }
        }
        v16 = v13 + 8;
        if ( !v13 )
          v16 = 0LL;
        if ( v16 )
        {
          for ( i = 0LL;
                (unsigned int)i < *((_DWORD *)v16 + 6);
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8 * v18) + 232LL) = v11 )
          {
            v18 = (unsigned int)i;
            i = (unsigned int)(i + 1);
          }
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 824LL) + 440LL) |= 2u;
          v19 = *(_QWORD *)(a1 + 24);
          (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v19 + 312) + 24LL))(
            *(_QWORD *)(v19 + 312),
            v16,
            i);
          if ( *(_DWORD *)(v19 + 248) )
          {
            v22 = *(void **)(v19 + 240);
            *(_DWORD *)(v19 + 248) = 0;
            DueTime.QuadPart = 0LL;
            if ( !SetWaitableTimerEx(v22, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
            {
              LastError = GetLastError();
              if ( LastError > 0 )
                LastError = (unsigned __int16)LastError | 0x80070000;
              if ( LastError >= 0 )
                LastError = -2003304445;
              ModuleFailFastForHRESULT(LastError, retaddr);
            }
          }
          _m_prefetchw((const void *)(v19 + 252));
          if ( (~(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(v19 + 252), 8u) & 8) != 0
            && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            TracingCookie = 8;
            lpMem[1] = &TracingCookie;
            v47 = 4LL;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_SCHEDULED_COMPOSITION_REASON,
              v20,
              2LL,
              &Buffer);
          }
        }
      }
      return 0;
    }
LABEL_7:
    v6 = -2147024809;
    lpArgToCompletionRoutine = 2130;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, lpArgToCompletionRoutine, 0LL);
    return v6;
  }
  v5 = *(_QWORD *)(a1 + 408);
  *(float *)(a1 + 512) = fminf(fmaxf(*a4, 0.0), 1.0);
  if ( *(_BYTE *)(v5 + 294) && *(_DWORD *)(a1 + 516) )
  {
    if ( !*(_QWORD *)(a1 + 352) )
    {
      v6 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x2D5u, 0LL);
      lpArgToCompletionRoutine = 2073;
      goto LABEL_8;
    }
    v8 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 520) = 0;
    *(_BYTE *)(*(_QWORD *)(v8 + 824) + 440LL) |= 2u;
  }
  return 0;
}
