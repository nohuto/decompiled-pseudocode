/*
 * XREFs of MiReadWriteVirtualMemory @ 0x1409C4CE0
 * Callers:
 *     NtReadVirtualMemoryEx @ 0x140471B90 (NtReadVirtualMemoryEx.c)
 *     NtWriteVirtualMemory @ 0x1409C4C80 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x1409C4CB0 (NtReadVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessLoggingEnabled @ 0x14041D370 (PsIsProcessLoggingEnabled.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTiLogReadWriteVm @ 0x1409C4FE0 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x1409C5370 (MiCopyVirtualMemory.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7)
{
  int v9; // r15d
  unsigned int v10; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  char PreviousMode; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  int v19; // ebx
  _KPROCESS *Process; // rsi
  PVOID v21; // rdi
  unsigned __int64 v22; // r15
  int v23; // eax
  int v24; // eax
  int v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  int v30; // [rsp+90h] [rbp+18h]

  v30 = a3;
  v9 = a7;
  Object = 0LL;
  if ( (a7 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 2) == 0 )
    {
      v10 = a6;
      if ( a6 != 16 )
        return 3221225485LL;
      goto LABEL_6;
    }
    return 3221225485LL;
  }
  v10 = a6;
  if ( (a7 & 2) == 0 )
  {
    if ( a6 == 16 )
      v9 = a7 | 1;
    goto LABEL_6;
  }
  if ( a6 != 16 )
    return 3221225485LL;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = a4 + a2 - 1;
    if ( !a4 )
      v13 = a2;
    if ( v13 < a2 )
      return 3221225477LL;
    v14 = a4 - 1;
    if ( !a4 )
      v14 = 0LL;
    if ( a2 + v14 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v15 = 0LL;
    if ( a4 )
      v15 = a4 - 1;
    if ( a3 + v15 < a3 )
      return 3221225477LL;
    v16 = 0LL;
    if ( a4 )
      v16 = a4 - 1;
    if ( a3 + v16 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v17 = (_QWORD *)a5;
    if ( a5 )
    {
      v18 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v18 = a5;
      *(_QWORD *)v18 = *(_QWORD *)v18;
    }
  }
  else
  {
    v17 = (_QWORD *)a5;
  }
  v27 = 0LL;
  v19 = 0;
  if ( a4 )
  {
    v19 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            v10,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL,
            0LL);
    if ( v19 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v21 = Object;
      if ( (*((_BYTE *)Object + 368) & 1) == 0 || Process == Object || *((_QWORD *)Object + 97) )
      {
        if ( v10 == 16 )
        {
          v26 = v9;
          v22 = a2;
          v23 = MiCopyVirtualMemory((_DWORD)Object, a2, (_DWORD)Process, v30, a4, PreviousMode, (__int64)&v27, v26);
        }
        else
        {
          v22 = a2;
          v23 = MiCopyVirtualMemory((_DWORD)Process, v30, (_DWORD)Object, a2, a4, PreviousMode, (__int64)&v27, 0);
        }
        v19 = v23;
      }
      else
      {
        v19 = -1073741819;
        v22 = a2;
      }
      LOBYTE(v24) = PsIsProcessLoggingEnabled((__int64)Process, (__int64)v21, v10);
      if ( v24 )
        EtwTiLogReadWriteVm((unsigned int)v19, Process, v21, v10, v22, v27);
      ObfDereferenceObjectWithTag(v21, 0x6D566D4Du);
      v17 = (_QWORD *)a5;
    }
  }
  if ( v17 )
    *v17 = v27;
  return (unsigned int)v19;
}
