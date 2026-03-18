/*
 * XREFs of HalpDpPostReplace @ 0x140B3F880
 * Callers:
 *     HalpDpReplaceControl @ 0x140B3FC60 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14041ED40 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x1404203D0 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockAfterSleep @ 0x14042D3D4 (HalpSetClockAfterSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14043B080 (HalpAcpiPmRegisterAvailable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDpPostReplace(__int64 a1)
{
  __int64 v1; // r9
  __int16 v2; // bx
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // ecx
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF
  __int16 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 45) )
  {
    if ( *(_DWORD *)a1 )
    {
      v3 = *(_QWORD *)(a1 + 72);
      if ( v3 )
      {
        v4 = 1000LL * *(_QWORD *)(a1 + 80) / v3;
        v5 = 1000LL * *(_QWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 88) = v4;
        v6 = v5 / v3;
        *(_DWORD *)(v1 + 120) = 1000LL * *(_QWORD *)(v1 + 112) / v3 - v6;
        *(_DWORD *)(v1 + 104) = v6 - v4;
      }
    }
  }
  else
  {
    if ( (HalpPlatformFlags & 4) != 0 )
      HalpSetClockAfterSleep();
    LOBYTE(a1) = 1;
    guard_dispatch_icall_no_overrides(a1);
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0598 >> 1, (__int64)&v7, 2u, 0LL);
      v2 = v7;
      v8 = v7;
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0598 >> 1, (__int64)&v7, 2u, 0LL);
        v2 = v7 | v8;
      }
      v8 = v2 | 0x20;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0598 >> 1, (unsigned __int8 *)&v8, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0598 >> 1, (unsigned __int8 *)&v8, 2u, 0LL);
    }
  }
}
