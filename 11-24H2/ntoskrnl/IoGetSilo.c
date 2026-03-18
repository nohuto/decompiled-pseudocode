/*
 * XREFs of IoGetSilo @ 0x140431AC0
 * Callers:
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 208);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 64)) != 0 )
    return *(_QWORD *)(v2 + 8);
  else
    return 0LL;
}
