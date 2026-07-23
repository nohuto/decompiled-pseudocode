/*
 * XREFs of MiUnlinkPageFromBadList @ 0x1403F6AAC
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiRemoveBadPages @ 0x14067523C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406759CC (MiUnlinkBadPages.c)
 *     MiMarkFileOnlyPfnGood @ 0x14067C81C (MiMarkFileOnlyPfnGood.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 *     MiMoveBadPagePartition @ 0x14068C184 (MiMoveBadPagePartition.c)
 * Callees:
 *     MiReleasePageListLock @ 0x140218800 (MiReleasePageListLock.c)
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MiSetPfnBlink @ 0x1403F8930 (MiSetPfnBlink.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiUnlinkPageFromBadList(__int64 a1, char a2)
{
  unsigned __int64 v4; // rbp
  volatile signed __int32 *v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbx
  int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  int v13; // ebp
  unsigned __int64 v14; // rcx
  unsigned __int64 result; // rax
  _BYTE v16[112]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  memset_0(v16, 0, 0x68uLL);
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    v7 = &qword_140E2D690;
  else
    v7 = (__int64 *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 7040LL);
  v8 = a2 & 0x80;
  if ( !v8 )
    MiAcquirePageListLock((__int64)v7, a1, 9LL, 1LL, (__int64)v16);
  v9 = *(_QWORD *)a1;
  v10 = *(_QWORD *)a1 & 0xFFFFFFFFFFLL;
  v11 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL;
  if ( v10 == 0x3FFFFFFFFFLL )
    v7[3] = v11;
  else
    MiSetPfnBlink(48 * v10 - 0x220000000000LL, *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL, 0LL);
  if ( v11 == 0x3FFFFFFFFFLL )
    v7[2] = v10;
  else
    *(_QWORD *)(48 * v11 - 0x220000000000LL) = v9 ^ (*(_QWORD *)(48 * v11 - 0x220000000000LL) ^ v9) & 0xFFFFFF0000000000uLL;
  if ( v7 != &qword_140E2D690 && dword_140E3018C == 1 )
  {
    v6 = v4 & 0x1F;
    LOBYTE(v12) = 1;
    v5 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (v4 >> 5));
    if ( (unsigned __int64)(v6 + 1) > 0x20 )
    {
      if ( (v4 & 0x1F) == 0 )
        goto LABEL_21;
      v13 = v4 & 0x1F;
      _InterlockedOr(v5++, ((1 << (32 - v13)) - 1) << v6);
      v12 = 1LL - (unsigned int)(32 - v13);
      if ( v12 >= 0x20 )
      {
        v14 = v12 >> 5;
        v12 += -32LL * (v12 >> 5);
        do
        {
          *v5++ = -1;
          --v14;
        }
        while ( v14 );
      }
      if ( v12 )
LABEL_21:
        _InterlockedOr(v5, (1 << v12) - 1);
    }
    else
    {
      _InterlockedOr(v5, 1 << v6);
    }
  }
  _InterlockedDecrement64(v7);
  if ( !v8 )
    MiReleasePageListLock((__int64)v7, (__int64)v16, (__int64)v5, v6);
  *(_QWORD *)a1 = 0LL;
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL;
  *(_QWORD *)(a1 + 24) = result;
  if ( v7 != &qword_140E2D690 )
    *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
