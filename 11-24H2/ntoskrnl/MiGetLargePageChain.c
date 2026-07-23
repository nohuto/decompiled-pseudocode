/*
 * XREFs of MiGetLargePageChain @ 0x140263C74
 * Callers:
 *     MiGetLargePoolPages @ 0x14034B858 (MiGetLargePoolPages.c)
 * Callees:
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140263DE4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x1402648B8 (MiFreeLargePageChain.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2, char a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // r15
  int v11; // ebx
  unsigned __int64 i; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 CurrentIrql; // rcx
  __int64 v17; // rdx
  _DWORD v18[4]; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v20[128]; // [rsp+50h] [rbp-C8h] BYREF

  v7 = a1;
  memset_0(v20, 0, sizeof(v20));
  *(_OWORD *)a5 = 0LL;
  a5[2] = 0LL;
  result = qword_140E38D50;
  if ( *(_QWORD *)(57216 * v7 + qword_140E38D50 + 14976) || (result = MiFlags, (MiFlags & 0x30) == 0) )
  {
    v10 = a2 >> 9;
    v19 = 0LL;
    LODWORD(v19) = 129;
    v11 = (v7 & 0x3F | 0x280) << 9;
    for ( i = 0LL; i < v10; ++i )
    {
      result = MiGetLargePageDemoteAsNeeded((unsigned int)&MiSystemPartition, v11, a3 == 2, 1, 0LL, a4);
      v14 = result;
      if ( result )
      {
        if ( (unsigned int)MiIsFreeZeroPfnCold(result) && (HvlEnlightenments & 0x200000) != 0 )
        {
          MiAddPageToHeatList(&v19, 0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4), 1LL);
          if ( a3 != 2 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v15) = 2;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
            }
          }
          v18[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v18);
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          MiSetFreeZeroPfnCold(v14, 0LL);
          LOBYTE(v17) = a3;
          MiUnlockPage(v14, v17);
        }
        result = MiInsertPageChainHead(a5, (__int64 *)v14);
      }
      else
      {
        if ( (v11 & 0x8000) != 0 || qword_140E3D588 > 0x110000 )
        {
          LOBYTE(v13) = a3;
          result = MiFreeLargePageChain(a5, v13);
          break;
        }
        v11 |= 0x8000u;
        --i;
      }
    }
    if ( DWORD1(v19) )
      return MiIssuePageHeatList(&v19);
  }
  return result;
}
