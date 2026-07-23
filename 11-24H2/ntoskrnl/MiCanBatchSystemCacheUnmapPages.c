/*
 * XREFs of MiCanBatchSystemCacheUnmapPages @ 0x140258E20
 * Callers:
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 */

__int64 __fastcall MiCanBatchSystemCacheUnmapPages(_BYTE *a1, __int64 a2)
{
  __int64 v2; // r11
  char v3; // cl
  char v4; // dl
  unsigned __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // [rsp+30h] [rbp+8h]
  int v14; // [rsp+30h] [rbp+8h]
  int v15; // [rsp+30h] [rbp+8h]
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( *a1 )
  {
    v3 = *(_BYTE *)(a2 + 34);
    if ( (v3 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 && (v3 & 8) == 0 )
      {
        v16 = *(_QWORD *)(a2 + 16);
        if ( (v16 & 4) != 0 )
        {
          *(_QWORD *)(a2 + 16) &= ~4uLL;
          MiClearPageFileReservation(&v16);
        }
        else
        {
          v16 = 0LL;
        }
      }
      v14 = *(_DWORD *)(v2 + 32);
      if ( (v14 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v2)
        && (*(_BYTE *)(v2 + 34) & 0x10) == 0
        && (*(_DWORD *)(v2 + 16) & 4) != 0 )
      {
        *(_QWORD *)(v2 + 16) &= ~4uLL;
      }
      BYTE2(v14) |= 0x10u;
      *(_DWORD *)(v2 + 32) = v14;
    }
  }
  if ( _bittest64((const signed __int64 *)(v2 + 40), 0x35u) && (*(_BYTE *)(v2 + 34) & 0x10) != 0 && byte_140E2DC80 )
  {
    v15 = *(_DWORD *)(v2 + 32);
    if ( (v15 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v2)
      && (*(_BYTE *)(v2 + 34) & 0x10) == 0
      && (*(_DWORD *)(v2 + 16) & 4) != 0 )
    {
      *(_QWORD *)(v2 + 16) &= ~4uLL;
    }
    BYTE2(v15) &= ~0x10u;
    *(_DWORD *)(v2 + 32) = v15;
  }
  if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
    return 2LL;
  if ( (*(_DWORD *)(v2 + 32) & 0x40000000) != 0 )
    return 2LL;
  if ( (*(_BYTE *)(v2 + 35) & 0x10) != 0 )
    return 2LL;
  if ( (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 2LL;
  if ( (unsigned __int16)*(_DWORD *)(v2 + 32) != 1 )
    return 2LL;
  if ( byte_140E3CC26 )
  {
    v4 = *(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((v2 + 0x220000000000LL) >> 4)) >> 9));
    if ( v4 )
    {
      if ( v4 != 10 )
        return 2LL;
    }
  }
  *(_QWORD *)(v2 + 24) = (*(_QWORD *)(v2 + 24) - 1LL) ^ (*(_QWORD *)(v2 + 24) ^ (*(_QWORD *)(v2 + 24) - 1LL)) & 0xC000000000000000uLL;
  HIWORD(v13) = HIWORD(*(_DWORD *)(v2 + 32));
  LOWORD(v13) = 0;
  *(_DWORD *)(v2 + 32) = v13;
  v5 = v2 + 16;
  v6 = *(_QWORD *)v5;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (v6 & 1) != 0
    && ((v6 & 0x42) == 0 || (v6 & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      KernelWaitTime = Process[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v11 = *(_QWORD *)(KernelWaitTime + 8 * ((v5 >> 3) & 0x1FF));
        if ( (v11 & 0x20) != 0 )
          v6 |= 0x20uLL;
        v12 = v6;
        v6 |= 0x42uLL;
        if ( (v11 & 0x42) == 0 )
          v6 = v12;
      }
    }
  }
  v7 = -9LL;
  if ( (v6 & 0x400) != 0 )
    v7 = -2049LL;
  *(_QWORD *)v5 = v6 & v7;
  return 1LL;
}
