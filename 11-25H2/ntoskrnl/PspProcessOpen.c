/*
 * XREFs of PspProcessOpen @ 0x1409BBF00
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspIsParentProcess @ 0x14045175C (PspIsParentProcess.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x1404F1B70 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlTestProtectedAccess @ 0x1409BC0CC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  bool IsParentProcess; // al
  PS_PROTECTION v9; // r9
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  int v12; // edx

  Feature_ID51912085__private_IsEnabledPreCheck();
  IsParentProcess = PspIsParentProcess(a3, a4);
  v11 = v10 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v11 = v10;
  if ( (v11 & *a5) != 0
    && a3 != a4
    && a2
    && !RtlTestProtectedAccess(*(PS_PROTECTION *)(a3 + 1530), v9)
    && (!qword_140F04558 || !(unsigned __int8)guard_dispatch_icall_no_overrides(a3)) )
  {
    return 3221225506LL;
  }
  if ( *(_QWORD *)(a4 + 1600) && !*(_QWORD *)(a3 + 1600) && a2 && (~DWORD2(xmmword_140F053C0) & *a5) != 0 )
    return 3221225506LL;
  v12 = *a5;
  if ( (*a5 & 1) != 0 && a2 == 1 && (*(_DWORD *)(a4 + 1532) & 0x8000000) != 0 )
    return 3221225506LL;
  if ( (*a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v12 |= 0x1000u;
    *a5 = v12;
  }
  if ( (v12 & 0x200) != 0 )
    *a5 = v12 | 0x2000;
  return 0LL;
}
