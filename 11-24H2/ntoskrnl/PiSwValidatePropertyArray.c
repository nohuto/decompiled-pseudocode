/*
 * XREFs of PiSwValidatePropertyArray @ 0x1408B66DC
 * Callers:
 *     PiSwIrpPropertySet @ 0x1408AF734 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B69EC (PiSwIrpInterfacePropertySet.c)
 *     PiSwValidateCreateData @ 0x1409F1994 (PiSwValidateCreateData.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
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
      result = PnpValidatePropertyData(*(STRSAFE_PCNZWCH *)(v6 + 40), *(_DWORD *)(v6 + 36));
      if ( (int)result >= 0 )
        continue;
    }
    return 3221225485LL;
  }
  return result;
}
