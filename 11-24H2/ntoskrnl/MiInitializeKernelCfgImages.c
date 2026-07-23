/*
 * XREFs of MiInitializeKernelCfgImages @ 0x140C5BBA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     MiProcessKernelCfgImage @ 0x1404C2668 (MiProcessKernelCfgImage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiMarkKernelImageCfgBits @ 0x140A33650 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A33C7C (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A5E1C0 (MiProcessKernelCfgImageLoadConfig.c)
 */

__int64 __fastcall MiInitializeKernelCfgImages(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int KernelCfgBitmapPageTables; // eax
  PVOID v5; // rdx
  int Config; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x2000) != 0 )
      return 0LL;
    v5 = *(PVOID *)(BugCheckParameter2 + 48);
    if ( v5 == PsNtosImageBase )
    {
      RtlImageNtHeaderEx(1u, v5, 0LL, &OutHeaders);
      Config = MiMarkKernelImageCfgBits(BugCheckParameter2, 1);
      *(_DWORD *)(BugCheckParameter2 + 104) |= 0x2000u;
    }
    else
    {
      Config = MiProcessKernelCfgImageLoadConfig(BugCheckParameter2);
      if ( Config < 0 )
        goto LABEL_13;
      Config = MiProcessKernelCfgImage(BugCheckParameter2, 0, 0LL);
    }
    if ( Config >= 0 )
      return 0LL;
LABEL_13:
    KeBugCheckEx(0x422u, Config, BugCheckParameter2, 0LL, 0LL);
  }
  if ( _bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
  {
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                  *(_QWORD *)(BugCheckParameter2 + 48),
                                  *(_DWORD *)(BugCheckParameter2 + 64),
                                  0);
    if ( KernelCfgBitmapPageTables < 0 )
      KeBugCheckEx(0x422u, KernelCfgBitmapPageTables, BugCheckParameter2, 1uLL, 0LL);
    *(_DWORD *)(BugCheckParameter2 + 104) |= 0x2100u;
  }
  return 0LL;
}
