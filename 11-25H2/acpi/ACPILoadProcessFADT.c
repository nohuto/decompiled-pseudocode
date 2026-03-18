/*
 * XREFs of ACPILoadProcessFADT @ 0x1400C7770
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1400C9308 (ACPILoadProcessRSDT.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeClearRegisters @ 0x140021CA4 (ACPIGpeClearRegisters.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     ACPIProcessHardwareInformation @ 0x14009EFF0 (ACPIProcessHardwareInformation.c)
 *     ACPILoadProcessDSDT @ 0x1400C74D8 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1400C7618 (ACPILoadProcessFACS.c)
 */

__int64 ACPILoadProcessFADT()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int v2; // edx
  bool v3; // zf

  v0 = *((_QWORD *)AcpiInformation + 1);
  if ( *(_BYTE *)(v0 + 8) >= 5u && (*(_DWORD *)(v0 + 112) & 0x100000) != 0 )
    *((_BYTE *)AcpiInformation + 133) = 1;
  result = ACPILoadProcessFACS();
  if ( (int)result >= 0 || *((_BYTE *)AcpiInformation + 133) )
  {
    if ( !*((_BYTE *)AcpiInformation + 133) )
    {
      result = ACPIProcessHardwareInformation();
      if ( (int)result < 0 )
        return result;
      ACPIGpeClearRegisters();
      ACPIGpeEnableDisableEvents(0);
    }
    *((_DWORD *)AcpiInformation + 31) = 0;
    *((_DWORD *)AcpiInformation + 32) = 0;
    v3 = (*(_DWORD *)(v0 + 112) & 0x200) == 0;
    *((_BYTE *)AcpiInformation + 132) = (*(_DWORD *)(v0 + 112) & 0x200) != 0;
    if ( !v3 && (*((_BYTE *)AcpiInformation + 133) || (*(_DWORD *)(v0 + 112) & 0x200000) != 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v2,
          6,
          17,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
      }
      KeBugCheckEx(0xA5u, 0x11uLL, 0xCuLL, *(unsigned int *)(v0 + 112), 0LL);
    }
    return ACPILoadProcessDSDT();
  }
  return result;
}
