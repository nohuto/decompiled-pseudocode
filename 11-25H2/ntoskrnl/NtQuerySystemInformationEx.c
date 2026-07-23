/*
 * XREFs of NtQuerySystemInformationEx @ 0x1409DB270
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  int v12; // ecx
  int v13; // edx
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int32 v21; // ecx
  __int32 v22; // ecx
  __int32 v23; // ecx
  __int32 v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  __int32 v28; // ecx
  __int32 v29; // ecx
  __int32 v30; // ecx
  __int32 v31; // ecx

  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass > SystemSecureKernelProfileInformation )
  {
    if ( SystemInformationClass > SystemPoolLimitInformation )
    {
      v28 = SystemInformationClass - 230;
      if ( !v28 )
        goto LABEL_25;
      v29 = v28 - 1;
      if ( !v29 )
        goto LABEL_39;
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_39;
      v31 = v30 - 6;
      if ( !v31 )
        goto LABEL_25;
      if ( (unsigned int)(v31 - 1) < 2 )
        goto LABEL_39;
    }
    else
    {
      if ( SystemInformationClass == SystemPoolLimitInformation )
        goto LABEL_25;
      v15 = SystemInformationClass - 180;
      if ( !v15 )
        goto LABEL_39;
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_25;
      v17 = v16 - 13;
      if ( !v17 )
        goto LABEL_39;
      v18 = v17 - 15;
      if ( !v18 )
        goto LABEL_25;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_39;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_25;
      if ( v20 == 11 )
        goto LABEL_39;
    }
    return -1073741821;
  }
  if ( SystemInformationClass == SystemSecureKernelProfileInformation )
    goto LABEL_25;
  if ( SystemInformationClass <= SystemProcessorPerformanceDistribution )
  {
    if ( SystemInformationClass == SystemProcessorPerformanceDistribution )
      goto LABEL_11;
    v21 = SystemInformationClass - 8;
    if ( !v21 )
      goto LABEL_11;
    v22 = v21 - 15;
    if ( !v22 )
      goto LABEL_11;
    v23 = v22 - 19;
    if ( !v23 )
      goto LABEL_11;
    v24 = v23 - 19;
    if ( !v24 )
      goto LABEL_11;
    v25 = v24 - 11;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v26 || v26 == 10 )
        goto LABEL_11;
      return -1073741821;
    }
LABEL_39:
    v13 = 4;
    goto LABEL_12;
  }
  v8 = SystemInformationClass - 107;
  if ( !v8 )
    goto LABEL_39;
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 13;
    if ( v10 )
    {
      v11 = v10 - 20;
      if ( v11 )
      {
        v12 = v11 - 19;
        if ( v12 )
        {
          v27 = v12 - 5;
          if ( v27 && v27 != 10 )
            return -1073741821;
LABEL_25:
          v13 = 8;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_11:
  v13 = 2;
LABEL_12:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v13 - 1) & (unsigned int)InputBuffer) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  return ExpQuerySystemInformation(
           (unsigned int)SystemInformationClass,
           InputBuffer,
           InputBufferLength,
           SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
