/*
 * XREFs of MiProtectKernelCfgData @ 0x140C50C60
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 */

__int64 __fastcall MiProtectKernelCfgData(__int64 a1)
{
  void *v1; // rdx
  char *v3; // r8
  unsigned int i; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  PIMAGE_NT_HEADERS v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 48);
  v8 = 0LL;
  RtlImageNtHeaderEx(1u, v1, 0LL, &v8);
  v3 = (char *)&v8->OptionalHeader + v8->FileHeader.SizeOfOptionalHeader;
  for ( i = 0; i < v8->FileHeader.NumberOfSections; ++i )
  {
    if ( *(_DWORD *)v3 == 1380402755 && *((_WORD *)v3 + 2) == 79 )
    {
      v5 = *(_QWORD *)(a1 + 48) + *((unsigned int *)v3 + 3);
      v6 = v5 + *((unsigned int *)v3 + 2) - 1LL;
      if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
        MiProtectLargeKernelHalRange(
          v5 & 0xFFFFFFFFFFE00000uLL,
          (v6 + 0x200000) & 0xFFFFFFFFFFE00000uLL,
          0x40000000u,
          1);
      else
        MiSetSystemCodeProtection(
          a1,
          ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          1u,
          0);
      return 0LL;
    }
    v3 += 40;
  }
  return 0LL;
}
