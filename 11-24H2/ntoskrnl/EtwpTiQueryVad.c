/*
 * XREFs of EtwpTiQueryVad @ 0x1409F4AC0
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409F49C0 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryVad(__int64 a1, _KPROCESS *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r12d
  PVOID *v6; // r14
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r15
  NTSTATUS VirtualMemory; // eax
  void *Pool2; // rax
  _OWORD v16[3]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a4;
  memset(v16, 0, sizeof(v16));
  v6 = (PVOID *)a3;
  if ( a2 == KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a2, 0, (__int64)v16);
    v8 = 1;
  }
  v9 = 0;
  v10 = 0;
  if ( v5 )
  {
    v11 = (PVOID *)(a1 + 56);
    v12 = (char *)(a1 + 8);
    do
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        *v6,
                        MemoryRegionInformation,
                        v12,
                        0x30uLL,
                        0LL);
      *((_DWORD *)v11 - 14) = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        v9 |= 1 << v10;
        if ( a5 )
        {
          Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x6E734954u);
          *v11 = Pool2;
          if ( !Pool2
            || ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 *v6,
                 MemoryMappedFilenameInformation,
                 Pool2,
                 0x200uLL,
                 0LL) >= 0 )
          {
            goto LABEL_11;
          }
          ExFreePoolWithTag(*v11, 0);
        }
        *v11 = 0LL;
      }
LABEL_11:
      ++v10;
      v12 += 64;
      ++v6;
      v11 += 8;
    }
    while ( v10 < v5 );
  }
  if ( v8 )
    KiUnstackDetachProcess((__int64)v16, 0, a3, a4);
  return v9;
}
