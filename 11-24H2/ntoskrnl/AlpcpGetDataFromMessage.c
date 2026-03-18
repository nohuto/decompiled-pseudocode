/*
 * XREFs of AlpcpGetDataFromMessage @ 0x14088AE68
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14086392C (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14088A87C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x140899160 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14088AE18 (AlpcpGetDataFromUserVaSafe.c)
 */

void *__fastcall AlpcpGetDataFromMessage(__int64 a1, char *a2)
{
  __int64 v4; // rdi
  size_t v5; // rdi
  size_t v6; // rsi
  const void *v7; // rdx
  char *v8; // rcx

  if ( *(_QWORD *)(a1 + 176) )
    return AlpcpGetDataFromUserVaSafe(a1, a2);
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 32) - 40LL;
  else
    v5 = 512LL;
  v6 = *(unsigned __int16 *)(a1 + 240);
  v7 = (const void *)(a1 + 280);
  v8 = a2;
  if ( v6 > v5 )
  {
    memmove(a2, v7, v5);
    v7 = *(const void **)(a1 + 224);
    v8 = &a2[v5];
    v6 -= v5;
  }
  return memmove(v8, v7, v6);
}
