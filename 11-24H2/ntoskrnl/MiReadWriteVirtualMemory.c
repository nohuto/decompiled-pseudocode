/*
 * XREFs of MiReadWriteVirtualMemory @ 0x140992B20
 * Callers:
 *     NtReadVirtualMemoryEx @ 0x140467170 (NtReadVirtualMemoryEx.c)
 *     NtWriteVirtualMemory @ 0x140992AC0 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x140992AF0 (NtReadVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessLoggingEnabled @ 0x14040A430 (PsIsProcessLoggingEnabled.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTiLogReadWriteVm @ 0x140992E08 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x140993190 (MiCopyVirtualMemory.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int a6,
        int a7)
{
  int v9; // edi
  unsigned int v10; // r12d
  struct _KTHREAD *CurrentThread; // r13
  char PreviousMode; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  _KPROCESS *Process; // r11
  PVOID v20; // r13
  unsigned __int64 v21; // rdi
  int v22; // eax
  int v23; // eax
  __int64 v24; // r11
  int v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  _KPROCESS *v29; // [rsp+50h] [rbp-38h]
  int v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
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
    if ( a5 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a5;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
  }
  v27 = 0LL;
  v18 = 0;
  if ( a4 )
  {
    v18 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            v10,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL,
            0LL);
    if ( v18 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v29 = Process;
      v20 = Object;
      if ( (*((_BYTE *)Object + 368) & 1) == 0 || Process == Object || *((_QWORD *)Object + 97) )
      {
        if ( v10 == 16 )
        {
          v26 = v9;
          v21 = a2;
          v22 = MiCopyVirtualMemory((_DWORD)Object, a2, (_DWORD)Process, v31, a4, PreviousMode, (__int64)&v27, v26);
        }
        else
        {
          v21 = a2;
          v22 = MiCopyVirtualMemory((_DWORD)Process, v31, (_DWORD)Object, a2, a4, PreviousMode, (__int64)&v27, 0);
        }
        v18 = v22;
        Process = v29;
      }
      else
      {
        v18 = -1073741819;
        v21 = a2;
      }
      LOBYTE(v23) = PsIsProcessLoggingEnabled((__int64)Process, (__int64)v20, v10);
      if ( v23 )
        EtwTiLogReadWriteVm((unsigned int)v18, v24, v20, v10, v21, v27);
      ObfDereferenceObjectWithTag(v20, 0x6D566D4Du);
    }
  }
  if ( a5 )
    *a5 = v27;
  return (unsigned int)v18;
}
