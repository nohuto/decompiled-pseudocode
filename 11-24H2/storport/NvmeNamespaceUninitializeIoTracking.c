/*
 * XREFs of NvmeNamespaceUninitializeIoTracking @ 0x140114E90
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeNamespaceInitializeIoTracking @ 0x140104B48 (NvmeNamespaceInitializeIoTracking.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceUninitializeIoTracking(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdi
  void *v4; // rcx

  v2 = g_CpuInfo;
  if ( *(_QWORD *)(a1 + 680) )
  {
    v3 = 0LL;
    if ( *((_DWORD *)g_CpuInfo + 2) )
    {
      do
      {
        v4 = *(void **)(*(_QWORD *)(a1 + 680) + 8 * v3);
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0x4D4E6152u);
          *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v3) = 0LL;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v2[2] );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 680), 0x4D4E6152u);
    *(_QWORD *)(a1 + 680) = 0LL;
  }
}
