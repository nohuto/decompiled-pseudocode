/*
 * XREFs of ?RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV?$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0?0@gsl@@V?$span@$$CBK$0?0@2@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409405BC
 * Callers:
 *     ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409403D4 (-RtlpParseBinaryDecisionDiagram@@YAJV-$span@$$CBE$0-0@gsl@@V-$span@$$CBK$0-0@2@KPEBU_RTL_FUNCTIO.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 *     ?RtlpGetSystemOverrideRva@@YA_NKEPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@PEAKK@Z @ 0x140940944 (-RtlpGetSystemOverrideRva@@YA_NKEPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@PEAKK@Z.c)
 */

__int64 __fastcall RtlpSelectFunctionFromBinaryDecisionDiagram(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        struct _RTL_SYSTEM_OVERRIDE_INFORMATION *a6,
        unsigned int a7)
{
  unsigned __int64 v7; // r12
  unsigned int *v8; // r11
  unsigned int v10; // r8d
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // r10
  __int64 v14; // rbx
  int v15; // eax
  unsigned __int16 v16; // ax
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 result; // rax
  unsigned int v22; // [rsp+20h] [rbp-28h]

  v7 = *(_QWORD *)a1;
  v8 = a3;
  v10 = 0;
  v11 = (unsigned __int64 *)a2;
  v12 = a1;
  while ( 1 )
  {
    v13 = v10;
    if ( v10 >= v7 )
      goto LABEL_26;
    v14 = *(_QWORD *)(v12 + 8);
    v15 = *(unsigned __int16 *)(v14 + 8LL * v10);
    a1 = v14 + 8LL * v10;
    if ( !__PAIR32__(*(_WORD *)(a1 + 2), v15) )
    {
      v17 = *v8;
LABEL_9:
      v18 = 0;
      goto LABEL_18;
    }
    if ( v15 == v10 && *(unsigned __int16 *)(a1 + 2) == v10 )
    {
      a2 = *(unsigned int *)(v14 + 8LL * v10 + 4);
      if ( a2 >= *v11 )
      {
LABEL_26:
        gsl::details::terminate((gsl::details *)a1, a2);
        JUMPOUT(0x140940703LL);
      }
      v17 = *(_DWORD *)(v11[1] + 4 * a2);
      goto LABEL_9;
    }
    a1 = *(unsigned int *)(v14 + 8LL * v10 + 4);
    if ( (unsigned int)a1 >= 0x161 )
      goto LABEL_6;
    a2 = a4 + 45;
    if ( !a5 )
      a2 = a4;
    if ( !a2 || !_bittest64((const signed __int64 *)a2, a1) )
    {
LABEL_6:
      v16 = *(_WORD *)(v14 + 8LL * v10);
      goto LABEL_7;
    }
    if ( !v10 )
    {
      if ( a6 )
      {
        a7 = 0;
        if ( RtlpGetSystemOverrideRva(a1, a5, a6, &a7, v22) )
          break;
      }
    }
    v16 = *(_WORD *)(v14 + 8 * v13 + 2);
LABEL_7:
    v10 = v16;
  }
  v17 = a7;
  v18 = 1;
LABEL_18:
  v19 = v8[3];
  if ( a5 )
  {
    v20 = v19 & 0xFFFFFFFD;
    v8[2] = v17;
    result = (unsigned int)(2 * v18);
  }
  else
  {
    v8[1] = v17;
    v20 = v18 & 0xFFFFFFFB | v19 & 0xFFFFFFFA;
    result = (unsigned int)(4 * v18);
  }
  v8[3] = result | v20;
  return result;
}
