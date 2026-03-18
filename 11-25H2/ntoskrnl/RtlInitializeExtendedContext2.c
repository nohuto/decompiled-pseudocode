/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x140258C20
 * Callers:
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14025CE90 (RtlDispatchException.c)
 *     RtlUnwind @ 0x14025DB00 (RtlUnwind.c)
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x140261330 (KiContinuePreviousModeUser.c)
 *     RtlInitializeExtendedContext @ 0x140262930 (RtlInitializeExtendedContext.c)
 *     RtlRaiseException @ 0x1405DC840 (RtlRaiseException.c)
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     NtCreateThreadEx @ 0x1408EFF10 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  size_t v4; // rsi
  __int64 v5; // rdi
  _DWORD *v8; // rbx
  bool v9; // cl
  char v10; // r15
  int v11; // r8d
  unsigned __int64 v12; // rcx
  int v13; // ecx
  _DWORD *v14; // r10
  int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned int i; // r8d
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx

  LODWORD(v4) = 0;
  v5 = a4;
  v8 = 0LL;
  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && ((a2 & 0x200000) == 0 || (a2 & 0x7DFFFF0) != 0)
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
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v10 = 3;
  }
  if ( (a2 & 0x100080) == 0x100080 )
  {
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v10 |= 4u;
      goto LABEL_13;
    }
    return 3221225659LL;
  }
LABEL_13:
  v11 = a2 & 0x100000;
  if ( (a2 & 0x10000) != 0 )
  {
    v23 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v8 = v23 + 179;
    *v23 = a2;
    v23[182] = 716;
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
    v24 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = v24 + 104;
    *v24 = a2;
    v24[107] = 416;
  }
  else if ( (a2 & 0x400000) != 0 )
  {
    v25 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = v25 + 228;
    *v25 = a2;
    v25[231] = 912;
  }
  v13 = v8[3];
  v8[2] = -v13;
  *v8 = -v13;
  v8[1] = v13 + 32;
  if ( (a2 & 0x10020) != 65568 && (a2 & 0x10000) != 0 )
    v8[3] = 204;
  v14 = v8 + 8;
  if ( (v10 & 2) != 0 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v18 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & a4;
      if ( (a2 & 0x10000) != 0 )
      {
        v5 = v18 & 0x40000000000009FFLL;
      }
      else if ( v11 )
      {
        v5 = v18 & 0x4000000000060DFFLL;
      }
      else if ( (a2 & 0x400000) != 0 )
      {
        v5 = v18 & 4;
      }
      else
      {
        v5 = 0LL;
      }
      v19 = 4LL;
      v20 = 576;
      for ( i = 2; i < 0x40; i += 2 )
      {
        if ( (v19 & v5) != 0 )
        {
          if ( (v19 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v20 = (v20 + 63) & 0xFFFFFFC0;
          v20 += *(_DWORD *)(4LL * i - 0x87FFFFFF9FCLL);
        }
        v22 = __ROL8__(v19, 1);
        if ( (v22 & v5) != 0 )
        {
          if ( (v22 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v20 = (v20 + 63) & 0xFFFFFFC0;
          v20 += *(_DWORD *)(4LL * (i + 1) - 0x87FFFFFF9FCLL);
        }
        v19 = __ROL8__(v19, 2);
      }
    }
    else
    {
      v20 = MEMORY[0xFFFFF780000003E8];
    }
    v4 = v20 - 512;
    memset_0((void *)(((unsigned __int64)v8 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v4);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v8 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5 | 0x8000000000000000uLL;
    v14 = (_DWORD *)((((unsigned __int64)v8 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + v4);
    v15 = (((_DWORD)v8 + 95) & 0xFFFFFFC0) - (_DWORD)v8;
    v8[1] = v4 + v15 - *v8;
  }
  else
  {
    v15 = 33;
  }
  v8[4] = v15;
  v8[5] = v4;
  if ( (v10 & 4) != 0 )
  {
    v16 = ((unsigned __int64)v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    LODWORD(v16) = v16 - (_DWORD)v8;
    v8[6] = v16;
    LODWORD(v16) = v16 - *v8;
    v8[7] = 24;
    v8[1] = v16 + 24;
  }
  *a3 = v8;
  return 0LL;
}
