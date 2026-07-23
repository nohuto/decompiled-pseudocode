/*
 * XREFs of PfpDeprioritizeOldPagesInWs @ 0x1408F5AF4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MmUpdateOldWorkingSetPages @ 0x140491190 (MmUpdateOldWorkingSetPages.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpDeprioritizeOldPagesInWs(__int64 a1, char a2)
{
  unsigned int v3; // esi
  int v4; // edi
  int updated; // ebx
  char v6; // r8
  ULONG_PTR BugCheckParameter1[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  *(_OWORD *)BugCheckParameter1 = 0LL;
  v9 = 0;
  Object = 0LL;
  if ( *(_DWORD *)(a1 + 24) == 24 )
  {
    if ( a2 && (*(_QWORD *)(a1 + 16) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(BugCheckParameter1, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
    if ( LODWORD(BugCheckParameter1[0]) != 3
      || (v9 & 0xFFFFFFC0) != 0
      || (v3 = v9 & 0xF, v3 > 8)
      || (v4 = (v9 >> 4) & 3, v4 == 3)
      || v3 == 8 && !v4 )
    {
      updated = -1073741811;
    }
    else
    {
      updated = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1[1],
                  0x2000,
                  (__int64)PsProcessType,
                  a2,
                  0x73576650u,
                  &Object,
                  0LL,
                  0LL);
      if ( updated >= 0 )
      {
        v6 = 0;
        if ( v4 )
        {
          v6 = 1;
          if ( v4 == 1 )
            v6 = 3;
        }
        updated = MmUpdateOldWorkingSetPages((ULONG_PTR)Object, v3, v6);
      }
    }
  }
  else
  {
    updated = -1073741306;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x73576650u);
  return (unsigned int)updated;
}
