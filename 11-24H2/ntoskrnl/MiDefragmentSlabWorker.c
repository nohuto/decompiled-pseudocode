/*
 * XREFs of MiDefragmentSlabWorker @ 0x140686E60
 * Callers:
 *     MiDefragmentAllSlabsHelper @ 0x140686C80 (MiDefragmentAllSlabsHelper.c)
 *     MiDefragmentSlabAllocator @ 0x140686DD0 (MiDefragmentSlabAllocator.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiClaimPhysicalRun @ 0x14022B3F0 (MiClaimPhysicalRun.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140264F54 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAdjustCachedStacks @ 0x140269740 (MiAdjustCachedStacks.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 *     MiGetPageFromSlabEntry @ 0x1403A33B8 (MiGetPageFromSlabEntry.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046A884 (MiEnumerateSlabAllocatorsEx.c)
 *     MiEstablishDefragSlabEntries @ 0x14068781C (MiEstablishDefragSlabEntries.c)
 *     MiGetSourcePageForDefrag @ 0x140687E14 (MiGetSourcePageForDefrag.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x1406884D4 (MiLockUnlockSlabContextsForDefrag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
                       (unsigned int)a1[17],
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
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v17, (__int64)v16, 8, 0) )
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
               qword_140E2DBE0,
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
