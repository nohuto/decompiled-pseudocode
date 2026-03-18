/*
 * XREFs of IopSymlinkApplyToOpenedName @ 0x1408EB7B0
 * Callers:
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IopReplaceSymlinkPath @ 0x1408EB350 (IopReplaceSymlinkPath.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkApplyToOpenedName(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        IRP *a4,
        PVOID P,
        __int16 a6)
{
  void *v6; // r13
  void *Pool2; // r14
  _WORD *v12; // rdi
  unsigned __int64 v13; // rdx
  __int16 v14; // dx
  NTSTATUS v15; // esi

  v6 = *(void **)(a1 + 96);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v12 = (_WORD *)(a1 + 88);
  v13 = *(unsigned __int16 *)(a1 + 88);
  if ( (unsigned int)v13 > 2 && *(_WORD *)(*(_QWORD *)(a1 + 96) + 2 * (v13 >> 1) - 2) == 92 )
  {
    if ( a3[3] < 2u )
    {
      ExFreePoolWithTag(Pool2, 0);
      return 3221225485LL;
    }
    *v12 = v13 - 2;
    a3[3] -= 2;
  }
  memmove(P, *(const void **)(a2 + 24), *(unsigned __int16 *)(a2 + 4));
  memmove(
    Pool2,
    (const void *)(*(_QWORD *)(a2 + 24) + *(unsigned __int16 *)(a2 + 4)),
    *(unsigned __int16 *)(a2 + 16) - (unsigned __int64)*(unsigned __int16 *)(a2 + 4));
  *(_QWORD *)(a1 + 96) = Pool2;
  v14 = *(_WORD *)(a2 + 16) - *(_WORD *)(a2 + 4);
  *(_WORD *)(a1 + 90) = v14;
  *v12 = v14;
  ExFreePoolWithTag(v6, 0);
  v15 = IopReplaceSymlinkPath(
          (const wchar_t *)P,
          *(unsigned __int16 *)(a2 + 4) >> 1,
          a1,
          a3,
          *(unsigned __int16 *)(a2 + 4) >> 1,
          *(_WORD *)(a2 + 4),
          a6);
  if ( v15 < 0 )
    ExFreePoolWithTag(P, 0);
  else
    return (unsigned int)IopSymlinkUpdateECP(a4, *(_WORD *)(a2 + 4), *(_WORD *)(a2 + 2) & 0xFFFE);
  return (unsigned int)v15;
}
