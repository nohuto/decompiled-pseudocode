/*
 * XREFs of ResetSignal @ 0x140030AC0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     ReferenceObjectEx @ 0x140030DA0 (ReferenceObjectEx.c)
 *     SignalASLEvent @ 0x140055F48 (SignalASLEvent.c)
 */

__int64 __fastcall ResetSignal(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v10; // r10
  unsigned int v11; // ecx
  __int64 v12; // rbx
  KIRQL v13; // al
  __int64 v14; // rcx

  v4 = ValidateArgTypes(a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    a2[8] = v5;
    ReferenceObjectEx(v5);
    v6 = *(_DWORD *)(a2[7] + 8LL);
    if ( v6 == 9307 )
    {
      v14 = a2[8];
      if ( *(_WORD *)(v14 + 66) == 7 )
      {
        SignalASLEvent(*(_QWORD *)(v14 + 96));
        return v4;
      }
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      v11 = 175;
    }
    else
    {
      if ( v6 != 9819 )
        return v4;
      v7 = a2[8];
      if ( *(_WORD *)(v7 + 66) == 7 )
      {
        v12 = *(_QWORD *)(v7 + 96);
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 24));
        *(_DWORD *)v12 = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 24), v13);
        return 0;
      }
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      v11 = 174;
    }
    PrintDebugMessage(v11, v10, ObjectTypeName, 0LL, 0LL);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  return v4;
}
