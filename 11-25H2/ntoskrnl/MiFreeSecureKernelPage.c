/*
 * XREFs of MiFreeSecureKernelPage @ 0x140413C84
 * Callers:
 *     MmFreeSecureKernelPages @ 0x140411D18 (MmFreeSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140413B08 (MmFreeNonChargedSecurePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 */

void __fastcall MiFreeSecureKernelPage(__int64 a1, __int64 a2, int a3, ULONG_PTR a4, _DWORD *a5, __int64 a6, int a7)
{
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int8 v14; // si
  int v15; // ebx
  unsigned __int8 v16; // si
  int v17; // ebp

  v10 = 48 * a1 - 0x220000000000LL;
  v11 = *(_QWORD *)(v10 + 16);
  if ( qword_140E2D940 && (v11 & 0x10) == 0 )
    v11 &= ~qword_140E2D940;
  v12 = HIDWORD(v11);
  if ( (v12 & 8) != 0 )
  {
    if ( a7 )
    {
      v14 = 17;
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) == 0
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
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    else
    {
      v14 = MiLockPageInline(48 * a1 - 0x220000000000LL);
    }
    MiSetPfnIdentity(v10, 0);
    MiFreeSmallPageFromMdl(a1, 0, 3, 0LL);
    MiUnlockPage(v10, v14);
  }
  else if ( (v12 & 2) != 0 )
  {
    if ( a7 )
    {
      v16 = 17;
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
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
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    else
    {
      v16 = MiLockPageInline(48 * a1 - 0x220000000000LL);
    }
    if ( !a3 )
      MiSetPfnIdentity(v10, 0);
    MiFreeSmallPageFromMdl(a1, 0, 3, 0LL);
    MiUnlockPage(v10, v16);
    _InterlockedDecrement64(&qword_140E2D9A8);
    if ( (v12 & 4) == 0 )
    {
      MiReleaseNonPagedResources(a2, 1uLL);
      _InterlockedDecrement64((volatile signed __int64 *)(a2 + 19688));
    }
  }
  else
  {
    v13 = (unsigned int)*a5;
    *(_QWORD *)(a4 + 8 * v13 + 48) = a1;
    *a5 = v13 + 1;
    if ( (_DWORD)v13 == 15 )
    {
      *(_QWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 32) = 0LL;
      *(_DWORD *)(a4 + 44) = 0;
      *(_DWORD *)(a4 + 40) = 0x10000;
      *(_WORD *)(a4 + 10) = 2;
      *(_WORD *)(a4 + 8) = 176;
      MiFreePagesFromMdl(a4, 0, 0, 0);
      *a5 = 0;
    }
  }
}
