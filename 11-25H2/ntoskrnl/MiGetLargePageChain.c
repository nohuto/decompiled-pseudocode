/*
 * XREFs of MiGetLargePageChain @ 0x140378BB8
 * Callers:
 *     MiGetLargePoolPages @ 0x140378D28 (MiGetLargePoolPages.c)
 * Callees:
 *     MiInsertPageChainHead @ 0x1402271F0 (MiInsertPageChainHead.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140392A30 (MiGetLargePageDemoteAsNeeded.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     MiAddPageToHeatList @ 0x14044047C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiFreeLargePageChain @ 0x1404AE044 (MiFreeLargePageChain.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiGetLargePageChain(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // r15
  int v11; // ebx
  unsigned __int64 i; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 CurrentIrql; // rcx
  _DWORD v16[4]; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v17; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v18[128]; // [rsp+50h] [rbp-C8h] BYREF

  v7 = a1;
  memset_0(v18, 0, sizeof(v18));
  *(_OWORD *)a5 = 0LL;
  a5[2] = 0LL;
  result = qword_140E389D0;
  if ( *(_QWORD *)(57216 * v7 + qword_140E389D0 + 14976) || (result = MiFlags, (MiFlags & 0x30) == 0) )
  {
    v10 = a2 >> 9;
    v17 = 0LL;
    LODWORD(v17) = 129;
    v11 = (v7 & 0x3F | 0x280) << 9;
    for ( i = 0LL; i < v10; ++i )
    {
      result = MiGetLargePageDemoteAsNeeded((unsigned int)&MiSystemPartition, v11, a3 == 2, 1, 0LL, a4);
      v14 = result;
      if ( result )
      {
        if ( (unsigned int)MiIsFreeZeroPfnCold(result) && (HvlEnlightenments & 0x200000) != 0 )
        {
          MiAddPageToHeatList(&v17, 0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4), 1LL);
          if ( a3 != 2 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
          }
          v16[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v16);
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          MiSetFreeZeroPfnCold(v14, 0LL);
          MiUnlockPage(v14, a3);
        }
        result = MiInsertPageChainHead(a5, (__int64 *)v14);
      }
      else
      {
        if ( (v11 & 0x8000) != 0 || BugCheckParameter3 > 0x110000 )
        {
          LOBYTE(v13) = a3;
          result = MiFreeLargePageChain(a5, v13);
          break;
        }
        v11 |= 0x8000u;
        --i;
      }
    }
    if ( DWORD1(v17) )
      return MiIssuePageHeatList(&v17);
  }
  return result;
}
