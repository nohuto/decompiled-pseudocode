/*
 * XREFs of ?CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x14023CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x140049348 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::CancelBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        char *a4)
{
  CoreMessagingK::BufferCache::Free(a4 - 80);
  return 0LL;
}
