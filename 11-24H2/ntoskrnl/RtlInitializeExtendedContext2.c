/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x14027FCB0
 * Callers:
 *     RtlUnwind @ 0x14027B9C0 (RtlUnwind.c)
 *     RtlDispatchException @ 0x14027C1C0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     RtlInitializeExtendedContext @ 0x1403E7270 (RtlInitializeExtendedContext.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     RtlRaiseException @ 0x1405E88F0 (RtlRaiseException.c)
 *     NtCreateThreadEx @ 0x1408A2B60 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 *     PspWow64InitThread @ 0x1409E600C (PspWow64InitThread.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1403E63B0 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpValidateContextFlags2 @ 0x1405EA8B8 (RtlpValidateContextFlags2.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  size_t v7; // r14
  _DWORD *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rcx
  unsigned __int64 v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // ecx
  char v18; // r15
  _DWORD *v19; // r9
  unsigned __int64 v20; // rbp
  __int64 v21; // rdi
  int v22; // ecx
  unsigned __int64 v23; // rax
  _DWORD v24[14]; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v7) = 0;
  v24[0] = 0;
  v9 = 0LL;
  result = RtlpValidateContextFlags2(a2, v24, 0xFFFFF780000003D8uLL);
  if ( (int)result >= 0 )
  {
    v11 = a2 & 0x100000;
    v12 = a2 & 0x10000;
    if ( (a2 & 0x10000) != 0 )
    {
      v13 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v9 = v13 + 179;
      *v13 = a2;
      v13[182] = 716;
    }
    else if ( (_DWORD)v11 )
    {
      v14 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v9 = (_DWORD *)(v14 + 1232);
      *(_DWORD *)(v14 + 48) = a2;
      *(_DWORD *)(v14 + 1244) = 1232;
    }
    else if ( (a2 & 0x200000) != 0 )
    {
      v15 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v9 = v15 + 104;
      *v15 = a2;
      v15[107] = 416;
    }
    else if ( (a2 & 0x400000) != 0 )
    {
      v16 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = v16 + 228;
      *v16 = a2;
      v16[231] = 912;
    }
    v17 = v9[3];
    v9[2] = -v17;
    *v9 = -v17;
    v9[1] = v17 + 32;
    if ( (_DWORD)v12 && (a2 & 0x10020) != 0x10020 )
      v9[3] = 204;
    v18 = v24[0];
    v19 = v9 + 8;
    if ( (v24[0] & 2) != 0 )
    {
      v20 = ((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v21 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & a4;
        if ( (_DWORD)v12 )
        {
          a4 = v21 & 0x40000000000009FFLL;
        }
        else if ( (_DWORD)v11 )
        {
          a4 = v21 & 0x4000000000060DFFLL;
        }
        else if ( (a2 & 0x400000) != 0 )
        {
          a4 = v21 & 4;
        }
        else
        {
          a4 = 0LL;
        }
      }
      v7 = (unsigned int)RtlpGetEntireXStateAreaLength(a4, v11, v12, v19) - 512;
      memset_0((void *)(((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v7);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)((((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4 | 0x8000000000000000uLL;
      v19 = (_DWORD *)(v7 + v20);
      v22 = v20 - (_DWORD)v9;
      v9[1] = v7 + v20 - (_DWORD)v9 - *v9;
    }
    else
    {
      v22 = 33;
    }
    v9[4] = v22;
    v9[5] = v7;
    if ( (v18 & 4) != 0 )
    {
      v23 = ((unsigned __int64)v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_OWORD *)v23 = 0LL;
      *(_QWORD *)(v23 + 16) = 0LL;
      LODWORD(v23) = v23 - (_DWORD)v9;
      v9[6] = v23;
      LODWORD(v23) = v23 - *v9;
      v9[7] = 24;
      v9[1] = v23 + 24;
    }
    *a3 = v9;
    return 0LL;
  }
  return result;
}
