/*
 * XREFs of IrqTranslatorEjectInterface @ 0x1400975B0
 * Callers:
 *     ACPIRootIrpQueryInterface @ 0x1400B0340 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall IrqTranslatorEjectInterface(__int64 a1)
{
  __int64 v1; // rdx
  size_t v2; // r8
  __int64 v3; // r9
  _DWORD Src[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  Src[1] = 0;
  v6 = a1;
  v7 = 0LL;
  Src[0] = 65584;
  v8 = 0LL;
  AcpiGetDriverProxyEndpoint(&v7, (__int64)AcpiInterfaceDereference);
  AcpiGetDriverProxyEndpoint((_QWORD *)&v7 + 1, v1);
  AcpiGetDriverProxyEndpoint(&v8, (__int64)IrqTranslateResources);
  AcpiGetDriverProxyEndpoint((_QWORD *)&v8 + 1, (__int64)IrqTranslateRequirements);
  if ( *(_WORD *)(v3 + 16) <= (unsigned __int16)v2 )
    v2 = *(unsigned __int16 *)(v3 + 16);
  memmove(*(void **)(v3 + 24), Src, v2);
  return 0LL;
}
