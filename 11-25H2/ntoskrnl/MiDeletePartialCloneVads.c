/*
 * XREFs of MiDeletePartialCloneVads @ 0x1407F052C
 * Callers:
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x140A40F24 (MiInsertChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     MiIsVadLargePrivate @ 0x1402A82E0 (MiIsVadLargePrivate.c)
 *     MiDecrementLargeSubsections @ 0x1404C8190 (MiDecrementLargeSubsections.c)
 *     MiFreeVadEvents @ 0x14066CBD0 (MiFreeVadEvents.c)
 *     MiRemoveSharedCommitNode @ 0x1408B5520 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 *     MiVadHasSharedCommit @ 0x140A40DEC (MiVadHasSharedCommit.c)
 *     MiFreePlaceholderStorage @ 0x140A90928 (MiFreePlaceholderStorage.c)
 *     MiCloneDiscardVadCommit @ 0x140A950C8 (MiCloneDiscardVadCommit.c)
 *     MiFreeLargePageView @ 0x140A9CC88 (MiFreeLargePageView.c)
 *     MiFreeVadEventBitmap @ 0x140ABE6F4 (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int SessionId; // eax
  int v13; // ecx
  unsigned __int64 *v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v15; // [rsp+48h] [rbp+10h] BYREF

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
          v15 = 0LL;
          v14 = 0LL;
          MiGetProtoPteAddress((__int64)v2, v8 | (v7 << 32), 0, &v15);
          MiGetProtoPteAddress(
            (__int64)v2,
            (unsigned int)v2[7] | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
            0,
            &v14);
          for ( j = (__int64 *)v15; ; j = (__int64 *)j[2] )
          {
            MiDecrementLargeSubsections(j, j);
            if ( j == (__int64 *)v14 )
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
          SessionId = PsGetSessionIdEx((__int64)i);
          MiDereferencePerSessionProtos(v11, SessionId);
        }
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit(v2) )
      MiRemoveSharedCommitNode(**((_QWORD **)v2 + 9), i, 0LL);
    v13 = v2[12];
    if ( (v13 & 0x200000) == 0 && (v13 & 0x70) == 0x20 && (v13 & 0x400000) != 0 )
      --i[2].ActiveProcessors[4].StaticBitmap[3];
    MiFreePlaceholderStorage(v2);
    MiFreeVadEvents((__int64)v2);
    MiCloneDiscardVadCommit(v2);
    ExFreePoolWithTag(v2, 0);
  }
}
