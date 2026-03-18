/*
 * XREFs of DDCCICleanUpWrap @ 0x140282640
 * Callers:
 *     <none>
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x140205248 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?IsSessionGlobalsAreaAllocated@Full@Gre@@YA_NXZ @ 0x1402FA620 (-IsSessionGlobalsAreaAllocated@Full@Gre@@YA_NXZ.c)
 *     ??1CMonitorAPI@@QEAA@XZ @ 0x1403220B0 (--1CMonitorAPI@@QEAA@XZ.c)
 */

void __fastcall DDCCICleanUpWrap(Gre::Full *a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  __int64 v3; // rdi
  void *v4; // rbx

  if ( Gre::Full::IsSessionGlobalsAreaAllocated(a1) )
  {
    v3 = *(_QWORD *)(W32GetSessionState(v2, v1) + 96);
    v4 = *(void **)(v3 + 128);
    if ( v4 )
    {
      CMonitorAPI::~CMonitorAPI(*(CMonitorAPI **)(v3 + 128));
      DDCCIFreeMemory(v4);
    }
    *(_QWORD *)(v3 + 128) = 0LL;
  }
}
