/*
 * XREFs of ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180012630
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ?IsOfType@CBaseExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180012990 (-IsOfType@CBaseExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180013310 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1801AAD4C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18021BE64 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionManager::UpdateExpressionsWorker(CExpressionManager *this, char a2)
{
  unsigned int v4; // r14d
  unsigned int v5; // edx
  unsigned int v6; // edi
  CBaseExpression *v7; // rbx
  __int64 (__fastcall *v8)(CBaseExpression *, __int64); // rax
  char v9; // al
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  LARGE_INTEGER v13; // rbx
  unsigned int v14; // edx
  unsigned int i; // edi
  CBaseExpression *v16; // rcx
  int v17; // eax
  LONGLONG v18; // rax
  char *v19; // rbx
  unsigned int v20; // ebp
  char *j; // rdi
  LARGE_INTEGER v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r8
  char v25; // al
  int v26; // eax
  bool v27; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-50h] BYREF
  char v29; // [rsp+40h] [rbp-48h]
  int v30; // [rsp+41h] [rbp-47h]
  __int16 v31; // [rsp+45h] [rbp-43h]
  char v32; // [rsp+47h] [rbp-41h]

  v4 = 0;
  if ( (*((_BYTE *)this + 440) & 8) != 0 )
  {
    v13.QuadPart = 0LL;
    PerformanceCount.QuadPart = 0LL;
    if ( CCommonRegistryData::LogExpressionPerfStats )
    {
      QpcStopwatch::Start((QpcStopwatch *)&PerformanceCount);
      v13 = PerformanceCount;
    }
    v14 = *((_DWORD *)this + 39);
    for ( i = 0; i < *((_DWORD *)this + 8 * v14 + 46); v14 = *((_DWORD *)this + 39) )
    {
      v16 = *(CBaseExpression **)(*((_QWORD *)this + 4 * v14 + 20) + 8LL * i);
      if ( v16 )
      {
        PerformanceCount = *(LARGE_INTEGER *)((char *)this + 24);
        v30 = 0;
        v31 = 0;
        v32 = 0;
        v29 = a2;
        CBaseExpression::InsertInOrder(v16, (const struct ExpressionWalkContext *)&PerformanceCount);
      }
      ++i;
    }
    *((_DWORD *)this + 8 * v14 + 46) = 0;
    v17 = 1 - *((_DWORD *)this + 39);
    *((_BYTE *)this + 440) &= ~8u;
    *((_DWORD *)this + 39) = v17;
    if ( CCommonRegistryData::LogExpressionPerfStats )
    {
      if ( v13.QuadPart )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        v18 = PerformanceCount.QuadPart - v13.QuadPart;
      }
      else
      {
        v18 = 0LL;
      }
      ++*((_DWORD *)this + 22);
      *((_QWORD *)this + 15) += v18;
    }
  }
  v5 = *((_DWORD *)this + 39);
  v6 = 0;
  *(_QWORD *)((char *)this + 444) = 0LL;
  if ( *((_DWORD *)this + 8 * v5 + 46) )
  {
    while ( 1 )
    {
      v7 = *(CBaseExpression **)(*((_QWORD *)this + 4 * v5 + 20) + 8LL * v6);
      if ( !v7 )
      {
        ++v4;
        goto LABEL_11;
      }
      v8 = *(__int64 (__fastcall **)(CBaseExpression *, __int64))(*(_QWORD *)v7 + 64LL);
      if ( (char *)v8 == (char *)&CExpression::IsOfType )
      {
        if ( (unsigned __int8)CBaseExpression::IsOfType(v7, 92LL) )
          goto LABEL_6;
      }
      else
      {
        if ( (char *)v8 == (char *)CKeyframeAnimation::IsOfType )
          v25 = CKeyframeAnimation::IsOfType(v7, 92LL);
        else
          v25 = v8(v7, 92LL);
        if ( v25 )
        {
LABEL_6:
          v9 = *((_BYTE *)v7 + 536);
          if ( (v9 & 1) != 0 || (v9 & 6) != 0 )
          {
            v10 = *((_QWORD *)v7 + 7);
            if ( v10 )
            {
              ++*(_DWORD *)(v10 + 116);
              *(_BYTE *)(*((_QWORD *)v7 + 3) + 6465LL) = 1;
            }
          }
        }
      }
      v11 = *((_QWORD *)this + 3);
      v27 = 0;
      CBaseExpression::CalculateValue(v7, (CExpressionManager *)((char *)this + 32), v11, &v27);
      *((_BYTE *)this + 440) |= 2 * v27;
LABEL_11:
      v12 = *((unsigned int *)this + 39);
      ++v6;
      v5 = *((_DWORD *)this + 39);
      if ( v6 >= *((_DWORD *)this + 8 * (unsigned int)v12 + 46) )
      {
        if ( v4 > 0x100 )
        {
          v19 = (char *)this + 32 * v12 + 160;
          v20 = 0;
          for ( j = (char *)this + 32 * (unsigned int)(1 - v12) + 160; v20 < *((_DWORD *)v19 + 6); ++v20 )
          {
            v22 = *(LARGE_INTEGER *)(*(_QWORD *)v19 + 8LL * v20);
            PerformanceCount = v22;
            if ( v22.QuadPart )
            {
              v23 = *((_DWORD *)j + 6);
              v24 = v23 + 1;
              if ( (unsigned int)v24 < v23 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
              }
              else if ( (unsigned int)v24 > *((_DWORD *)j + 5) )
              {
                v26 = DynArrayImpl<1>::AddMultipleAndSet(j, 8LL, v24, &PerformanceCount);
                if ( v26 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u, 0LL);
              }
              else
              {
                *(LARGE_INTEGER *)(*(_QWORD *)j + 8LL * v23) = v22;
                *((_DWORD *)j + 6) = v24;
              }
            }
          }
          *((_DWORD *)v19 + 6) = 0;
          *((_DWORD *)this + 39) = 1 - *((_DWORD *)this + 39);
        }
        return;
      }
    }
  }
}
