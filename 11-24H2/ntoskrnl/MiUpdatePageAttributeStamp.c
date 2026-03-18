/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x1404767D4
 * Callers:
 *     MiCopyHeaderIfResident @ 0x1404765F4 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiReleasePageListLock @ 0x1402262E0 (MiReleasePageListLock.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiDetermineModifiedPageListHead @ 0x14022D670 (MiDetermineModifiedPageListHead.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1403EF4B4 (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiUpdatePageAttributeStamp(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  int PfnSlabType; // eax
  __int64 v6; // r9
  char v7; // r8
  int v8; // ebp
  __int64 v9; // rdi
  __int64 SlabAllocatorRepurposedStandbyList; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v12[112]; // [rsp+30h] [rbp-98h] BYREF

  memset_0(v12, 0, 0x68uLL);
  result = *(unsigned int *)(a1 + 32);
  if ( !(_WORD)result )
  {
    v3 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    v4 = *(_QWORD *)(v3 + 8LL * (*(_BYTE *)(a1 + 34) & 7) + 7136);
    PfnSlabType = MiGetPfnSlabType(a1);
    v8 = PfnSlabType;
    if ( (v7 & 7) == 2 )
    {
      if ( _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
      {
        _InterlockedOr(v11, 0);
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
    MiAcquirePageListLock(v4, a1, v8, 1, (__int64)v12);
    _InterlockedOr(v11, 0);
    *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    return MiReleasePageListLock(v4, (__int64)v12);
  }
  return result;
}
