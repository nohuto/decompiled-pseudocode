/*
 * XREFs of IndexField @ 0x140035220
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

__int64 __fastcall IndexField(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int NameSpaceObject; // eax
  __int64 v7; // rbp
  unsigned int v8; // ebx
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 *v12; // rcx
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
    goto LABEL_6;
  v8 = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72LL), a1[10], (__int64)&v13, 0x80000000);
  if ( v8 )
    goto LABEL_5;
  if ( *(_WORD *)(v7 + 66) != 5 )
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)a1, -1072431095);
    PrintDebugMessage(0x40u, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
LABEL_5:
    v5 = v13;
    goto LABEL_6;
  }
  v5 = v13;
  if ( *(_WORD *)(v13 + 66) == 5 )
  {
    v10 = a2 + 8;
    v8 = CreateNameSpaceObject(a1[40], 0LL, a1[10], a1[11], a2 + 8, 0);
    if ( !v8 )
    {
      *(_WORD *)(*v10 + 66LL) = 132;
      *(_DWORD *)(*v10 + 88LL) = 16;
      v11 = HeapAlloc(a1[40], 1180191048, *(_DWORD *)(*v10 + 88LL));
      *(_QWORD *)(*v10 + 96LL) = v11;
      if ( v11 )
      {
        memset(*(void **)(*v10 + 96LL), 0, *(unsigned int *)(*v10 + 88LL));
        v12 = *(__int64 **)(*v10 + 96LL);
        *v12 = v7;
        v12[1] = v5;
        v8 = ParseFieldList((_DWORD)a1, a2[5], *v10, *(_DWORD *)(a2[10] + 96LL), -1);
        if ( !v8 )
          return v8;
      }
      else
      {
        v8 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError((__int64)a1, -1073741670);
        PrintDebugMessage(0x3Fu, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)a1, -1072431095);
    PrintDebugMessage(0x3Eu, *(const void **)(a2[10] + 72LL), 0LL, 0LL, 0LL);
  }
LABEL_6:
  if ( v7 )
    DereferenceObjectEx(v7);
  if ( v5 )
    DereferenceObjectEx(v5);
  return v8;
}
