/*
 * XREFs of PiSwValidatePropertyArray @ 0x140954850
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x140835F5C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwValidateCreateData @ 0x1409A46F0 (PiSwValidateCreateData.c)
 *     PiSwIrpPropertySet @ 0x140A66038 (PiSwIrpPropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x1409548B4 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiSwValidatePropertyArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v6; // rcx

  result = 0LL;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    v6 = a1 + 48 * i;
    if ( !*(_DWORD *)(v6 + 20) )
    {
      result = PnpValidatePropertyData(*(PSECURITY_DESCRIPTOR *)(v6 + 40), *(_DWORD *)(v6 + 36));
      if ( (int)result >= 0 )
        continue;
    }
    return 3221225485LL;
  }
  return result;
}
