/*
 * XREFs of BiGetObjectDescription @ 0x1408597FC
 * Callers:
 *     BcdEnumerateObjects @ 0x14081265C (BcdEnumerateObjects.c)
 *     BcdQueryObject @ 0x140812924 (BcdQueryObject.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140859B3C (BiIsLinkedToFirmwareVariable.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 * Callees:
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetObjectDescription(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // edi
  __int64 v5; // rcx
  int RegistryValue; // eax
  void *v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v4 = BiOpenKey(a1, L"Description", 0x20019u, &v8);
  if ( v4 >= 0 )
  {
    v5 = (__int64)v8;
    v9 = 0;
    *a2 = 1;
    RegistryValue = BiGetRegistryValue(v5, L"Type", 0LL, 4u, &v10, &v9);
    v3 = v10;
    v4 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( v9 == 4 )
        a2[1] = *v10;
      else
        v4 = -1073741788;
    }
  }
  if ( v8 )
    BiCloseKey(v8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)v4;
}
