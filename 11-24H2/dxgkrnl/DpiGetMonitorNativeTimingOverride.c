/*
 * XREFs of DpiGetMonitorNativeTimingOverride @ 0x140254CA0
 * Callers:
 *     ?GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14027DBB0 (-GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028BA8 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall DpiGetMonitorNativeTimingOverride(__int64 a1, int a2, _OWORD *a3)
{
  unsigned int v4; // esi
  _QWORD *ChildDescriptor; // rax
  __int64 v6; // rdi

  v4 = -1071841279;
  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *((_QWORD *)a3 + 6) = 0LL;
  if ( ChildDescriptor )
  {
    v6 = ChildDescriptor[13];
    if ( v6 && RtlCompareMemory(a3, (const void *)(v6 + 8), 0x38uLL) != 56 )
    {
      v4 = 0;
      *a3 = *(_OWORD *)(v6 + 8);
      a3[1] = *(_OWORD *)(v6 + 24);
      a3[2] = *(_OWORD *)(v6 + 40);
      *((_QWORD *)a3 + 6) = *(_QWORD *)(v6 + 56);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
