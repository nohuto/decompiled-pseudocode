/*
 * XREFs of MiUnlinkPageFromBadList @ 0x14039398C
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiRemoveBadPages @ 0x14067406C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406747FC (MiUnlinkBadPages.c)
 *     MiMarkFileOnlyPfnGood @ 0x14067B63C (MiMarkFileOnlyPfnGood.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 *     MiMoveBadPagePartition @ 0x14068B054 (MiMoveBadPagePartition.c)
 * Callees:
 *     MiReleasePageListLock @ 0x1402262E0 (MiReleasePageListLock.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     MiSetPfnBlink @ 0x1403950D0 (MiSetPfnBlink.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

unsigned __int64 __fastcall MiUnlinkPageFromBadList(__int64 a1, char a2)
{
  unsigned __int64 v4; // rbp
  __int64 *v5; // rbx
  int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  volatile signed __int32 *v12; // r8
  int v13; // ebp
  unsigned __int64 v14; // rcx
  unsigned __int64 result; // rax
  _BYTE v16[112]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  memset_0(v16, 0, 0x68uLL);
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    v5 = &qword_140E2D550;
  else
    v5 = (__int64 *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 7040LL);
  v6 = a2 & 0x80;
  if ( !v6 )
    MiAcquirePageListLock((__int64)v5, a1, 9, 1, (__int64)v16);
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)a1 & 0xFFFFFFFFFFLL;
  v9 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL;
  if ( v8 == 0x3FFFFFFFFFLL )
    v5[3] = v9;
  else
    MiSetPfnBlink(48 * v8 - 0x220000000000LL, *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL, 0LL);
  if ( v9 == 0x3FFFFFFFFFLL )
    v5[2] = v8;
  else
    *(_QWORD *)(48 * v9 - 0x220000000000LL) = v7 ^ (*(_QWORD *)(48 * v9 - 0x220000000000LL) ^ v7) & 0xFFFFFF0000000000uLL;
  if ( v5 != &qword_140E2D550 && dword_140E3004C == 1 )
  {
    v10 = v4 & 0x1F;
    LOBYTE(v11) = 1;
    v12 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v4 >> 5));
    if ( v10 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) == 0 )
        goto LABEL_21;
      v13 = v4 & 0x1F;
      _InterlockedOr(v12++, ((1 << (32 - v13)) - 1) << v10);
      v11 = 1LL - (unsigned int)(32 - v13);
      if ( v11 >= 0x20 )
      {
        v14 = v11 >> 5;
        v11 += -32LL * (v11 >> 5);
        do
        {
          *v12++ = -1;
          --v14;
        }
        while ( v14 );
      }
      if ( v11 )
LABEL_21:
        _InterlockedOr(v12, (1 << v11) - 1);
    }
    else
    {
      _InterlockedOr(v12, 1 << v10);
    }
  }
  _InterlockedDecrement64(v5);
  if ( !v6 )
    MiReleasePageListLock((__int64)v5, (__int64)v16);
  *(_QWORD *)a1 = 0LL;
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL;
  *(_QWORD *)(a1 + 24) = result;
  if ( v5 != &qword_140E2D550 )
    *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
