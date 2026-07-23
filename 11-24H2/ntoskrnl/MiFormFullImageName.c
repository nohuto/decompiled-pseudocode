/*
 * XREFs of MiFormFullImageName @ 0x1407E7BA0
 * Callers:
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlAppendStringToString @ 0x140A7B170 (RtlAppendStringToString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFormFullImageName(unsigned __int16 *a1, const STRING *a2, STRING *a3)
{
  unsigned __int16 v4; // r9
  char *Pool; // rax
  NTSTATUS appended; // eax
  char *Buffer; // rcx

  v4 = a2->Length + 2 + *a1;
  a3->MaximumLength = v4;
  Pool = (char *)MiAllocatePool(0x100uLL, v4, 1413770573);
  a3->Buffer = Pool;
  if ( !Pool )
    return 0LL;
  a3->Length = *a1;
  memmove(Pool, *((const void **)a1 + 1), *a1);
  appended = RtlAppendStringToString(a3, a2);
  Buffer = a3->Buffer;
  if ( appended < 0 )
  {
    ExFreePoolWithTag(Buffer, 0);
    return 0LL;
  }
  *(_WORD *)&Buffer[2 * ((unsigned __int64)a3->Length >> 1)] = 0;
  return 1LL;
}
