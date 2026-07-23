/*
 * XREFs of PfpRpCHashEmpty @ 0x140A99744
 * Callers:
 *     PfpRpControlRequestReset @ 0x140A996EC (PfpRpControlRequestReset.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  int v4; // r9d
  int v5; // r10d
  unsigned int v8; // eax
  unsigned __int64 *v9; // rcx
  unsigned int v10; // eax
  void *v11; // rsi
  __int128 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  HIDWORD(v13) = 0;
  v4 = 1 << *(_DWORD *)(a2 + 8);
  v5 = -1;
  v8 = v4;
  if ( v4 )
  {
    do
    {
      ++v5;
      v8 >>= 1;
    }
    while ( v8 );
  }
  LODWORD(v13) = 0;
  v9 = (unsigned __int64 *)(a1 + 128);
  v10 = v5 + 1;
  if ( ((v4 - 1) & v4) == 0 )
    v10 = v5;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = v10;
  FsRtlAcquirePushLockExclusive(v9);
  v11 = *(void **)a2;
  FsRtlAcquirePushLockExclusive(a3);
  *(_OWORD *)a2 = v12;
  *(_QWORD *)(a2 + 16) = v13;
  VmpReleasePushLockExclusive((volatile signed __int64 *)a3);
  VmpReleasePushLockExclusive((volatile signed __int64 *)(a1 + 128));
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
}
