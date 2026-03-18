/*
 * XREFs of SmmDestroyPhysicalObject @ 0x140020278
 * Callers:
 *     ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x14001F82C (-SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140020110 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     SmmCreatePhysicalObjectForMdl @ 0x140020778 (SmmCreatePhysicalObjectForMdl.c)
 *     SmmCreatePhysicalObject @ 0x140020860 (SmmCreatePhysicalObject.c)
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x1400209DC (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0xxqqtpqp_EtwWriteTransfer @ 0x14006075C (McTemplateK0xxqqtpqp_EtwWriteTransfer.c)
 */

void __fastcall SmmDestroyPhysicalObject(_QWORD *a1, char a2)
{
  PVOID *v2; // rdi
  _DWORD *v4; // rsi
  unsigned __int64 v6; // rcx
  volatile signed __int64 *v7; // rax
  void *v8; // rcx

  v2 = (PVOID *)(a1 + 1);
  v4 = (_DWORD *)a1 + 11;
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0xxqqtpqp_EtwWriteTransfer(
      (*v4 >> 11) & 3,
      (unsigned int)&DestroyPhysicalObject,
      (*v4 >> 1) & 0xF,
      *a1,
      (char)*v2,
      (*v4 >> 1) & 0xF,
      (*v4 >> 11) & 3,
      (*v4 & 0x200) != 0,
      a1[2],
      (*v4 >> 5) & 0xF,
      (char)a1);
  if ( a2 )
  {
    v6 = (unsigned int)*v4;
    if ( (v6 & 0x200) == 0 )
    {
      if ( (((unsigned int)v6 >> 1) & 0xF) == 1 )
      {
        ObfDereferenceObject(*v2);
      }
      else if ( (((unsigned int)v6 >> 1) & 0xF) == 2 )
      {
        MmFreePagesFromMdl((PMDL)*v2);
        if ( (*v4 & 0x400) == 0 )
          ExFreePoolWithTag(*v2, 0);
        *v2 = 0LL;
      }
      else if ( (((unsigned int)v6 >> 1) & 0xF) != 3 )
      {
        if ( (((unsigned int)v6 >> 1) & 0xF) == 4 )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2, a1, 0x8000u);
        }
        else if ( (((unsigned int)v6 >> 1) & 0xF) == 5 )
        {
          MmFreeContiguousMemory(*v2);
        }
        else
        {
          WdLogSingleEntry5(0LL, 484LL, 1LL, a1, (v6 >> 1) & 0xF, 0LL);
          WdLogGlobalForLineNumber = 495;
        }
      }
    }
  }
  _InterlockedAdd64(&qword_140161618, -*a1);
  v7 = (volatile signed __int64 *)&unk_140161628;
  if ( (*v4 & 1) == 0 )
    v7 = (volatile signed __int64 *)&unk_140161620;
  _InterlockedAdd64(v7, -*a1);
  v8 = (void *)a1[3];
  if ( v8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
