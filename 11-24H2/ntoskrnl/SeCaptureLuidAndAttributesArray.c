/*
 * XREFs of SeCaptureLuidAndAttributesArray @ 0x140984EB8
 * Callers:
 *     NtFilterToken @ 0x140983A70 (NtFilterToken.c)
 *     NtCreateTokenEx @ 0x140983E20 (NtCreateTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x140984860 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x140984C80 (NtPrivilegeCheck.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureLuidAndAttributesArray(
        void *Src,
        unsigned int a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  SIZE_T v10; // rdx
  unsigned int v11; // edi
  PVOID PoolWithTag; // rax

  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x42 )
    return 3221225485LL;
  v10 = 12 * a2;
  *a9 = (v10 + 3) & 0xFFFFFFFC;
  if ( a3 && (_DWORD)v10 && ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = v10;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v10, 0x754C6553u);
  *a8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Src, v11);
    return 0LL;
  }
  return 3221225626LL;
}
