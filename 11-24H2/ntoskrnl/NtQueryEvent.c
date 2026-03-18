/*
 * XREFs of NtQueryEvent @ 0x1408C0360
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     ExpQueryCrossVmEvent @ 0x140ABBDA0 (ExpQueryCrossVmEvent.c)
 */

__int64 __fastcall NtQueryEvent(HANDLE Handle, int a2, unsigned __int64 a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  _DWORD *v12; // rdi
  NTSTATUS v13; // eax
  NTSTATUS v14; // r14d
  _DWORD *v15; // rsi
  int v16; // ecx
  int v17; // eax
  int v19; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v21; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+88h] [rbp+10h] BYREF

  v19 = 0;
  v22 = 0;
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 8 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = a3;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = a3 + 7;
    if ( a3 > a3 + 7 || (v10 = 0x7FFFFFFF0000LL, v9 >= 0x7FFFFFFF0000LL) )
      ExRaiseAccessViolation();
    v11 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v8 = *(_BYTE *)v8;
      v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v8 != v11 );
    v12 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 < 0x7FFFFFFF0000LL )
        v10 = a5;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
  }
  else
  {
    v12 = (_DWORD *)a5;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v14 = v13;
  v15 = Object;
  v21 = Object;
  LODWORD(Object) = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v14 = ObReferenceObjectByHandle(Handle, 1u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v15 = Object;
        v21 = Object;
        LODWORD(Object) = v14;
        if ( v14 >= 0 )
        {
          v14 = ExpQueryCrossVmEvent(v15, &v19, &v22);
          LODWORD(Object) = v14;
        }
      }
    }
    v17 = v19;
    v16 = v22;
  }
  else
  {
    v16 = v15[1];
    v22 = v16;
    v17 = *(_BYTE *)v15 & 0x7F;
    v19 = v17;
  }
  if ( v14 >= 0 )
  {
    if ( PreviousMode )
    {
      *(_DWORD *)a3 = v17;
      *(_DWORD *)(a3 + 4) = v16;
      if ( v12 )
        *v12 = 8;
    }
    else
    {
      *(_DWORD *)a3 = v17;
      *(_DWORD *)(a3 + 4) = v16;
      if ( v12 )
        *v12 = 8;
    }
  }
  if ( v15 )
    ObfDereferenceObject(v15);
  return (unsigned int)v14;
}
