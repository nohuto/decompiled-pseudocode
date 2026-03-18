/*
 * XREFs of Release @ 0x14003B700
 * Callers:
 *     <none>
 * Callees:
 *     ReleaseASLMutex @ 0x140005C88 (ReleaseASLMutex.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 */

__int64 __fastcall Release(_QWORD *a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  __int16 v9; // si
  __int64 v10; // rdx
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v14; // r10
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = ValidateArgTypes((__int64)a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = a2[10];
    v15 = 0LL;
    v6 = *(_QWORD *)(v5 + 16);
    LOBYTE(v5) = gdwfAMLI;
    a2[8] = v6;
    if ( (v5 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
    v7 = a2[8];
    v8 = *(_QWORD *)(v7 + 96);
    v9 = *(_WORD *)(v7 + 64) & 2;
    if ( *(_WORD *)(v7 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179403602, 0x38u, (__int64)ParseRelease, &v15);
      if ( v4 )
      {
        return (unsigned int)ReleaseASLMutex((__int64)a1, v8, v9 != 0);
      }
      else
      {
        v10 = v15;
        *(_QWORD *)(v15 + 32) = v8;
        *(_QWORD *)(v10 + 40) = a2[11];
        *(_QWORD *)(v10 + 48) = *(_QWORD *)(a2[8] + 16);
        if ( v9 )
          *(_DWORD *)(v10 + 16) = 0x10000;
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError((__int64)a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(0xADu, v14, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
