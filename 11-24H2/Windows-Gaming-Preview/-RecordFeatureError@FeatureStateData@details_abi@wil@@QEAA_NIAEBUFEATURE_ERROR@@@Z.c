/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180007904
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x18000A300 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180007DA8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180008CF0 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000AA90 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  void *v6; // rbx
  _BYTE *v7; // rdi
  _BYTE *v8; // rsi
  char *v9; // r14
  unsigned __int64 v10; // rdx
  bool v11; // al
  HANDLE ProcessHeap; // rax
  bool v14; // di
  HANDLE v15; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  int Buf1; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v18; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-B8h]
  char *v20; // [rsp+50h] [rbp-B0h]
  LPVOID lpMem; // [rsp+58h] [rbp-A8h]
  _BYTE v22[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[8]; // [rsp+160h] [rbp+60h] BYREF

  memset_0(v22, 0, sizeof(v22));
  v6 = 0LL;
  v7 = v22;
  v16 = 0LL;
  v8 = v22;
  v9 = (char *)v23;
  v18 = v22;
  v19 = v22;
  v20 = (char *)v23;
  lpMem = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v16, v22, 0x100uLL) )
  {
    if ( v16 >= 0x100 )
    {
      v10 = 512LL;
      if ( v16 >= 0x200 )
        v10 = v16;
      v11 = wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&v18, v10);
      v6 = lpMem;
      if ( !v11 )
        goto LABEL_8;
      v9 = v20;
      v8 = v19;
      v7 = v18;
    }
    if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v16, v7, v9 - v7) )
    {
LABEL_8:
      if ( v6 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v6);
      }
      return 0;
    }
  }
  if ( &v7[v16] <= v9 )
    v8 = &v7[v16];
  AcquireSRWLockExclusive(SRWLock);
  Buf1 = a2;
  v14 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&SRWLock[17],
          &Buf1,
          4uLL,
          v7,
          v8 - v7,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v6);
  }
  return v14;
}
