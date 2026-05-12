/*
 * XREFs of FreeCpuInformation @ 0x140127FDC
 * Callers:
 *     DllUnload @ 0x1400A5120 (DllUnload.c)
 *     GetCpuInformation @ 0x14012811C (GetCpuInformation.c)
 * Callees:
 *     <none>
 */

void FreeCpuInformation()
{
  void *v0; // rcx
  PVOID *v1; // rcx
  __int64 v2; // rax
  void *v3; // rcx

  if ( g_CpuInfo )
  {
    v0 = (void *)*((_QWORD *)g_CpuInfo + 2);
    if ( v0 )
      ExFreePoolWithTag(v0, 0x49536152u);
    v1 = (PVOID *)g_CpuInfo;
    v2 = *((_QWORD *)g_CpuInfo + 3);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 72) )
      {
        ExFreePoolWithTag(*(PVOID *)(v2 + 72), 0x49536152u);
        v1 = (PVOID *)g_CpuInfo;
        *(_QWORD *)(*((_QWORD *)g_CpuInfo + 3) + 72LL) = 0LL;
      }
      ExFreePoolWithTag(v1[3], 0x49536152u);
    }
    v3 = (void *)*((_QWORD *)g_CpuInfo + 4);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x49536152u);
    ExFreePoolWithTag(g_CpuInfo, 0x49536152u);
    g_CpuInfo = 0LL;
  }
}
