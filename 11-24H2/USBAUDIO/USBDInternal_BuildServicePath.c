/*
 * XREFs of USBDInternal_BuildServicePath @ 0x140018C08
 * Callers:
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140018EE0 (USBDInternal_QueryUsbVerifierSettings.c)
 * Callees:
 *     RtlStringCbCatW @ 0x1400189C8 (RtlStringCbCatW.c)
 *     memmove @ 0x14001BC00 (memmove.c)
 *     memset @ 0x14001BF00 (memset.c)
 */

__int64 __fastcall USBDInternal_BuildServicePath(__int64 a1, _QWORD *a2, ULONG a3)
{
  __int64 v3; // rbx
  void *v4; // rdi
  unsigned int v7; // ebx
  const void *v8; // r14
  unsigned int v9; // ebx
  unsigned int v10; // esi
  PVOID PoolWithTag; // rax
  NTSTRSAFE_PCWSTR v12; // r8
  NTSTATUS v13; // eax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  if ( *(_WORD *)(v3 + 56) > 0x10u && RtlCompareMemory(*(const void **)(v3 + 64), L"\\Driver\\", 0x10uLL) == 16 )
  {
    v8 = (const void *)(*(_QWORD *)(v3 + 64) + 16LL);
    v9 = *(unsigned __int16 *)(v3 + 56) - 16;
    v10 = v9 + 24;
    PoolWithTag = ExAllocatePoolWithTag(PoolType, v9 + 24, a3);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9 + 24);
      memmove(v4, v8, v9);
      v13 = RtlStringCbCatW((NTSTRSAFE_PWSTR)v4, v9 + 24, v12);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v7 = 0;
      }
      else
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "RtlStringCchCatW failed with status 0x%x", v13);
        ExFreePoolWithTag(v4, a3);
        v4 = 0LL;
      }
    }
    else
    {
      v7 = -1073741670;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Couldnt allocate servicePath of size %d\n", v10);
    }
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Unexpected Driver name, Drvobj 0x%p\n", (const void *)v3);
    v7 = -1073741595;
  }
  result = v7;
  *a2 = v4;
  return result;
}
