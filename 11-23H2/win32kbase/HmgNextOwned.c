/*
 * XREFs of HmgNextOwned @ 0x1C0035880
 * Callers:
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0033C08 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0035730 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1C00357E4 (-vCleanupSurfaces@@YAXK@Z.c)
 * Callees:
 *     ?HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z @ 0x1C0035EB0 (-HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int a1, int a2, struct HOBJ__ **a3)
{
  void *v3; // r12
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v7; // edi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // r10
  __int64 v16; // rsi
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  unsigned int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned __int8 v22; // cl
  struct HOBJ__ *v23; // rax
  PEPROCESS Process; // [rsp+78h] [rbp+20h] BYREF

  v3 = (void *)a2;
  if ( !a2 || a2 == -2147483630 )
    goto LABEL_14;
  Process = 0LL;
  if ( a2 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( !CurrentProcessWin32Process )
      goto LABEL_35;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
  }
  else
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_35;
    CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
    if ( !CurrentProcessWin32Process )
      goto LABEL_35;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
  }
  if ( CurrentProcessWin32Process && !*(_DWORD *)(CurrentProcessWin32Process + 64) )
  {
    v7 = 0;
    goto LABEL_10;
  }
LABEL_35:
  v7 = 1;
LABEL_10:
  if ( Process )
    ObfDereferenceObject(Process);
  if ( !v7 )
    return 0LL;
LABEL_14:
  GreAcquireHmgrSemaphore();
  v14 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
  while ( 1 )
  {
    v15 = *(_QWORD *)(v14 + 8008);
    while ( 1 )
    {
      if ( ++a1 >= *(_DWORD *)v15 )
        goto LABEL_36;
      v16 = *(_QWORD *)(v15 + 16);
      v17 = *(_DWORD *)(v16 + 2056);
      v18 = v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16);
      if ( a1 < v18 )
      {
        if ( a1 >= v17 )
        {
          v11 = ((a1 - v17) >> 16) + 1;
          v12 = *(_QWORD *)(v16 + 8 * v11 + 8);
          v19 = a1 + -65536 * ((a1 - v17) >> 16) - v17;
        }
        else
        {
          v12 = *(_QWORD *)(v16 + 8);
          v19 = a1;
        }
        v20 = 0LL;
        if ( v19 < *(_DWORD *)(v12 + 20) )
        {
          v13 = v19;
          v10 = (unsigned __int64)v19 >> 8;
          v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * v10) + 16LL * (unsigned __int8)v19 + 8);
          if ( v11 )
          {
            v11 = 3LL * v19;
            v20 = *(_QWORD *)v12 + 24LL * v19;
          }
        }
        if ( v20 )
          break;
      }
    }
    if ( !a1 )
    {
LABEL_36:
      a1 = 0;
      break;
    }
    if ( *(_BYTE *)(v20 + 14) && ((*(_DWORD *)(v20 + 8) ^ (unsigned int)v3 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
    {
      v21 = GdiHandleManager::DecodeIndex(*(GdiHandleManager **)(v14 + 8008), a1);
      v10 = v21;
      if ( v21 >= v18
        || (v21 >= v17
          ? (v12 = *(_QWORD *)(v16 + 8LL * (((v21 - v17) >> 16) + 1) + 8), v10 = -65536 * ((v21 - v17) >> 16)
                                                                               - v17
                                                                               + v21)
          : (v12 = *(_QWORD *)(v16 + 8)),
            (unsigned int)v10 >= *(_DWORD *)(v12 + 20)) )
      {
        v11 = 0LL;
      }
      else
      {
        v22 = v10;
        v10 >>= 8;
        v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * v10) + 16LL * v22 + 8);
      }
      if ( (*(_BYTE *)(v20 + 15) & 0x40) == 0
        || *(_WORD *)(v11 + 12) && *(struct _KTHREAD **)(v11 + 16) == KeGetCurrentThread() )
      {
        v23 = HmgpComputeHandleValue((const struct OBJECT *)v11, a1, (struct ENTRYOBJ *const)v20);
        v11 = (__int64)a3;
        *a3 = v23;
        if ( v23 )
          break;
      }
    }
  }
  GreReleaseHmgrSemaphore(v11, v10, v12, v13);
  return a1;
}
