/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x140B98AF4
 * Callers:
 *     VfFaultsAddAllTags @ 0x140B9828C (VfFaultsAddAllTags.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViFaultsIsTagPresentInList @ 0x140B98DF4 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rax
  char v5; // cl
  __int64 Pool2; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  KIRQL v9; // bp
  _QWORD *v10; // rax
  unsigned int v12; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      v5 = 32;
      if ( i < a2 )
        v5 = *(_BYTE *)(a1 + 2 * i);
      *((_BYTE *)&v12 + i) = v5;
    }
    Pool2 = ExAllocatePool2(0x40uLL, 0x18uLL, 0x54466656uLL);
    v7 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v8 = v12;
      *(_DWORD *)(Pool2 + 16) = v12;
      v9 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsTagPresentInList(v8) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        v10 = (_QWORD *)qword_140F04438;
        ViHaveFaultTags = 1;
        if ( *(PVOID **)qword_140F04438 != &ViFaultTagsList )
          __fastfail(3u);
        *v7 = &ViFaultTagsList;
        v7[1] = v10;
        *v10 = v7;
        qword_140F04438 = (__int64)v7;
      }
      KeReleaseSpinLock(&ViFaultInjectionLock, v9);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
