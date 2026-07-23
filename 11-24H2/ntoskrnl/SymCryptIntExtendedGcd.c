/*
 * XREFs of SymCryptIntExtendedGcd @ 0x140526944
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE5C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140526540 (SymCryptCrtGenerateForTwoCoprimes.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x140445960 (KeReadStateSemaphore.c)
 *     SymCryptDivisorCreate @ 0x140521054 (SymCryptDivisorCreate.c)
 *     SymCryptIntAddMixedSize @ 0x140521084 (SymCryptIntAddMixedSize.c)
 *     SymCryptIntBitsizeOfObject @ 0x1405210CC (SymCryptIntBitsizeOfObject.c)
 *     SymCryptIntConditionalCopy @ 0x1405210FC (SymCryptIntConditionalCopy.c)
 *     SymCryptIntConditionalSwap @ 0x140521114 (SymCryptIntConditionalSwap.c)
 *     SymCryptIntCopyMixedSize @ 0x140521144 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x140521174 (SymCryptIntDivMod.c)
 *     SymCryptIntFromDivisor @ 0x1405211E0 (SymCryptIntFromDivisor.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140521258 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntMulMixedSize @ 0x1405212E8 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntSetValueUint32 @ 0x140521338 (SymCryptIntSetValueUint32.c)
 *     SymCryptIntShr1 @ 0x140521368 (SymCryptIntShr1.c)
 *     SymCryptIntSubMixedSize @ 0x140521380 (SymCryptIntSubMixedSize.c)
 *     SymCryptIntSubSameSize @ 0x140521398 (SymCryptIntSubSameSize.c)
 *     SymCryptIntToDivisor @ 0x1405213C8 (SymCryptIntToDivisor.c)
 *     SymCryptSizeofDivisorFromDigits @ 0x1405218FC (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 */

__int64 __fastcall SymCryptIntExtendedGcd(
        struct _KSEMAPHORE *a1,
        struct _KSEMAPHORE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int StateSemaphore; // ebx
  unsigned int v12; // eax
  struct _KSEMAPHORE *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbp
  int v17; // r13d
  __int64 v18; // r12
  int v19; // esi
  __int64 v20; // rbp
  __int64 result; // rax
  __int64 v22; // r14
  int v23; // r15d
  int v24; // ebx
  int v25; // ecx
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // eax
  __int64 v33; // [rsp+30h] [rbp-88h]
  int v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  __int64 v36; // [rsp+50h] [rbp-68h]
  __int64 v37; // [rsp+58h] [rbp-60h]
  int v38; // [rsp+68h] [rbp-50h]
  int v39; // [rsp+70h] [rbp-48h]
  int v40; // [rsp+C0h] [rbp+8h]
  int v41; // [rsp+C8h] [rbp+10h]

  v41 = (int)a2;
  v40 = (int)a1;
  StateSemaphore = KeReadStateSemaphore(a1);
  v12 = KeReadStateSemaphore(a2);
  v13 = a1;
  if ( StateSemaphore <= v12 )
    v13 = a2;
  KeReadStateSemaphore(v13);
  v14 = (unsigned int)SymCryptSizeofIntFromDigits();
  v15 = (unsigned int)SymCryptSizeofIntFromDigits();
  v16 = (unsigned int)SymCryptSizeofDivisorFromDigits();
  v37 = SymCryptIntCreate();
  SymCryptIntCreate();
  v36 = SymCryptIntCreate();
  v34 = SymCryptIntCreate();
  v35 = SymCryptIntCreate();
  v39 = SymCryptDivisorCreate();
  v17 = v39;
  v33 = SymCryptIntFromDivisor();
  v18 = v16 + v16 + v15 + v14 + v14 + v14 + v14 + a8;
  v38 = SymCryptDivisorCreate();
  v19 = v38;
  v20 = -4 * v14 - 2 * v16 - v15 + a9;
  SymCryptIntCopyMixedSize();
  SymCryptIntCopyMixedSize();
  SymCryptIntSetValueUint32();
  SymCryptIntSetValueUint32();
  result = SymCryptIntIsEqualUint32();
  if ( !(_DWORD)result )
  {
    result = SymCryptIntGetValueLsbits32(v33);
    if ( (result & 1) != 0 )
    {
      v22 = a7;
      v23 = v35;
      if ( !a7 || v35 )
      {
        v24 = SymCryptIntBitsizeOfObject();
        v25 = SymCryptIntBitsizeOfObject() + v24 - 1;
        if ( v25 )
        {
          v26 = v25;
          do
          {
            SymCryptIntSubSameSize();
            SymCryptIntGetValueLsbits32(v37);
            SymCryptIntConditionalSwap();
            SymCryptIntConditionalSwap();
            SymCryptIntGetValueLsbits32(v37);
            SymCryptIntSubSameSize();
            SymCryptIntConditionalCopy();
            SymCryptIntSubSameSize();
            SymCryptIntConditionalCopy();
            SymCryptIntAddMixedSize();
            SymCryptIntConditionalCopy();
            SymCryptIntShr1();
            SymCryptIntGetValueLsbits32(v36);
            SymCryptIntAddMixedSize();
            SymCryptIntConditionalCopy();
            SymCryptIntShr1();
            --v26;
          }
          while ( v26 );
          v19 = v38;
          v22 = a7;
          v17 = v39;
          v23 = v35;
        }
        result = a4;
        if ( a4 )
          result = SymCryptIntCopyMixedSize();
        if ( a5 || a6 || v22 )
        {
          SymCryptIntFromDivisor();
          SymCryptIntCopyMixedSize();
          v27 = SymCryptIntFromDivisor();
          result = SymCryptIntToDivisor(v27, v17, 3, 0, v18, v20);
          if ( a5 )
          {
            SymCryptIntMulMixedSize(v40, v41, a5, v18, v20);
            result = SymCryptIntDivMod(a5, v17, a5, 0, v18, v20);
          }
          if ( a6 )
          {
            v28 = SymCryptIntFromDivisor();
            SymCryptIntDivMod(v41, v17, v28, 0, v18, v20);
            v29 = SymCryptIntFromDivisor();
            SymCryptIntToDivisor(v29, v19, 1, 0, v18, v20);
            v30 = v34;
            result = SymCryptIntDivMod(v34, v19, 0, a6, v18, v20);
          }
          else
          {
            v30 = v34;
          }
          if ( v22 )
          {
            SymCryptIntFromDivisor();
            SymCryptIntCopyMixedSize();
            v31 = SymCryptIntFromDivisor();
            SymCryptIntToDivisor(v31, v19, 1, 0, v18, v20);
            SymCryptIntMulMixedSize(v30, v40, v23, v18, v20);
            SymCryptIntSubMixedSize();
            SymCryptIntDivMod(v23, v19, v23, 0, v18, v20);
            SymCryptIntFromDivisor();
            SymCryptIntCopyMixedSize();
            v32 = SymCryptIntFromDivisor();
            SymCryptIntToDivisor(v32, v19, 1, 0, v18, v20);
            SymCryptIntDivMod(v23, v19, 0, v22, v18, v20);
            SymCryptIntFromDivisor();
            return SymCryptIntSubMixedSize();
          }
        }
      }
    }
  }
  return result;
}
