/*
 * XREFs of MiPruneStandbyPages @ 0x140225F84
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1403D2A70 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x14022418C (MiIsFreeZeroPfnCold.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x14026ED40 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiFreeZeroPagesNeeded @ 0x1403D2B30 (MiFreeZeroPagesNeeded.c)
 *     MiNodeFreeZeroPages @ 0x1403D3160 (MiNodeFreeZeroPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // r12d
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
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rbx
  char PfnChannel; // al
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 result; // rax
  ULONG_PTR v25; // r14
  unsigned __int64 i; // r15
  unsigned __int32 v27; // eax
  __int64 Page; // rax
  __int64 v29; // r8
  ULONG_PTR v30; // r14
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rax
  int v36; // [rsp+24h] [rbp-54h]
  __int64 v37; // [rsp+28h] [rbp-50h]
  __int128 v38; // [rsp+30h] [rbp-48h] BYREF
  __int64 v40; // [rsp+80h] [rbp+8h]
  unsigned int v41; // [rsp+88h] [rbp+10h]
  int v42; // [rsp+88h] [rbp+10h]

  v4 = 2;
  v6 = 57216LL * a2;
  v38 = 0LL;
  v7 = 1;
  v8 = a1;
  v36 = *(_DWORD *)(v6 + *(_QWORD *)(a1 + 16) + 15184) & 1;
  v9 = 0LL;
  while ( 1 )
  {
    v41 = v7;
    if ( v7 >= (unsigned __int16)KeNumberNodes )
      break;
    v10 = *(unsigned int *)(qword_140E2DAD0 + 4LL * (v7 + a2 * (unsigned __int16)KeNumberNodes));
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
          MiInitializePageColorBase(0LL, 3LL, (unsigned int)(v10 + 1), &v38);
          for ( i = v12 - 0x10000; i; --i )
          {
            v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v38, 1u);
            Page = MiGetPage(
                     a1,
                     DWORD2(v38) ^ (unsigned int)(unsigned __int8)(BYTE8(v38) ^ (v27
                                                                               % dword_140E2DBC0[(*((_QWORD *)&v38 + 1) >> 16) & 3LL])),
                     69632LL);
            v37 = Page;
            if ( Page != -1 )
            {
              LOBYTE(v29) = a3;
              v30 = MiSwapNumaStandbyPage(Page, a2, v29, 4096LL);
              v31 = MiLockPageInline(48 * v30 - 0x220000000000LL);
              MiInsertPageInFreeOrZeroedList(v30, 2LL);
              LOBYTE(v32) = v31;
              result = MiUnlockPage(48 * v30 - 0x220000000000LL, v32);
              if ( v30 == v37 )
                return result;
              if ( ++v9 == a4 )
              {
                LOBYTE(v33) = a3;
                result = MiFreeZeroPagesNeeded(a1, a2, v33);
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
    v7 = v41 + 1;
  }
  while ( 1 )
  {
    result = MiRemoveLowestPriorityStandbyPage(v8, 8u, 0);
    v25 = result;
    if ( result == -1 )
      break;
    v40 = v9;
    v42 = 0;
    v14 = 48 * result - 0x220000000000LL;
    ++v9;
    IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(v14);
    v16 = v4;
    v4 |= 0x400u;
    v17 = v16 & 0xFFFFFBFF;
    if ( !IsFreeZeroPfnCold )
      v4 = v17;
    v18 = (unsigned int)MiPageToNode(v25);
    PfnChannel = MiGetPfnChannel(48 * v25 - 0x220000000000LL);
    LOBYTE(v20) = PfnChannel;
    if ( (_DWORD)v18 != a2 || PfnChannel != a3 && v36 )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(v8 + 16) + 57216 * v18, v20, 0x80000LL) >= 0x200 )
      {
        LOBYTE(v34) = a3;
        v35 = MiSwapNumaStandbyPage(v25, a2, v34, 12288LL);
        if ( v35 == v25 )
        {
          v42 = 1;
        }
        else
        {
          v25 = v35;
          v14 = 48 * v35 - 0x220000000000LL;
          v4 &= ~0x400u;
        }
      }
      else
      {
        v9 = v40;
      }
    }
    v21 = (unsigned __int8)MiLockPageInline(v14);
    MiInsertPageInFreeOrZeroedList(v25, v4);
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
    if ( v42 )
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
