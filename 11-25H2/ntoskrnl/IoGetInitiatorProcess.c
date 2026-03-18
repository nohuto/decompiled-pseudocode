/*
 * XREFs of IoGetInitiatorProcess @ 0x140401A00
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x140401990 (IoIsInitiator32bitProcess.c)
 *     IopCheckInitiatorHint @ 0x14044F064 (IopCheckInitiatorHint.c)
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
