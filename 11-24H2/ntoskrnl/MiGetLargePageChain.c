/*
 * XREFs of MiGetLargePageChain @ 0x1403D4E10
 * Callers:
 *     MiGetLargePoolPages @ 0x1402EA218 (MiGetLargePoolPages.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x14022418C (MiIsFreeZeroPfnCold.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D4F80 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x1403D5A54 (MiFreeLargePageChain.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiSetFreeZeroPfnCold @ 0x1404319A0 (MiSetFreeZeroPfnCold.c)
 *     MiAddPageToHeatList @ 0x14043F8DC (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v15; // rdx
  __int64 CurrentIrql; // rcx
  _DWORD v17[4]; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v19[128]; // [rsp+50h] [rbp-C8h] BYREF

  v7 = a1;
  memset_0(v19, 0, sizeof(v19));
  *(_OWORD *)a5 = 0LL;
  a5[2] = 0LL;
  result = qword_140E38C10;
  if ( *(_QWORD *)(57216 * v7 + qword_140E38C10 + 14976) || (result = MiFlags, (MiFlags & 0x30) == 0) )
  {
    v10 = a2 >> 9;
    v18 = 0LL;
    LODWORD(v18) = 129;
    v11 = (v7 & 0x3F | 0x280) << 9;
    for ( i = 0LL; i < v10; ++i )
    {
      result = MiGetLargePageDemoteAsNeeded((unsigned int)&MiSystemPartition, v11, a3 == 2, 1, 0LL, a4);
      v14 = result;
      if ( result )
      {
        if ( (unsigned int)MiIsFreeZeroPfnCold(result) && (HvlEnlightenments & 0x200000) != 0 )
        {
          MiAddPageToHeatList(&v18, 0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4), 1LL);
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
          v17[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v17);
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
    if ( DWORD1(v18) )
      return MiIssuePageHeatList(&v18);
  }
  return result;
}
