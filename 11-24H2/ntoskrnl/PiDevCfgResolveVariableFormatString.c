/*
 * XREFs of PiDevCfgResolveVariableFormatString @ 0x140729760
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     PnpValidateRegistryString @ 0x1404A75C4 (PnpValidateRegistryString.c)
 *     PnpValidateRegistryMultiSz @ 0x1404CBA24 (PnpValidateRegistryMultiSz.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableFormatString(__int64 a1, void *a2, __int64 a3)
{
  int RegistryValue; // edi
  unsigned __int16 *v5; // r13
  int v6; // eax
  int v7; // r10d
  unsigned __int16 v8; // ax
  int v9; // r12d
  unsigned __int16 *i; // r14
  unsigned __int16 v11; // dx
  int v12; // ecx
  unsigned int v13; // r12d
  __int64 Pool2; // rax
  void *v15; // r13
  _WORD *v16; // r15
  unsigned int v17; // r14d
  unsigned __int16 *v18; // r8
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // dx
  int v21; // ecx
  int v22; // eax
  unsigned __int16 *v24; // [rsp+30h] [rbp-50h]

  RegistryValue = IopGetRegistryValue(a2);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  if ( !PnpValidateRegistryString(0LL) )
    return (unsigned int)-1073741823;
  v5 = (unsigned __int16 *)MEMORY[8];
  v24 = (unsigned __int16 *)MEMORY[8];
  v6 = IopGetRegistryValue(a2);
  v7 = 0;
  RegistryValue = v6;
  if ( v6 >= 0 )
  {
    if ( !PnpValidateRegistryMultiSz(0LL) )
      return (unsigned int)-1073741823;
  }
  else
  {
    if ( v6 != -1073741772 )
      return (unsigned int)RegistryValue;
    RegistryValue = 0;
  }
  v8 = *v5;
  v9 = v7;
  for ( i = v5; *i; v8 = *i )
  {
    ++i;
    if ( v8 == 37 )
    {
      v11 = *i;
      if ( *i != 37 )
      {
        if ( (unsigned __int16)(v11 - 48) <= 9u )
        {
          v12 = v7;
          while ( v11 && (unsigned __int16)(v11 - 48) <= 9u )
          {
            ++i;
            v12 = v11 + 2 * (5 * v12 - 24);
            v11 = *i;
          }
        }
        continue;
      }
      ++i;
    }
    v9 += 2;
  }
  v13 = v9 + 2;
  Pool2 = ExAllocatePool2(0x100uLL, v13, 0x63647050u);
  v15 = (void *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v16 = (_WORD *)Pool2;
  v17 = v13;
  v18 = v24;
  while ( 1 )
  {
    v19 = *v18;
    if ( !*v18 )
      break;
    if ( v19 == 37 )
    {
      v20 = *++v18;
      if ( *v18 == 37 )
      {
        if ( v17 <= 2 )
          goto LABEL_39;
        *v16 = 37;
        goto LABEL_36;
      }
      if ( (unsigned __int16)(v20 - 48) <= 9u )
      {
        v21 = 0;
        if ( v20 )
        {
          do
          {
            if ( (unsigned __int16)(v20 - 48) > 9u )
              break;
            ++v18;
            v22 = v20;
            v20 = *v18;
            v21 = v22 + 2 * (5 * v21 - 24);
          }
          while ( *v18 );
        }
      }
    }
    else
    {
      if ( v17 <= 2 )
        goto LABEL_39;
      *v16 = v19;
LABEL_36:
      ++v16;
      ++v18;
      v17 -= 2;
    }
  }
  if ( RegistryValue < 0 )
  {
LABEL_40:
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)RegistryValue;
  }
  if ( v17 != 2 )
  {
LABEL_39:
    RegistryValue = -1073741823;
    goto LABEL_40;
  }
  *v16 = 0;
  *(_DWORD *)(a3 + 32) = 1;
  *(_DWORD *)(a3 + 36) = v13;
  *(_QWORD *)(a3 + 40) = v15;
  return (unsigned int)RegistryValue;
}
