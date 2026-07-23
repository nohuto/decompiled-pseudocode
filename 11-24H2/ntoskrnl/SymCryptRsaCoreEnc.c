/*
 * XREFs of SymCryptRsaCoreEnc @ 0x140522AF4
 * Callers:
 *     SymCryptRsaPkcs1Verify @ 0x140522EEC (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     SymCryptIntBitsizeOfValue @ 0x1405210E4 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntSetValueUint64 @ 0x140521350 (SymCryptIntSetValueUint64.c)
 *     SymCryptIntWipe @ 0x140521440 (SymCryptIntWipe.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementGetValue @ 0x140521508 (SymCryptModElementGetValue.c)
 *     SymCryptModElementSetValue @ 0x140521584 (SymCryptModElementSetValue.c)
 *     SymCryptModExp @ 0x140521718 (SymCryptModExp.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14052192C (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140522CCC (SymCryptRsaCoreVerifyInput.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsaCoreEnc(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int Value; // ebx
  __int64 v14; // rbx
  void *v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rdi
  int v18; // eax
  __int64 v20; // [rsp+40h] [rbp-108h]

  Value = SymCryptRsaCoreVerifyInput(a1, a2, a3, a4, a7, a8);
  if ( !Value )
  {
    v14 = (unsigned int)SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 120));
    v15 = (void *)SymCryptModElementCreate();
    v16 = a9 - v14;
    v20 = v14 + a8;
    Value = SymCryptModElementSetValue(a2, a3, a4, *(_DWORD **)(a1 + 120), v15, v14 + a8, a9 - v14);
    if ( !Value )
    {
      v17 = SymCryptIntCreate();
      if ( v17 )
      {
        SymCryptIntSetValueUint64();
        v18 = SymCryptIntBitsizeOfValue();
        SymCryptModExp(*(_QWORD *)(a1 + 120), (int)v15, v17, v18, 1, (__int64)v15, v20, v16);
        Value = SymCryptModElementGetValue(*(_QWORD *)(a1 + 120), (int)v15, a6, a7, a4, v20, v16);
        SymCryptIntWipe(v17);
      }
      else
      {
        return 32778;
      }
    }
  }
  return Value;
}
