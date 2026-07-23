/*
 * XREFs of MiDeletePartialCloneVads @ 0x140800B24
 * Callers:
 *     MiInsertChildVads @ 0x14091A854 (MiInsertChildVads.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiGetVadWakeList @ 0x140443B20 (MiGetVadWakeList.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiFreeVadEvents @ 0x1406796AC (MiFreeVadEvents.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiFreeLargePageView @ 0x14099A530 (MiFreeLargePageView.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     MiVadHasSharedCommit @ 0x140A47B8C (MiVadHasSharedCommit.c)
 *     MiFreePlaceholderStorage @ 0x140A91218 (MiFreePlaceholderStorage.c)
 *     MiCloneDiscardVadCommit @ 0x140A96358 (MiCloneDiscardVadCommit.c)
 *     MiFreeVadEventBitmap @ 0x140ABD7CC (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P)
{
  _QWORD *v1; // rdi
  _DWORD *v2; // rbx
  _KPROCESS *i; // rbp
  __int64 v4; // rcx
  void *VadWakeList; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *j; // rsi
  __int64 *v10; // rax
  __int64 v11; // rsi
  int v12; // ecx
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+48h] [rbp+10h] BYREF

  v1 = P;
  v2 = P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = v1 )
  {
    v1 = (_QWORD *)*v1;
    MiFreeVadEventBitmap(i, v2, 4LL);
    if ( MiIsVadLargePrivate((__int64)v2) )
    {
      VadWakeList = (void *)MiGetVadWakeList(v4, 16);
      MiFreeLargePageView(i, v2, VadWakeList, 1LL);
      if ( VadWakeList )
        ExFreePoolWithTag(VadWakeList, 0);
    }
    else
    {
      v6 = v2[12] & 0x70;
      if ( v6 == 80 )
      {
        if ( *(_QWORD *)(**((_QWORD **)v2 + 9) + 64LL) )
        {
          v7 = *((unsigned __int8 *)v2 + 32);
          v8 = (unsigned int)v2[6];
          v14 = 0LL;
          v13 = 0LL;
          MiGetProtoPteAddress((__int64)v2, v8 | (v7 << 32), 0, (__int64 *)&v14);
          MiGetProtoPteAddress(
            (__int64)v2,
            (unsigned int)v2[7] | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
            0,
            (__int64 *)&v13);
          for ( j = v14; ; j = (__int64 *)j[2] )
          {
            MiDecrementLargeSubsections(j, j);
            if ( j == v13 )
              break;
          }
        }
      }
      else if ( v6 == 32 )
      {
        v10 = (__int64 *)*((_QWORD *)v2 + 9);
        v11 = *v10;
        if ( (*(_DWORD *)(*v10 + 56) & 0x8000000) != 0 )
        {
          PsGetSessionIdEx((__int64)i);
          MiDereferencePerSessionProtos(v11);
        }
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit(v2) )
      MiRemoveSharedCommitNode(**((_QWORD **)v2 + 9), i, 0LL);
    v12 = v2[12];
    if ( (v12 & 0x200000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x400000) != 0 )
      --i[2].ActiveProcessors[4].StaticBitmap[3];
    MiFreePlaceholderStorage(v2);
    MiFreeVadEvents((__int64)v2);
    MiCloneDiscardVadCommit(v2);
    ExFreePoolWithTag(v2, 0);
  }
}
