/*
 * XREFs of LdrpReadMemory @ 0x18007D430
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x18007C0F0 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x18007C210 (LdrQueryNextListEntry32.c)
 *     LdrQueryInLoadOrderModuleList @ 0x18007DB90 (LdrQueryInLoadOrderModuleList.c)
 * Callees:
 *     LdrpProtectedCopyMemory @ 0x18007DB20 (LdrpProtectedCopyMemory.c)
 *     ZwReadVirtualMemory @ 0x180160830 (ZwReadVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall LdrpReadMemory(__int64 a1, void *a2, void *a3, SIZE_T a4)
{
  __int64 (__fastcall *v4)(int, int, int, int, PSIZE_T); // rax
  void *v5; // r10
  int v7; // ebx
  NTSTATUS result; // eax
  ULONG_PTR NumberOfBytesRead; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(__int64 (__fastcall **)(int, int, int, int, PSIZE_T))(a1 + 8);
  v5 = *(void **)a1;
  NumberOfBytesRead = 0LL;
  v7 = -2147483635;
  if ( v4 == RtlpQueryReadVirtualMemory )
  {
    result = ZwReadVirtualMemory(v5, a2, a3, a4, &NumberOfBytesRead);
    if ( result < 0 )
      return result;
    result = 0;
    if ( NumberOfBytesRead != a4 )
      result = -2147483635;
  }
  else if ( (char *)v4 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(v5, a2, a3, a4, &NumberOfBytesRead);
  }
  else
  {
    result = ((__int64 (__fastcall *)(void *))v4)(v5);
  }
  if ( result >= 0 )
  {
    if ( NumberOfBytesRead == a4 )
      return 0;
    return v7;
  }
  return result;
}
