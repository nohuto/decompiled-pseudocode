/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x1405FC2A0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheckByTypeResultList(
        __int64 a1,
        void *a2,
        void *a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        volatile void *a10,
        volatile void *a11)
{
  return SeAccessCheckByType(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 1);
}
