/*
 * XREFs of BankField @ 0x140035420
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ParseFieldList @ 0x1400358A8 (ParseFieldList.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall BankField(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int NameSpaceObject; // eax
  __int64 v7; // r15
  unsigned int v8; // ebx
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v4 = a2[10];
  v5 = 0LL;
  v13 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(v4 + 32), a1[10], (__int64)&v14, 0x80000000);
  v7 = v14;
  v8 = NameSpaceObject;
  if ( NameSpaceObject )
    goto LABEL_11;
  v8 = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72LL), a1[10], (__int64)&v13, 0x80000000);
  if ( v8 )
    goto LABEL_10;
  if ( *(_WORD *)(v7 + 66) != 10 )
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)a1, -1072431095);
    PrintDebugMessage(0xFu, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
LABEL_10:
    v5 = v13;
    goto LABEL_11;
  }
  v5 = v13;
  if ( *(_WORD *)(v13 + 66) == 5 )
  {
    v9 = a2 + 8;
    v8 = CreateNameSpaceObject(a1[40], 0LL, a1[10], a1[11], a2 + 8, 0);
    if ( !v8 )
    {
      *(_WORD *)(*v9 + 66LL) = 130;
      *(_DWORD *)(*v9 + 88LL) = 24;
      v10 = HeapAlloc(a1[40], 1179337288, *(_DWORD *)(*v9 + 88LL));
      *(_QWORD *)(*v9 + 96LL) = v10;
      if ( v10 )
      {
        memset(*(void **)(*v9 + 96LL), 0, *(unsigned int *)(*v9 + 88LL));
        v11 = *(__int64 **)(*v9 + 96LL);
        *v11 = v7;
        v11[1] = v5;
        v11[2] = *(_QWORD *)(a2[10] + 96LL);
        v8 = ParseFieldList(
               (_DWORD)a1,
               a2[5],
               *v9,
               *(_DWORD *)(a2[10] + 136LL),
               *(_DWORD *)(*(_QWORD *)(v7 + 96) + 8LL));
        if ( !v8 )
          return v8;
      }
      else
      {
        v8 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError((__int64)a1, -1073741670);
        PrintDebugMessage(0xDu, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)a1, -1072431095);
    PrintDebugMessage(0xFu, *(const void **)(a2[10] + 72LL), 0LL, 0LL, 0LL);
  }
LABEL_11:
  if ( v7 )
    DereferenceObjectEx(v7);
  if ( v5 )
    DereferenceObjectEx(v5);
  return v8;
}
