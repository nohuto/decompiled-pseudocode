/*
 * XREFs of SymCryptEcpointSetValue @ 0x1405283D0
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14051FD94 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x14051FD40 (SymCryptFdefSizeofModElementFromModulus.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1405203EC (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x1405212B8 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x140521320 (SymCryptIntSetValue.c)
 *     SymCryptModElementSetValue @ 0x140521584 (SymCryptModElementSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreateEx @ 0x1405281B0 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x1405285D8 (SymCryptEcpointTransform.c)
 */

__int64 __fastcall SymCryptEcpointSetValue(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // r13
  int v15; // ebx
  __int64 v16; // r15
  int v17; // esi
  void *v18; // rcx
  __int64 v19; // rbx
  unsigned int v20; // [rsp+90h] [rbp+18h]

  SymCryptFdefSizeofModElementFromModulus(a1);
  v12 = *((unsigned int *)SymCryptEcpointFormatNumberofElements + a5);
  if ( a3 != (_DWORD)v12 * (unsigned int)SymCryptEcurveSizeofFieldElement(a1) )
    return 32781LL;
  v14 = a3 / v12;
  SymCryptSizeofIntFromDigits();
  SymCryptIntCreate();
  v15 = 0;
  if ( !*((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
  {
LABEL_7:
    v20 = 4 * *(_DWORD *)(a1 + 36) + 32;
    v16 = SymCryptEcpointCreateEx(a8, v20, a1, 4u);
    if ( v16 )
    {
      v17 = 0;
      if ( !*((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
      {
        v19 = a9 - v20;
        return SymCryptEcpointTransform(a1, v16, a6, a5, 1, a7, a8 + v20, v19);
      }
      while ( 1 )
      {
        v18 = (void *)(v16 + (unsigned int)(*(_DWORD *)(a1 + 36) * v17) + 32LL);
        if ( !v18 )
          break;
        v19 = a9 - v20;
        result = SymCryptModElementSetValue(a2, v14, a4, *(_DWORD **)(a1 + 616), v18, v20 + a8, v19);
        if ( (_DWORD)result )
          return result;
        a2 += v14;
        if ( (unsigned int)++v17 >= *((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
          return SymCryptEcpointTransform(a1, v16, a6, a5, 1, a7, a8 + v20, v19);
      }
    }
    return 32780LL;
  }
  while ( 1 )
  {
    result = SymCryptIntSetValue();
    if ( (_DWORD)result )
      return result;
    SymCryptIntFromModulus();
    if ( !(unsigned int)SymCryptIntIsLessThan() )
      return 32782LL;
    if ( (unsigned int)++v15 >= *((_DWORD *)SymCryptEcpointFormatNumberofElements + a5) )
      goto LABEL_7;
  }
}
