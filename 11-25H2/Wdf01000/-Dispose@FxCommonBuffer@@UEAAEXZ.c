/*
 * XREFs of ?Dispose@FxCommonBuffer@@UEAAEXZ @ 0x14006FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCommonBuffer@FxCommonBuffer@@QEAAXXZ @ 0x14006FD08 (-FreeCommonBuffer@FxCommonBuffer@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxCommonBuffer::Dispose(FxCommonBuffer *this)
{
  FxCommonBuffer::FreeCommonBuffer(this);
  return 1;
}
