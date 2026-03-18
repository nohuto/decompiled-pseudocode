/*
 * XREFs of MiDecommitPrivatePageTail @ 0x1404EE270
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiBadShareCount @ 0x140340DD8 (MiBadShareCount.c)
 *     MiDecommitFreePage @ 0x140341580 (MiDecommitFreePage.c)
 *     MiIsPfnSystemCharged @ 0x14043DC80 (MiIsPfnSystemCharged.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall MiDecommitPrivatePageTail(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  unsigned __int64 v3; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  int v8; // r12d
  unsigned __int64 v9; // rbx
  int v10; // edi
  _DWORD *v11; // rdi
  int v12; // r15d
  __int64 v13; // rbp
  int IsPfnSystemCharged; // eax
  int v15; // eax
  __int128 v16; // [rsp+38h] [rbp-70h] BYREF
  __int64 v17; // [rsp+48h] [rbp-60h]
  _QWORD v18[2]; // [rsp+50h] [rbp-58h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v3 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v3 - 0x220000000000LL;
  if ( (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) != a2 )
    KeBugCheckEx(0x1Au, 0x404uLL, a2, a3, *(_QWORD *)(v6 + 8));
  v7 = (__int64)(a2 << 25) >> 16;
  *(_DWORD *)(a1 + 128) = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v6 + 34) & 7) != 6 )
      MiBadShareCount(48 * v3 - 0x220000000000LL);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v11 = (_DWORD *)(a1 + 40);
      if ( !*(_DWORD *)(a1 + 40)
        && MiGetLeafVa(v7) <= 0x7FFFFFFEFFFFLL
        && (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      {
        *(_DWORD *)(a1 + 128) = 1;
      }
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      {
        MiIdentifyPfn(v3, (__int64 *)&v16);
        v12 = 1;
        goto LABEL_23;
      }
      goto LABEL_22;
    }
    v11 = (_DWORD *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 40) != 3 )
    {
LABEL_22:
      v12 = 0;
      goto LABEL_23;
    }
  }
  else
  {
    v11 = (_DWORD *)(a1 + 40);
    if ( !*(_DWORD *)(a1 + 40) )
      goto LABEL_22;
    v11 = (_DWORD *)(a1 + 40);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    if ( *(_DWORD *)(a1 + 40) == 6 )
      goto LABEL_22;
  }
  v11 = (_DWORD *)(a1 + 40);
  IsPfnSystemCharged = MiIsPfnSystemCharged(48 * v3 - 0x220000000000LL);
  v12 = 0;
  if ( IsPfnSystemCharged )
  {
    *(_BYTE *)(v6 + 35) &= ~0x20u;
    v11 = (_DWORD *)(a1 + 40);
    v8 = 1;
  }
LABEL_23:
  v13 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
    v9 = MiCaptureDirtyBitToPfn(v6);
  if ( *v11 )
  {
    if ( *v11 == 6 )
    {
      v9 = MiCaptureDirtyBitToPfn(v6);
      MiSetPfnIdentity(v6, 0);
    }
    else if ( (*(_DWORD *)(v6 + 32) & 0x8000000) != 0 )
    {
      *(_BYTE *)(v6 + 35) &= ~8u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 156) & 0x20) == 0 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 32) - 376LL));
  }
  v15 = MiDecommitFreePage(a1, a2, v6);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(_DWORD *)(a1 + 128) )
  {
    MiChargeCommit(v13, 1uLL, 4);
  }
  else if ( v15 == 3 || v8 )
  {
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  if ( v12 )
  {
    v18[1] = 24LL;
    v18[0] = &v16;
    EtwTraceKernelEvent((int)v18, 1, 0x20000001u, 631, 290462468);
  }
  if ( v9 )
    MiReleasePageFileInfo(v13, v9, 1);
}
