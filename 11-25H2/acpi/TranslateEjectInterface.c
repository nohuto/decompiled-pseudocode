/*
 * XREFs of TranslateEjectInterface @ 0x1400A84F8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     BuildTranslatorRanges @ 0x1400A7FA0 (BuildTranslatorRanges.c)
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall TranslateEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // r14
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __int64 Pool2; // rax
  void *v11; // rdi
  __int64 v12; // rdx
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF
  PVOID v16; // [rsp+A0h] [rbp+40h]
  __int64 v17; // [rsp+A8h] [rbp+48h]

  v16 = 0LL;
  P[0] = 0LL;
  v15 = 0;
  v17 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( (int)ACPIGet(DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v15) >= 0 )
  {
    v6 = PnpBiosResourcesToNtResources(a1, P[0], 1LL);
    if ( v6 < 0 )
      goto LABEL_17;
    if ( v16 )
    {
      v7 = 0;
      v8 = *((_DWORD *)v16 + 9);
      while ( v7 < v8 )
      {
        v9 = 32LL * v7;
        if ( *((_BYTE *)v16 + v9 + 41) == 0x81 && (*(_WORD *)((_BYTE *)v16 + v9 + 44) & 0x6000) != 0 )
        {
          v17 = *(_QWORD *)((char *)v16 + v9 + 52);
          if ( *(_DWORD *)((char *)v16 + v9 + 48) != *((unsigned __int8 *)v16 + 32 * v7 + 9)
            || v17 != *(_QWORD *)((char *)v16 + v9 + 24) )
          {
            Pool2 = ExAllocatePool2(256LL, 32LL, 1483760449LL);
            v11 = (void *)Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)Pool2 = *(_QWORD *)(DeviceExtension + 760);
              *(_QWORD *)(Pool2 + 24) = v16;
              v6 = BuildTranslatorRanges(Pool2, (_DWORD *)(Pool2 + 8), (_QWORD *)(Pool2 + 16));
              if ( v6 < 0 )
              {
                ExFreePoolWithTag(v11, 0);
              }
              else
              {
                *(_DWORD *)v5 = 65584;
                *(_QWORD *)(v5 + 8) = v11;
                AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 16), (__int64)AcpiInterfaceDereference);
                AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 24), v12);
                AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 32), (__int64)TranslateBridgeResources);
                AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 40), (__int64)TranslateBridgeRequirements);
                v6 = 0;
              }
            }
            else
            {
              v6 = -1073741670;
            }
            goto LABEL_17;
          }
        }
        ++v7;
      }
    }
  }
  v6 = *(_DWORD *)(a2 + 48);
LABEL_17:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return (unsigned int)v6;
}
