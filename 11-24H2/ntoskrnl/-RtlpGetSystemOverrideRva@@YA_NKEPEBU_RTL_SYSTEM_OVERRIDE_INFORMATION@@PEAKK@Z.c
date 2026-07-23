/*
 * XREFs of ?RtlpGetSystemOverrideRva@@YA_NKEPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@PEAKK@Z @ 0x140940944
 * Callers:
 *     ?RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV?$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0?0@gsl@@V?$span@$$CBK$0?0@2@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409405BC (-RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV-$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0-.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGetSystemOverrideRva(
        int a1,
        char a2,
        const struct _RTL_SYSTEM_OVERRIDE_INFORMATION *a3,
        unsigned int *a4)
{
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  v4 = a1 - 321;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v10 = v5 - 65241;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( (unsigned int)(v12 - 1) >= 2 )
              return 0;
            v6 = a2 != 0 ? 15 : 12;
            v7 = a2 != 0 ? 15LL : 12LL;
          }
          else
          {
            v6 = a2 != 0 ? 15 : 10;
            v7 = a2 != 0 ? 15LL : 10LL;
          }
        }
        else
        {
          v6 = a2 != 0 ? 13 : 6;
          v7 = a2 != 0 ? 13LL : 6LL;
        }
      }
      else
      {
        v6 = a2 != 0 ? 14 : 8;
        v7 = a2 != 0 ? 14LL : 8LL;
      }
    }
    else
    {
      v6 = a2 != 0 ? 4 : 0;
      v7 = v6;
    }
  }
  else
  {
    v6 = a2 != 0 ? 5 : 2;
    v7 = a2 != 0 ? 5LL : 2LL;
  }
  if ( v6 != 15 )
  {
    v8 = *((_DWORD *)a3 + v7);
    if ( v8 )
    {
      *a4 = v8;
      return 1;
    }
  }
  return 0;
}
