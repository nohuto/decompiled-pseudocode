/*
 * XREFs of ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x1804593C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802BF9AC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetAssocElement(CWRLExecuteCommandBase *this, IUnknown *a2)
{
  SafeRelease<IShellItemArray>((__int64 *)this + 13);
  IUnknown_Set((IUnknown **)this + 12, a2);
  return 0LL;
}
