/*
 * XREFs of NtAcquireCrossVmMutant @ 0x1407B5550
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpGetExtensionHostForCrossVmObject @ 0x1406ED5A0 (ExpGetExtensionHostForCrossVmObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAcquireCrossVmMutant(void *a1, unsigned __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  unsigned __int64 ExtensionHostForCrossVmObject; // rsi
  PVOID v8; // rbx
  struct _EX_RUNDOWN_REF *v9; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = 0LL;
  if ( !ExCrossVmMutantObjectType )
    return 3221225508LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v4 = a2;
    v11 = *(_QWORD *)v4;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 0x100000u, ExCrossVmMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v6 >= 0 )
  {
    v9 = 0LL;
    ExtensionHostForCrossVmObject = ExpGetExtensionHostForCrossVmObject(v5, (__int64 *)&v9);
    if ( ExtensionHostForCrossVmObject )
    {
      v8 = Object;
      v6 = guard_dispatch_icall_no_overrides(Object);
    }
    else
    {
      v6 = -1073741822;
      v8 = Object;
    }
    if ( ExtensionHostForCrossVmObject )
      ExReleaseExtensionTable(v9);
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v6;
}
