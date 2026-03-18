/*
 * XREFs of KeQueryAffinityProcess @ 0x140270FC0
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x140271084 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x140271110 (KiReleaseProcessLockShared.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, struct _KAFFINITY_EX *a2, _OWORD *a3, _OWORD *a4, _WORD *a5)
{
  __int64 v9; // rdx
  _OWORD *v11; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0;
  KiAcquireProcessLockShared(a1, &v12);
  KiCopyAffinityEx(a2, a2->Size, *(struct _KAFFINITY_EX **)(a1 + 80));
  if ( a3 )
    *a3 = *(_OWORD *)(a1 + 152);
  if ( a4 )
  {
    v11 = *(_OWORD **)(a1 + 184);
    *a4 = v11[9];
    a4[1] = v11[10];
    a4[2] = v11[11];
    a4[3] = v11[12];
  }
  if ( a5 )
    *a5 = *(_WORD *)(a1 + 416);
  LOBYTE(v9) = v12;
  return KiReleaseProcessLockShared(a1, v9);
}
