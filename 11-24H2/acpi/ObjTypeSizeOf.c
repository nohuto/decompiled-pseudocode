/*
 * XREFs of ObjTypeSizeOf @ 0x140025380
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetBaseData @ 0x140025460 (GetBaseData.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 */

__int64 __fastcall ObjTypeSizeOf(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 BaseData; // rbx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  const void *ObjectTypeName; // rax

  v3 = 0;
  BaseData = GetBaseData(*(_QWORD *)(a2 + 80));
  *(_WORD *)(*(_QWORD *)(v5 + 88) + 2LL) = 1;
  v6 = *(unsigned __int16 *)(BaseData + 2);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL) == 142 )
  {
    *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v6;
  }
  else if ( (_DWORD)v6 == 2 )
  {
    *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = (unsigned int)(*(_DWORD *)(BaseData + 24) - 1);
  }
  else
  {
    if ( (_DWORD)v6 == 3 )
    {
      v7 = *(unsigned int *)(BaseData + 24);
    }
    else
    {
      if ( (_DWORD)v6 != 4 )
      {
        LogError(-1072431096);
        AcpiDiagTraceAmlError(a1, -1072431096);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(BaseData + 2));
        PrintDebugMessage(0xB0u, ObjectTypeName, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431096;
      }
      v7 = **(unsigned int **)(BaseData + 32);
    }
    *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v7;
  }
  return v3;
}
