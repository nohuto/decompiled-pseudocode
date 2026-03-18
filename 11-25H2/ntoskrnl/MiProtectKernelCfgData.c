/*
 * XREFs of MiProtectKernelCfgData @ 0x140C3D8A0
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 */

__int64 __fastcall MiProtectKernelCfgData(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // r8
  unsigned int i; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  RtlImageNtHeaderEx(1, v1, 0LL, &v8);
  v3 = *(unsigned __int16 *)(v8 + 20) + v8 + 24;
  for ( i = 0; i < *(unsigned __int16 *)(v8 + 6); ++i )
  {
    if ( *(_DWORD *)v3 == 1380402755 && *(_WORD *)(v3 + 4) == 79 )
    {
      v5 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(v3 + 12);
      v6 = v5 + *(unsigned int *)(v3 + 8) - 1LL;
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
    v3 += 40LL;
  }
  return 0LL;
}
