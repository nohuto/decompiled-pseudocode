/*
 * XREFs of PiDevCfgResolveVariableConstant @ 0x140729690
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryValue @ 0x1405A40A8 (PnpValidateRegistryValue.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableConstant(__int64 a1, void *a2, __int64 a3)
{
  int RegistryValue; // edi
  size_t v5; // rbp
  int v6; // r15d
  void *Pool2; // rax
  void *v8; // rsi

  RegistryValue = IopGetRegistryValue(a2);
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryValue(0LL) )
    {
      v5 = MEMORY[0xC];
      v6 = MEMORY[4];
      if ( MEMORY[0xC] )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL, MEMORY[0xC], 0x63647050u);
        v8 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        memmove(Pool2, (const void *)MEMORY[8], v5);
      }
      else
      {
        v8 = 0LL;
      }
      *(_DWORD *)(a3 + 32) = v6;
      *(_DWORD *)(a3 + 36) = v5;
      *(_QWORD *)(a3 + 40) = v8;
      return (unsigned int)RegistryValue;
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)RegistryValue;
}
