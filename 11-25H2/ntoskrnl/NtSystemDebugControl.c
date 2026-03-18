/*
 * XREFs of NtSystemDebugControl @ 0x140A53910
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     DbgBreakPointWithStatus @ 0x1404FA090 (DbgBreakPointWithStatus.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057B7B8 (DbgkCaptureLiveKernelDump.c)
 *     KdDisableDebugger @ 0x1405ABF70 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405AC0B0 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x1405AC5C4 (KdSetDbgPrintBufferSize.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407B2BE4 (ExpKdPullRemoteFileForUser.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSystemDebugControl(int a1, __int64 a2, unsigned int a3, bool *a4, unsigned int Length, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r13
  int v12; // edi
  __int64 v13; // r13
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  unsigned int v36; // r14d
  void *Pool2; // rbx
  int v38; // eax
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  KPROCESSOR_MODE v47; // [rsp+34h] [rbp-E4h]
  size_t Size; // [rsp+38h] [rbp-E0h] BYREF
  void *v49; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v50; // [rsp+48h] [rbp-D0h] BYREF
  PVOID P; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v52; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v53; // [rsp+68h] [rbp-B0h]
  __int128 v54; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+88h] [rbp-90h]
  _BYTE v56[136]; // [rsp+90h] [rbp-88h] BYREF

  LODWORD(v49) = Length;
  LODWORD(Size) = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  memset_0(v56, 0, 0x48uLL);
  v50 = 0LL;
  P = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((a1 - 29) & 0xFFFFFFF7) != 0 )
    return 3221226324LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v47 = PreviousMode;
  if ( a1 != 38 && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
    return 3221225506LL;
  v12 = 0;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
    }
    else
    {
      v13 = 0x7FFFFFFF0000LL;
    }
    if ( Length )
      ProbeForWrite(a4, Length, 4u);
    if ( a6 )
    {
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a6;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    PreviousMode = v47;
  }
  if ( a1 > 19 )
  {
    if ( a1 <= 29 )
    {
      if ( a1 == 29 )
      {
        if ( a3 == 56 && Length >= 0x40000 )
        {
          v52 = *(_OWORD *)a2;
          v53 = *(_OWORD *)(a2 + 16);
          v54 = *(_OWORD *)(a2 + 32);
          v55 = *(_QWORD *)(a2 + 48);
          if ( DWORD2(v54)
            || !HIDWORD(v54)
            || (v52 & 0xFFFFFFFE) != 0
            || 8 * (unsigned __int64)HIDWORD(v54) > 0xFFFFFFFF )
          {
            return 3221225485LL;
          }
          v35 = 0x100000;
          if ( Length <= 0x100000 )
            v35 = (int)v49;
          v36 = v35;
          Pool2 = (void *)ExAllocatePool2(0x40uLL);
          v49 = Pool2;
          if ( Pool2 )
          {
            v12 = ExLockUserBuffer(v55, 8 * HIDWORD(v54), PreviousMode, IoReadAccess, &v50, (struct _MDL **)&P);
            if ( v12 >= 0 )
            {
              v55 = v50;
              v38 = DbgkCaptureLiveDump((__int64)&v52, Pool2, v36, (__int64)&Size);
              v12 = v38;
              if ( v38 >= 0 )
              {
                if ( (unsigned int)Size <= Length )
                {
                  EtwTiLogSyscallUsage(v38, 0x19u);
                  memmove(a4, Pool2, (unsigned int)Size);
                }
                else
                {
                  v12 = -1073741823;
                }
              }
              ExFreePoolWithTag(Pool2, 0);
              ExUnlockUserBuffer((struct _MDL *)P);
            }
            else
            {
              ExFreePoolWithTag(Pool2, 0);
            }
          }
          else
          {
            v12 = -1073741801;
          }
          goto LABEL_119;
        }
        return 3221225476LL;
      }
      v26 = a1 - 20;
      if ( !v26 )
        return 3221225474LL;
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( !v29 )
          {
            if ( Length == 1 )
            {
              *a4 = KdAutoEnableOnEvent;
              goto LABEL_119;
            }
            return 3221225476LL;
          }
          v30 = v29 - 1;
          if ( !v30 )
          {
            if ( a3 == 1 )
            {
              KdAutoEnableOnEvent = *(_BYTE *)a2 != 0;
              goto LABEL_119;
            }
            return 3221225476LL;
          }
          v31 = v30 - 1;
          if ( !v31 )
          {
            if ( Length == 4 )
            {
              *(_DWORD *)a4 = KdPrintBufferSize;
              goto LABEL_119;
            }
            return 3221225476LL;
          }
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              if ( v33 != 1 )
                goto LABEL_102;
              if ( a3 == 1 )
              {
                KdIgnoreUmExceptions = *(_BYTE *)a2 == 0;
                goto LABEL_119;
              }
            }
            else if ( Length == 1 )
            {
              *a4 = KdIgnoreUmExceptions == 0;
              goto LABEL_119;
            }
            return 3221225476LL;
          }
          if ( a3 != 4 )
            return 3221225476LL;
          HIDWORD(Size) = 0;
          v34 = KdSetDbgPrintBufferSize(*(_DWORD *)a2);
        }
        else
        {
          v34 = KdDisableDebugger();
        }
      }
      else
      {
        v34 = KdEnableDebugger();
      }
      goto LABEL_71;
    }
    v39 = a1 - 30;
    if ( !v39 )
    {
      if ( Length == 1 )
      {
        *a4 = KdBlockEnable;
        goto LABEL_119;
      }
      return 3221225476LL;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      if ( a3 == 1 )
      {
        KdBlockEnable = *(_BYTE *)a2;
        goto LABEL_119;
      }
      return 3221225476LL;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      KdUmBreakMarker = -618808389;
      goto LABEL_104;
    }
    v42 = v41 - 1;
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( !v46 )
            {
              if ( !Length && ((a3 - 64) & 0xFFFFFFF7) == 0 )
              {
                memmove(v56, (const void *)a2, a3);
                v12 = DbgkCaptureLiveKernelDump((__int64)v56);
                EtwTiLogSyscallUsage(v12, 0x1Au);
                goto LABEL_119;
              }
              return 3221225476LL;
            }
            if ( v46 != 1 )
              goto LABEL_102;
            if ( a3 != 16 || Length )
              return 3221225476LL;
            v34 = ExpKdPullRemoteFileForUser((_OWORD *)a2);
LABEL_71:
            v12 = v34;
            goto LABEL_119;
          }
          goto LABEL_110;
        }
        if ( Length != 4 )
          return 3221225476LL;
        *(_DWORD *)a4 = KdUmAttachPid;
        if ( KdResetUmAttachPid )
LABEL_110:
          KdUmAttachPid = 0;
LABEL_104:
        v12 = 0;
        goto LABEL_119;
      }
    }
    else
    {
      if ( Length != 4 )
        return 3221225476LL;
      *(_DWORD *)a4 = KdUmBreakPid;
      if ( !KdResetUmBreakPid )
        goto LABEL_104;
    }
    KdUmBreakPid = 0;
    goto LABEL_104;
  }
  if ( a1 == 19 )
    return 3221225474LL;
  if ( a1 > 9 )
  {
    v20 = a1 - 10;
    if ( !v20 )
      return 3221225474LL;
    v21 = v20 - 1;
    if ( !v21 )
      return 3221225474LL;
    v22 = v21 - 1;
    if ( !v22 )
      return 3221225474LL;
    v23 = v22 - 1;
    if ( !v23 )
      return 3221225474LL;
    v24 = v23 - 1;
    if ( !v24 )
      return 3221225474LL;
    v25 = v24 - 1;
    if ( !v25 )
      return 3221225474LL;
    v19 = v25 - 1;
    if ( !v19 )
      return 3221225474LL;
    goto LABEL_44;
  }
  if ( a1 == 9 )
    return 3221225474LL;
  if ( !a1 )
    return 3221225474LL;
  v14 = a1 - 1;
  if ( !v14 )
    return 3221225474LL;
  v15 = v14 - 1;
  if ( !v15 )
    return 3221225474LL;
  v16 = v15 - 1;
  if ( !v16 )
    return 3221225474LL;
  v17 = v16 - 1;
  if ( !v17 )
    return 3221225474LL;
  v18 = v17 - 1;
  if ( !v18 )
    return 3221225474LL;
  v19 = v18 - 1;
  if ( v19 )
  {
LABEL_44:
    if ( (unsigned int)(v19 - 1) <= 1 )
      return 3221225474LL;
LABEL_102:
    v12 = -1073741821;
    goto LABEL_119;
  }
  if ( (_BYTE)KdDebuggerEnabled == 1 )
    DbgBreakPointWithStatus(6u);
  else
    v12 = -1073741823;
LABEL_119:
  if ( a6 )
    *a6 = Size;
  return (unsigned int)v12;
}
