/*
 * XREFs of ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1403D3958
 * Callers:
 *     DxgkDdiReadVirtualFunctionConfigBlock @ 0x14020A454 (DxgkDdiReadVirtualFunctionConfigBlock.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x140210A70 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     DxgkDdiReadVirtualFunctionConfig @ 0x1403D38A8 (DxgkDdiReadVirtualFunctionConfig.c)
 * Callees:
 *     McTemplateK0pzzq_EtwWriteTransfer @ 0x14005C4E0 (McTemplateK0pzzq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void VgpuTraceFrequentRead(__int64 a1, int a2, void *a3, const unsigned __int16 *a4, wchar_t *Format, ...)
{
  char v7; // si
  wchar_t *v9; // r8
  const EVENT_DESCRIPTOR *v10; // rdx
  int v11; // [rsp+30h] [rbp-258h]
  wchar_t Dst[256]; // [rsp+50h] [rbp-238h] BYREF
  va_list ArgList; // [rsp+2B8h] [rbp+30h] BYREF

  va_start(ArgList, Format);
  v7 = a1;
  memset(Dst, 0, sizeof(Dst));
  v9 = Format;
  if ( Format )
    vswprintf_s(Dst, 0x100uLL, Format, ArgList);
  if ( v7 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
      return;
    v11 = 0;
    v10 = (const EVENT_DESCRIPTOR *)&EventGpuPartitioningStart;
    goto LABEL_6;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    v11 = a2;
    v10 = (const EVENT_DESCRIPTOR *)&EventGpuPartitioningEnd;
LABEL_6:
    McTemplateK0pzzq_EtwWriteTransfer(a1, v10, (__int64)v9, a3, a4, Dst, v11);
  }
}
