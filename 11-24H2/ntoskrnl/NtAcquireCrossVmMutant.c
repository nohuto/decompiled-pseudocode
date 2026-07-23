/*
 * XREFs of NtAcquireCrossVmMutant @ 0x1407C2660
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406F6E20 (ExpGetExtensionHostForCrossVmObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAcquireCrossVmMutant(void *a1, unsigned __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  unsigned __int64 ExtensionHostForCrossVmObject; // rsi
  PVOID v9; // rbx
  __int64 *v10; // rdx
  struct _EX_RUNDOWN_REF *v11; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( !ExCrossVmMutantObjectType )
    return 3221225508LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = (__int64 *)a2;
  if ( a2 && PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v5 = a2;
    v13 = *(_QWORD *)v5;
    v4 = &v13;
  }
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0x100000u, ExCrossVmMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v11 = 0LL;
    ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(v6, (__int64 *)&v11);
    if ( ExtensionHostForCrossVmObject )
    {
      v10 = v4;
      v9 = Object;
      v7 = guard_dispatch_icall_no_overrides(Object, v10);
    }
    else
    {
      v7 = -1073741822;
      v9 = Object;
    }
    if ( ExtensionHostForCrossVmObject )
      ExReleaseExtensionTable(v11);
    ObfDereferenceObject(v9);
  }
  return (unsigned int)v7;
}
