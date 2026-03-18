/*
 * XREFs of SymCryptCrtGenerateForTwoCoprimes @ 0x140526470
 * Callers:
 *     SymCryptCrtGenerateInverses @ 0x140526620 (SymCryptCrtGenerateInverses.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x14044F240 (KeReadStateSemaphore.c)
 *     SymCryptIntCreate @ 0x1405210C0 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14052115C (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x1405211BC (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x140521204 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntToModElement @ 0x140521358 (SymCryptIntToModElement.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521878 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 */

__int64 __fastcall SymCryptCrtGenerateForTwoCoprimes(
        struct _KSEMAPHORE *a1,
        struct _KSEMAPHORE *a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // ebp
  unsigned int StateSemaphore; // ebx
  unsigned int v11; // eax
  struct _KSEMAPHORE *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // r8d
  int v21; // edx
  char v25; // [rsp+B8h] [rbp+30h]
  __int64 v26; // [rsp+C0h] [rbp+38h]

  v9 = 0;
  StateSemaphore = KeReadStateSemaphore(a1);
  v11 = KeReadStateSemaphore(a2);
  v12 = a1;
  if ( StateSemaphore <= v11 )
    v12 = a2;
  KeReadStateSemaphore(v12);
  v13 = (unsigned int)SymCryptSizeofIntFromDigits();
  v14 = SymCryptIntCreate();
  v15 = SymCryptIntCreate();
  v16 = v13 + v13 + a6;
  v17 = -2 * v13 + a7;
  v18 = SymCryptIntFromModulus();
  v25 = SymCryptIntGetValueLsbits32(v18) & 1;
  v26 = SymCryptIntFromModulus();
  v19 = SymCryptIntFromModulus();
  if ( (unsigned int)SymCryptIntIsEqualUint32() || (SymCryptIntGetValueLsbits32(v19) & 1) == 0 )
  {
    return 32782;
  }
  else
  {
    SymCryptIntExtendedGcd(v26, v19, a3, 0LL, 0LL, v14, v15, v16, v17);
    if ( v25 )
    {
      SymCryptIntToModElement(v15, (int)a2, a5, v16, v17);
      v20 = a4;
      v21 = (int)a1;
    }
    else
    {
      SymCryptIntToModElement(v15, (int)a1, a4, v16, v17);
      v20 = a5;
      v21 = (int)a2;
    }
    SymCryptIntToModElement(v14, v21, v20, v16, v17);
  }
  return v9;
}
