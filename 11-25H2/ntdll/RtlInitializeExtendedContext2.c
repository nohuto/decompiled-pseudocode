/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1800768C0
 * Callers:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlUnwind @ 0x180075300 (RtlUnwind.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180077FE0 (RtlpWalkFrameChain.c)
 *     RtlInitializeExtendedContext @ 0x1800C7C00 (RtlInitializeExtendedContext.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180075A00 (RtlpGetEntireXStateAreaLength.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // edi
  _DWORD *v8; // rbx
  bool v9; // cl
  char v10; // r9
  int v11; // r8d
  unsigned __int64 v12; // rcx
  int v13; // ecx
  int v14; // esi
  __int64 result; // rax
  _DWORD *v16; // rcx
  __int64 v17; // rbp
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx

  v4 = 0;
  v8 = 0LL;
  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && (a2 & 0x7FFFFF0) != 0x200000
    && (a2 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v9 = 0;
  v10 = 1;
  if ( (a2 & 0x400020) != 0x400020 )
    v9 = (a2 & 0x10040) != 65600 && (a2 & 0x100040) != 1048640;
  if ( !v9 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v10 = 3;
  }
  if ( (a2 & 0x100080) == 0x100080 )
    return 3221225659LL;
  v11 = a2 & 0x100000;
  if ( (a2 & 0x10000) != 0 )
  {
    v16 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v8 = v16 + 179;
    *v16 = a2;
    v16[182] = 716;
  }
  else if ( v11 )
  {
    v12 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = (_DWORD *)(v12 + 1232);
    *(_DWORD *)(v12 + 48) = a2;
    *(_DWORD *)(v12 + 1244) = 1232;
  }
  else if ( (a2 & 0x200000) != 0 )
  {
    v19 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = v19 + 104;
    *v19 = a2;
    v19[107] = 416;
  }
  else if ( (a2 & 0x400000) != 0 )
  {
    v18 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = v18 + 228;
    *v18 = a2;
    v18[231] = 912;
  }
  v13 = v8[3];
  v8[2] = -v13;
  *v8 = -v13;
  v8[1] = v13 + 32;
  if ( (a2 & 0x10020) != 65568 && (a2 & 0x10000) != 0 )
    v8[3] = 204;
  if ( (v10 & 2) != 0 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v17 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & a4;
      if ( (a2 & 0x10000) != 0 )
      {
        a4 = v17 & 0x40000000000009FFLL;
      }
      else if ( v11 )
      {
        a4 = v17 & 0x4000000000060DFFLL;
      }
      else if ( (a2 & 0x400000) != 0 )
      {
        a4 = v17 & 4;
      }
      else
      {
        a4 = 0LL;
      }
    }
    v4 = RtlpGetEntireXStateAreaLength(a4) - 512;
    memset_thunk_772440563353939046((void *)(((unsigned __int64)v8 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v4);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v8 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4 | 0x8000000000000000uLL;
    v14 = (((_DWORD)v8 + 95) & 0xFFFFFFC0) - (_DWORD)v8;
    v8[1] = v4 + v14 - *v8;
  }
  else
  {
    v14 = 33;
  }
  v8[4] = v14;
  result = 0LL;
  v8[5] = v4;
  *a3 = v8;
  return result;
}
