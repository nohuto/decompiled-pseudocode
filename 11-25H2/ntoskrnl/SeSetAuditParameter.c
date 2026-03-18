/*
 * XREFs of SeSetAuditParameter @ 0x14043F8E0
 * Callers:
 *     CmpReportAuditVirtualizationEvent @ 0x1407CE0A8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeSetAuditParameter(
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        SE_ADT_PARAMETER_TYPE Type,
        ULONG Index,
        PVOID Data)
{
  NTSTATUS v4; // r11d
  int v5; // r10d
  __int64 v6; // rax
  char *v7; // rcx
  int v9; // eax

  v4 = 0;
  v5 = 0;
  if ( AuditParameters )
  {
    if ( Type > SeAdtParmTypeLuid )
    {
      if ( Type > SeAdtParmTypeDateTime )
      {
        if ( Type == SeAdtParmTypeSockAddr )
          goto LABEL_48;
        if ( Type == SeAdtParmTypeLogonIdNoSid )
        {
LABEL_6:
          v5 = 8;
LABEL_7:
          v6 = *(_QWORD *)Data;
LABEL_8:
          v7 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v7 + 4) = v6;
LABEL_9:
          *((_DWORD *)v7 + 6) = Type;
          *((_DWORD *)v7 + 7) = v5;
          return v4;
        }
        if ( Type != SeAdtParmTypeUlongNoConv )
        {
          if ( Type != SeAdtParmTypeSockAddrNoPort )
          {
            if ( Type == SeAdtParmTypeMultiSzString )
            {
LABEL_22:
              v5 = *(unsigned __int16 *)Data + 16;
LABEL_23:
              v7 = (char *)AuditParameters + 32 * Index;
              *((_QWORD *)v7 + 6) = Data;
              goto LABEL_9;
            }
            if ( Type == SeAdtParmTypeLogonIdEx )
              goto LABEL_6;
            return -1073741811;
          }
LABEL_48:
          if ( *(_WORD *)Data == 23 )
          {
            v5 = 28;
          }
          else
          {
            v5 = 16;
            if ( *(_WORD *)Data == 33 )
              v5 = 14;
          }
          goto LABEL_23;
        }
LABEL_18:
        v6 = *(unsigned int *)Data;
        v5 = 4;
        goto LABEL_8;
      }
      if ( Type != SeAdtParmTypeDateTime && Type != SeAdtParmTypeHexInt64 )
      {
        if ( Type == SeAdtParmTypeStringList || Type == SeAdtParmTypeSidList )
          return -1073741822;
        if ( Type != SeAdtParmTypeDuration )
        {
          if ( Type != SeAdtParmTypeUserAccountControl && Type != SeAdtParmTypeNoUac )
            goto LABEL_18;
          return -1073741822;
        }
      }
LABEL_45:
      v5 = 8;
      goto LABEL_7;
    }
    if ( Type == SeAdtParmTypeLuid )
      goto LABEL_6;
    if ( Type <= SeAdtParmTypeAccessMask )
    {
      if ( Type == SeAdtParmTypeAccessMask )
        return -1073741822;
      if ( Type )
      {
        switch ( Type )
        {
          case SeAdtParmTypeString:
          case SeAdtParmTypeFileSpec:
            goto LABEL_22;
          case SeAdtParmTypeUlong:
            goto LABEL_18;
          case SeAdtParmTypeSid:
            v9 = *((unsigned __int8 *)Data + 1);
            goto LABEL_33;
          case SeAdtParmTypeLogonId:
            goto LABEL_6;
        }
        if ( Type != SeAdtParmTypeNoLogonId )
          return -1073741811;
      }
      v7 = (char *)AuditParameters + 32 * Index;
      *((_DWORD *)v7 + 7) = 0;
      goto LABEL_9;
    }
    if ( Type != SeAdtParmTypePrivs )
    {
      switch ( Type )
      {
        case SeAdtParmTypeObjectTypes:
          return -1073741822;
        case SeAdtParmTypeHexUlong:
          goto LABEL_18;
        case SeAdtParmTypePtr:
          v5 = 8;
          v7 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v7 + 4) = Data;
          goto LABEL_9;
      }
      if ( Type != SeAdtParmTypeTime )
      {
        v5 = 16;
        goto LABEL_23;
      }
      goto LABEL_45;
    }
    if ( !Data )
      goto LABEL_23;
    if ( !*(_DWORD *)Data )
    {
      v5 = 8;
      goto LABEL_23;
    }
    v9 = 3 * *(_DWORD *)Data;
LABEL_33:
    v5 = 4 * v9 + 8;
    goto LABEL_23;
  }
  return -1073741811;
}
