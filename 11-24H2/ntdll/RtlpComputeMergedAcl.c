/*
 * XREFs of RtlpComputeMergedAcl @ 0x1800BE824
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpComputeMergedAcl2 @ 0x1800C5214 (RtlpComputeMergedAcl2.c)
 */

__int64 __fastcall RtlpComputeMergedAcl(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        PVOID *a9,
        __int64 a10)
{
  unsigned int v10; // edi
  unsigned int v15; // ebp
  void *ProcessHeap; // rsi
  unsigned int v17; // eax
  ACL *Acl; // rax
  __int64 v20; // [rsp+60h] [rbp-38h] BYREF

  v10 = 0;
  v15 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v17 = 1024;
  LODWORD(v20) = 1024;
  while ( 1 )
  {
    if ( v15 >= 2 )
      return v10;
    Acl = (ACL *)RtlAllocateHeap(ProcessHeap, 0, v17);
    *a9 = Acl;
    if ( !Acl )
      break;
    v10 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)&v20, Acl, a10);
    if ( (v10 & 0x80000000) == 0 )
    {
      if ( !(_DWORD)v20 )
      {
        RtlFreeHeap(ProcessHeap, 0, *a9);
        *a9 = 0LL;
      }
      return v10;
    }
    RtlFreeHeap(ProcessHeap, 0, *a9);
    *a9 = 0LL;
    if ( v10 != -1073741789 )
      return v10;
    v17 = v20;
    ++v15;
  }
  return 3221225495LL;
}
