/*
 * XREFs of MiDefragmentSlabWorker @ 0x140687F90
 * Callers:
 *     MiDefragmentAllSlabsHelper @ 0x140687DB0 (MiDefragmentAllSlabsHelper.c)
 *     MiDefragmentSlabAllocator @ 0x140687F00 (MiDefragmentSlabAllocator.c)
 * Callees:
 *     MiGetPageFromSlabEntry @ 0x14021DA94 (MiGetPageFromSlabEntry.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiAdjustCachedStacks @ 0x1402AF604 (MiAdjustCachedStacks.c)
 *     MiClaimPhysicalRun @ 0x1402FED00 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403A9C00 (MiUpdateSlabPagePlaceholderState.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046321C (MiEnumerateSlabAllocatorsEx.c)
 *     MiEstablishDefragSlabEntries @ 0x14068894C (MiEstablishDefragSlabEntries.c)
 *     MiGetSourcePageForDefrag @ 0x140688F44 (MiGetSourcePageForDefrag.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x140689604 (MiLockUnlockSlabContextsForDefrag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned __int8 v16; // bl
  int v18; // [rsp+50h] [rbp-79h] BYREF
  __int64 v19[3]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v20[128]; // [rsp+70h] [rbp-59h] BYREF

  v18 = 0;
  memset_0(v20, 0, sizeof(v20));
  v2 = a1[18] == 8;
  *(_OWORD *)v19 = 0LL;
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
    (__int64)v19);
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v20, (__int64)v19, 8, 0) )
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
          v15 = a1[18];
          if ( v15 <= 4 && v15 != 2 )
          {
            v16 = MiLockPageInline(*((_QWORD *)a1 + 7), v12, v13, v14);
            MiUpdateSlabPagePlaceholderState(a1[18], PageFromSlabEntry, 1LL, 0);
            MiUnlockPage(*((_QWORD *)a1 + 7), v16);
          }
        }
        if ( v8 )
          break;
LABEL_29:
        v19[0] = 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)a1 + 7) + 0x220000000000LL) >> 4);
        if ( MiClaimPhysicalRun(
               *(_QWORD *)a1,
               SourcePageForDefrag,
               1LL,
               qword_140E2DD20,
               (__int64)v20,
               4259840,
               0,
               0LL,
               v19,
               &v18) )
        {
          a1[16] = i;
        }
        else if ( v19[0] != -1 )
        {
          *((_QWORD *)a1 + 7) = 0LL;
        }
      }
      if ( !MiPfnsWorthTrying(*(__int16 **)a1, v8, i, 4259840, &v18) )
      {
        if ( (v18 & 1) != 0 )
          MiAdjustCachedStacks(*(_QWORD *)a1, 1);
        goto LABEL_29;
      }
    }
  }
  v3 = -1073741670;
LABEL_34:
  if ( *((_BYTE *)a1 + 80) != 17 )
    MiLockUnlockSlabContextsForDefrag(a1, 0LL, 0LL);
  MiDeleteUltraThreadContext((__int64)v20);
  return (unsigned int)v3;
}
