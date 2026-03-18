/*
 * XREFs of NtAccessCheckByType @ 0x1404557D0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheckByType(
        __int64 a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        volatile void *a10,
        volatile void *a11)
{
  return SeAccessCheckByType(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0);
}
