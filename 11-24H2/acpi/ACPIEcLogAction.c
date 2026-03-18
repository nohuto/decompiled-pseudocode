/*
 * XREFs of ACPIEcLogAction @ 0x140019010
 * Callers:
 *     AcpiEcCommonDpcHandler @ 0x140017F0C (AcpiEcCommonDpcHandler.c)
 *     ACPIEcOpRegionHandler @ 0x140018460 (ACPIEcOpRegionHandler.c)
 *     ACPIEcQueueEcIrp @ 0x1400185D0 (ACPIEcQueueEcIrp.c)
 *     ACPIEcServiceDevice @ 0x14001873C (ACPIEcServiceDevice.c)
 *     ACPIEcServiceIoLoop @ 0x140018860 (ACPIEcServiceIoLoop.c)
 *     ACPIEcWatchdogDpc @ 0x14004EA00 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall ACPIEcLogAction(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int64 v4; // r10
  char v8; // r11
  unsigned __int8 v9; // r10
  LARGE_INTEGER v10; // rax
  __int16 v11; // cx
  bool v12; // cc
  LARGE_INTEGER result; // rax
  unsigned __int8 v14; // r10
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v16; // cx
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v20; // rcx

  v4 = *(unsigned __int8 *)(a1 + 505);
  v8 = *(_BYTE *)(a1 + 24 * v4 + 648);
  if ( (v8 & 0xF0) == 0xA0
    && (v17 = ((_BYTE)v4 - 1) & 0x1F, *(_BYTE *)(a1 + 24 * v17 + 648) == (*(_BYTE *)(a1 + 488) | a2))
    && *(_BYTE *)(a1 + 24 * v17 + 649) == a3
    && *(_QWORD *)(a1 + 24 * v17 + 656) == a4 )
  {
    v18 = a1 + 24 * v4;
    if ( (*(_BYTE *)(v18 + 649))++ == 0xFF )
      *(_BYTE *)(v18 + 649) = -1;
    result = KeQueryPerformanceCounter(0LL);
    v20 = result.QuadPart + *(unsigned __int16 *)(v18 + 650) - ACPIEcLastActionTime;
    if ( v20 > 0xFFFF )
      LOWORD(v20) = -1;
    *(_WORD *)(v18 + 650) = v20;
  }
  else if ( v8 == (*(_BYTE *)(a1 + 488) | a2)
         && *(_BYTE *)(a1 + 24 * v4 + 649) == a3
         && *(_QWORD *)(a1 + 24 * v4 + 656) == a4 )
  {
    v14 = (v4 + 1) & 0x1F;
    *(_BYTE *)(a1 + 505) = v14;
    *(_BYTE *)(a1 + 24LL * v14 + 649) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
    v12 = PerformanceCounter.QuadPart - ACPIEcLastActionTime <= 0xFFFF;
    ACPIEcLastActionTime = PerformanceCounter.QuadPart;
    if ( !v12 )
      v16 = -1;
    *(_WORD *)(a1 + 24LL * *(unsigned __int8 *)(a1 + 505) + 650) = v16;
    result.QuadPart = 3 * (*(unsigned __int8 *)(a1 + 505) + 27LL);
    *(_BYTE *)(a1 + 24 * (*(unsigned __int8 *)(a1 + 505) + 27LL)) = *(_BYTE *)(a1 + 488) | 0xA0;
  }
  else
  {
    v9 = (v4 + 1) & 0x1F;
    *(_BYTE *)(a1 + 505) = v9;
    *(_BYTE *)(a1 + 24LL * v9 + 649) = a3;
    v10 = KeQueryPerformanceCounter(0LL);
    v11 = LOWORD(v10.LowPart) - ACPIEcLastActionTime;
    v12 = v10.QuadPart - ACPIEcLastActionTime <= 0xFFFF;
    ACPIEcLastActionTime = v10.QuadPart;
    if ( !v12 )
      v11 = -1;
    *(_WORD *)(a1 + 24LL * *(unsigned __int8 *)(a1 + 505) + 650) = v11;
    result.QuadPart = 3 * (*(unsigned __int8 *)(a1 + 505) + 27LL);
    *(_BYTE *)(a1 + 24 * (*(unsigned __int8 *)(a1 + 505) + 27LL)) = *(_BYTE *)(a1 + 488) | a2;
    if ( a4 )
    {
      *(_QWORD *)(a1 + 24LL * *(unsigned __int8 *)(a1 + 505) + 656) = a4 - 328;
      result = *(LARGE_INTEGER *)(a4 - 256);
      *(LARGE_INTEGER *)(a1 + 24LL * *(unsigned __int8 *)(a1 + 505) + 664) = result;
    }
  }
  return result;
}
