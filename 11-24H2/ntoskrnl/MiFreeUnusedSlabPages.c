/*
 * XREFs of MiFreeUnusedSlabPages @ 0x140354C04
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiDemoteSlabEntries @ 0x1402619FC (MiDemoteSlabEntries.c)
 *     MiGetSlabCurrentTime @ 0x140263454 (MiGetSlabCurrentTime.c)
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     MiSlabUpdateRecentFailure @ 0x14035371C (MiSlabUpdateRecentFailure.c)
 *     MiFreeSlabEntries @ 0x140354D7C (MiFreeSlabEntries.c)
 *     MiCheckMdlSlabFragmentation @ 0x14048FD10 (MiCheckMdlSlabFragmentation.c)
 *     MiLogSlabEntriesDemote @ 0x1406896AC (MiLogSlabEntriesDemote.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiFreeUnusedSlabPages(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned int j; // ebx
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned __int64 i; // rsi
  __int64 SlabCurrentTime; // rax
  unsigned int v10; // r8d
  __int64 v11; // r10
  _QWORD *v12; // [rsp+20h] [rbp-98h] BYREF
  char v13[80]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v14; // [rsp+78h] [rbp-40h]
  __int64 v15; // [rsp+80h] [rbp-38h]

  memset_0(&v12, 0, 0x68uLL);
  v2 = a1[2];
  v3 = v2 + 57216LL * (unsigned __int16)KeNumberNodes;
  while ( v2 < v3 )
  {
    for ( i = v2 + 15696; i < v2 + 17784; i += 232LL )
    {
      if ( (unsigned int)MiFreeSlabEntries(a1, i, 0LL) )
        goto LABEL_3;
    }
    v2 += 57216LL;
  }
LABEL_3:
  for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
  {
    v5 = 57216LL * j;
    v6 = v5 + a1[2] + 17320LL;
    v7 = MiCheckMdlSlabFragmentation(v6, 0LL);
    if ( v7 )
    {
      memset_0(v13, 0, sizeof(v13));
      v15 = -1LL;
      v12 = a1;
      v14 = v6;
      KeGenericCallDpcEx((__int64)MiDemoteSlabEntriesDpc, (__int64)&v12);
      *(_QWORD *)(a1[2] + v5 + 57016) = MiGetSlabCurrentTime();
      MiLogSlabEntriesDemote(&v12, v7);
    }
  }
  MiSlabUpdateRecentFailure(a1 + 2087);
  if ( a1[2298] )
  {
    if ( a1[2459] )
    {
      MiSlabDemotionLowMemoryConditionUpdate((__int64)a1, 0);
      if ( a1[2298] )
      {
        SlabCurrentTime = MiGetSlabCurrentTime();
        if ( (unsigned __int64)(SlabCurrentTime - v11) > 0x1C9C380 )
          MiDemoteSlabEntries((__int64)a1, 1u, v10);
      }
    }
  }
}
