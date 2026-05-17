/*
 * XREFs of LdrpFindDllActivationContext @ 0x180098000
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     RtlRunOnceExecuteOnce @ 0x180098200 (RtlRunOnceExecuteOnce.c)
 *     LdrResFindResourceDirectory @ 0x180098320 (LdrResFindResourceDirectory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpFindDllActivationContext(_QWORD *a1)
{
  __int64 v2; // r9
  struct _PEB *v3; // rdx
  _WORD *v4; // rdx
  int ResourceDirectory; // eax
  int v6; // ebx
  __int64 v7; // rax
  volatile signed __int32 *v9; // rcx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  if ( !LdrpManifestProberRoutine )
    return 0LL;
  v2 = a1[6];
  v3 = NtCurrentPeb();
  if ( a1 == (_QWORD *)LdrpImageEntry )
  {
    if ( v3->ActivationContextData )
      return 0LL;
  }
  v4 = (_WORD *)a1[10];
  if ( a1 == (_QWORD *)LdrpImageEntry
    && *v4 == 92
    && v4[1] == 63
    && v4[2] == 63
    && v4[3] == 92
    && v4[4]
    && v4[5] == 58
    && v4[6] == 92 )
  {
    v4 += 4;
  }
  if ( (char *)LdrpManifestProberRoutine == (char *)RtlRunOnceExecuteOnce )
  {
    ResourceDirectory = RtlRunOnceExecuteOnce(v2, v4, &v10, v2);
  }
  else if ( (char *)LdrpManifestProberRoutine == (char *)LdrResFindResourceDirectory )
  {
    ResourceDirectory = LdrResFindResourceDirectory(v2, (_DWORD)v4, (unsigned int)&v10, v2);
  }
  else
  {
    ResourceDirectory = LdrpManifestProberRoutine(v2, v4, &v10);
  }
  v6 = ResourceDirectory;
  if ( ResourceDirectory == -1073741809
    || (unsigned int)(ResourceDirectory + 1073741687) <= 2
    || ResourceDirectory == -1073741637
    || ResourceDirectory == -1073741822
    || ResourceDirectory == -1073741308 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrsnap.c",
      743,
      (__int64)"LdrpFindDllActivationContext",
      2,
      "Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
      (_BYTE)a1 + 72);
    v6 = 0;
  }
  v7 = v10;
  if ( v10 )
  {
    v9 = (volatile signed __int32 *)a1[17];
    if ( v9 )
    {
      RtlReleaseActivationContext(v9);
      v7 = v10;
    }
    a1[17] = v7;
  }
  if ( v6 < 0 )
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrsnap.c",
      772,
      (__int64)"LdrpFindDllActivationContext",
      0,
      "Querying the active activation context failed with status 0x%08lx\n",
      v6);
  return (unsigned int)v6;
}
