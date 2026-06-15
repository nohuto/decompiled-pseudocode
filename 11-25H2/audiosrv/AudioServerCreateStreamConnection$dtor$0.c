/*
 * XREFs of AudioServerCreateStreamConnection$dtor$0 @ 0x1801673B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerCreateStreamConnection_dtor_0(__int64 a1, __int64 a2)
{
  std::shared_ptr<CStreamConnectionManager>::~shared_ptr<CStreamConnectionManager>(a2 + 56);
}
