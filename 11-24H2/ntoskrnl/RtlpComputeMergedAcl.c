/*
 * XREFs of RtlpComputeMergedAcl @ 0x140AB1A54
 * Callers:
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlpComputeMergedAcl2 @ 0x1407811B4 (RtlpComputeMergedAcl2.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpComputeMergedAcl(
        _BYTE *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        PVOID *a9,
        _DWORD *a10)
{
  unsigned int v10; // edi
  unsigned int i; // esi
  ACL *Acl; // rax
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF

  v10 = 0;
  LODWORD(v18) = 1024;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
      return v10;
    Acl = (ACL *)ExAllocatePool2(0x100uLL);
    *a9 = Acl;
    if ( !Acl )
      break;
    v10 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, (ULONG *)&v18, Acl, a10);
    if ( (v10 & 0x80000000) == 0 )
    {
      if ( !(_DWORD)v18 )
      {
        ExFreePoolWithTag(*a9, 0);
        *a9 = 0LL;
      }
      return v10;
    }
    ExFreePoolWithTag(*a9, 0);
    *a9 = 0LL;
    if ( v10 != -1073741789 )
      return v10;
  }
  return 3221225495LL;
}
