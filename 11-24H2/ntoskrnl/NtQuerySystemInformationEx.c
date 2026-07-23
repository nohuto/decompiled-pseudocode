/*
 * XREFs of NtQuerySystemInformationEx @ 0x140AE2A60
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
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
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  __int32 v23; // ecx
  __int32 v24; // ecx
  __int32 v25; // ecx
  __int32 v26; // ecx
  int v27; // ecx
  int v28; // ecx
  __int32 v29; // ecx
  __int32 v30; // ecx
  __int32 v31; // ecx
  __int32 v32; // ecx
  int v33; // ecx
  int v34; // ecx

  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass > SystemInterruptSteeringInformation )
  {
    if ( SystemInformationClass > SystemSupportedProcessorArchitectures2 )
    {
      v29 = SystemInformationClass - 231;
      if ( !v29 )
        goto LABEL_42;
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_42;
      v31 = v30 - 6;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( !v32 )
          goto LABEL_42;
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_42;
        v34 = v33 - 14;
        if ( v34 )
        {
          if ( v34 == 2 )
            goto LABEL_42;
          return -1073741821;
        }
      }
    }
    else if ( SystemInformationClass != SystemSupportedProcessorArchitectures2 )
    {
      v23 = SystemInformationClass - 181;
      if ( v23 )
      {
        v24 = v23 - 13;
        if ( !v24 )
          goto LABEL_42;
        v25 = v24 - 15;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( !v26 )
            goto LABEL_42;
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 11;
            if ( !v28 )
              goto LABEL_42;
            v22 = v28 == 1;
LABEL_23:
            if ( v22 )
              goto LABEL_24;
            return -1073741821;
          }
        }
      }
    }
LABEL_24:
    v15 = 8;
    goto LABEL_43;
  }
  if ( SystemInformationClass == SystemInterruptSteeringInformation )
    goto LABEL_42;
  if ( SystemInformationClass > SystemLogicalProcessorAndGroupInformation )
  {
    v16 = SystemInformationClass - 108;
    if ( !v16 )
      goto LABEL_15;
    v17 = v16 - 13;
    if ( !v17 )
      goto LABEL_15;
    v18 = v17 - 20;
    if ( !v18 )
      goto LABEL_15;
    v19 = v18 - 19;
    if ( !v19 )
      goto LABEL_15;
    v20 = v19 - 5;
    if ( v20 )
    {
      v21 = v20 - 10;
      if ( v21 )
      {
        v22 = v21 == 3;
        goto LABEL_23;
      }
    }
    goto LABEL_24;
  }
  if ( SystemInformationClass == SystemLogicalProcessorAndGroupInformation )
    goto LABEL_42;
  v8 = SystemInformationClass - 8;
  if ( !v8 )
    goto LABEL_15;
  v9 = v8 - 15;
  if ( !v9 )
    goto LABEL_15;
  v10 = v9 - 19;
  if ( !v10 )
    goto LABEL_15;
  v11 = v10 - 19;
  if ( !v11 )
    goto LABEL_15;
  v12 = v11 - 11;
  if ( !v12 )
  {
LABEL_42:
    v15 = 4;
    goto LABEL_43;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 10;
    if ( v14 )
    {
      if ( v14 != 17 )
        return -1073741821;
    }
  }
LABEL_15:
  v15 = 2;
LABEL_43:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v15 - 1) & (unsigned int)InputBuffer) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  return ExpQuerySystemInformation(
           SystemInformationClass,
           InputBuffer,
           InputBufferLength,
           (unsigned __int64)SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
