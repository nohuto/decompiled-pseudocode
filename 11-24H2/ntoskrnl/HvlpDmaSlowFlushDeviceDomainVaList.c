/*
 * XREFs of HvlpDmaSlowFlushDeviceDomainVaList @ 0x140588A30
 * Callers:
 *     HvlDmaFlushDeviceDomainVaList @ 0x1405866C0 (HvlDmaFlushDeviceDomainVaList.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1403AE3F8 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x1403AF6A0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x1403AF7F0 (HvlpCopyFlushVaList.c)
 *     HvlpAcquireHypercallPage @ 0x140465ED0 (HvlpAcquireHypercallPage.c)
 *     HvlDmaFlushDeviceDomain @ 0x140586630 (HvlDmaFlushDeviceDomain.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall HvlpDmaSlowFlushDeviceDomainVaList(int *a1, unsigned int a2, void *a3, char a4)
{
  __int64 v4; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  unsigned __int16 v11; // bx
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v4 = a2;
  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  v8 = HvlpAcquireHypercallPage((__int64)&v12, 5, 0LL, 0LL);
  v9 = v8;
  if ( !v8 )
    return HvlDmaFlushDeviceDomain(a1);
  v8[1] = 0LL;
  v8[2] = 0LL;
  v8[3] = 0LL;
  *v8 = -1LL;
  *((_DWORD *)v8 + 4) = v8[2] & 0xFFFFFFF0 | 1;
  *((_DWORD *)v8 + 5) = *a1;
  if ( a4 )
  {
    memmove(v8 + 4, a3, 8 * v4);
    *((_DWORD *)v9 + 6) |= 1u;
  }
  else
  {
    HvlpCopyFlushVaList(v4, (__int64 *)a3, 0, (__int64)(v8 + 4));
  }
  v11 = HvcallInitiateHypercall(209);
  HvlpReleaseHypercallPage((unsigned int *)&v12);
  return HvlpHvToNtStatus(v11);
}
