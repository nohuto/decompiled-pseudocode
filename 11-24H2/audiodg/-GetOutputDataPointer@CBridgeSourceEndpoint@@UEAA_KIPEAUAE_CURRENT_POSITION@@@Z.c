/*
 * XREFs of ?GetOutputDataPointer@CBridgeSourceEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140038F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeSourceEndpoint::GetOutputDataPointer(
        CBridgeSourceEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  *(struct AE_CURRENT_POSITION *)((char *)this + 64) = *a3;
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7));
}
