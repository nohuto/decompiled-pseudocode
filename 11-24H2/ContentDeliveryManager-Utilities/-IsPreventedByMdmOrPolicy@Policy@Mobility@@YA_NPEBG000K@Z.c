/*
 * XREFs of ?IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z @ 0x18003449C
 * Callers:
 *     ?IsPhoneLinkingBlockedByPolicy@Policy@Mobility@@YA?AW4LinkedPhonesPolicyState@12@XZ @ 0x180034380 (-IsPhoneLinkingBlockedByPolicy@Policy@Mobility@@YA-AW4LinkedPhonesPolicyState@12@XZ.c)
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18003F300 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Mobility::Policy::IsPreventedByMdmOrPolicy(
        Mobility::Policy *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5)
{
  int v10; // [rsp+40h] [rbp-10h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-Ch] BYREF
  int pvData; // [rsp+48h] [rbp-8h] BYREF

  v10 = 0;
  if ( !(unsigned int)PolicyManager_IsPolicySetByMobileDeviceManager(this, a2, &v10) )
  {
    if ( v10 )
    {
      pcbData = 0;
      if ( !(unsigned int)PolicyManager_GetPolicyInt(this, a2, &pcbData) )
        return (int)pcbData <= 0;
    }
    else
    {
      pvData = 0;
      pcbData = 4;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, a3, a4, 0x10u, 0LL, &pvData, &pcbData) && pcbData == 4 )
        return pvData == (_DWORD)a5;
    }
  }
  return 0;
}
