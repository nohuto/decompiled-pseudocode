/*
 * XREFs of RtlpComputeMergedAcl @ 0x1800E8468
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpComputeMergedAcl2 @ 0x1800657D4 (RtlpComputeMergedAcl2.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpComputeMergedAcl(
        _BYTE *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int a8,
        PVOID *a9,
        _DWORD *a10)
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
    v10 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, (ULONG *)&v20, Acl, a10);
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
