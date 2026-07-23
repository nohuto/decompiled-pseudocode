/*
 * XREFs of PiDevCfgQueryResolveValue @ 0x1405A3EAC
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14094CA3C (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     PiDevCfgParseVariableName @ 0x140417FA0 (PiDevCfgParseVariableName.c)
 *     PnpValidateStringData @ 0x1404A7600 (PnpValidateStringData.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryResolveValue(__int64 a1, void *a2, __int64 a3, _QWORD *a4)
{
  int RegistryValue; // edi
  _WORD *v7; // rcx
  __int64 v8; // r14
  _DWORD *Pool2; // rax
  _DWORD *v10; // rsi
  int v12; // [rsp+20h] [rbp-30h] BYREF
  PVOID P; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v15; // [rsp+38h] [rbp-18h] BYREF

  P = 0LL;
  v12 = 0;
  v14 = 0LL;
  v15 = 0LL;
  RegistryValue = IopGetRegistryValue(a2);
  if ( RegistryValue >= 0 )
  {
    *((_WORD *)P + 3) = 0;
    if ( *(_QWORD *)(a1 + 16)
      && (unsigned int)(MEMORY[4] - 1) <= 1
      && PnpValidateStringData(MEMORY[8], MEMORY[0xC])
      && PiDevCfgParseVariableName(v7, &v15, &v12) )
    {
      RegistryValue = PiDevCfgResolveVariable(a1, v15.Buffer, &v14);
      if ( RegistryValue >= 0 )
      {
        v8 = v14;
        Pool2 = (_DWORD *)ExAllocatePool2(
                            0x100uLL,
                            (unsigned int)(*(_DWORD *)(v14 + 36) + 26 + MEMORY[0x10]),
                            0x63647050u);
        v10 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = MEMORY[0];
          Pool2[4] = MEMORY[0x10];
          Pool2[1] = *(_DWORD *)(v8 + 32);
          Pool2[3] = *(_DWORD *)(v8 + 36);
          Pool2[2] = MEMORY[0x10] + 22;
          memmove(Pool2 + 5, (const void *)0x14, MEMORY[0x10]);
          *(_WORD *)(2 * ((unsigned __int64)MEMORY[0x10] >> 1) + 0x14) = 0;
          memmove((char *)v10 + (unsigned int)v10[2], *(const void **)(v8 + 40), *(unsigned int *)(v8 + 36));
          *a4 = v10;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      *a4 = 0LL;
    }
  }
  return (unsigned int)RegistryValue;
}
