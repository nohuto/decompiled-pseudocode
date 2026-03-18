/*
 * XREFs of NtRemoveIoCompletionEx @ 0x14099A080
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtRemoveIoCompletionEx(
        HANDLE Handle,
        unsigned __int64 a2,
        ULONG a3,
        _DWORD *a4,
        unsigned __int64 a5,
        BOOLEAN a6)
{
  ULONG v7; // edi
  LARGE_INTEGER *v10; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  PLIST_ENTRY *v12; // rsi
  int v13; // ebx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  __int64 Pool2; // rax
  int v21; // ecx
  ULONG v22; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER *v23; // [rsp+48h] [rbp-F0h]
  __int64 v24; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  _OWORD P[8]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = a3;
  v10 = (LARGE_INTEGER *)a5;
  memset(P, 0, sizeof(P));
  v24 = 0LL;
  v22 = 0;
  if ( a3 - 1 > 0x7FFFFFE )
    return 3221225485LL;
  v23 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( 32LL * a3 )
    {
      v15 = a2;
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = 32LL * a3 + a2 - 1;
      if ( a2 > v16 || (v17 = 0x7FFFFFFF0000LL, v16 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v18 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v18 );
    }
    else
    {
      v17 = 0x7FFFFFFF0000LL;
    }
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v19 = (__int64)a4;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    if ( a5 )
    {
      v23 = (LARGE_INTEGER *)&v24;
      if ( a5 < 0x7FFFFFFF0000LL )
        v17 = a5;
      v24 = *(_QWORD *)v17;
    }
    v10 = v23;
  }
  else if ( !a5 )
  {
    v10 = v23;
  }
  if ( v7 > 0x10 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v12 = (PLIST_ENTRY *)P;
    if ( Pool2 )
      v12 = (PLIST_ENTRY *)Pool2;
    v21 = 16;
    if ( Pool2 )
      v21 = v7;
    v7 = v21;
  }
  else
  {
    v12 = (PLIST_ENTRY *)P;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion((struct _KQUEUE *)Object, a2, v12, v7, &v22, PreviousMode, v10, a6);
    ObfDereferenceObject(Object);
  }
  if ( v12 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(v12, 0);
  if ( v13 >= 0 )
    *a4 = v22;
  return (unsigned int)v13;
}
