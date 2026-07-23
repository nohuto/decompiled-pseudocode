/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x140A33650
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1404C2668 (MiProcessKernelCfgImage.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiInitializeKernelCfgImages @ 0x140C5BBA0 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     MiSnapDriverRange @ 0x140A33798 (MiSnapDriverRange.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A33C7C (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReleaseKernelCfgLock @ 0x140A33D2C (MiReleaseKernelCfgLock.c)
 *     MiCompleteSecureDriverLoad @ 0x140A33D90 (MiCompleteSecureDriverLoad.c)
 *     MiAcquireKernelCfgLock @ 0x140A33E10 (MiAcquireKernelCfgLock.c)
 *     VslUnloadSecureDriver @ 0x140A33E74 (VslUnloadSecureDriver.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, int a2)
{
  int KernelCfgBitmapPageTables; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  int v6; // edx
  unsigned __int64 v7; // r8
  ULONG Size; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  Size = 0;
  if ( a2 )
  {
    MiAcquireKernelCfgLock();
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                  *(_QWORD *)(a1 + 48),
                                  *(unsigned int *)(a1 + 64),
                                  1LL);
    MiReleaseKernelCfgLock();
    if ( KernelCfgBitmapPageTables >= 0 )
    {
      KernelCfgBitmapPageTables = MiCompleteSecureDriverLoad(a1);
      if ( KernelCfgBitmapPageTables >= 0 )
      {
        v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
        v5 = v4;
        if ( v4 && Size >= 0xB0 && v4[21] )
        {
          v6 = 0;
          while ( 1 )
          {
            v6 = MiSnapDriverRange(a1, v6, 2, 0, (__int64)&v10, (__int64)&v11);
            if ( v10 )
            {
              v7 = v5[20];
              if ( v7 >= v10 << 25 >> 16 && v7 <= ((v11 << 25) | 0xFFF0000) >> 16 )
                break;
            }
            if ( !v6 )
              return (unsigned int)KernelCfgBitmapPageTables;
          }
          *(_DWORD *)(a1 + 104) |= 0x800u;
        }
        else
        {
          *(_DWORD *)(a1 + 104) |= 0x100u;
        }
      }
    }
  }
  else if ( (MiFlags & 0x4000) != 0 )
  {
    return (unsigned int)VslUnloadSecureDriver(*(_QWORD *)(a1 + 48));
  }
  else
  {
    return 0;
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
