/*
 * XREFs of ObpCreateDefaultObjectTypeSD @ 0x14074264C
 * Callers:
 *     ObpInitObjectTypeSD @ 0x1407427B8 (ObpInitObjectTypeSD.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateDefaultObjectTypeSD(__int64 *a1)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  size_t v4; // rdi
  __int64 Pool2; // rax
  __int64 v6; // rbx
  NTSTATUS Acl; // edi
  int v8; // esi

  v2 = RtlLengthSid(SeWorldSid);
  v3 = RtlLengthSid(SeAliasAdminsSid) + v2;
  v4 = v3 + RtlLengthSid(SeLocalSystemSid) + 44;
  Pool2 = ExAllocatePool2(0x100uLL, v4 + 20, 0x6C636144u);
  v6 = Pool2;
  if ( Pool2 )
  {
    v8 = Pool2 + 20;
    *(_OWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_BYTE *)Pool2 = 1;
    memset_0((void *)(Pool2 + 20), 0, v4);
    Acl = RtlCreateAcl((PACL)(v6 + 20), v4, 2u);
    if ( Acl < 0
      || (Acl = RtlpAddKnownAce((int)v6 + 20, 2, 0, 983041, SeWorldSid, 0), Acl < 0)
      || (Acl = RtlpAddKnownAce((int)v6 + 20, 2, 0, 983041, SeAliasAdminsSid, 0), Acl < 0)
      || (Acl = RtlpAddKnownAce((int)v6 + 20, 2, 0, 983041, SeLocalSystemSid, 0), Acl < 0) )
    {
      ExFreePoolWithTag((PVOID)v6, 0);
    }
    else
    {
      *(_WORD *)(v6 + 2) |= 0x8004u;
      *(_DWORD *)(v6 + 16) = v8 - v6;
      *a1 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
