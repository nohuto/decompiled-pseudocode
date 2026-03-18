/*
 * XREFs of ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14000FEC0
 * Callers:
 *     DxgkUnmapPhysicalMemoryCB @ 0x14000FEA0 (DxgkUnmapPhysicalMemoryCB.c)
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14028035C (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     SmmUnmapMdl @ 0x14000FA48 (SmmUnmapMdl.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140010C80 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x14009344C (McTemplateK0ppx_EtwWriteTransfer.c)
 *     SmmUnmapSection @ 0x1402802BC (SmmUnmapSection.c)
 */

void __fastcall SysMmUnmapPhysicalObject(struct _MDL **a1, PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v3; // si
  char v4; // di
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  v3 = NumberOfBytes;
  v4 = (char)BaseAddress;
  switch ( (*((_DWORD *)a1 + 11) >> 1) & 0xF )
  {
    case 1:
      SmmUnmapSection(BaseAddress);
      break;
    case 2:
      SmmUnmapMdl((__int64)a1, a1[1], BaseAddress);
      break;
    case 3:
      MmUnmapIoSpace(BaseAddress, NumberOfBytes);
      break;
    default:
      if ( ((*((_DWORD *)a1 + 11) >> 1) & 0xFu) - 4 > 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 807;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"0", 807LL, 0LL, 0LL, 0LL, 0LL);
      }
      break;
  }
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)a1);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0ppx_EtwWriteTransfer(v7, v6, v8, (_DWORD)a1, v4, v3);
}
