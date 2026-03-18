/*
 * XREFs of MiZeroPageMakeHot @ 0x1406903F8
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x14020A388 (MiSetZeroPageThreadPriority.c)
 *     MiInitializePageHeatList @ 0x14043F8A0 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x14043F8DC (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140463848 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall MiZeroPageMakeHot(__int64 a1, unsigned __int64 a2)
{
  int PfnPageSizeIndexUnsynchronized; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // r15
  unsigned int v5; // edi
  __int64 v6; // rbp
  unsigned __int64 v8; // r14
  __int64 v9; // r14
  int v11; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+24h] [rbp-54h] BYREF
  __int128 v13; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h]

  v12 = 0;
  LOBYTE(PfnPageSizeIndexUnsynchronized) = 0;
  v11 = 0;
  CurrentThread = 0LL;
  v4 = *(unsigned int *)(a1 + 320);
  v5 = 0;
  v6 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  if ( *(_DWORD *)(a1 + 280) )
  {
    do
    {
      v8 = *(_QWORD *)(a1 + 8 * v6 + 24);
      LOBYTE(PfnPageSizeIndexUnsynchronized) = v8 & 0xC;
      if ( (v8 & 0xC) == 0xC )
      {
        ++dword_140EF4CE4[v4];
        if ( !CurrentThread )
        {
          CurrentThread = KeGetCurrentThread();
          if ( CurrentThread->Priority )
            v5 = 33;
          else
            v5 = MiSetZeroPageThreadPriority(a1, 1LL, 0LL);
          MiInitializePageHeatList((__int64)&v13, 1, 1, 1);
        }
        v9 = (v8 >> 12) & 0x3FFFFFFFFFLL;
        PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(48 * v9 - 0x220000000000LL, &v12, &v11);
        if ( (_DWORD)v4 == PfnPageSizeIndexUnsynchronized )
          LOBYTE(PfnPageSizeIndexUnsynchronized) = MiAddPageToHeatList((__int64)&v13, v9, (unsigned int)v4);
        else
          ++dword_140EF4CF4;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a1 + 280) );
    if ( CurrentThread )
    {
      if ( DWORD1(v13) )
        LOBYTE(PfnPageSizeIndexUnsynchronized) = MiIssuePageHeatList(&v13, a2);
      if ( v5 != 33 )
        LOBYTE(PfnPageSizeIndexUnsynchronized) = MiSetZeroPageThreadPriority(a1, v5, 0LL);
    }
  }
  return PfnPageSizeIndexUnsynchronized;
}
