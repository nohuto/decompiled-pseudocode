/*
 * XREFs of SepTokenPrivilegeCount @ 0x140428B80
 * Callers:
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1409B29B4 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepTokenPrivilegeCount(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // edx

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(result) = 0;
  v3 = 1LL;
  v4 = 37LL;
  do
  {
    v5 = result + 1;
    if ( (v1 & v3) == 0 )
      v5 = result;
    v3 = __ROL8__(v3, 1);
    result = v5;
    --v4;
  }
  while ( v4 );
  return result;
}
