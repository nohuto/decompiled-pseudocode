/*
 * XREFs of MiUpdateBadPfnIdentity @ 0x140675B60
 * Callers:
 *     MmQueryBadAddresses @ 0x14096FEB8 (MmQueryBadAddresses.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiIsPageInHugePfn @ 0x14038ED20 (MiIsPageInHugePfn.c)
 *     MiUnlockHugePfn @ 0x1404C8804 (MiUnlockHugePfn.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067141C (MiGetPageInHugePageBadStatus.c)
 *     MiLockHugePfn @ 0x140671F4C (MiLockHugePfn.c)
 */

__int64 __fastcall MiUpdateBadPfnIdentity(unsigned __int64 a1, __int64 *a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned __int8 v7; // r15
  __int64 v8; // rdx
  __int64 v10; // rdi
  char v11; // r15
  unsigned __int64 v12; // rdx
  int v13; // [rsp+50h] [rbp+18h] BYREF

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v4 = 1;
  v5 = 0;
  if ( (unsigned int)MiIsPageInHugePfn(a1) )
  {
    v13 = 0;
    v6 = qword_140E30100 + 8 * ((a1 >> 18) & 0x3FFFFF);
    v7 = MiLockHugePfn(v6);
    if ( (unsigned int)MiGetPageInHugePageBadStatus(a1, 1LL, &v13) == 259 )
    {
      if ( v13 )
        *a2 |= 0x80uLL;
      v5 = 1;
    }
    LOBYTE(v8) = v7;
    MiUnlockHugePfn(v6, v8);
    return v5;
  }
  else
  {
    v10 = 48 * a1 - 0x220000000000LL;
    v11 = MiSafeLockPage(a1);
    if ( v11 == 17 )
    {
      return 0LL;
    }
    else
    {
      if ( (*(_DWORD *)(v10 + 32) & 0x40000000) != 0 )
      {
        MiIdentifyPfn(a1, a2);
        v12 = *a2 | 0x80;
        if ( *(char *)(v10 + 35) >= 0 )
          v12 = *a2 & 0xFFFFFFFFFFFFFF7FuLL;
        *a2 = v12;
      }
      else
      {
        v4 = 0;
      }
      MiUnlockPage(48 * a1 - 0x220000000000LL, v11);
      return v4;
    }
  }
}
