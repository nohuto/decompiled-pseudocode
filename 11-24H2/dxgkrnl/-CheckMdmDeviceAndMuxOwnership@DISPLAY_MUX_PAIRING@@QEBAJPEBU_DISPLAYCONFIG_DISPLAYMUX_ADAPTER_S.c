/*
 * XREFs of ?CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_PAIRING@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@PEAE1@Z @ 0x1400838C4
 * Callers:
 *     ?CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_MGR@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@PEAE1@Z @ 0x140083760 (-CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_MGR@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPO.c)
 * Callees:
 *     ?DoesGpuChildMatchMuxTargets@DISPLAY_MUX_DEVICE@@QEAA?AW4MUX_GPU_CHILD@@PEBU_UNICODE_STRING@@@Z @ 0x1400842C0 (-DoesGpuChildMatchMuxTargets@DISPLAY_MUX_DEVICE@@QEAA-AW4MUX_GPU_CHILD@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x1400853B4 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::CheckMdmDeviceAndMuxOwnership(
        DISPLAY_MUX_PAIRING *this,
        const struct _DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT *a2,
        unsigned __int8 *a3,
        bool *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  int DoesGpuChildMatchMuxTargets; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *a3 = 0;
  *a4 = 0;
  if ( DISPLAY_MUX_PAIRING::IsOperational(this) )
  {
    DestinationString = 0LL;
    UnicodeString = 0LL;
    RtlInitAnsiString(&DestinationString, (PCSZ)(v7 + 224));
    v9 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v8 = v9;
    if ( v9 >= 0 )
    {
      DoesGpuChildMatchMuxTargets = DISPLAY_MUX_DEVICE::DoesGpuChildMatchMuxTargets(
                                      *((_QWORD *)this + 1),
                                      &UnicodeString);
      if ( (unsigned int)(DoesGpuChildMatchMuxTargets - 1) <= 1 )
        *a3 = 1;
      v8 = 0;
      *a4 = DoesGpuChildMatchMuxTargets == *(_DWORD *)(*((_QWORD *)this + 1) + 72LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 2418;
    }
    RtlFreeUnicodeString(&UnicodeString);
  }
  else
  {
    v8 = -1073741823;
    WdLogSingleEntry1(2LL, -1073741823LL);
    WdLogGlobalForLineNumber = 2403;
  }
  return v8;
}
