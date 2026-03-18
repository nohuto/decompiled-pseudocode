/*
 * XREFs of NtAccessCheck @ 0x14043EBE0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheck(
        __int64 a1,
        void *a2,
        unsigned int a3,
        _OWORD *a4,
        volatile void *a5,
        _DWORD *a6,
        volatile void *a7,
        volatile void *a8)
{
  return SeAccessCheckByType(a1, 0LL, a2, a3, 0LL, 0, a4, a5, a6, a7, a8, 0);
}
