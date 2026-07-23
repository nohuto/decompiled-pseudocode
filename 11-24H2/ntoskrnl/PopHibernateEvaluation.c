/*
 * XREFs of PopHibernateEvaluation @ 0x140AAE820
 * Callers:
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x1407515A0 (PopWnfHibernatePolicyCallback.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 */

__int64 __fastcall PopHibernateEvaluation(char a1, char a2, bool *a3)
{
  bool v4; // r10
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v7; // r10
  bool v8; // zf

  if ( PopHiberEnabledReg == -1 )
    v4 = (unsigned int)(PopHiberEnabledDefaultReg - 1) > 0xFFFFFFFD;
  else
    v4 = PopHiberEnabledReg == 0;
  v5 = v4;
  if ( !PopAllowHibernateReg )
    v5 = 1LL;
  if ( a1 )
  {
    v5 = (unsigned __int8)v5;
    if ( PopBootFromVHD )
      v5 = 1LL;
  }
  if ( a2 )
  {
    v6 = &PopHiberForceDisabledReg;
    v7 = 2LL;
    do
    {
      v8 = *v6++ == 0;
      v5 = (unsigned __int8)v5;
      if ( !v8 )
        v5 = 1LL;
      --v7;
    }
    while ( v7 );
  }
  if ( a3 )
    *a3 = (_BYTE)v5 == 0;
  LOBYTE(v5) = (_BYTE)v5 == 0;
  return PopEnableHiberFile(v5);
}
