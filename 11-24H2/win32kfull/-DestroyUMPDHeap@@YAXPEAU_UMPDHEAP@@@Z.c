/*
 * XREFs of ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1400D9E4C
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D8B1C (-vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D8CD0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 * Callees:
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DestroyUMPDHeap(struct _UMPDHEAP *a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  void *v3; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 1) )
    {
      IsEnabledDeviceUsageNoInline = Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline();
      v3 = (void *)*((_QWORD *)a1 + 1);
      if ( IsEnabledDeviceUsageNoInline )
        GrepUnsecureVirtualMemory(v3);
      else
        MmUnsecureVirtualMemory(v3);
    }
    if ( *(_QWORD *)a1 )
    {
      BaseAddress = *(PVOID *)a1;
      RegionSize = 0x400000LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    Win32FreePool(a1);
  }
}
