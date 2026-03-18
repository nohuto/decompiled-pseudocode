/*
 * XREFs of HvlpDmaFastFlushDeviceDomainVaList @ 0x140588950
 * Callers:
 *     HvlDmaFlushDeviceDomainVaList @ 0x1405866C0 (HvlDmaFlushDeviceDomainVaList.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1403AE3F8 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 *     HvlpCopyFlushVaList @ 0x1403AF7F0 (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall HvlpDmaFastFlushDeviceDomainVaList(int *a1, unsigned int a2, void *a3, char a4)
{
  unsigned __int16 v5; // ax
  __int64 v7; // [rsp+30h] [rbp-98h]
  _QWORD v8[2]; // [rsp+40h] [rbp-88h] BYREF
  int v9; // [rsp+50h] [rbp-78h]
  int v10; // [rsp+54h] [rbp-74h]
  __int64 v11; // [rsp+58h] [rbp-70h]
  _BYTE v12[80]; // [rsp+60h] [rbp-68h] BYREF

  v8[1] = 0LL;
  v11 = 0LL;
  v8[0] = -1LL;
  v9 = 1;
  v10 = *a1;
  if ( a4 )
  {
    memmove(v12, a3, 8LL * a2);
    LODWORD(v11) = v11 | 1;
  }
  else
  {
    HvlpCopyFlushVaList(a2, (__int64 *)a3, 0, (__int64)v12);
  }
  LODWORD(v7) = 65745;
  HIDWORD(v7) = a2 & 0xFFF;
  v5 = HvcallFastExtended(v7, (__int64)v8, 8 * a2 + 32, 0LL, 0);
  return HvlpHvToNtStatus(v5);
}
