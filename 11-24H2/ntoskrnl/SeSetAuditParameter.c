/*
 * XREFs of SeSetAuditParameter @ 0x14043E0C0
 * Callers:
 *     CmpReportAuditVirtualizationEvent @ 0x1407DDDB8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeSetAuditParameter(
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        SE_ADT_PARAMETER_TYPE Type,
        ULONG Index,
        PVOID Data)
{
  NTSTATUS v4; // r10d
  int v5; // r11d
  char *v6; // rax
  NTSTATUS result; // eax
  char *v8; // rax
  int v9; // r11d
  char *v10; // rax
  int v11; // r11d
  char *v12; // rax

  v4 = 0;
  v5 = 0;
  if ( !AuditParameters )
    return -1073741811;
  switch ( Type )
  {
    case SeAdtParmTypeLogonIdNoSid:
LABEL_3:
      v6 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v6 + 4) = *(_QWORD *)Data;
LABEL_4:
      v5 = 8;
LABEL_5:
      *((_DWORD *)v6 + 6) = Type;
      *((_DWORD *)v6 + 7) = v5;
      return v4;
    case SeAdtParmTypeMessage:
LABEL_8:
      v8 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v8 + 4) = *(unsigned int *)Data;
      *((_DWORD *)v8 + 6) = Type;
      *((_DWORD *)v8 + 7) = 4;
      return 0;
    case SeAdtParmTypeMultiSzString:
LABEL_10:
      v9 = *(unsigned __int16 *)Data + 16;
      v10 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v10 + 6) = Data;
      *((_DWORD *)v10 + 6) = Type;
      *((_DWORD *)v10 + 7) = v9;
      return 0;
    default:
      switch ( Type )
      {
        case SeAdtParmTypeNone:
        case SeAdtParmTypeNoLogonId:
          v6 = (char *)AuditParameters + 32 * Index;
          *((_DWORD *)v6 + 7) = 0;
          goto LABEL_5;
        case SeAdtParmTypeString:
        case SeAdtParmTypeFileSpec:
          goto LABEL_10;
        case SeAdtParmTypeUlong:
        case SeAdtParmTypeHexUlong:
        case SeAdtParmTypeUlongNoConv:
          goto LABEL_8;
        case SeAdtParmTypeSid:
          v11 = 4 * *((unsigned __int8 *)Data + 1) + 8;
          v12 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v12 + 6) = Data;
          *((_DWORD *)v12 + 6) = Type;
          *((_DWORD *)v12 + 7) = v11;
          result = 0;
          break;
        case SeAdtParmTypeLogonId:
        case SeAdtParmTypeTime:
        case SeAdtParmTypeLuid:
        case SeAdtParmTypeHexInt64:
        case SeAdtParmTypeDuration:
        case SeAdtParmTypeDateTime:
        case SeAdtParmTypeLogonIdEx:
          goto LABEL_3;
        case SeAdtParmTypeAccessMask:
        case SeAdtParmTypeObjectTypes:
        case SeAdtParmTypeStringList:
        case SeAdtParmTypeSidList:
        case SeAdtParmTypeUserAccountControl:
        case SeAdtParmTypeNoUac:
          return -1073741822;
        case SeAdtParmTypePrivs:
          if ( Data )
          {
            if ( *(_DWORD *)Data )
              v5 = 12 * *(_DWORD *)Data + 8;
            else
              v5 = 8;
          }
          v6 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v6 + 6) = Data;
          goto LABEL_5;
        case SeAdtParmTypePtr:
          v6 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v6 + 4) = Data;
          goto LABEL_4;
        case SeAdtParmTypeGuid:
          v5 = 16;
          v6 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v6 + 6) = Data;
          goto LABEL_5;
        case SeAdtParmTypeSockAddr:
        case SeAdtParmTypeSockAddrNoPort:
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
          v6 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v6 + 6) = Data;
          goto LABEL_5;
        default:
          return -1073741811;
      }
      break;
  }
  return result;
}
