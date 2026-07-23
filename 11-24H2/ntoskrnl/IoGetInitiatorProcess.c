/*
 * XREFs of IoGetInitiatorProcess @ 0x140402500
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x140402490 (IoIsInitiator32bitProcess.c)
 *     IopCheckInitiatorHint @ 0x140445658 (IopCheckInitiatorHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 208);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 16)) != 0 )
    return *(_QWORD *)(v2 + 8);
  else
    return 0LL;
}
