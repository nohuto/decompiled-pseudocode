/*
 * XREFs of MiDefragmentSlabWorker @ 0x14067B5D0
 * Callers:
 *     MiDefragmentAllSlabsHelper @ 0x14067B3F0 (MiDefragmentAllSlabsHelper.c)
 *     MiDefragmentSlabAllocator @ 0x14067B540 (MiDefragmentSlabAllocator.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiClaimPhysicalRun @ 0x1403416E0 (MiClaimPhysicalRun.c)
 *     MiAdjustCachedStacks @ 0x1403B1C48 (MiAdjustCachedStacks.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403B79B4 (MiUpdateSlabPagePlaceholderState.c)
 *     MiGetPageFromSlabEntry @ 0x1403B84B8 (MiGetPageFromSlabEntry.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046BBB4 (MiEnumerateSlabAllocatorsEx.c)
 *     MiEstablishDefragSlabEntries @ 0x14067BF8C (MiEstablishDefragSlabEntries.c)
 *     MiGetSourcePageForDefrag @ 0x14067C584 (MiGetSourcePageForDefrag.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x14067CC44 (MiLockUnlockSlabContextsForDefrag.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiDefragmentSlabWorker(_DWORD *a1)
{
  bool v2; // zf
  signed int v3; // ebx
  int v4; // ecx
  int v5; // r8d
  __int64 i; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 SourcePageForDefrag; // r12
  ULONG_PTR PageFromSlabEntry; // r14
  __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned __int8 v13; // bl
  int v15; // [rsp+50h] [rbp-79h] BYREF
  __int64 v16[3]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v17[128]; // [rsp+70h] [rbp-59h] BYREF

  v15 = 0;
  memset_0(v17, 0, sizeof(v17));
  v2 = a1[18] == 8;
  *(_OWORD *)v16 = 0LL;
  if ( v2 && !*(_DWORD *)(*(_QWORD *)a1 + 18288LL) )
  {
    v3 = -2147483622;
    goto LABEL_34;
  }
  if ( (unsigned int)MiEnumerateSlabAllocatorsEx(
                       *(_QWORD *)a1,
                       (__int64)MiDefragFreeEmptySlabEntries,
                       0LL,
                       a1[17],
                       a1[18]) )
  {
    v3 = 0;
    goto LABEL_34;
  }
  v4 = a1[17];
  v5 = 1;
  if ( v4 != -1 )
    v5 = v4 + 1;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
    3,
    v5,
    (__int64)v16);
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v17, (__int64)v16, 8, 0LL) )
  {
    for ( i = (unsigned int)a1[19]; ; a1[16] = i )
    {
      while ( 1 )
      {
        do
        {
          v3 = MiEstablishDefragSlabEntries(a1);
          if ( v3 < 0 )
            goto LABEL_34;
          v7 = *((_QWORD *)a1 + 5);
          if ( !v7 )
          {
            v3 = (a1[21] & 2) == 0 ? 0x8000001A : 0;
            goto LABEL_34;
          }
          if ( a1[16] )
            v8 = 0LL;
          else
            v8 = 48LL * *(_QWORD *)(v7 + 40) - 0x220000000000LL;
          SourcePageForDefrag = MiGetSourcePageForDefrag(a1);
          PageFromSlabEntry = -1LL;
          v11 = -1LL;
          if ( SourcePageForDefrag != -1 && !*((_QWORD *)a1 + 7) )
          {
            PageFromSlabEntry = MiGetPageFromSlabEntry(*((_QWORD *)a1 + 6), *(_QWORD *)(*((_QWORD *)a1 + 6) + 56LL));
            v11 = PageFromSlabEntry;
            *((_QWORD *)a1 + 7) = 48 * PageFromSlabEntry - 0x220000000000LL;
          }
          MiLockUnlockSlabContextsForDefrag(a1, 0LL, 0LL);
        }
        while ( SourcePageForDefrag == -1 );
        if ( v11 != -1 )
        {
          v12 = a1[18];
          if ( v12 <= 4 && v12 != 2 )
          {
            v13 = MiLockPageInline(*((_QWORD *)a1 + 7));
            MiUpdateSlabPagePlaceholderState(a1[18], PageFromSlabEntry, 1LL, 0);
            MiUnlockPage(*((_QWORD *)a1 + 7), v13);
          }
        }
        if ( v8 )
          break;
LABEL_29:
        v16[0] = 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)a1 + 7) + 0x220000000000LL) >> 4);
        if ( MiClaimPhysicalRun(
               *(_QWORD *)a1,
               SourcePageForDefrag,
               1LL,
               qword_140E2D9A0,
               (__int64)v17,
               4259840,
               0,
               0LL,
               v16,
               &v15) )
        {
          a1[16] = i;
        }
        else if ( v16[0] != -1 )
        {
          *((_QWORD *)a1 + 7) = 0LL;
        }
      }
      if ( !MiPfnsWorthTrying(*(__int16 **)a1, v8, i, 4259840, &v15) )
      {
        if ( (v15 & 1) != 0 )
          MiAdjustCachedStacks(*(_QWORD *)a1, 1);
        goto LABEL_29;
      }
    }
  }
  v3 = -1073741670;
LABEL_34:
  if ( *((_BYTE *)a1 + 80) != 17 )
    MiLockUnlockSlabContextsForDefrag(a1, 0LL, 0LL);
  MiDeleteUltraThreadContext((__int64)v17);
  return (unsigned int)v3;
}
