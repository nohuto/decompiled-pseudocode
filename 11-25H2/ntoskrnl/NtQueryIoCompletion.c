/*
 * XREFs of NtQueryIoCompletion @ 0x140A6F560
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryIoCompletion(HANDLE Handle, int a2, unsigned __int64 a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  NTSTATUS v11; // esi
  int v12; // r14d
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF

  if ( a2 )
    return 3221225475LL;
  if ( a4 != 4 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v9 = a3;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 3) = *(_BYTE *)(v9 + 3);
    v10 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 < 0x7FFFFFFF0000LL )
        v8 = a5;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
  }
  else
  {
    v10 = (_DWORD *)a5;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 1u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = *((_DWORD *)Object + 1);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *(_DWORD *)a3 = v12;
      if ( v10 )
        *v10 = 4;
    }
    else
    {
      *(_DWORD *)a3 = v12;
      if ( v10 )
        *v10 = 4;
    }
  }
  return (unsigned int)v11;
}
