/*
 * XREFs of RaspLoadGlyphData @ 0x14069BB90
 * Callers:
 *     RaspGetCompositeGlyphList @ 0x14069AECC (RaspGetCompositeGlyphList.c)
 *     RaspGetUnscaledGlyphData @ 0x14069B1FC (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     RaspInitializeGlyphData @ 0x14046612C (RaspInitializeGlyphData.c)
 *     RaspAllocateMemory @ 0x140467288 (RaspAllocateMemory.c)
 *     FioFwReadUshortAtOffset @ 0x1404F8754 (FioFwReadUshortAtOffset.c)
 *     RaspLoadCompositeGlyphData @ 0x14069B994 (RaspLoadCompositeGlyphData.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RaspLoadGlyphData(__int64 a1, int a2, _WORD *a3, __int64 *a4, __int64 *a5)
{
  unsigned int v5; // ebx
  int v10; // eax
  char *Memory; // rax
  char *v12; // rdi
  __int64 v14; // rcx
  __int16 v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( !a1 )
    return 3221225473LL;
  v10 = *(_DWORD *)(a1 + 60);
  if ( !v10 )
    return 3221225473LL;
  if ( a2 == -1 )
  {
    Memory = (char *)RaspAllocateMemory(0x52uLL, a5);
    v12 = Memory;
    if ( Memory )
    {
      memset_0(Memory, 0, 0x52uLL);
      *a4 = (__int64)v12;
      *(_QWORD *)(v12 + 50) = v12 + 66;
      *(_QWORD *)(v12 + 58) = v12 + 74;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v5;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 16);
    v15 = 0;
    FioFwReadUshortAtOffset(*(_QWORD *)(v14 + 16), v10 + a2, &v15);
    if ( v15 >= 0 )
      return RaspInitializeGlyphData(a1, a2, a4, (__int64)a5);
    else
      return RaspLoadCompositeGlyphData(a1, a2, a3, a4, a5);
  }
}
