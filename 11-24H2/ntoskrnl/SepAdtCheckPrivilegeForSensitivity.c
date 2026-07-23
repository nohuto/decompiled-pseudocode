/*
 * XREFs of SepAdtCheckPrivilegeForSensitivity @ 0x14047A6B8
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14084EFE0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 * Callees:
 *     <none>
 */

void __fastcall SepAdtCheckPrivilegeForSensitivity(unsigned int *a1, char *a2, _BYTE *a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  char v6; // al
  LUID *v7; // rcx
  LUID **v8; // rbx

  *a2 = 0;
  *a3 = 0;
  if ( a1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = 0LL;
      v6 = 0;
      do
      {
        if ( v6 && *a3 )
          break;
        v7 = SepSensitivePrivileges;
        v8 = &SepSensitivePrivileges;
        while ( a1[3 * v5 + 2] != v7->LowPart || a1[3 * v5 + 3] != v7->HighPart )
        {
          v7 = *++v8;
          if ( !*v8 )
            goto LABEL_9;
        }
        if ( !v7 )
        {
LABEL_9:
          v6 = *a2;
          *a3 = 1;
          goto LABEL_10;
        }
        *a2 = 1;
        v6 = 1;
LABEL_10:
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v4 );
    }
  }
}
