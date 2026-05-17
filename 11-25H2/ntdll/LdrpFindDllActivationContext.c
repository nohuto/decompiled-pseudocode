/*
 * XREFs of LdrpFindDllActivationContext @ 0x180003670
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     LdrResFindResourceDirectory @ 0x180003990 (LdrResFindResourceDirectory.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpFindDllActivationContext(_QWORD *a1)
{
  __int64 v2; // r9
  struct _PEB *v3; // rdx
  _WORD *v4; // rdx
  int ResourceDirectory; // eax
  int v6; // ebx
  __int64 v7; // rax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
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
    ResourceDirectory = RtlRunOnceExecuteOnce(v2, v4, &v9, v2);
  }
  else if ( (char *)LdrpManifestProberRoutine == (char *)LdrResFindResourceDirectory )
  {
    ResourceDirectory = LdrResFindResourceDirectory(v2, (_DWORD)v4, (unsigned int)&v9, v2);
  }
  else
  {
    ResourceDirectory = LdrpManifestProberRoutine(v2, v4, &v9);
  }
  v6 = ResourceDirectory;
  if ( ResourceDirectory == -1073741809
    || (unsigned int)(ResourceDirectory + 1073741687) <= 2
    || ResourceDirectory == -1073741637
    || ResourceDirectory == -1073741822
    || ResourceDirectory == -1073741308 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      743,
      (int)"LdrpFindDllActivationContext",
      2,
      "Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
      (_BYTE)a1 + 72);
    v6 = 0;
  }
  v7 = v9;
  if ( v9 )
  {
    if ( a1[17] )
    {
      RtlReleaseActivationContext();
      v7 = v9;
    }
    a1[17] = v7;
  }
  if ( v6 < 0 )
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      772,
      (int)"LdrpFindDllActivationContext",
      0,
      "Querying the active activation context failed with status 0x%08lx\n",
      v6);
  return (unsigned int)v6;
}
