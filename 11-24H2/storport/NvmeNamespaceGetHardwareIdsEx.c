/*
 * XREFs of NvmeNamespaceGetHardwareIdsEx @ 0x14010434C
 * Callers:
 *     NvmeNamespaceQueryIdIrp @ 0x1401A7394 (NvmeNamespaceQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCchPrintfExW @ 0x14003DE78 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaFixupIds @ 0x1401BCFD0 (RaFixupIds.c)
 */

__int64 __fastcall NvmeNamespaceGetHardwareIdsEx(__int64 a1, wchar_t **a2)
{
  __int64 v2; // r9
  wchar_t *Pool; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  NTSTATUS v14; // eax
  wchar_t *v15; // rcx
  size_t v16; // rdx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  unsigned int v19; // r10d
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-19h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v22[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h] BYREF
  char v24; // [rsp+70h] [rbp+7h]
  __int128 v25; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v26; // [rsp+88h] [rbp+1Fh]
  __int64 v27; // [rsp+98h] [rbp+2Fh]
  char v28; // [rsp+A0h] [rbp+37h]

  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  v22[4] = 0;
  v27 = 0LL;
  v28 = 0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 718LL, 1229218130LL, v2);
  if ( !Pool )
    return 3221225495LL;
  v7 = *(_QWORD *)(a1 + 16);
  pcchRemaining = 359LL;
  ppszDestEnd = Pool;
  v8 = *(unsigned __int16 **)(v7 + 592);
  v9 = *v8;
  v22[3] = `RaidHexFromUshort'::`2'::hexDigits[*v8 & 0xF];
  v22[2] = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v9 >> 4];
  v22[1] = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v9 >> 8) & 0xF];
  LOBYTE(v7) = `RaidHexFromUshort'::`2'::hexDigits[v9 >> 12];
  v10 = 40LL;
  v22[0] = v7;
  v11 = &v25;
  v25 = *(_OWORD *)(v8 + 12);
  v26 = *(_OWORD *)(v8 + 20);
  v27 = *((_QWORD *)v8 + 7);
  do
  {
    if ( *(_BYTE *)v11 == 32 )
      *(_BYTE *)v11 = 0;
    v11 = (__int128 *)((char *)v11 + 1);
    --v10;
  }
  while ( v10 );
  v12 = 8LL;
  v23 = *((_QWORD *)v8 + 8);
  v13 = &v23;
  do
  {
    if ( *(_BYTE *)v13 == 32 )
      *(_BYTE *)v13 = 0;
    v13 = (__int64 *)((char *)v13 + 1);
    --v12;
  }
  while ( v12 );
  v14 = RtlStringCchPrintfExW(
          Pool,
          0x167uLL,
          &ppszDestEnd,
          &pcchRemaining,
          0,
          L"NVME\\%hs_%8.8hs%40.40hs%8.8hs",
          "NVMeDisk",
          v22,
          &v25,
          &v23);
  v15 = ppszDestEnd + 1;
  v16 = pcchRemaining - 1;
  ++ppszDestEnd;
  --pcchRemaining;
  if ( v14 >= 0 )
  {
    v17 = RtlStringCchPrintfExW(
            v15,
            v16,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"NVME\\%hs_%8.8hs%40.40hs",
            "NVMeDisk",
            v22,
            &v25);
    v15 = ppszDestEnd + 1;
    v16 = pcchRemaining - 1;
    ++ppszDestEnd;
    --pcchRemaining;
    if ( v17 >= 0 )
    {
      v18 = RtlStringCchPrintfExW(v15, v16, &ppszDestEnd, &pcchRemaining, 0, L"NVME\\%hs_%8.8hs", "NVMeDisk", v22);
      v15 = ppszDestEnd;
      if ( v18 >= 0 )
      {
        ++ppszDestEnd;
        RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, L"%hs", "GenNvmeDisk");
        v15 = ppszDestEnd + 1;
      }
    }
  }
  *v15 = 0;
  LOBYTE(v16) = 1;
  RaFixupIds(Pool, v16, 359LL);
  result = v19;
  *a2 = Pool;
  return result;
}
