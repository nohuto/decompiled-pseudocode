/*
 * XREFs of BgpFwLibraryEnable @ 0x140698104
 * Callers:
 *     BgLibraryEnable @ 0x140697D44 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     ResFwBackgroundTransition @ 0x140BB5D28 (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  int v11; // eax
  int v12; // eax

  v2 = dword_140EF0050 & 0xC00;
  if ( (dword_140EF0050 & 2) == 0 || v2 == 3072 )
  {
    v3 = 0LL;
    if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
    {
      if ( v2 == 3072 )
      {
LABEL_28:
        BgInternal = *(_OWORD *)a1;
        v12 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
        xmmword_140EEFFF0 = *(_OWORD *)(a1 + 16);
        qword_140EF0000 = *(PVOID *)(a1 + 32);
        if ( v12 == 1 )
        {
          dword_140EF0050 |= 8u;
          LODWORD(xmmword_140EEFFF0) = 5;
        }
        dword_140EF0050 |= 2u;
        return 0LL;
      }
    }
    else
    {
      if ( v2 == 3072 )
      {
        if ( !(_BYTE)xmmword_140EF0008
          || !BYTE1(xmmword_140EF0008)
          || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_140EF0018
          || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_140EF0008 + 4)
          || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_140EF0008)
          || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(BaseAddress) )
        {
          return 3221225659LL;
        }
        *(_BYTE *)(a1 + 1) = 1;
        *(_QWORD *)(a1 + 32) = BaseAddress;
        goto LABEL_28;
      }
      v4 = *(_DWORD *)(a1 + 12);
      if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
        v5 = (unsigned int)(*(_DWORD *)(a1 + 4) * v4);
      else
        v5 = (unsigned int)(*(_DWORD *)(a1 + 8) * v4);
      v6 = *(_QWORD *)(a1 + 32);
      v7 = v5 * ((*(_DWORD *)(a1 + 16) != 4) + 3LL);
      v8 = MmMapIoSpaceEx(v6, v7, 0x404u);
      *(_QWORD *)(a1 + 32) = v8;
      if ( !v8 )
      {
        v9 = MmMapIoSpaceEx(v6, v7, 0x204u);
        *(_QWORD *)(a1 + 32) = v9;
        if ( !v9 )
          return 3221225626LL;
      }
      *(_BYTE *)(a1 + 1) = 1;
      if ( (_BYTE)xmmword_140EF0008 && BYTE1(xmmword_140EF0008) )
      {
        v11 = DWORD1(xmmword_140EF0008);
        if ( ((BYTE2(xmmword_140EF0008) - 1) & 0xFD) == 0 )
          v11 = DWORD2(xmmword_140EF0008);
        LOBYTE(v3) = (_DWORD)xmmword_140EF0018 != 4;
        MiUnmapContiguousMemory(
          (unsigned __int64)BaseAddress,
          (unsigned int)(HIDWORD(xmmword_140EF0008) * v11) * (v3 + 3),
          1);
      }
      xmmword_140EF0008 = *(_OWORD *)a1;
      xmmword_140EF0018 = *(_OWORD *)(a1 + 16);
      BaseAddress = *(PVOID *)(a1 + 32);
    }
    ResFwBackgroundTransition(0LL);
    goto LABEL_28;
  }
  return 0LL;
}
