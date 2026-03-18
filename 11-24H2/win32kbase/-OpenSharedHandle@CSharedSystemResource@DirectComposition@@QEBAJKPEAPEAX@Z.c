/*
 * XREFs of ?OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJKPEAPEAX@Z @ 0x14010C748
 * Callers:
 *     NtDCompositionCreateSharedResourceHandle @ 0x140194530 (NtDCompositionCreateSharedResourceHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedSystemResource::OpenSharedHandle(
        DirectComposition::CSharedSystemResource *this,
        __int64 a2,
        void **Handle)
{
  *Handle = (void *)-1LL;
  return ObOpenObjectByPointer((char *)this - 24, 0x40u, 0LL, 3u, ExCompositionObjectType, 0, Handle);
}
