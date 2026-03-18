/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C008F8D0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C008F880 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C008FC1C (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C009CDBC (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _ERESOURCE *v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  struct _ERESOURCE *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // rdx
  __int64 v30; // rcx
  PERESOURCE v31; // [rsp+60h] [rbp+8h] BYREF
  void *v32; // [rsp+78h] [rbp+20h] BYREF

  v32 = 0LL;
  v2 = 1;
  if ( !*(_QWORD *)(a1 + 248) && (*(_DWORD *)(a1 + 116) & 1) == 0
    || !_bittest16((const signed __int16 *)(a1 + 102), 0xBu) )
  {
    return 0LL;
  }
  v4 = a1 + 272;
  v5 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v4 + 40) + 64LL), UserRequest, 0, 0, 0LL);
    if ( !*(_DWORD *)v4 || *(_DWORD *)v4 == v5 )
      break;
    v30 = *(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 4);
    KeReleaseMutex((PRKMUTEX)(v30 + 64), 0);
    KeWaitForSingleObject(*(PVOID *)(v4 + 40), UserRequest, 0, 0, 0LL);
  }
  v6 = *(_DWORD *)(v4 + 8) + 1;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 8) = v6;
  if ( v6 > *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v6;
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 40) + 64LL), 0);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v10 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 104LL);
  v31 = v10;
  if ( v10 )
  {
    PsEnterPriorityRegion(v9, v8);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  if ( CurrentProcessWin32Process )
  {
    v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v12;
  }
  v14 = *(_QWORD **)(a1 + 264);
  if ( v14 != (_QWORD *)CurrentProcessWin32Process )
  {
    if ( v14 )
    {
      v18 = (_QWORD *)(a1 + 528);
      v19 = *(_QWORD *)(a1 + 528);
      if ( *(_QWORD *)(v19 + 8) != a1 + 528 )
        goto LABEL_43;
      v14 = *(_QWORD **)(a1 + 536);
      if ( (_QWORD *)*v14 != v18 )
        goto LABEL_43;
      *v14 = v19;
      *(_QWORD *)(v19 + 8) = v14;
      *(_QWORD *)(a1 + 536) = a1 + 528;
      *v18 = v18;
      v12 = *(_QWORD *)(a1 + 72);
      if ( v12 )
        MmUnmapViewOfSection(**(_QWORD **)(a1 + 264));
    }
    v20 = *(_DWORD *)(a1 + 116) & 1;
    if ( !v20 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    if ( !v20 )
    {
      v21 = *(_DWORD *)(a1 + 64);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v14, v12, v13);
      MapKernelSectionForUserMapping(*(void **)(a1 + 248), CurrentProcess, v21, &v32);
      if ( !v32 )
      {
        SEMOBJ::vUnlock(&v31);
        KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
        W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)v4);
        v17 = v31;
        v2 = 2;
LABEL_17:
        if ( v17 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)v17);
          ExReleaseResourceAndLeaveCriticalRegion(v17);
          PsLeavePriorityRegion();
        }
        return v2;
      }
    }
    v23 = PsGetCurrentProcessWin32Process(v14);
    if ( v23 )
      v23 &= -(__int64)(*(_QWORD *)v23 != 0LL);
    v24 = v23 + 224;
    v25 = (_QWORD *)(a1 + 528);
    v26 = *(_QWORD *)v24;
    if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) == v24 )
    {
      *v25 = v26;
      *(_QWORD *)(a1 + 536) = v24;
      *(_QWORD *)(v26 + 8) = v25;
      *(_QWORD *)v24 = v25;
      *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v28 = PsGetCurrentProcessWin32Process(v27);
      if ( v28 )
        v28 &= -(__int64)(*(_QWORD *)v28 != 0LL);
      *(_QWORD *)(a1 + 264) = v28;
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v29 = (char *)v32;
        *(_QWORD *)(a1 + 72) = v32;
        if ( (*(_BYTE *)(a1 + 102) & 1) != 0 )
          *(_QWORD *)(a1 + 80) = v29;
        else
          *(_QWORD *)(a1 + 80) = &v29[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
      }
      SEMOBJ::vUnlock(&v31);
      SEMOBJ::vUnlock(&v31);
      return 0LL;
    }
LABEL_43:
    __fastfail(3u);
  }
  if ( v10 )
  {
    v15 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
    if ( *(_DWORD *)(v15 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v15, (unsigned int)&LockRelease, v16, (_DWORD)v10, (__int64)L"hsem");
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion();
    v17 = 0LL;
    goto LABEL_17;
  }
  return v2;
}
