/*
 * XREFs of MiDeletePartialCloneVads @ 0x1408003E4
 * Callers:
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x1409C407C (MiInsertChildVads.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x14025FD90 (MiIsVadLargePrivate.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     MiGetVadWakeList @ 0x14044CC20 (MiGetVadWakeList.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiFreeVadEvents @ 0x140678520 (MiFreeVadEvents.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     MiFreeLargePageView @ 0x1409B0830 (MiFreeLargePageView.c)
 *     MiVadHasSharedCommit @ 0x1409C29F4 (MiVadHasSharedCommit.c)
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 *     MiFreePlaceholderStorage @ 0x140A94A68 (MiFreePlaceholderStorage.c)
 *     MiCloneDiscardVadCommit @ 0x140A9ADE8 (MiCloneDiscardVadCommit.c)
 *     MiFreeVadEventBitmap @ 0x140AC24E4 (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned __int64 *v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v14; // [rsp+48h] [rbp+10h] BYREF

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
          MiGetProtoPteAddress((__int64)v2, v8 | (v7 << 32), 0, &v14);
          MiGetProtoPteAddress(
            (__int64)v2,
            (unsigned int)v2[7] | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
            0,
            &v13);
          for ( j = (__int64 *)v14; ; j = (__int64 *)j[2] )
          {
            MiDecrementLargeSubsections(j, j);
            if ( j == (__int64 *)v13 )
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
