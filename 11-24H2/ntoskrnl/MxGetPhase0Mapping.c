/*
 * XREFs of MxGetPhase0Mapping @ 0x140BE09E0
 * Callers:
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024BCF0 (MiFillPhysicalPages.c)
 *     MxCopyPage @ 0x140C54604 (MxCopyPage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 MxGetPhase0Mapping()
{
  unsigned __int64 v1; // rdx
  unsigned int i; // r9d
  __int64 v3; // rcx
  unsigned int j; // r10d
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-10h] BYREF

  if ( MxPhase0ScratchPte )
    return MxPhase0ScratchPte << 25 >> 16;
  v1 = ((((unsigned __int64)BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0xFFFFFFFFFFFFF000uLL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x200 )
      KeBugCheckEx(0x1Au, 0x303031BuLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    if ( (*(_QWORD *)v1 & 0x81) == 1 )
      break;
LABEL_10:
    v1 += 8LL;
  }
  v3 = (__int64)(v1 << 25) >> 16;
  for ( j = 0; ; ++j )
  {
    if ( j >= 0x200 )
      goto LABEL_10;
    if ( !*(_QWORD *)v3 )
      break;
    v3 += 8LL;
  }
  MxPhase0ScratchPte = v3;
  return v3 << 25 >> 16;
}
