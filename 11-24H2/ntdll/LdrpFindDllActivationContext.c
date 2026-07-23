/*
 * XREFs of LdrpFindDllActivationContext @ 0x18002CE50
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002D050 (RtlRunOnceExecuteOnce.c)
 *     LdrResFindResourceDirectory @ 0x18002D170 (LdrResFindResourceDirectory.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpFindDllActivationContext(_QWORD *a1)
{
  _RTL_RUN_ONCE *v2; // r9
  struct _PEB *v3; // rdx
  __int64 v4; // rdx
  NTSTATUS ResourceDirectory; // eax
  int v6; // ebx
  __int64 v7; // rax
  _ACTIVATION_CONTEXT *v9; // rcx
  __int64 Parameter; // [rsp+58h] [rbp+10h] BYREF

  Parameter = 0LL;
  if ( !LdrpManifestProberRoutine )
    return 0LL;
  v2 = (_RTL_RUN_ONCE *)a1[6];
  v3 = NtCurrentPeb();
  if ( a1 == (_QWORD *)LdrpImageEntry )
  {
    if ( v3->ActivationContextData )
      return 0LL;
  }
  v4 = a1[10];
  if ( a1 == (_QWORD *)LdrpImageEntry
    && *(_WORD *)v4 == 92
    && *(_WORD *)(v4 + 2) == 63
    && *(_WORD *)(v4 + 4) == 63
    && *(_WORD *)(v4 + 6) == 92
    && *(_WORD *)(v4 + 8)
    && *(_WORD *)(v4 + 10) == 58
    && *(_WORD *)(v4 + 12) == 92 )
  {
    v4 += 8LL;
  }
  if ( (char *)LdrpManifestProberRoutine == (char *)RtlRunOnceExecuteOnce )
  {
    ResourceDirectory = RtlRunOnceExecuteOnce(v2, (PRTL_RUN_ONCE_INIT_FN)v4, &Parameter, &v2->Ptr);
  }
  else if ( LdrpManifestProberRoutine == LdrResFindResourceDirectory )
  {
    ResourceDirectory = LdrResFindResourceDirectory(v2, v4, &Parameter);
  }
  else
  {
    ResourceDirectory = LdrpManifestProberRoutine(v2, v4, &Parameter);
  }
  v6 = ResourceDirectory;
  if ( ResourceDirectory == -1073741809
    || (unsigned int)(ResourceDirectory + 1073741687) <= 2
    || ResourceDirectory == -1073741637
    || ResourceDirectory == -1073741822
    || ResourceDirectory == -1073741308 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      743LL,
      "LdrpFindDllActivationContext",
      2LL,
      "Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
      a1 + 9,
      ResourceDirectory);
    v6 = 0;
  }
  v7 = Parameter;
  if ( Parameter )
  {
    v9 = (_ACTIVATION_CONTEXT *)a1[17];
    if ( v9 )
    {
      RtlReleaseActivationContext(v9);
      v7 = Parameter;
    }
    a1[17] = v7;
  }
  if ( v6 < 0 )
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      772LL,
      "LdrpFindDllActivationContext",
      0LL,
      "Querying the active activation context failed with status 0x%08lx\n",
      v6);
  return (unsigned int)v6;
}
