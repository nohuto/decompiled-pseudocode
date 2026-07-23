/*
 * XREFs of MiPruneStandbyPages @ 0x1403F7714
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1403F7590 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x1402242D0 (MiGetPfnChannel.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiNodeFreeZeroPages @ 0x14033FC00 (MiNodeFreeZeroPages.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiFreeZeroPagesNeeded @ 0x1403F7650 (MiFreeZeroPagesNeeded.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned __int64 v11; // r15
  unsigned __int8 v12; // r14
  __int64 v13; // rbp
  int IsFreeZeroPfnCold; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17; // rbx
  char PfnChannel; // al
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 result; // rax
  ULONG_PTR v25; // r14
  unsigned __int64 i; // r15
  unsigned __int32 v27; // eax
  __int64 Page; // rax
  __int64 v29; // r8
  ULONG_PTR v30; // r14
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // bl
  __int64 v34; // rax
  int v35; // [rsp+24h] [rbp-54h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  __int128 v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v39; // [rsp+80h] [rbp+8h]
  unsigned int v40; // [rsp+88h] [rbp+10h]
  int v41; // [rsp+88h] [rbp+10h]

  v4 = 2;
  v37 = 0LL;
  v6 = 1;
  v7 = a1;
  v35 = *(_DWORD *)(57216LL * a2 + *(_QWORD *)(a1 + 16) + 15184) & 1;
  v8 = 0LL;
  while ( 1 )
  {
    v40 = v6;
    if ( v6 >= (unsigned __int16)KeNumberNodes )
      break;
    v9 = *(unsigned int *)(qword_140E2DC10 + 4LL * (v6 + a2 * (unsigned __int16)KeNumberNodes));
    v10 = *(_QWORD *)(v7 + 16) + 57216 * v9;
    if ( *(_QWORD *)(v10 + 14976) || (MiFlags & 0x30) == 0 )
    {
      v11 = 0LL;
      v12 = 0;
      if ( MmNumberOfChannels )
      {
        do
        {
          v11 += MiNodeFreeZeroPages(v10, a3, 0x80000);
          ++v12;
        }
        while ( v12 < (unsigned __int8)MmNumberOfChannels );
        v4 = 2;
        if ( v11 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, 3, v9 + 1, (__int64)&v37);
          for ( i = v11 - 0x10000; i; --i )
          {
            v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v37, 1u);
            Page = MiGetPage(
                     a1,
                     DWORD2(v37) ^ (unsigned int)(unsigned __int8)(BYTE8(v37) ^ (v27
                                                                               % dword_140E2DD00[(*((_QWORD *)&v37 + 1) >> 16) & 3LL])),
                     0x11000u);
            v36 = Page;
            if ( Page != -1 )
            {
              LOBYTE(v29) = a3;
              v30 = MiSwapNumaStandbyPage(Page, a2, v29, 4096LL);
              v33 = MiLockPageInline(48 * v30 - 0x220000000000LL, 0xFFFFDE0000000000uLL, v31, v32);
              MiInsertPageInFreeOrZeroedList(v30, 2LL);
              result = MiUnlockPage(48 * v30 - 0x220000000000LL, v33);
              if ( v30 == v36 )
                return result;
              if ( ++v8 == a4 )
              {
                result = MiFreeZeroPagesNeeded(a1, a2, a3);
                a4 = result;
                if ( !result )
                  return result;
                v8 = 0LL;
              }
            }
          }
        }
      }
      v7 = a1;
    }
    v6 = v40 + 1;
  }
  while ( 1 )
  {
    result = MiRemoveLowestPriorityStandbyPage(v7, 8u, 0);
    v25 = result;
    if ( result == -1 )
      break;
    v39 = v8;
    v41 = 0;
    v13 = 48 * result - 0x220000000000LL;
    ++v8;
    IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(v13);
    v15 = v4;
    v4 |= 0x400u;
    v16 = v15 & 0xFFFFFBFF;
    if ( !IsFreeZeroPfnCold )
      v4 = v16;
    v17 = (unsigned int)MiPageToNode(v25);
    PfnChannel = MiGetPfnChannel(48 * v25 - 0x220000000000LL);
    LOBYTE(v21) = PfnChannel;
    if ( (_DWORD)v17 != a2 || PfnChannel != a3 && v35 )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(v7 + 16) + 57216 * v17, PfnChannel, 0x80000) >= 0x200 )
      {
        LOBYTE(v19) = a3;
        v34 = MiSwapNumaStandbyPage(v25, a2, v19, 12288LL);
        if ( v34 == v25 )
        {
          v41 = 1;
        }
        else
        {
          v25 = v34;
          v13 = 48 * v34 - 0x220000000000LL;
          v4 &= ~0x400u;
        }
      }
      else
      {
        v8 = v39;
      }
    }
    v22 = (unsigned __int8)MiLockPageInline(v13, v21, v19, v20);
    MiInsertPageInFreeOrZeroedList(v25, v4);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v22 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v23) = v22;
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
      }
      __writecr8(v22);
    }
    if ( v41 )
      break;
    if ( v8 == a4 )
    {
      result = MiFreeZeroPagesNeeded(v7, a2, a3);
      a4 = result;
      if ( !result )
        return result;
      v8 = 0LL;
    }
  }
  return result;
}
