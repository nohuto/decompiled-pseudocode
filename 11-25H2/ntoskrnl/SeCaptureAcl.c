/*
 * XREFs of SeCaptureAcl @ 0x140998F9C
 * Callers:
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepCheckAcl @ 0x1409990D0 (SepCheckAcl.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureAcl(
        char *Src,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        PVOID *a7,
        unsigned int *a8)
{
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  char *v12; // rcx
  PVOID PoolWithTag; // rax

  if ( a2 )
  {
    v9 = (__int64)(Src + 2);
    if ( (unsigned __int64)(Src + 2) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v10 = *(unsigned __int16 *)v9;
    v11 = v10;
    if ( (_DWORD)v10 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = &Src[v10];
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < Src )
        v11 = v10;
    }
  }
  else
  {
    v11 = *((unsigned __int16 *)Src + 1);
  }
  if ( v11 < 8 )
    return 3221225591LL;
  *a8 = (v11 + 3) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a5 | 0x400), v11, 0x63416553u);
  *a7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Src, v11);
    if ( (unsigned __int8)SepCheckAcl(*a7, v11) )
      return 0LL;
    ExFreePoolWithTag(*a7, 0);
    *a7 = 0LL;
    return 3221225591LL;
  }
  return 3221225626LL;
}
