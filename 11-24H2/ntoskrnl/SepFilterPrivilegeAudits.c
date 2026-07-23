/*
 * XREFs of SepFilterPrivilegeAudits @ 0x140912790
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14084EFE0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x140912648 (SeCheckAuditPrivilege.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepFilterPrivilegeAudits(char a1, unsigned int *a2)
{
  int v2; // ebx
  _DWORD *v5; // r10
  __int64 v6; // rsi
  __int64 **v7; // rdx
  __int64 *v8; // rax
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  __int64 v11; // r10
  LUID **v12; // rcx
  LUID *v13; // rax

  v2 = 0;
  if ( !a2 || !*a2 )
    return 0;
  v5 = a2 + 2;
  v6 = *a2;
  do
  {
    v7 = SepFilterPrivileges;
    v8 = *SepFilterPrivileges;
    while ( *v5 != *(_DWORD *)v8 || v5[1] != *((_DWORD *)v8 + 1) )
    {
      v8 = v7[1];
      ++v7;
      if ( !v8 )
        goto LABEL_11;
    }
    ++v2;
LABEL_11:
    v5 += 3;
    --v6;
  }
  while ( v6 );
  v9 = *a2;
  if ( (a1 & 1) != 0 && v9 )
  {
    v10 = a2 + 2;
    v11 = v9;
    do
    {
      v12 = &SepServicesFilterPrivileges;
      v13 = SepServicesFilterPrivileges;
      while ( *v10 != v13->LowPart || v10[1] != v13->HighPart )
      {
        v13 = v12[1];
        ++v12;
        if ( !v13 )
          goto LABEL_20;
      }
      ++v2;
LABEL_20:
      v10 += 3;
      --v11;
    }
    while ( v11 );
  }
  return v2 != *a2;
}
