/*
 * XREFs of ?SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z @ 0x180134030
 * Callers:
 *     ?SetDelegateInformationEx@InputDelegationInputObjectProxy@@UEAAXI_KIII@Z @ 0x1801340E0 (-SetDelegateInformationEx@InputDelegationInputObjectProxy@@UEAAXI_KIII@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z @ 0x180133D50 (-OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z.c)
 */

void __fastcall InputDelegationInputObjectProxy::SetDelegateInformation(
        InputDelegationInputObjectProxy *this,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  char v8; // al
  bool v9; // di

  v8 = 1;
  v9 = (a4 & 0xE) != 0 && (a4 & 1) == 0;
  if ( (*((_BYTE *)this + 68) & 0xE) == 0 || (*((_BYTE *)this + 68) & 1) != 0 )
    v8 = 0;
  if ( v9 || v8 )
  {
    if ( IsEdition(8778LL) )
    {
      *((_BYTE *)this + 32) = 0;
      BamoInputDelegationInputObjectProxy::OnInputDelegated(
        (InputDelegationInputObjectProxy *)((char *)this - 48),
        a3,
        a2,
        v9);
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = a3;
  *((_DWORD *)this + 17) = a4;
  *((_DWORD *)this + 16) = a2;
}
