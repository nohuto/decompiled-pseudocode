/*
 * XREFs of ?RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z @ 0x1409401C4
 * Callers:
 *     ?RtlpParseFunctionOverrideRelocations@@YAJKV?$span@$$CBE$0?0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@@Z @ 0x14093FEA8 (-RtlpParseFunctionOverrideRelocations@@YAJKV-$span@$$CBE$0-0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_P.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 *     ?RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x14094034C (-RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_IN.c)
 */

void __fastcall RtlpRecordFunctionOverrideRelocation(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int8 a6)
{
  char v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  struct _RTL_FUNCTION_OVERRIDE_INDEX *FunctionOverrideIndex; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  struct _RTL_FUNCTION_OVERRIDE_INDEX *v15; // rax

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = a1;
  v10 = a3;
  if ( !*(_DWORD *)a1 )
  {
    if ( a3 < v7 )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * a3);
      if ( !(_BYTE)a2 )
        return;
      a1 = a3 + 1;
      if ( a1 < *(_QWORD *)(v8 + 8) )
      {
        ++*(_DWORD *)(*(_QWORD *)(v8 + 16) + 4 * a1);
        return;
      }
    }
LABEL_13:
    gsl::details::terminate((gsl::details *)a1, a2);
    JUMPOUT(0x140940342LL);
  }
  if ( a3 >= v7 )
    goto LABEL_13;
  v11 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * a3);
  FunctionOverrideIndex = RtlpGetFunctionOverrideIndex(*(struct _RTL_FUNCTION_OVERRIDE_INFORMATION **)(a1 + 24), a3);
  a2 = a4;
  a1 = *((unsigned __int16 *)FunctionOverrideIndex + 4 * v11 + 2);
  LOWORD(a1) = a4 & 0xFFF | a1 & 0xF000;
  LOWORD(a2) = (a5 << 12) | a4 & 0xFFF;
  *((_WORD *)FunctionOverrideIndex + 4 * v11 + 2) = a1;
  *((_DWORD *)FunctionOverrideIndex + 2 * v11 + 2) = *(_DWORD *)(v8 + 32);
  *((_WORD *)FunctionOverrideIndex + 4 * v11 + 2) = a2;
  if ( v10 >= *(_QWORD *)(v8 + 8) )
    goto LABEL_13;
  ++*(_DWORD *)(*(_QWORD *)(v8 + 16) + 4 * v10);
  if ( v6 )
  {
    a2 = (unsigned int)(v10 + 1);
    a1 = *((unsigned __int16 *)FunctionOverrideIndex + 4 * v11 + 2);
    v13 = a2;
    LOWORD(a1) = *((_WORD *)FunctionOverrideIndex + 4 * v11 + 3) ^ ((unsigned __int8)*((_WORD *)FunctionOverrideIndex
                                                                                     + 4 * v11
                                                                                     + 3) ^ (unsigned __int8)(-8 * a1)) & 0x38;
    *((_WORD *)FunctionOverrideIndex + 4 * v11 + 3) = a1;
    if ( a2 < *(_QWORD *)(v8 + 8) )
    {
      v14 = *(unsigned int *)(*(_QWORD *)(v8 + 16) + 4 * a2);
      v15 = RtlpGetFunctionOverrideIndex(*(struct _RTL_FUNCTION_OVERRIDE_INFORMATION **)(v8 + 24), a2);
      a2 = a6;
      *((_WORD *)v15 + 4 * v14 + 2) &= 0xF000u;
      *((_DWORD *)v15 + 2 * v14 + 2) = *(_DWORD *)(v8 + 32);
      a1 = *((unsigned __int16 *)v15 + 4 * v14 + 3);
      *((_WORD *)v15 + 4 * v14 + 2) = a5 << 12;
      LOWORD(a2) = a1 ^ ((unsigned __int8)a1 ^ (unsigned __int8)(a4 + a6)) & 7;
      *((_WORD *)v15 + 4 * v14 + 3) = a2;
      if ( v13 < *(_QWORD *)(v8 + 8) )
      {
        ++*(_DWORD *)(*(_QWORD *)(v8 + 16) + 4 * v13);
        return;
      }
    }
    goto LABEL_13;
  }
}
