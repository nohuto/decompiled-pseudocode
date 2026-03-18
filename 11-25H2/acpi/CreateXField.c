/*
 * XREFs of CreateXField @ 0x14003B324
 * Callers:
 *     CreateQWordField @ 0x14003B080 (CreateQWordField.c)
 *     CreateBitField @ 0x14003B0E0 (CreateBitField.c)
 *     CreateWordField @ 0x14003B150 (CreateWordField.c)
 *     CreateField @ 0x14003B1B0 (CreateField.c)
 *     CreateByteField @ 0x14003B270 (CreateByteField.c)
 *     CreateDWordField @ 0x14003B2D0 (CreateDWordField.c)
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall CreateXField(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v9; // rbp
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  NameSpaceObject = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "BI");
  if ( !NameSpaceObject )
  {
    NameSpaceObject = CreateNameSpaceObject(a1[40], *(_QWORD *)(a3 + 32), a1[10], a1[11], (_QWORD *)(a2 + 64), 0);
    if ( !NameSpaceObject )
    {
      v9 = *(_QWORD *)(a2 + 64);
      *(_WORD *)(v9 + 66) = 14;
      *(_DWORD *)(v9 + 88) = 48;
      v10 = (void *)HeapAlloc(a1[40], 1145455176, 0x30u);
      *(_QWORD *)(v9 + 96) = v10;
      if ( v10 )
      {
        memset(v10, 0, *(unsigned int *)(v9 + 88));
        v11 = *(_QWORD *)(a2 + 80);
        v12 = *(_QWORD *)(v9 + 96);
        *a4 = v12;
        *(_QWORD *)v12 = *(_QWORD *)(v11 + 32);
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      }
      else
      {
        NameSpaceObject = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError((__int64)a1, -1073741670);
        PrintDebugMessage(0x26u, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
