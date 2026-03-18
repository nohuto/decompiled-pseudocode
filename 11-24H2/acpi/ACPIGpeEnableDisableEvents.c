/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x14001A570
 * Callers:
 *     ACPIEcUnmaskInterrupt @ 0x140019270 (ACPIEcUnmaskInterrupt.c)
 *     ACPIVectorEnable @ 0x140019900 (ACPIVectorEnable.c)
 *     ACPIEcMaskInterrupt @ 0x1400199D0 (ACPIEcMaskInterrupt.c)
 *     ACPIVectorDisable @ 0x140019AD0 (ACPIVectorDisable.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x140021D00 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIEnableInitializeACPI @ 0x140022A10 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeBuildEventMasks @ 0x140040B24 (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x140060E30 (ACPIGpeClearEventMasks.c)
 *     ACPIVectorConnect @ 0x140069660 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x140069890 (ACPIVectorDisconnect.c)
 *     ACPILoadProcessFADT @ 0x1400C7770 (ACPILoadProcessFADT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIGpeEnableDisableEvents(char a1)
{
  unsigned __int16 *v1; // rdx
  unsigned int v3; // ebx
  char v4; // cl
  int (__fastcall *v5)(__int64); // rax
  __int64 v6; // rcx
  int v7; // edx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (unsigned __int16 *)AcpiInformation;
  v3 = 0;
  if ( *((_WORD *)AcpiInformation + 51) )
  {
    while ( 1 )
    {
      v4 = *((_BYTE *)GpeCurEnable + v3);
      if ( !a1 )
        v4 = 0;
      v8 = v4;
      v5 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
      if ( v3 >= v1[43] )
        break;
      if ( v5(6LL) >= 0 )
      {
        v6 = 6LL;
        v7 = *((unsigned __int16 *)AcpiInformation + 43);
LABEL_7:
        (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
          v6,
          v3 + v7,
          &v8,
          1LL,
          0LL);
      }
LABEL_8:
      v1 = (unsigned __int16 *)AcpiInformation;
      if ( ++v3 >= *((unsigned __int16 *)AcpiInformation + 51) )
        return;
    }
    if ( v5(7LL) < 0 )
      goto LABEL_8;
    v6 = 7LL;
    v7 = *((unsigned __int16 *)AcpiInformation + 49) - *((unsigned __int16 *)AcpiInformation + 43);
    goto LABEL_7;
  }
}
