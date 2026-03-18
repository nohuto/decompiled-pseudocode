/*
 * XREFs of MiCreateUltraThreadContextHelper @ 0x1403C6C4C
 * Callers:
 *     MiGetUltraMdlContext @ 0x14049878C (MiGetUltraMdlContext.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiGetUltraPage @ 0x1402F40C0 (MiGetUltraPage.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
 */

__int64 __fastcall MiCreateUltraThreadContextHelper(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  signed __int32 v4; // eax
  signed __int32 v8; // ett
  unsigned __int64 v9; // rdi
  __int64 i; // rbx
  __int64 UltraPage; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v15; // rsi

  v4 = dword_140E35F1C;
  do
  {
    if ( v4 == dword_140E35F18 )
      return 0LL;
    v8 = v4;
    v4 = _InterlockedCompareExchange(&dword_140E35F1C, v4 + 1, v4);
  }
  while ( v8 != v4 );
  *(_QWORD *)a1 = 0LL;
  v9 = a2;
  *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  if ( !a2 )
  {
LABEL_15:
    *(_WORD *)(a1 + 24) = 1;
    return 1LL;
  }
  if ( a2 > 2uLL )
    v9 = 2LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, (unsigned int)v9, 0) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v9, 0LL) )
    {
      if ( byte_140E2DB41 )
        MiReplenishUltraPageTables((*(_DWORD *)(a3 + 8) >> 9) & 0x3F, a4);
      for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
      {
        UltraPage = MiGetUltraPage(a3, a4);
        if ( UltraPage == -1 )
        {
          _InterlockedDecrement(&dword_140E35F1C);
          if ( (_DWORD)i )
          {
            v15 = (_QWORD *)(a1 + 8 * i + 8);
            do
            {
              MiReleaseFreshPage(48LL * *--v15 - 0x220000000000LL, v12, v13);
              *v15 = -1LL;
              LODWORD(i) = i - 1;
            }
            while ( (_DWORD)i );
          }
          MiReleaseNonPagedResources((__int64)&MiSystemPartition, v9);
          return 0LL;
        }
        *(_QWORD *)(a1 + 8 * i + 8) = UltraPage;
      }
      goto LABEL_15;
    }
    MiReturnCommit((__int64)&MiSystemPartition, v9, 0);
  }
  _InterlockedDecrement(&dword_140E35F1C);
  return 0LL;
}
