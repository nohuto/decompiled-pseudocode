/*
 * XREFs of MiZeroPageMakeHot @ 0x1406914C8
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x140331968 (MiSetZeroPageThreadPriority.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiInitializePageHeatList @ 0x140435B60 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiZeroPageMakeHot(__int64 a1)
{
  int PfnPageSizeIndexUnsynchronized; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r15
  int v4; // edi
  __int64 v5; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r14
  int v10; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+24h] [rbp-54h] BYREF
  __int128 v12; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]

  v11 = 0;
  LOBYTE(PfnPageSizeIndexUnsynchronized) = 0;
  v10 = 0;
  CurrentThread = 0LL;
  v3 = *(unsigned int *)(a1 + 320);
  v4 = 0;
  v5 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( *(_DWORD *)(a1 + 280) )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 8 * v5 + 24);
      LOBYTE(PfnPageSizeIndexUnsynchronized) = v7 & 0xC;
      if ( (v7 & 0xC) == 0xC )
      {
        ++dword_140EF4F04[v3];
        if ( !CurrentThread )
        {
          CurrentThread = KeGetCurrentThread();
          if ( CurrentThread->Priority )
            v4 = 33;
          else
            v4 = MiSetZeroPageThreadPriority(a1, 1, 0);
          MiInitializePageHeatList((__int64)&v12, 1, 1, 1);
        }
        v8 = (v7 >> 12) & 0x3FFFFFFFFFLL;
        PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(48 * v8 - 0x220000000000LL, &v11, &v10);
        if ( (_DWORD)v3 == PfnPageSizeIndexUnsynchronized )
          LOBYTE(PfnPageSizeIndexUnsynchronized) = MiAddPageToHeatList((__int64)&v12, v8, (unsigned int)v3);
        else
          ++dword_140EF4F14;
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(a1 + 280) );
    if ( CurrentThread )
    {
      if ( DWORD1(v12) )
        LOBYTE(PfnPageSizeIndexUnsynchronized) = MiIssuePageHeatList((__int64)&v12);
      if ( v4 != 33 )
        LOBYTE(PfnPageSizeIndexUnsynchronized) = MiSetZeroPageThreadPriority(a1, v4, 0);
    }
  }
  return PfnPageSizeIndexUnsynchronized;
}
