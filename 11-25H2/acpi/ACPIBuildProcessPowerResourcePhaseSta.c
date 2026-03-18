/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSta @ 0x14004E8A0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     ACPIBuildCompleteGeneric @ 0x14001FA50 (ACPIBuildCompleteGeneric.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSta(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  __int64 i; // rcx
  _QWORD *v6; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 0;
  if ( (*(_DWORD *)(v1 + 16) & 0x1000LL) == 0 )
  {
    BugCheckParameter4 = *(unsigned __int16 *)(v3 + 2);
    if ( (_WORD)BugCheckParameter4 != 1 )
      KeBugCheckEx(0xA5u, 8uLL, *(_QWORD *)(v1 + 32), *(_QWORD *)(a1 + 56), BugCheckParameter4);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 1uLL);
    dword_140089138 = 0;
    pszDest = 0;
    FreeDataBuffs(v3, 1u);
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 2uLL);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  for ( i = AcpiPowerNodeList;
        (__int64 *)i != &AcpiPowerNodeList && *(_BYTE *)(i + 40) < *(_BYTE *)(v1 + 40);
        i = *(_QWORD *)i )
  {
    ;
  }
  v6 = *(_QWORD **)(i + 8);
  if ( *v6 != i )
    __fastfail(3u);
  *(_QWORD *)v1 = i;
  *(_QWORD *)(v1 + 8) = v6;
  *v6 = v1;
  *(_QWORD *)(i + 8) = v1;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  ACPIBuildCompleteGeneric(0LL, 0, 0LL, a1);
  return 0LL;
}
