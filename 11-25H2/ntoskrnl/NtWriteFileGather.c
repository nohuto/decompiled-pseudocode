/*
 * XREFs of NtWriteFileGather @ 0x140AA6840
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 */

__int64 __fastcall NtWriteFileGather(
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
  struct _OBJECT_HANDLE_INFORMATION v13; // [rsp+70h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  result = IopReferenceFileObject(a1, 0, KeGetCurrentThread()->PreviousMode, (PVOID *)&BugCheckParameter2, &v13);
  if ( (int)result >= 0 )
    return IopWriteFileGather(
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
             v13.GrantedAccess,
             0LL,
             0LL,
             0);
  return result;
}
