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

NTSTATUS __cdecl NtSystemDebugControl(
        SYSDBG_COMMAND Command,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r13
  int v12; // edi
  __int64 v13; // r13
  __int32 v14; // ebx
  __int32 v15; // ebx
  __int32 v16; // ebx
  __int32 v17; // ebx
  int v18; // ebx
  int v19; // ebx
  __int32 v20; // ebx
  __int32 v21; // ebx
  __int32 v22; // ebx
  __int32 v23; // ebx
  int v24; // ebx
  int v25; // ebx
  __int32 v26; // ebx
  __int32 v27; // ebx
  __int32 v28; // ebx
  __int32 v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  unsigned int v36; // r14d
  void *Pool2; // rbx
  int v38; // eax
  __int32 v39; // ebx
  __int32 v40; // ebx
  __int32 v41; // ebx
  __int32 v42; // ebx
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

  LODWORD(v49) = OutputBufferLength;
  LODWORD(Size) = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  memset_0(v56, 0, 0x48uLL);
  v50 = 0LL;
  P = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((Command - 29) & 0xFFFFFFF7) != 0 )
    return -1073740972;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v47 = PreviousMode;
  if ( Command != SysDbgKdPullRemoteFile && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
    || PsIsCurrentThreadInServerSilo() )
  {
    return -1073741790;
  }
  v12 = 0;
  if ( PreviousMode )
  {
    if ( InputBufferLength )
    {
      if ( ((unsigned __int8)InputBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
    }
    else
    {
      v13 = 0x7FFFFFFF0000LL;
    }
    if ( OutputBufferLength )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 4u);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v13 = (__int64)ReturnLength;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    PreviousMode = v47;
  }
  if ( Command > SysDbgWriteBusData )
  {
    if ( Command <= SysDbgGetTriageDump )
    {
      if ( Command == SysDbgGetTriageDump )
      {
        if ( InputBufferLength == 56 && OutputBufferLength >= 0x40000 )
        {
          v52 = *(_OWORD *)InputBuffer;
          v53 = *((_OWORD *)InputBuffer + 1);
          v54 = *((_OWORD *)InputBuffer + 2);
          v55 = *((_QWORD *)InputBuffer + 6);
          if ( DWORD2(v54)
            || !HIDWORD(v54)
            || (v52 & 0xFFFFFFFE) != 0
            || 8 * (unsigned __int64)HIDWORD(v54) > 0xFFFFFFFF )
          {
            return -1073741811;
          }
          v35 = 0x100000;
          if ( OutputBufferLength <= 0x100000 )
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
                if ( (unsigned int)Size <= OutputBufferLength )
                {
                  EtwTiLogSyscallUsage(v38, 0x19u);
                  memmove(OutputBuffer, Pool2, (unsigned int)Size);
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
        return -1073741820;
      }
      v26 = Command - 20;
      if ( !v26 )
        return -1073741822;
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( !v29 )
          {
            if ( OutputBufferLength == 1 )
            {
              *(_BYTE *)OutputBuffer = KdAutoEnableOnEvent;
              goto LABEL_119;
            }
            return -1073741820;
          }
          v30 = v29 - 1;
          if ( !v30 )
          {
            if ( InputBufferLength == 1 )
            {
              KdAutoEnableOnEvent = *(_BYTE *)InputBuffer != 0;
              goto LABEL_119;
            }
            return -1073741820;
          }
          v31 = v30 - 1;
          if ( !v31 )
          {
            if ( OutputBufferLength == 4 )
            {
              *(_DWORD *)OutputBuffer = KdPrintBufferSize;
              goto LABEL_119;
            }
            return -1073741820;
          }
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              if ( v33 != 1 )
                goto LABEL_102;
              if ( InputBufferLength == 1 )
              {
                KdIgnoreUmExceptions = *(_BYTE *)InputBuffer == 0;
                goto LABEL_119;
              }
            }
            else if ( OutputBufferLength == 1 )
            {
              *(_BYTE *)OutputBuffer = KdIgnoreUmExceptions == 0;
              goto LABEL_119;
            }
            return -1073741820;
          }
          if ( InputBufferLength != 4 )
            return -1073741820;
          HIDWORD(Size) = 0;
          v34 = KdSetDbgPrintBufferSize(*(_DWORD *)InputBuffer);
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
    v39 = Command - 30;
    if ( !v39 )
    {
      if ( OutputBufferLength == 1 )
      {
        *(_BYTE *)OutputBuffer = KdBlockEnable;
        goto LABEL_119;
      }
      return -1073741820;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      if ( InputBufferLength == 1 )
      {
        KdBlockEnable = *(_BYTE *)InputBuffer;
        goto LABEL_119;
      }
      return -1073741820;
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
              if ( !OutputBufferLength && ((InputBufferLength - 64) & 0xFFFFFFF7) == 0 )
              {
                memmove(v56, InputBuffer, InputBufferLength);
                v12 = DbgkCaptureLiveKernelDump((__int64)v56);
                EtwTiLogSyscallUsage(v12, 0x1Au);
                goto LABEL_119;
              }
              return -1073741820;
            }
            if ( v46 != 1 )
              goto LABEL_102;
            if ( InputBufferLength != 16 || OutputBufferLength )
              return -1073741820;
            v34 = ExpKdPullRemoteFileForUser(InputBuffer);
LABEL_71:
            v12 = v34;
            goto LABEL_119;
          }
          goto LABEL_110;
        }
        if ( OutputBufferLength != 4 )
          return -1073741820;
        *(_DWORD *)OutputBuffer = KdUmAttachPid;
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
      if ( OutputBufferLength != 4 )
        return -1073741820;
      *(_DWORD *)OutputBuffer = KdUmBreakPid;
      if ( !KdResetUmBreakPid )
        goto LABEL_104;
    }
    KdUmBreakPid = 0;
    goto LABEL_104;
  }
  if ( Command == SysDbgWriteBusData )
    return -1073741822;
  if ( Command > SysDbgWriteVirtual )
  {
    v20 = Command - 10;
    if ( !v20 )
      return -1073741822;
    v21 = v20 - 1;
    if ( !v21 )
      return -1073741822;
    v22 = v21 - 1;
    if ( !v22 )
      return -1073741822;
    v23 = v22 - 1;
    if ( !v23 )
      return -1073741822;
    v24 = v23 - 1;
    if ( !v24 )
      return -1073741822;
    v25 = v24 - 1;
    if ( !v25 )
      return -1073741822;
    v19 = v25 - 1;
    if ( !v19 )
      return -1073741822;
    goto LABEL_44;
  }
  if ( Command == SysDbgWriteVirtual )
    return -1073741822;
  if ( Command == SysDbgQueryModuleInformation )
    return -1073741822;
  v14 = Command - 1;
  if ( !v14 )
    return -1073741822;
  v15 = v14 - 1;
  if ( !v15 )
    return -1073741822;
  v16 = v15 - 1;
  if ( !v16 )
    return -1073741822;
  v17 = v16 - 1;
  if ( !v17 )
    return -1073741822;
  v18 = v17 - 1;
  if ( !v18 )
    return -1073741822;
  v19 = v18 - 1;
  if ( v19 )
  {
LABEL_44:
    if ( (unsigned int)(v19 - 1) <= 1 )
      return -1073741822;
LABEL_102:
    v12 = -1073741821;
    goto LABEL_119;
  }
  if ( (_BYTE)KdDebuggerEnabled == 1 )
    DbgBreakPointWithStatus(6u);
  else
    v12 = -1073741823;
LABEL_119:
  if ( ReturnLength )
    *ReturnLength = Size;
  return v12;
}
