/*
 * XREFs of ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C020D1FC
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0086654 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C020A82C (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1C0024F10 (StringCopyWorkerW.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C00258D4 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1C0026EA4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002715C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::EnableMMCSS(
        DirectComposition::CBatchSharedMemoryPool ***this,
        char a2)
{
  char *v4; // rbx
  size_t *v5; // r8
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  void *v14; // [rsp+48h] [rbp-C0h] BYREF
  wchar_t pszDest[72]; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t pszSrc[16]; // [rsp+E8h] [rbp-20h] BYREF

  v14 = 0LL;
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)this);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(this[21], 0x9CuLL, &v14) )
    return 3221225473LL;
  v4 = (char *)v14;
  *(_DWORD *)v14 = 156;
  memset(pszDest, 0, sizeof(pszDest));
  if ( a2 )
  {
    wcscpy(pszSrc, L"Window Manager");
    StringCopyWorkerW(pszDest, 0x40uLL, v5, pszSrc, 0xFuLL);
    *(_DWORD *)&pszDest[66] = 0;
  }
  v6 = *(_OWORD *)&pszDest[8];
  *(_OWORD *)(v4 + 12) = *(_OWORD *)pszDest;
  *((_DWORD *)v4 + 1) = 272;
  v7 = *(_OWORD *)&pszDest[16];
  *(_OWORD *)(v4 + 28) = v6;
  v8 = *(_OWORD *)&pszDest[24];
  *(_OWORD *)(v4 + 44) = v7;
  v9 = *(_OWORD *)&pszDest[32];
  *(_OWORD *)(v4 + 60) = v8;
  v10 = *(_OWORD *)&pszDest[40];
  *(_OWORD *)(v4 + 76) = v9;
  v11 = *(_OWORD *)&pszDest[48];
  *(_OWORD *)(v4 + 92) = v10;
  v12 = *(_OWORD *)&pszDest[64];
  *(_OWORD *)(v4 + 108) = v11;
  *(_OWORD *)(v4 + 124) = *(_OWORD *)&pszDest[56];
  *(_OWORD *)(v4 + 140) = v12;
  return DirectComposition::CApplicationChannel::Commit(
           (DirectComposition::CApplicationChannel *)this,
           0LL,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0);
}
