/*
 * XREFs of PopSmartSuspendValidateSinglePrediction @ 0x140A8C254
 * Callers:
 *     PopSmartSuspendValidatePredictions @ 0x14075B4FC (PopSmartSuspendValidatePredictions.c)
 * Callees:
 *     PopDiagTraceSmartSuspendValidation @ 0x140A8C384 (PopDiagTraceSmartSuspendValidation.c)
 */

void __fastcall PopSmartSuspendValidateSinglePrediction(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r9
  int v5; // edx
  int v6; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  if ( !*(_BYTE *)(a1 + 64) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      v5 = 100;
      v6 = 100;
      if ( *(_BYTE *)(a1 + 1) )
      {
        v7 = *(_QWORD *)(a1 + 32);
        if ( v7 )
        {
          if ( a2 > v7 )
          {
            v8 = *(_QWORD *)(a1 + 40);
            if ( v8 == -1LL || a2 < v8 )
              v6 = 203;
            else
              v6 = v8 + 18000000000LL < a2 ? 202 : 2;
          }
          else
          {
            v6 = 3;
          }
        }
        else
        {
          v6 = a2 >= v4 + 18000000000LL ? 0xC8 : 0;
        }
      }
      if ( *(_BYTE *)(a1 + 3) )
      {
        v9 = *(_QWORD *)(a1 + 48);
        if ( v9 )
        {
          if ( a2 > v9 )
          {
            v10 = *(_QWORD *)(a1 + 56);
            if ( v10 == -1LL )
            {
              v5 = a2 < v4 + 2592000000000LL ? 201 : 1;
            }
            else if ( a2 < v10 )
            {
              v5 = 203;
            }
            else
            {
              v5 = v10 + 36000000000LL < a2 ? 202 : 2;
            }
          }
          else
          {
            v5 = 3;
          }
        }
        else
        {
          v5 = a2 >= v4 + 36000000000LL ? 0xC8 : 0;
        }
      }
      *(_DWORD *)(a1 + 76) = v6;
      *(_DWORD *)(a1 + 80) = v5;
      *(_QWORD *)(a1 + 88) = a2;
      PopDiagTraceSmartSuspendValidation(a1);
    }
  }
  *(_BYTE *)(a1 + 64) = 1;
}
