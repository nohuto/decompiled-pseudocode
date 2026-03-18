/*
 * XREFs of SymCryptCrtSolve @ 0x140526674
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x14044F240 (KeReadStateSemaphore.c)
 *     SymCryptIntAddMixedSize @ 0x140520FE8 (SymCryptIntAddMixedSize.c)
 *     SymCryptIntCopyMixedSize @ 0x1405210A8 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x1405210C0 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14052115C (SymCryptIntFromModulus.c)
 *     SymCryptIntMulMixedSize @ 0x14052124C (SymCryptIntMulMixedSize.c)
 *     SymCryptIntToModElement @ 0x140521358 (SymCryptIntToModElement.c)
 *     SymCryptModElementCreate @ 0x140521454 (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x140521604 (SymCryptModElementToInt.c)
 *     SymCryptModMul @ 0x1405216FC (SymCryptModMul.c)
 *     SymCryptModSub @ 0x14052180C (SymCryptModSub.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521878 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x140521890 (SymCryptSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptCrtSolve(
        int a1,
        PRKSEMAPHORE *a2,
        __int64 *a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int StateSemaphore; // ebx
  struct _KSEMAPHORE *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // r13d
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdi
  int v16; // r15d
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rdi
  int v20; // r13d
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v25; // [rsp+88h] [rbp+10h]
  __int64 v26; // [rsp+88h] [rbp+10h]

  StateSemaphore = KeReadStateSemaphore(*a2);
  if ( StateSemaphore <= KeReadStateSemaphore(a2[1]) )
    v10 = a2[1];
  else
    v10 = *a2;
  KeReadStateSemaphore(v10);
  v11 = (unsigned int)SymCryptSizeofIntFromDigits();
  v25 = SymCryptSizeofModElementFromModulus((__int64)*a2);
  v12 = SymCryptSizeofIntFromDigits();
  if ( !v12 )
    return 32782;
  v13 = (unsigned int)v11;
  v14 = v11 + a7;
  v15 = v25;
  v16 = SymCryptIntCreate();
  v17 = v25 + v14;
  v26 = SymCryptModElementCreate();
  v18 = v12 + v17;
  v19 = a8 - (v13 + v12 + v15);
  v20 = SymCryptIntCreate();
  if ( a1 != 2 )
    return 32782;
  SymCryptModElementToInt(a2[1], a4[1], v16, v18, v19);
  SymCryptIntToModElement(v16, (int)*a2, v26, v18, v19);
  SymCryptModSub(*a2, *a4);
  SymCryptModMul(*a2, *a3);
  SymCryptModElementToInt(*a2, v26, v16, v18, v19);
  v21 = SymCryptIntFromModulus();
  SymCryptIntMulMixedSize(v16, v21, v20, v18, v19);
  v22 = SymCryptIntCopyMixedSize();
  if ( !v22 )
  {
    SymCryptModElementToInt(a2[1], a4[1], v16, v18, v19);
    if ( (unsigned int)SymCryptIntAddMixedSize() )
      return 32782;
  }
  return v22;
}
