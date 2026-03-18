/*
 * XREFs of PopHibernateEvaluation @ 0x140AB38B0
 * Callers:
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140753280 (PopWnfHibernatePolicyCallback.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
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
