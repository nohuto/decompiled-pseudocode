/*
 * XREFs of NtDCompositionSendDwmLpcMessage @ 0x1402235E0
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1400231D0 (GreUnlockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1400243F0 (UserReferenceDwmApiPort.c)
 *     ReferenceDwmProcess @ 0x14006F910 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x14006F960 (CheckOrAcquireDwmStateLock.c)
 *     UserDereferenceDwmProcess @ 0x14006F990 (UserDereferenceDwmProcess.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline @ 0x140222C50 (Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionSendDwmLpcMessage(void *Src, size_t Size)
{
  __int64 v5; // r13
  __int64 v6; // rcx
  signed int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  _QWORD *v13; // r13
  __int64 v14; // r12
  __int64 CurrentProcess; // rax
  _QWORD *v16; // r9
  struct _KPROCESS *v17; // r13
  signed int v18; // eax
  __int64 i; // rdx
  int v21; // [rsp+38h] [rbp-110h]
  char v22; // [rsp+40h] [rbp-108h]
  PVOID Object; // [rsp+48h] [rbp-100h]
  __int128 v24; // [rsp+50h] [rbp-F8h]
  PRKPROCESS PROCESS; // [rsp+60h] [rbp-E8h]
  size_t v26; // [rsp+68h] [rbp-E0h] BYREF
  void *v27; // [rsp+70h] [rbp-D8h]
  __int64 v28; // [rsp+78h] [rbp-D0h]
  void *v29; // [rsp+80h] [rbp-C8h]
  size_t v30; // [rsp+88h] [rbp-C0h]
  _DWORD v31[20]; // [rsp+90h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-68h] BYREF

  v27 = Src;
  v29 = Src;
  v30 = Size;
  v26 = Size;
  v24 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  PROCESS = 0LL;
  v28 = 0LL;
  v22 = 0;
  memset(v31, 0, 0x48uLL);
  v7 = Size > 0x20 ? 0xC000000D : 0;
  if ( Size <= 0x20 )
    RtlCopyFromUser(&v31[10], Src, Size);
  v8 = 0LL;
  if ( Size <= 0x20 )
  {
    v6 = (unsigned int)(v31[10] - 1073741900);
    if ( v31[10] == 1073741900 )
    {
      if ( Size == 32 )
      {
        *(_QWORD *)&v24 = &v31[11];
        v8 = 1LL;
        goto LABEL_25;
      }
    }
    else
    {
      v6 = (unsigned int)(v31[10] - 1073741953);
      if ( v31[10] == 1073741953 )
      {
        if ( Size == 28 )
        {
          *(_QWORD *)&v24 = &v31[13];
          *((_QWORD *)&v24 + 1) = &v31[15];
        }
        else
        {
          v7 = -1073741811;
        }
        if ( Size == 28 )
          v8 = 2LL;
        goto LABEL_25;
      }
      v6 = (unsigned int)(v31[10] - 1073741956);
      if ( v31[10] == 1073741956
        || (v6 = (unsigned int)(v31[10] - 1073741957), v31[10] == 1073741957)
        || (v6 = (unsigned int)(v31[10] - 1073741961), v31[10] == 1073741961)
        || (v6 = (unsigned int)(v31[10] - 1073741966), v31[10] == 1073741966)
        || (v6 = (unsigned int)(v31[10] - 1073741970), v31[10] == 1073741971)
        && (unsigned int)Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( Size == 28 )
          *(_QWORD *)&v24 = &v31[13];
        else
          v7 = -1073741811;
        LOBYTE(v8) = Size == 28;
LABEL_25:
        if ( v7 >= 0 )
        {
          v5 = UserReferenceDwmApiPort();
          Object = (PVOID)v5;
          if ( !v5 )
            v7 = -1073741823;
        }
        goto LABEL_28;
      }
    }
    v7 = -1073741811;
    goto LABEL_25;
  }
LABEL_28:
  if ( v7 >= 0 )
  {
    if ( CheckOrAcquireDwmStateLock() )
    {
      v22 = 1;
    }
    else
    {
      v22 = 0;
      v7 = -1073741823;
    }
    if ( v7 >= 0 )
    {
      PROCESS = (PRKPROCESS)ReferenceDwmProcess(v6);
      if ( !PROCESS )
        v7 = -1073741823;
      if ( v7 >= 0 && v8 )
      {
        v12 = 0LL;
        while ( 1 )
        {
          v13 = (_QWORD *)*((_QWORD *)&v24 + v12);
          v14 = *v13;
          if ( *v13 )
          {
            CurrentProcess = PsGetCurrentProcess(v6, v9, v10, v11);
            LOBYTE(v21) = 1;
            v16 = v13;
            v17 = PROCESS;
            v7 = ObDuplicateObject(CurrentProcess, v14, PROCESS, v16, 0, 0, 6, v21);
            if ( v7 < 0 )
              break;
          }
          if ( ++v12 >= v8 )
            goto LABEL_46;
        }
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(v17, &ApcState);
        while ( v12 > 0 )
        {
          --v12;
          ObCloseHandle(**((HANDLE **)&v24 + v12), 1);
        }
        KeUnstackDetachProcess(&ApcState);
LABEL_46:
        v5 = (__int64)Object;
      }
    }
  }
  if ( PROCESS )
    UserDereferenceDwmProcess(PROCESS);
  if ( v22 )
    GreUnlockDwmState(v6);
  if ( v7 >= 0 )
  {
    v26 = Size + 40;
    LOWORD(v31[0]) = Size;
    HIWORD(v31[0]) = Size + 40;
    LOWORD(v31[1]) = 0x8000;
    v18 = LpcSendWaitReceivePort(v5, 0x20000LL, v31, v31, &v26, 0LL);
    v7 = v18;
    if ( v18 == 192 || v18 == 258 )
      v7 = -1073741823;
    if ( v7 >= 0 )
    {
      if ( v8 )
      {
        for ( i = 0LL; i < v8; ++i )
          **((_QWORD **)&v24 + i) = 0LL;
      }
      RtlCopyToUser(v27, &v31[10], Size);
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
