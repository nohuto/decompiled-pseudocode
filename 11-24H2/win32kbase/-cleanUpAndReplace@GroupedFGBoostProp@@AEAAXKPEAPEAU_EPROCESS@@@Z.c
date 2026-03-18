/*
 * XREFs of ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x14010CD98
 * Callers:
 *     ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x14010C7A0 (-Delete@GroupedFGBoostProp@@UEAAXXZ.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C900 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14010CDDC (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall GroupedFGBoostProp::cleanUpAndReplace(GroupedFGBoostProp *this, int a2, struct _EPROCESS **a3)
{
  char *v5; // rcx

  v5 = (char *)*((_QWORD *)this + 4);
  if ( v5 )
    GreDeleteFastMutex(v5);
  *((_DWORD *)this + 6) = a2;
  *((_QWORD *)this + 4) = a3;
}
