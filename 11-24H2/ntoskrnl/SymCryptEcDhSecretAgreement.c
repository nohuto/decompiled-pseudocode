/*
 * XREFs of SymCryptEcDhSecretAgreement @ 0x140533388
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4 (SymCryptEcDhSecretAgreementSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptEcurveIsSame @ 0x14052032C (SymCryptEcurveIsSame.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1405203EC (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptEcpointCreate @ 0x140528190 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x140528240 (SymCryptEcpointGetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528AE0 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsZero @ 0x140528C18 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointScalarMul @ 0x140528D0C (SymCryptEcpointScalarMul.c)
 *     SymCryptCallbackAlloc @ 0x1406A6810 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall SymCryptEcDhSecretAgreement(__int64 a1, __int64 a2, int a3, int a4, void *a5, __int64 a6)
{
  _DWORD *v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned int Value; // ebx
  __int64 v12; // r13
  unsigned int v13; // edx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // r13
  unsigned __int64 v20; // [rsp+50h] [rbp-48h]
  char *Src; // [rsp+A0h] [rbp+8h]
  char *Srca; // [rsp+A0h] [rbp+8h]

  if ( _bittest((const signed __int32 *)a1, 0xDu)
    && _bittest((const signed __int32 *)a2, 0xDu)
    && !a4
    && *(_BYTE *)(a1 + 4)
    && SymCryptEcurveIsSame(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8)) )
  {
    v8 = *(_DWORD **)(a1 + 8);
    v9 = (unsigned int)SymCryptSizeofEcpointFromCurve((__int64)v8);
    v10 = (unsigned int)SymCryptEcurveSizeofFieldElement((__int64)v8);
    if ( a6 == v10 )
    {
      v12 = v9;
      v13 = v8[12] + v8[13];
      Src = (char *)v9;
      if ( v13 <= v8[14] )
        v13 = v8[14];
      if ( v8[11] > v13 )
        v13 = v8[11];
      v14 = v13;
      v20 = v13 + v10 + v9;
      v15 = SymCryptCallbackAlloc(v20);
      v16 = v15;
      if ( v15 )
      {
        v17 = v14 + v15;
        v18 = SymCryptEcpointCreate(v14 + v15, v12, (__int64)v8);
        Srca = &Src[v17];
        if ( (unsigned int)SymCryptEcpointIsZero((__int64)v8) )
        {
          Value = 32782;
        }
        else
        {
          Value = SymCryptEcpointScalarMul(
                    (__int64)v8,
                    *(_QWORD *)(a1 + 24),
                    *(_QWORD *)(a2 + 16),
                    0x20u,
                    v18,
                    v16,
                    v14);
          if ( !Value )
          {
            if ( (unsigned int)SymCryptEcpointIsZero((__int64)v8) )
            {
              Value = 32780;
            }
            else
            {
              Value = SymCryptEcpointGetValue((__int64)v8, v18, a3, 1, (__int64)Srca, v10, 0, v16, v14);
              if ( !Value )
                memmove(a5, Srca, v10);
            }
          }
        }
        SymCryptWipe(v16, v20);
        SymCryptCallbackFree(v16);
      }
      else
      {
        return 32783;
      }
    }
    else
    {
      return 32770;
    }
  }
  else
  {
    return 32782;
  }
  return Value;
}
