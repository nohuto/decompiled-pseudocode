/*
 * XREFs of NvmeFreeContiguousMemory @ 0x140087FC4
 * Callers:
 *     CreateNVMePrpListBufferPool @ 0x140119754 (CreateNVMePrpListBufferPool.c)
 *     DeleteNVMePrpListBufferPool @ 0x140119E18 (DeleteNVMePrpListBufferPool.c)
 *     NvmeControllerFreeExtendedCommand @ 0x1401293D8 (NvmeControllerFreeExtendedCommand.c)
 * Callees:
 *     IsDmarEnabled @ 0x140011E00 (IsDmarEnabled.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeFreeContiguousMemory(__int64 a1)
{
  void *v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r10
  unsigned int v4; // r11d
  char v5; // [rsp+20h] [rbp-18h]

  if ( IsDmarEnabled(a1) )
  {
    v5 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, void *, char))(*(_QWORD *)(*(_QWORD *)(v2 + 1144) + 8LL) + 24LL))(
      *(_QWORD *)(v2 + 1144),
      v4,
      v3,
      v1,
      v5);
  }
  else
  {
    MmFreeContiguousMemory(v1);
  }
}
