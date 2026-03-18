/*
 * XREFs of ACPIThermalUpdateConstraints @ 0x140047AFC
 * Callers:
 *     ACPIThermalWorker @ 0x1400B5660 (ACPIThermalWorker.c)
 * Callees:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x140039278 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x140039F70 (AcpiDiagTracePassiveCoolingConstraint.c)
 *     ACPIThermalReevaluateConstraints @ 0x140047C48 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x14004FF4C (AcpiDiagTraceActiveCoolingDevicePower.c)
 */

void __fastcall ACPIThermalUpdateConstraints(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // r15
  __int64 *i; // rbx
  __int64 v4; // rcx
  char v5; // bp
  unsigned int v6; // eax
  unsigned int v7; // ecx
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // r9

  v1 = *(_QWORD *)(a1 + 200);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  for ( i = *(__int64 **)(v1 + 176); i != (__int64 *)(v1 + 176); i = (__int64 *)*i )
  {
    v5 = 0;
    if ( *((_BYTE *)i + 52) )
    {
      if ( *((unsigned __int8 *)i + 53) != *(_DWORD *)(v1 + 96) )
      {
        v10 = i[5];
        v5 = 1;
        v11 = *(_BYTE *)(v1 + 96);
        *((_BYTE *)i + 53) = v11;
        if ( v10 )
          AcpiDiagTracePassiveCoolingConstraint(i[4], v10, 0, v11);
      }
    }
    else
    {
      v6 = *((unsigned __int8 *)i + 54);
      v7 = *(_DWORD *)(v1 + 92);
      v8 = v6 >= v7;
      if ( *((_BYTE *)i + 55) )
      {
        if ( v6 >= v7 )
          goto LABEL_3;
      }
      else if ( v6 < v7 )
      {
        goto LABEL_3;
      }
      v9 = i[5];
      v5 = 1;
      *((_BYTE *)i + 55) = v8;
      if ( v9 )
      {
        AcpiDiagTraceActiveCoolingConstraint(i[4], v9, 0, v8);
        AcpiDiagTraceActiveCoolingDevicePower(i[4], i[5], *((unsigned __int8 *)i + 54), *((_DWORD *)i + 12), v8);
      }
    }
LABEL_3:
    v4 = i[5];
    if ( v4 )
    {
      if ( v5 )
        ACPIThermalReevaluateConstraints(*(PVOID *)(v4 + 656));
    }
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}
