/*
 * XREFs of BgpFwLibraryEnable @ 0x140699184
 * Callers:
 *     BgLibraryEnable @ 0x140698DC4 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     ResFwBackgroundTransition @ 0x140BB7D28 (ResFwBackgroundTransition.c)
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

  v2 = dword_140EF0270 & 0xC00;
  if ( (dword_140EF0270 & 2) == 0 || v2 == 3072 )
  {
    v3 = 0LL;
    if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
    {
      if ( v2 == 3072 )
      {
LABEL_28:
        BgInternal = *(_OWORD *)a1;
        v12 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
        xmmword_140EF0210 = *(_OWORD *)(a1 + 16);
        qword_140EF0220 = *(PVOID *)(a1 + 32);
        if ( v12 == 1 )
        {
          dword_140EF0270 |= 8u;
          LODWORD(xmmword_140EF0210) = 5;
        }
        dword_140EF0270 |= 2u;
        return 0LL;
      }
    }
    else
    {
      if ( v2 == 3072 )
      {
        if ( !(_BYTE)xmmword_140EF0228
          || !BYTE1(xmmword_140EF0228)
          || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_140EF0238
          || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_140EF0228 + 4)
          || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_140EF0228)
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
      v8 = MmMapIoSpaceEx(v6, v7, 1028LL);
      *(_QWORD *)(a1 + 32) = v8;
      if ( !v8 )
      {
        v9 = MmMapIoSpaceEx(v6, v7, 516LL);
        *(_QWORD *)(a1 + 32) = v9;
        if ( !v9 )
          return 3221225626LL;
      }
      *(_BYTE *)(a1 + 1) = 1;
      if ( (_BYTE)xmmword_140EF0228 && BYTE1(xmmword_140EF0228) )
      {
        v11 = DWORD1(xmmword_140EF0228);
        if ( ((BYTE2(xmmword_140EF0228) - 1) & 0xFD) == 0 )
          v11 = DWORD2(xmmword_140EF0228);
        LOBYTE(v3) = (_DWORD)xmmword_140EF0238 != 4;
        MiUnmapContiguousMemory(
          (unsigned __int64)BaseAddress,
          (unsigned int)(HIDWORD(xmmword_140EF0228) * v11) * (v3 + 3),
          1);
      }
      xmmword_140EF0228 = *(_OWORD *)a1;
      xmmword_140EF0238 = *(_OWORD *)(a1 + 16);
      BaseAddress = *(PVOID *)(a1 + 32);
    }
    ResFwBackgroundTransition(0LL);
    goto LABEL_28;
  }
  return 0LL;
}
