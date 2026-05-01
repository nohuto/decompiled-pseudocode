/*
 * XREFs of PsmHamDereferenceHostId @ 0x1800778A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall PsmHamDereferenceHostId(struct _HAM_HOSTID_ENTRY *a1)
{
  HamSrvHostIdStoreDereferenceEntry(a1);
}
