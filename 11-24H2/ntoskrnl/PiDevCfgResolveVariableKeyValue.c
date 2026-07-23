/*
 * XREFs of PiDevCfgResolveVariableKeyValue @ 0x140729E60
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryString @ 0x1404A75C4 (PnpValidateRegistryString.c)
 *     PnpValidateRegistryValue @ 0x1405A40A8 (PnpValidateRegistryValue.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A97D54 (PiDevCfgResolveVariableKeyHandle.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyValue(__int64 a1, void *a2, __int64 a3)
{
  int v6; // ebx
  int RegistryValue; // eax
  unsigned int *v8; // rsi
  _WORD *v9; // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID v15; // [rsp+28h] [rbp-8h] BYREF

  v15 = 0LL;
  Handle = 0LL;
  v6 = PiDevCfgResolveVariableKeyHandle(a1, a2, &Handle);
  if ( v6 < 0 )
    goto LABEL_17;
  RegistryValue = IopGetRegistryValue(a2);
  v8 = (unsigned int *)v15;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryString(v15) )
    {
      v6 = -1073741823;
      goto LABEL_15;
    }
    v9 = (_WORD *)((char *)v8 + v8[2]);
    if ( *v9 != 36
      || (v15 = 0LL, v10 = PiDevCfgResolveVariable(a1, v9 + 1, &v15), v6 = v10, v10 >= 0)
      || v10 == -1073741772 )
    {
      v11 = IopGetRegistryValue(Handle);
      v6 = v11;
      if ( v11 >= 0 )
        goto LABEL_14;
      if ( v11 != -1073741772 )
        goto LABEL_15;
      v12 = IopGetRegistryValue(a2);
      v6 = v12;
      if ( v12 >= 0 )
      {
LABEL_14:
        *(_DWORD *)(a3 + 32) = 0;
        *(_DWORD *)(a3 + 36) = 0;
        *(_QWORD *)(a3 + 40) = 0LL;
        goto LABEL_15;
      }
      if ( v12 == -1073741772 )
      {
        v6 = 0;
        goto LABEL_14;
      }
    }
  }
LABEL_15:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
