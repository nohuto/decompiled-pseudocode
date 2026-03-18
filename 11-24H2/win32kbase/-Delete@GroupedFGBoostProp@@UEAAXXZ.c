/*
 * XREFs of ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x14010C7A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x14010CD54 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x14010CD98 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 */

void __fastcall GroupedFGBoostProp::Delete(GroupedFGBoostProp *this)
{
  GroupedFGBoostProp::deRefAll(this);
  GroupedFGBoostProp::cleanUpAndReplace(this, 0, 0LL);
  GreDeleteFastMutex((char *)this);
}
