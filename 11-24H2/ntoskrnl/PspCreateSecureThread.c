/*
 * XREFs of PspCreateSecureThread @ 0x140A72708
 * Callers:
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 * Callees:
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MmSizeOfMdl @ 0x140458550 (MmSizeOfMdl.c)
 *     KeSecureThread @ 0x1404BAC94 (KeSecureThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  struct _MDL *Pool2; // rbx
  int v5; // edi
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)v7);
  MmSizeOfMdl((PVOID)Base, 0x798uLL);
  Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL);
  Pool2->Next = 0LL;
  Pool2->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6039) >> 12) + 6);
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = Base & 0xFFF;
  Pool2->ByteCount = 1944;
  MmProbeAndLockPages(Pool2, 0, IoModifyAccess);
  v5 = KeSecureThread(Base, (int)Pool2, *(_QWORD *)(Base + 1296), *(_QWORD *)(Base + 1376), a2);
  if ( v5 < 0 )
  {
    MmUnlockPages(Pool2);
    ExFreePoolWithTag(Pool2, 0x65537350u);
  }
  KiUnstackDetachProcess((__int64)v7, 0);
  return (unsigned int)v5;
}
