/*
 * XREFs of MiPruneStandbyPages @ 0x1402C622C
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1403BC4D0 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiGetPfnChannel @ 0x140216430 (MiGetPfnChannel.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiFreeZeroPagesNeeded @ 0x1403BC590 (MiFreeZeroPagesNeeded.c)
 *     MiNodeFreeZeroPages @ 0x1403BCBB0 (MiNodeFreeZeroPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  int v4; // r12d
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 v12; // r15
  unsigned __int8 v13; // r14
  __int64 v14; // rbp
  int IsFreeZeroPfnCold; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rbx
  char PfnChannel; // al
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  ULONG_PTR v28; // r14
  unsigned __int64 i; // r15
  unsigned __int32 v30; // eax
  __int64 Page; // rax
  __int64 v32; // r8
  ULONG_PTR v33; // r14
  char v34; // bl
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // [rsp+24h] [rbp-54h]
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int128 v41; // [rsp+30h] [rbp-48h] BYREF
  __int64 v43; // [rsp+80h] [rbp+8h]
  unsigned int v44; // [rsp+88h] [rbp+10h]
  int v45; // [rsp+88h] [rbp+10h]

  v4 = 2;
  v6 = 57216LL * a2;
  v41 = 0LL;
  v7 = 1;
  v8 = a1;
  v39 = *(_DWORD *)(v6 + *(_QWORD *)(a1 + 16) + 15184) & 1;
  v9 = 0LL;
  while ( 1 )
  {
    v44 = v7;
    if ( v7 >= (unsigned __int16)KeNumberNodes )
      break;
    v10 = *(unsigned int *)(qword_140E2D890 + 4LL * (v7 + a2 * (unsigned __int16)KeNumberNodes));
    v11 = *(_QWORD *)(v8 + 16) + 57216 * v10;
    if ( *(_QWORD *)(v11 + 14976) || (MiFlags & 0x30) == 0 )
    {
      v12 = 0LL;
      v13 = 0;
      if ( MmNumberOfChannels )
      {
        do
        {
          LOBYTE(v6) = a3;
          v12 += MiNodeFreeZeroPages(v11, v6, 0x80000LL);
          ++v13;
        }
        while ( v13 < (unsigned __int8)MmNumberOfChannels );
        v4 = 2;
        if ( v12 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, 3, v10 + 1, (__int64)&v41);
          for ( i = v12 - 0x10000; i; --i )
          {
            v30 = _InterlockedExchangeAdd((volatile signed __int32 *)v41, 1u);
            Page = MiGetPage(
                     a1,
                     DWORD2(v41) ^ (unsigned int)(unsigned __int8)(BYTE8(v41) ^ (v30
                                                                               % dword_140E2D980[(*((_QWORD *)&v41 + 1) >> 16) & 3LL])),
                     0x11000u);
            v40 = Page;
            if ( Page != -1 )
            {
              LOBYTE(v32) = a3;
              v33 = MiSwapNumaStandbyPage(Page, a2, v32, 4096LL);
              v34 = MiLockPageInline(48 * v33 - 0x220000000000LL);
              MiInsertPageInFreeOrZeroedList(v33);
              LOBYTE(v35) = v34;
              result = MiUnlockPage(48 * v33 - 0x220000000000LL, v35);
              if ( v33 == v40 )
                return result;
              if ( ++v9 == a4 )
              {
                LOBYTE(v36) = a3;
                result = MiFreeZeroPagesNeeded(a1, a2, v36);
                a4 = result;
                if ( !result )
                  return result;
                v9 = 0LL;
              }
            }
          }
        }
      }
      v8 = a1;
    }
    v7 = v44 + 1;
  }
  while ( 1 )
  {
    result = MiRemoveLowestPriorityStandbyPage(v8, 8LL, 0LL);
    v28 = result;
    if ( result == -1 )
      break;
    v43 = v9;
    v45 = 0;
    v14 = 48 * result - 0x220000000000LL;
    ++v9;
    IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(v14, v25, v26, v27);
    v16 = v4;
    v4 |= 0x400u;
    v17 = v16 & 0xFFFFFBFF;
    if ( !IsFreeZeroPfnCold )
      v4 = v17;
    v18 = (unsigned int)MiPageToNode(v28);
    PfnChannel = MiGetPfnChannel(48 * v28 - 0x220000000000LL);
    LOBYTE(v20) = PfnChannel;
    if ( (_DWORD)v18 != a2 || PfnChannel != a3 && v39 )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(v8 + 16) + 57216 * v18, v20, 0x80000LL) >= 0x200 )
      {
        LOBYTE(v37) = a3;
        v38 = MiSwapNumaStandbyPage(v28, a2, v37, 12288LL);
        if ( v38 == v28 )
        {
          v45 = 1;
        }
        else
        {
          v28 = v38;
          v14 = 48 * v38 - 0x220000000000LL;
          v4 &= ~0x400u;
        }
      }
      else
      {
        v9 = v43;
      }
    }
    v21 = (unsigned __int8)MiLockPageInline(v14);
    MiInsertPageInFreeOrZeroedList(v28);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v21 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v22) = v21;
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
      }
      __writecr8(v21);
    }
    if ( v45 )
      break;
    if ( v9 == a4 )
    {
      LOBYTE(v23) = a3;
      result = MiFreeZeroPagesNeeded(v8, a2, v23);
      a4 = result;
      if ( !result )
        return result;
      v9 = 0LL;
    }
  }
  return result;
}
