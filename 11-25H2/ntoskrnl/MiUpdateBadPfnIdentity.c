/*
 * XREFs of MiUpdateBadPfnIdentity @ 0x140668F30
 * Callers:
 *     MmQueryBadAddresses @ 0x1409D19C8 (MmQueryBadAddresses.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiIsPageInHugePfn @ 0x140392030 (MiIsPageInHugePfn.c)
 *     MiUnlockHugePfn @ 0x1404CF564 (MiUnlockHugePfn.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406647A4 (MiGetPageInHugePageBadStatus.c)
 *     MiLockHugePfn @ 0x1406652D4 (MiLockHugePfn.c)
 */

__int64 __fastcall MiUpdateBadPfnIdentity(unsigned __int64 a1, __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned __int8 v9; // r15
  __int64 v10; // rdx
  __int64 v12; // rdi
  char v13; // r15
  unsigned __int64 v14; // rdx
  int v15; // [rsp+50h] [rbp+18h] BYREF

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v4 = 1;
  v7 = 0;
  if ( (unsigned int)MiIsPageInHugePfn(a1) )
  {
    v15 = 0;
    v8 = qword_140E2FD80 + 8 * ((a1 >> 18) & 0x3FFFFF);
    v9 = MiLockHugePfn(v8);
    if ( (unsigned int)MiGetPageInHugePageBadStatus(a1, 1LL, &v15) == 259 )
    {
      if ( v15 )
        *a2 |= 0x80uLL;
      v7 = 1;
    }
    LOBYTE(v10) = v9;
    MiUnlockHugePfn(v8, v10);
    return v7;
  }
  else
  {
    v12 = 48 * a1 - 0x220000000000LL;
    v13 = MiSafeLockPage(a1, v5, v6);
    if ( v13 == 17 )
    {
      return 0LL;
    }
    else
    {
      if ( (*(_DWORD *)(v12 + 32) & 0x40000000) != 0 )
      {
        MiIdentifyPfn(a1, a2);
        v14 = *a2 | 0x80;
        if ( *(char *)(v12 + 35) >= 0 )
          v14 = *a2 & 0xFFFFFFFFFFFFFF7FuLL;
        *a2 = v14;
      }
      else
      {
        v4 = 0;
      }
      MiUnlockPage(48 * a1 - 0x220000000000LL, v13);
      return v4;
    }
  }
}
