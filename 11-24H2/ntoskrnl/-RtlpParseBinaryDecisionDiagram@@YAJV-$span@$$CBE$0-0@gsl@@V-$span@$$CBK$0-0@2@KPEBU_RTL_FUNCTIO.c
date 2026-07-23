/*
 * XREFs of ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409403D4
 * Callers:
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x14093F818 (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 *     ?RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV?$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0?0@gsl@@V?$span@$$CBK$0?0@2@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409405BC (-RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV-$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0-.c)
 */

__int64 __fastcall RtlpParseBinaryDecisionDiagram(
        unsigned __int16 *a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct _RTL_SYSTEM_OVERRIDE_INFORMATION *a6)
{
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rdx
  _DWORD *v11; // r8
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned int v16; // edx
  unsigned __int16 *v17; // r11
  unsigned __int64 v18; // rax
  _WORD *v19; // r9
  unsigned __int64 v20; // r10
  bool v21; // cf
  __int128 v22; // xmm6
  unsigned int v24; // [rsp+30h] [rbp-48h]
  unsigned int v25; // [rsp+30h] [rbp-48h]
  int v26[4]; // [rsp+40h] [rbp-38h] BYREF
  int v27[4]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3;
  if ( *(_QWORD *)a1 >= 8uLL && *(_QWORD *)a1 - 8LL >= (unsigned __int64)a3 )
  {
    v9 = *((_QWORD *)a1 + 1);
    v10 = *(_QWORD *)a1;
    v11 = (_DWORD *)(v9 + a3);
    v12 = v8 + 8;
    if ( *(_QWORD *)a1 < v12 )
      goto LABEL_29;
    v10 -= v12;
    v13 = v12 + v9;
    *(_QWORD *)v26 = v10;
    if ( v10 == -1 )
      goto LABEL_29;
    *(_QWORD *)&v26[2] = v13;
    *(_OWORD *)a1 = *(_OWORD *)v26;
    if ( v11 )
    {
      if ( *v11 != 1 )
        return 0LL;
      v14 = (unsigned int)v11[1];
      if ( (_DWORD)v14 )
      {
        if ( (v14 & 7) == 0 && v14 <= *(_QWORD *)a1 )
        {
          a1 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
          if ( a1 && (v14 & 7) == 0 )
          {
            v15 = (unsigned __int64)(unsigned int)v14 >> 3;
            v16 = 0;
            *(_QWORD *)v26 = v15;
            *(_QWORD *)&v26[2] = a1;
            v17 = &a1[4 * v15];
            while ( a1 != v17 )
            {
              v18 = *a1;
              v19 = a1 + 1;
              if ( (_WORD)v18 || *v19 )
              {
                if ( (_DWORD)v18 == v16 )
                {
                  if ( (unsigned __int16)*v19 != v16 )
                    return 3221225595LL;
                  v21 = (unsigned __int64)*((unsigned int *)a1 + 1) < *a2;
                }
                else
                {
                  if ( (unsigned int)v18 <= v16 )
                    return 3221225595LL;
                  v20 = (unsigned __int16)*v19;
                  if ( (unsigned int)v20 <= v16 || v18 >= v15 )
                    return 3221225595LL;
                  v21 = v20 < v15;
                }
                if ( !v21 )
                  return 3221225595LL;
              }
              else if ( !v16 )
              {
                return 3221225595LL;
              }
              ++v16;
              a1 += 4;
            }
            v22 = *(_OWORD *)v26;
            *(_OWORD *)v27 = *(_OWORD *)a2;
            RtlpSelectFunctionFromBinaryDecisionDiagram((int)v26, (int)v27, a5, a4, 1u, a6, v24);
            *(_OWORD *)v27 = *(_OWORD *)a2;
            *(_OWORD *)v26 = v22;
            RtlpSelectFunctionFromBinaryDecisionDiagram((int)v26, (int)v27, a5, a4, 0, a6, v25);
            return 0LL;
          }
LABEL_29:
          gsl::details::terminate((gsl::details *)a1, v10);
          JUMPOUT(0x1409405B4LL);
        }
      }
    }
  }
  return 3221225595LL;
}
