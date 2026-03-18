/*
 * XREFs of ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x18029A5D4
 * Callers:
 *     ?PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z @ 0x18029AEF4 (-PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEBA_NPEBUExpressionReferenceInfoWithCache@@PEAVCExpressionValue@@@Z @ 0x18029B0A0 (-ReadValueFromCache@CExpression@@AEBA_NPEBUExpressionReferenceInfoWithCache@@PEAVCExpressionValu.c)
 *     ?StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@@@Z @ 0x18029B2B0 (-StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@.c)
 *     ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x18029B45C (-ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpression::AdjustPropertyTypeWithMask(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax

  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0;
  if ( !v2 || !*(_BYTE *)(v2 + 4) )
    return a2;
  v4 = *(unsigned __int8 *)(v2 + 4);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 2;
            if ( v9 )
            {
              if ( v9 == 10 )
                return 265;
            }
            else
            {
              return 104;
            }
          }
          else
          {
            v10 = 71;
            if ( a2 != 71 )
              return 69;
            return v10;
          }
        }
        else
        {
          return 52;
        }
      }
      else
      {
        return 35;
      }
    }
    else
    {
      return 18;
    }
  }
  else
  {
    return a2;
  }
  return v3;
}
