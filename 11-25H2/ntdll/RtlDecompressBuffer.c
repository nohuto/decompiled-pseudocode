/*
 * XREFs of RtlDecompressBuffer @ 0x180144C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDecompressBuffer(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 <= 8u )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _DWORD, __int64, _QWORD))RtlDecompressBufferProcs[a1])(
             a2,
             a3,
             a4,
             a5,
             0,
             a6,
             0LL);
  return 3221226079LL;
}
