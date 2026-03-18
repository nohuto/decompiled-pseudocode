/*
 * XREFs of NtAcquireCrossVmMutant @ 0x1407C3A60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406F91E0 (ExpGetExtensionHostForCrossVmObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAcquireCrossVmMutant(void *a1, unsigned __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  unsigned __int64 ExtensionHostForCrossVmObject; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID v11; // rbx
  __int64 *v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  if ( !ExCrossVmMutantObjectType )
    return 3221225508LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = (__int64 *)a2;
  if ( a2 && PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v5 = a2;
    v15 = *(_QWORD *)v5;
    v4 = &v15;
  }
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0x100000u, ExCrossVmMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v13 = 0LL;
    ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(v6, (__int64 *)&v13);
    if ( ExtensionHostForCrossVmObject )
    {
      LOBYTE(v9) = PreviousMode;
      v12 = v4;
      v11 = Object;
      v7 = guard_dispatch_icall_no_overrides(Object, v12, v9, v10);
    }
    else
    {
      v7 = -1073741822;
      v11 = Object;
    }
    if ( ExtensionHostForCrossVmObject )
      ExReleaseExtensionTable(v13);
    ObfDereferenceObject(v11);
  }
  return (unsigned int)v7;
}
