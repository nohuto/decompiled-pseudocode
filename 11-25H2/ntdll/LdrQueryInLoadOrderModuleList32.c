/*
 * XREFs of LdrQueryInLoadOrderModuleList32 @ 0x18006ADD0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800698A0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpProtectedCopyMemory @ 0x18006AC40 (LdrpProtectedCopyMemory.c)
 *     LdrpQueryInformationCurrentProcess @ 0x18006AF20 (LdrpQueryInformationCurrentProcess.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall LdrQueryInLoadOrderModuleList32(void **a1, _QWORD *a2, _QWORD *a3)
{
  __int64 (__fastcall *v6)(void *, __int64, __int64 *); // rax
  void *v7; // rcx
  int result; // eax
  void *v9; // rcx
  void *v10; // rdx
  __int64 (__fastcall *v11)(void *, void *, unsigned int *, __int64, ULONG_PTR *); // rax
  __int64 v12; // rcx
  unsigned int Buffer; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  Buffer = 0;
  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v6 = (__int64 (__fastcall *)(void *, __int64, __int64 *))a1[2];
  v7 = *a1;
  if ( (char *)v6 == (char *)LdrpQueryInformationCurrentProcess )
    result = LdrpQueryInformationCurrentProcess(v7, 26LL, &v15);
  else
    result = v6(v7, 26LL, &v15);
  if ( result >= 0 )
  {
    if ( !v15 )
      return 0;
    v9 = *a1;
    v10 = (void *)(v15 + 12);
    v11 = (__int64 (__fastcall *)(void *, void *, unsigned int *, __int64, ULONG_PTR *))a1[1];
    NumberOfBytesRead = 0LL;
    if ( (char *)v11 == (char *)RtlpQueryReadVirtualMemory )
    {
      result = ZwReadVirtualMemory(v9, v10, &Buffer, 4uLL, &NumberOfBytesRead);
      if ( result < 0 )
        return result;
      result = 0;
      if ( NumberOfBytesRead != 4 )
        result = -2147483635;
    }
    else if ( (char *)v11 == (char *)LdrpProtectedCopyMemory )
    {
      result = LdrpProtectedCopyMemory((__int64)v9, v10, &Buffer, 4uLL, &NumberOfBytesRead);
    }
    else
    {
      result = v11(v9, v10, &Buffer, 4LL, &NumberOfBytesRead);
    }
    if ( result >= 0 )
    {
      if ( NumberOfBytesRead != 4 )
        return -2147483635;
      v12 = Buffer;
      if ( Buffer )
      {
        *a2 = Buffer + 12LL;
        if ( a3 )
          *a3 = v12 + 28;
      }
      return 0;
    }
  }
  return result;
}
