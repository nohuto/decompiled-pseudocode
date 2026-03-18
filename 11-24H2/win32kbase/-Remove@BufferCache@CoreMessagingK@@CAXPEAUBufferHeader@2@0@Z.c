/*
 * XREFs of ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@2@0@Z @ 0x14010AB00
 * Callers:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x140049348 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::BufferCache::Remove(
        struct CoreMessagingK::BufferHeader *a1,
        struct CoreMessagingK::BufferHeader *a2,
        __int64 a3)
{
  __int64 v3; // rbx

  v3 = *((_QWORD *)a1 + 1);
  if ( a2 )
    *((_QWORD *)a2 + 1) = v3;
  else
    *(_QWORD *)(W32GetUserCoreMessagingSessionState(a1, 0LL, a3) + 16) = v3;
  *((_QWORD *)a1 + 1) = 0LL;
}
