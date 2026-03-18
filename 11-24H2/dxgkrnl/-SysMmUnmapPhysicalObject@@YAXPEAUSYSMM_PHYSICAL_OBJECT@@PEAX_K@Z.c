/*
 * XREFs of ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14001F350
 * Callers:
 *     DxgkUnmapPhysicalMemoryCB @ 0x14001F330 (DxgkUnmapPhysicalMemoryCB.c)
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1402877FC (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmUnmapMdl @ 0x14001EED8 (SmmUnmapMdl.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140020110 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x1400959A4 (McTemplateK0ppx_EtwWriteTransfer.c)
 *     SmmUnmapSection @ 0x14028775C (SmmUnmapSection.c)
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
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0", 807LL, 0LL, 0LL, 0LL, 0LL);
      }
      break;
  }
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)a1);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0ppx_EtwWriteTransfer(v7, v6, v8, (_DWORD)a1, v4, v3);
}
