/*
 * XREFs of ACPILoadProcessDSDT @ 0x1400C74D8
 * Callers:
 *     ACPILoadProcessFADT @ 0x1400C7770 (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400B6E24 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1400C742C (ACPILoadAddDynamicDataBlockTable.c)
 */

__int64 ACPILoadProcessDSDT()
{
  int v0; // edx
  _OWORD *v1; // rbx
  __int64 result; // rax
  _OWORD *Pool2; // rax
  char v4; // dl
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_OWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763908LL, 0LL, 0LL);
  if ( v1 )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    P = Pool2;
    if ( Pool2 )
    {
      *Pool2 = *v1;
      Pool2[1] = v1[1];
      *((_DWORD *)Pool2 + 8) = *((_DWORD *)v1 + 8);
      *((_DWORD *)Pool2 + 1) = 36;
      if ( ACPIRegReadAMLRegistryEntry((const void **)&P, v4) )
      {
        v1 = P;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x15u,
            0xCu,
            (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
            P);
      }
      else
      {
        ExFreePoolWithTag(P, 0);
      }
      result = ACPILoadAddDynamicDataBlockTable((__int64)v1, 1);
      if ( (int)result >= 0 )
        *((_QWORD *)AcpiInformation + 3) = v1;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v0,
        22,
        11,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
    return 3222536217LL;
  }
  return result;
}
