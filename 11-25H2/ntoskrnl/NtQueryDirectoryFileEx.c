/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1408C6930
 * Callers:
 *     <none>
 * Callees:
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        volatile void *a6,
        SIZE_T a7,
        int a8,
        char a9,
        __int64 a10)
{
  __int64 result; // rax
  SIZE_T Length; // [rsp+30h] [rbp-78h]
  char v12; // [rsp+50h] [rbp-58h]
  char v13; // [rsp+80h] [rbp-28h] BYREF
  KPROCESSOR_MODE v14[7]; // [rsp+81h] [rbp-27h] BYREF
  __int64 v15; // [rsp+88h] [rbp-20h] BYREF
  __int64 v16; // [rsp+90h] [rbp-18h] BYREF
  struct _DEVICE_OBJECT *v17; // [rsp+98h] [rbp-10h] BYREF

  v13 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v14[0] = 0;
  LODWORD(Length) = a7;
  result = BuildQueryDirectoryIrp(
             a1,
             a5,
             a6,
             Length,
             a8,
             a9,
             a10,
             v12,
             (__int64)&v13,
             (__int64)&v17,
             (__int64)&v16,
             (__int64)&v15,
             v14);
  if ( !(_DWORD)result )
    return IopSynchronousServiceTail(v17, v16, v15, 1, v14[0], v13, 2u);
  return result;
}
