/*
 * XREFs of GetFieldUnitRegionObj @ 0x14000C4A0
 * Callers:
 *     AccessFieldData @ 0x14000BEC0 (AccessFieldData.c)
 *     GetFieldUnitRegionObj @ 0x14000C4A0 (GetFieldUnitRegionObj.c)
 *     AMLIGetFieldUnitRegionObj @ 0x140023B60 (AMLIGetFieldUnitRegionObj.c)
 * Callees:
 *     GetFieldUnitRegionObj @ 0x14000C4A0 (GetFieldUnitRegionObj.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, _QWORD *a2)
{
  int FieldUnitRegionObj; // edi
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 ObjectPath; // rax
  const char *v9; // rdx
  void *v10; // rsi
  int v11; // ecx

  FieldUnitRegionObj = 0;
  v4 = *a1;
  v5 = *(unsigned __int16 *)(*a1 + 66);
  if ( v5 == 130 || (v11 = v5 - 131) == 0 )
  {
    *a2 = **(_QWORD **)(v4 + 96);
  }
  else if ( v11 == 1 )
  {
    FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 8LL) + 96LL), a2);
  }
  else
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 66LL), 0, 0, 0LL);
    FieldUnitRegionObj = -1072431101;
  }
  v6 = *a2;
  if ( *a2 && *(_WORD *)(v6 + 66) != 10 )
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    ObjectPath = GetObjectPath(*a2);
    v9 = byte_1400753E8;
    v10 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v9) = ObjectPath;
    PrintDebugMessage(55, (_DWORD)v9, *(unsigned __int16 *)(*a2 + 66LL), 0, 0LL);
    FieldUnitRegionObj = -1072431101;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      result = 3222536195LL;
      *a2 = 0LL;
      return result;
    }
    goto LABEL_5;
  }
  if ( FieldUnitRegionObj < 0 || !v6 )
  {
LABEL_5:
    *a2 = 0LL;
    return (unsigned int)FieldUnitRegionObj;
  }
  result = (unsigned int)FieldUnitRegionObj;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
  return result;
}
