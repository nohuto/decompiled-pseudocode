/*
 * XREFs of NvmeFreeContiguousMemorySpecifyCacheEx @ 0x140055D98
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 * Callees:
 *     IsDmarEnabled @ 0x140011E00 (IsDmarEnabled.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeFreeContiguousMemorySpecifyCacheEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  MEMORY_CACHING_TYPE v8; // r9d
  void *v9; // r10
  SIZE_T v10; // r11
  char v12; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 1144);
  if ( IsDmarEnabled(a1) )
  {
    v12 = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, char))(*(_QWORD *)(v5 + 8) + 24LL))(
      v5,
      (unsigned int)v10,
      a5,
      v6,
      v12);
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x2000) != 0 && v10 <= 0x1000 )
  {
    if ( v9 )
      ExFreePoolWithTag(v9, 0x45416152u);
  }
  else
  {
    MmFreeContiguousMemorySpecifyCache(v9, v10, v8);
  }
  return 0LL;
}
