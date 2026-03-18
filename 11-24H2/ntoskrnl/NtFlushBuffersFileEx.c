/*
 * XREFs of NtFlushBuffersFileEx @ 0x14096E410
 * Callers:
 *     NtFlushBuffersFile @ 0x14096E3E0 (NtFlushBuffersFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     IopFlushBuffersFile @ 0x14096E4A4 (IopFlushBuffersFile.c)
 */

__int64 __fastcall NtFlushBuffersFileEx(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+40h] [rbp-18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-10h] BYREF

  FileObject = 0LL;
  v6 = 0LL;
  result = IopReferenceFileObject(a1, 0, KeGetCurrentThread()->PreviousMode, (PVOID *)&FileObject, &v6);
  if ( (int)result >= 0 )
    return IopFlushBuffersFile(FileObject, v6.GrantedAccess, 0LL, 0LL, a5);
  return result;
}
