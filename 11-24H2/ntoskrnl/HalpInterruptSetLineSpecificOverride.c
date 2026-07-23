/*
 * XREFs of HalpInterruptSetLineSpecificOverride @ 0x14054031C
 * Callers:
 *     HalpPiix4Detect @ 0x140B6C308 (HalpPiix4Detect.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 */

__int64 __fastcall HalpInterruptSetLineSpecificOverride(unsigned int a1)
{
  __int64 v1; // rcx
  int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 *v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = HalpInterruptGsiToLine(a1, &v9);
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)HalpMmAllocCtxAlloc(v1, 40LL);
    v4 = (__int64)v3;
    if ( !v3 )
      return 3221225626LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v6 = v9;
    *(_QWORD *)(v4 + 16) = v9;
    *(_QWORD *)(v4 + 24) = v6;
    *(_DWORD *)(v4 + 36) = 2;
    *(_DWORD *)(v4 + 32) = 1;
    v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
    v8 = (__int64 *)qword_140F8FB48;
    if ( *(__int64 **)qword_140F8FB48 != &HalpInterruptOverrides )
      __fastfail(3u);
    *(_QWORD *)v4 = &HalpInterruptOverrides;
    *(_QWORD *)(v4 + 8) = v8;
    *v8 = v4;
    qword_140F8FB48 = v4;
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptOverridesLock, v7);
  }
  return (unsigned int)v2;
}
