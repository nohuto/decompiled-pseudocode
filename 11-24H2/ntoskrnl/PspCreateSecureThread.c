/*
 * XREFs of PspCreateSecureThread @ 0x140A6BAE8
 * Callers:
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     KeSecureThread @ 0x1404B5B34 (KeSecureThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *Pool2; // rbx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  _OWORD v10[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)v10);
  v4 = MmSizeOfMdl((PVOID)Base, 0x798uLL);
  Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL, v4, 0x65537350u);
  Pool2->Next = 0LL;
  Pool2->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6039) >> 12) + 6);
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = Base & 0xFFF;
  Pool2->ByteCount = 1944;
  MmProbeAndLockPages(Pool2, 0, IoModifyAccess);
  v6 = KeSecureThread(Base, (int)Pool2, *(_QWORD *)(Base + 1296), *(_QWORD *)(Base + 1376), a2);
  if ( v6 < 0 )
  {
    MmUnlockPages(Pool2);
    ExFreePoolWithTag(Pool2, 0x65537350u);
  }
  KiUnstackDetachProcess((__int64)v10, 0, v7, v8);
  return (unsigned int)v6;
}
