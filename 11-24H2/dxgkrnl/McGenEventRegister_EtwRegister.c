/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x140064560
 * Callers:
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1401B92A4 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 *     SmmInitEtw @ 0x1403F5A44 (SmmInitEtw.c)
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
