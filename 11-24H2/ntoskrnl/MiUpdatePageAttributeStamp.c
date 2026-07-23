/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x1403F034C
 * Callers:
 *     MiCopyHeaderIfResident @ 0x1403F0510 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiReleasePageListLock @ 0x140218800 (MiReleasePageListLock.c)
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiDetermineModifiedPageListHead @ 0x140300F80 (MiDetermineModifiedPageListHead.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1403E2438 (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiUpdatePageAttributeStamp(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  int PfnSlabType; // eax
  __int64 v6; // r9
  char v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 SlabAllocatorRepurposedStandbyList; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v14[112]; // [rsp+30h] [rbp-98h] BYREF

  memset_0(v14, 0, 0x68uLL);
  result = *(unsigned int *)(a1 + 32);
  if ( !(_WORD)result )
  {
    v3 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    v4 = *(_QWORD *)(v3 + 8LL * (*(_BYTE *)(a1 + 34) & 7) + 7136);
    PfnSlabType = MiGetPfnSlabType(a1);
    v8 = PfnSlabType;
    if ( (v7 & 7) == 2 )
    {
      if ( _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
      {
        _InterlockedOr(v13, 0);
        result = 0xC7FFFFFFFFFFFFFFuLL;
        *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
        return result;
      }
      if ( PfnSlabType < 9 && (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
      {
        SlabAllocatorRepurposedStandbyList = MiGetSlabAllocatorRepurposedStandbyList(
                                               a1,
                                               (unsigned int)PfnSlabType,
                                               0LL,
                                               v6);
LABEL_16:
        v4 = SlabAllocatorRepurposedStandbyList;
        goto LABEL_7;
      }
      v9 = 88LL * (unsigned int)MiGetPfnPriority(a1) + 3264;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 12) != 3 )
        goto LABEL_7;
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
      {
        SlabAllocatorRepurposedStandbyList = MiDetermineModifiedPageListHead(a1, v3, 0);
        goto LABEL_16;
      }
      v9 = 88 * ((unsigned int)MI_NODE_FROM_PFN(a1) + 64LL);
    }
    v4 = v3 + v9;
LABEL_7:
    MiAcquirePageListLock(v4, a1, v8, 1LL, (__int64)v14);
    _InterlockedOr(v13, 0);
    *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    return MiReleasePageListLock(v4, (__int64)v14, v10, v11);
  }
  return result;
}
