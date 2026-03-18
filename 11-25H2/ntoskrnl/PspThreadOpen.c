/*
 * XREFs of PspThreadOpen @ 0x1409BBDF0
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspIsParentProcess @ 0x14045175C (PspIsParentProcess.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x1404F1B70 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1409BC09C (PspCheckForInvalidAccessByProtection.c)
 */

__int64 __fastcall PspThreadOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 v5; // rbx
  bool IsParentProcess; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r10
  int v16; // eax

  v5 = *(_QWORD *)(a4 + 544);
  Feature_ID51912085__private_IsEnabledPreCheck();
  IsParentProcess = PspIsParentProcess(a3, v5);
  v13 = v12 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v13 = v12;
  if ( ((unsigned int)v13 & *a5) != 0 )
  {
    v14 = *(_QWORD *)(a4 + 544);
    if ( a3 != v14 )
    {
      LOBYTE(v10) = *(_BYTE *)(a3 + 1530);
      LOBYTE(v13) = a2;
      LOBYTE(v11) = *(_BYTE *)(v14 + 1530);
      if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v13, v10, v11) )
      {
        if ( !qword_140F04558 || !(unsigned __int8)guard_dispatch_icall_no_overrides(a3) )
          return 3221225506LL;
      }
    }
  }
  if ( *(_QWORD *)(a4 + 1648) && !*(_QWORD *)(a3 + 1600) && a2 && (~HIDWORD(xmmword_140F053C0) & *a5) != 0 )
    return 3221225506LL;
  v16 = *a5;
  if ( (*a5 & 0x40) != 0 )
  {
    v16 |= 0x800u;
    *a5 = v16;
  }
  if ( (v16 & 0x20) != 0 )
  {
    v16 |= 0x400u;
    *a5 = v16;
  }
  if ( (v16 & 2) != 0 )
    *a5 = v16 | 0x1000;
  return 0LL;
}
