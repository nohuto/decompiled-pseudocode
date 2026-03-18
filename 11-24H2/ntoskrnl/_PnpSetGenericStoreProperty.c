/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x140991934
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x1408B8BB0 (_PnpSetObjectPropertyWorker.c)
 *     PiDqIrpPropertySet @ 0x1409FA620 (PiDqIrpPropertySet.c)
 * Callees:
 *     _PnpDeletePropertyWorker @ 0x140991470 (_PnpDeletePropertyWorker.c)
 *     _PnpSetPropertyWorker @ 0x14099197C (_PnpSetPropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(int a1, int a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6, int a7)
{
  int v8; // [rsp+28h] [rbp-20h]

  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, (_DWORD)a3, a4, a5, a6, a7);
  else
    return PnpDeletePropertyWorker(a1, a2, a3, a4, 0, v8, a7);
}
