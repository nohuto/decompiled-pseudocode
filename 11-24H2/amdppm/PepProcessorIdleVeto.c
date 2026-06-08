/*
 * XREFs of PepProcessorIdleVeto @ 0x14000C508
 * Callers:
 *     PepDevicePowerControlCallback @ 0x14000D5D0 (PepDevicePowerControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall PepProcessorIdleVeto(__int64 a1, __int64 a2)
{
  ULONG v3; // ecx
  NTSTATUS result; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber[4]; // [rsp+24h] [rbp-24h] BYREF

  if ( !*(_QWORD *)(a1 + 712) || !*(_QWORD *)(a1 + 1144) && !_bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
    return -1073741637;
  v3 = *(_DWORD *)(a1 + 56);
  v5 = 82;
  *(_OWORD *)&ProcNumber[0].Group = 0LL;
  result = KeGetProcessorNumberFromIndex(v3, ProcNumber);
  if ( result >= 0 )
  {
    ProcNumber[1] = *(struct _PROCESSOR_NUMBER *)a2;
    ProcNumber[2] = *(struct _PROCESSOR_NUMBER *)(a2 + 4);
    LOBYTE(ProcNumber[3].Group) = *(_BYTE *)(a2 + 8);
    return ((__int64 (__fastcall *)(int *))qword_140015938)(&v5);
  }
  return result;
}
