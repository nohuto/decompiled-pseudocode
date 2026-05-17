/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1800D76F0
 * Callers:
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180016100 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180019060 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     RtlInitializeExtendedContext @ 0x1800C34F0 (RtlInitializeExtendedContext.c)
 *     RtlUnwind @ 0x1800D75E0 (RtlUnwind.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180119640 (RtlpGetEntireXStateAreaLength.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  size_t v4; // rbp
  _DWORD *v9; // rbx
  bool v11; // cl
  char v12; // r15
  __int64 v13; // r8
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  int v19; // ecx
  __int64 v20; // rdi
  int v21; // ecx

  LODWORD(v4) = 0;
  v9 = 0LL;
  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && (a2 & 0x7FFFFF0) != 0x200000
    && (a2 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v11 = 0;
  v12 = 1;
  if ( (a2 & 0x400020) != 0x400020 )
    v11 = (a2 & 0x10040) != 65600 && (a2 & 0x100040) != 1048640;
  if ( !v11 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v12 = 3;
  }
  if ( (a2 & 0x100080) == 0x100080 )
    return 3221225659LL;
  v13 = a2 & 0x100000;
  v14 = a2 & 0x10000;
  if ( (a2 & 0x10000) != 0 )
  {
    v15 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = v15 + 179;
    *v15 = a2;
    v15[182] = 716;
  }
  else if ( (_DWORD)v13 )
  {
    v16 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = (_DWORD *)(v16 + 1232);
    *(_DWORD *)(v16 + 48) = a2;
    *(_DWORD *)(v16 + 1244) = 1232;
  }
  else if ( (a2 & 0x200000) != 0 )
  {
    v17 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = v17 + 104;
    *v17 = a2;
    v17[107] = 416;
  }
  else if ( (a2 & 0x400000) != 0 )
  {
    v18 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = v18 + 228;
    *v18 = a2;
    v18[231] = 912;
  }
  v19 = v9[3];
  v9[2] = -v19;
  *v9 = -v19;
  v9[1] = v19 + 32;
  if ( (_DWORD)v14 && (a2 & 0x10020) != 0x10020 )
    v9[3] = 204;
  if ( (v12 & 2) != 0 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v20 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & a4;
      if ( (_DWORD)v14 )
      {
        a4 = v20 & 0x40000000000009FFLL;
      }
      else if ( (_DWORD)v13 )
      {
        a4 = v20 & 0x4000000000060DFFLL;
      }
      else if ( (a2 & 0x400000) != 0 )
      {
        a4 = v20 & 4;
      }
      else
      {
        a4 = 0LL;
      }
    }
    v4 = (unsigned int)RtlpGetEntireXStateAreaLength(a4, v14, v13, v9 + 8) - 512;
    memset_thunk_772440563353939046((void *)(((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v4);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4 | 0x8000000000000000uLL;
    v21 = (((_DWORD)v9 + 95) & 0xFFFFFFC0) - (_DWORD)v9;
    v9[1] = v4 + v21 - *v9;
  }
  else
  {
    v21 = 33;
  }
  v9[4] = v21;
  v9[5] = v4;
  *a3 = v9;
  return 0LL;
}
