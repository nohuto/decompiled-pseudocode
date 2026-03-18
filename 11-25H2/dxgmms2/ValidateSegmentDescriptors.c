/*
 * XREFs of ValidateSegmentDescriptors @ 0x14009BBAC
 * Callers:
 *     CreatePhysicalAdapterSegments @ 0x14009B368 (CreatePhysicalAdapterSegments.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall ValidateSegmentDescriptors(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int DriverVersion; // edx
  char v8; // r9
  unsigned int v9; // r10d
  unsigned int i; // ebx
  int *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rcx

  v5 = a4;
  v6 = a3;
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 216LL));
  v8 = 0;
  v9 = 0;
  for ( i = 0; i < (unsigned int)v6; ++i )
  {
    v11 = (int *)(a2 + 104LL * i);
    if ( DriverVersion >= 0x7005 )
    {
      v12 = v11[23];
      if ( v12 > 1 )
      {
        WdLogSingleEntry1(1LL, (unsigned int)v11[23]);
        WdLogGlobalForLineNumber = 191;
        goto LABEL_23;
      }
      if ( v12 )
      {
        if ( v8 )
        {
          WdLogSingleEntry2(1LL, v9, i);
          WdLogGlobalForLineNumber = 203;
          goto LABEL_23;
        }
        v8 = 1;
        v9 = i;
      }
    }
    else
    {
      v11[23] = 0;
    }
    v13 = *((_QWORD *)v11 + 2);
    if ( (v13 & 0xFFF) != 0 )
    {
      WdLogSingleEntry2(1LL, i, v13);
      WdLogGlobalForLineNumber = 219;
      goto LABEL_23;
    }
    v14 = *v11;
    if ( (unsigned int)*v11 >= 0x400000 || (v14 & 2) != 0 )
    {
LABEL_14:
      WdLogSingleEntry1(1LL, i);
      WdLogGlobalForLineNumber = 235;
LABEL_23:
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
      return 0;
    }
    if ( (v14 & 0x80u) != 0 )
    {
      if ( (*v11 & 0x300) == 0x300 )
        goto LABEL_14;
    }
    else if ( (v14 & 0x300) != 0 )
    {
      goto LABEL_14;
    }
    if ( (v14 & 0x2000) != 0 && (v14 & 5) != 0 )
    {
      WdLogSingleEntry1(1LL, i);
      WdLogGlobalForLineNumber = 243;
      goto LABEL_23;
    }
  }
  if ( (unsigned int)v5 > (unsigned int)v6 )
  {
    WdLogSingleEntry2(1LL, v5, v6);
    WdLogGlobalForLineNumber = 253;
    goto LABEL_23;
  }
  return 1;
}
