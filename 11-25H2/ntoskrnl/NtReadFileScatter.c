/*
 * XREFs of NtReadFileScatter @ 0x140ABBBA0
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 */

__int64 __fastcall NtReadFileScatter(
        void *a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        union _FILE_SEGMENT_ELEMENT *Src,
        ULONG Length,
        __int64 a8,
        ULONG *a9)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-18h] BYREF

  BugCheckParameter2 = 0LL;
  result = IopReferenceFileObject(a1, 1u, KeGetCurrentThread()->PreviousMode, (PVOID *)&BugCheckParameter2, 0LL);
  if ( (int)result >= 0 )
    return IopReadFileScatter(
             (struct _FILE_OBJECT *)BugCheckParameter2,
             a2,
             a3,
             a4,
             a5,
             (Length >> 12) + ((Length & 0xFFF) != 0),
             Src,
             Length,
             a8,
             a9,
             0LL,
             0LL);
  return result;
}
