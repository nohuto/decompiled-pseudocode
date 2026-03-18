/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C008A91C
 * Callers:
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C008A780 (NtGdiCreateRectRgn.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C008AA88 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C0158DCC (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 *v7; // rsi
  _DWORD *v8; // r8
  int v9; // ecx
  char *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  void **v18; // rax
  void *v19; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 32) )
  {
    v2 = *(_QWORD *)(ThreadWin32Thread + 32);
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v4 = -*(_QWORD *)CurrentProcessWin32Process;
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  GreAcquireHmgrSemaphore(v4);
  if ( *(_QWORD *)(v5 + 48) )
    goto LABEL_5;
  v19 = 0LL;
  v11 = (char *)HmgAllocateSecureUserMemory(&v19);
  if ( !v11 )
    goto LABEL_5;
  v12 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, 0x568uLL, 0x66616247u);
  if ( v12 )
  {
    v13 = (__int64 *)(v5 + 208);
    v14 = *(_QWORD *)(v5 + 208);
    if ( *(_QWORD *)(v14 + 8) != v5 + 208 )
      goto LABEL_23;
    *(_QWORD *)v12 = v14;
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(v14 + 8) = v12;
    v15 = 170LL;
    *v13 = v12;
    v6 = v12 + 24;
    *(_DWORD *)(v12 + 16) = 170;
    *(_QWORD *)(v5 + 48) = v11 + 4056;
    do
    {
      *(_QWORD *)v6 = v11;
      v11 += 24;
      v6 += 8LL;
      --v15;
    }
    while ( v15 );
LABEL_5:
    if ( !*(_QWORD *)(v5 + 48) )
    {
LABEL_8:
      GreReleaseHmgrSemaphore(v6);
      return v2;
    }
    v7 = (__int64 *)(v5 + 208);
    v2 = *(_QWORD *)(v5 + 48);
    v8 = *(_DWORD **)(v5 + 208);
    v9 = v8[4] - 1;
    v8[4] = v9;
    if ( v9 )
    {
      v6 = *(_QWORD *)&v8[2 * (v9 - 1) + 6];
      *(_QWORD *)(v5 + 48) = v6;
      goto LABEL_8;
    }
    v17 = *(_QWORD **)v8;
    if ( *(_DWORD **)(*(_QWORD *)v8 + 8LL) == v8 )
    {
      v18 = (void **)*((_QWORD *)v8 + 1);
      if ( *v18 == v8 )
      {
        *v18 = v17;
        v17[1] = v18;
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v8);
        v6 = *v7;
        if ( (__int64 *)*v7 != v7 )
          v1 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(v6 + 16) - 1) + 24);
        *(_QWORD *)(v5 + 48) = v1;
        goto LABEL_8;
      }
    }
LABEL_23:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v11, v19);
  GreReleaseHmgrSemaphore(v16);
  return 0LL;
}
