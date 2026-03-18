/*
 * XREFs of ?GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z @ 0x1400875A0
 * Callers:
 *     EngAllocUserMemEx @ 0x1400873D8 (EngAllocUserMemEx.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1401755F8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     GdiProcessCallout @ 0x140179DD0 (GdiProcessCallout.c)
 *     EngSecureMem @ 0x1401C3030 (EngSecureMem.c)
 * Callees:
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x1401C4964 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 */

HANDLE __fastcall GrepSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  if ( !(unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() || Size )
    return MmSecureVirtualMemory(Address, Size, ProbeMode);
  else
    return 0LL;
}
