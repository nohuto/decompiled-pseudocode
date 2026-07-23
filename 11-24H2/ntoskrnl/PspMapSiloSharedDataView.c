/*
 * XREFs of PspMapSiloSharedDataView @ 0x1408DD840
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     MmMapViewOfSection @ 0x1408DE270 (MmMapViewOfSection.c)
 */

__int64 __fastcall PspMapSiloSharedDataView(__int64 a1)
{
  __int64 ProcessServerSilo; // rsi
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    return 0LL;
  v6 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  result = MmMapViewOfSection(
             *(_QWORD *)(*(_QWORD *)(ProcessServerSilo + 1504) + 1296LL),
             a1,
             (unsigned int)&v6,
             0,
             0LL,
             (__int64)&v8,
             (__int64)&v7,
             1,
             0x400000,
             2);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 736) + 144LL) = v6;
    v4 = 0LL;
    v5 = *(__int64 **)(a1 + 784);
    if ( v5 )
      v4 = *v5;
    if ( v4 )
      *(_DWORD *)(v4 + 80) = v6;
    return 0LL;
  }
  return result;
}
