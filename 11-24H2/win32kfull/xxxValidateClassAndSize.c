/*
 * XREFs of xxxValidateClassAndSize @ 0x14023A978
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x14019D004 (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1401AA254 (xxxClientFreeWindowClassExtraBytes.c)
 *     ??1?$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ @ 0x1401C34B0 (--1-$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@X$0A@$00$00$00@@AEAAX_N0@Z @ 0x14022A2C8 (-UnlockWorker@-$Win32RawLockedItemBase@X$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxValidateClassAndSize(
        __int64 a1,
        __int64 a2,
        HWND a3,
        struct tagDRAWITEMSTRUCT *a4,
        __int16 a5,
        int a6,
        __int64 *a7)
{
  __int64 v8; // r10
  __int16 v9; // ax
  __int16 v11; // si
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edi
  int v21; // ebx
  unsigned int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // r12d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // ecx
  unsigned int v37; // edx
  __int64 v38; // rcx
  size_t v39; // rdi
  __int64 v40; // rdx
  void *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned int v47; // ecx
  unsigned int v48; // r8d
  ULONG_PTR BugCheckParameter2[4]; // [rsp+20h] [rbp-48h] BYREF

  *a7 = 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_WORD *)(v8 + 42);
  if ( (v9 & 0xD000) != 0 )
  {
    if ( (v9 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2528LL);
    return 0LL;
  }
  v11 = a5;
  if ( v9 != a5 )
  {
    if ( v9 )
      return 0LL;
    if ( (_DWORD)a2 != a6 )
    {
      *a7 = xxxDefWindowProc((struct tagTHREADINFO **)a1, a2, a3, a4);
      return 0LL;
    }
    *(_WORD *)(v8 + 42) = 4096;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL);
    v13 = *(unsigned __int16 *)(W32GetUserSessionState(53248LL, a2) + 71436);
    v16 = (a5 & 0x2FFFu) - 666;
    v18 = *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 19928) + 2 * v16 + 328);
    if ( v12 + v13 >= (unsigned int)v18 )
    {
      v46 = *(_QWORD *)(a1 + 280);
      if ( v46 )
      {
        v47 = 0;
        v48 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL);
        if ( v48 )
        {
          while ( !*(_BYTE *)(v47 + v46) )
          {
            if ( ++v47 >= v48 )
              goto LABEL_40;
          }
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2710LL);
        }
LABEL_40:
        memset_0(*(void **)(a1 + 280), 0, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 248LL));
      }
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 40);
      v20 = *(_DWORD *)(v19 + 248);
      v21 = *(_DWORD *)(v19 + 200);
      v22 = v20 + v21 + *(unsigned __int16 *)(W32GetUserSessionState(v18, v17) + 71436);
      v26 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19928);
      if ( v22 < *(unsigned __int16 *)(v26 + 2 * v16 + 328) )
        goto LABEL_12;
      v27 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19928);
      v30 = *(unsigned __int16 *)(v27 + 2 * v16 + 328) - *(unsigned __int16 *)(W32GetUserSessionState(v29, v28) + 71436);
      v33 = Win32AllocPoolZInit(v30, 1937208149LL);
      if ( !v33 )
        goto LABEL_12;
      PtiCurrent(v32, v31);
      Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        BugCheckParameter2,
        v33,
        (__int64)Win32FreePool);
      v35 = *(_QWORD *)(a1 + 280);
      if ( v35 )
      {
        v36 = 0;
        v37 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL);
        if ( v37 )
        {
          while ( !*(_BYTE *)(v36 + v35) )
          {
            if ( ++v36 >= v37 )
              goto LABEL_20;
          }
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2623LL);
        }
LABEL_20:
        Win32FreePool(*(void **)(a1 + 280));
        *(_QWORD *)(a1 + 280) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL) = 0;
      v38 = *(_QWORD *)(a1 + 40);
      v39 = *(unsigned int *)(v38 + 200);
      if ( (_DWORD)v39 )
      {
        v41 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v39, v34);
        if ( !v41 || (v38 = *(_QWORD *)(a1 + 40), (*(_WORD *)(v38 + 42) & 0xC000) != 0) )
        {
LABEL_23:
          Win32RawOptionalLockedItem<void,0>::~Win32RawOptionalLockedItem<void,0>((__int64)BugCheckParameter2, v40);
LABEL_12:
          *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) &= ~0x1000u;
          return 0LL;
        }
      }
      else
      {
        v41 = 0LL;
      }
      v42 = *(_QWORD *)(v38 + 296);
      if ( v42 )
      {
        if ( v41 )
          RtlCopyVolatileMemory(v41, (const void *)(v42 + v30), v39);
        v43 = *(_QWORD *)(a1 + 40);
        v44 = *(_QWORD *)(v43 + 296);
        *(_QWORD *)(v43 + 296) = v41;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v39;
        xxxClientFreeWindowClassExtraBytes(a1, v44);
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0xC000) != 0 )
          goto LABEL_23;
      }
      else
      {
        *(_QWORD *)(v38 + 296) = v41;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v39;
      }
      Win32RawLockedItemBase<void,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0LL, 0);
      *(_QWORD *)(a1 + 280) = v33;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL) = v30;
      Win32RawOptionalLockedItem<void,0>::~Win32RawOptionalLockedItem<void,0>((__int64)BugCheckParameter2, v45);
      v11 = a5;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = v11;
    *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) &= ~0x1000u;
  }
  return 1LL;
}
