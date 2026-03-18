/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1400C110C
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1400C1580 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDss @ 0x140047114 (WPP_RECORDER_SF_DDqDss.c)
 *     WPP_RECORDER_SF_qDss @ 0x140070608 (WPP_RECORDER_SF_qDss.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     IcCheckIrqConflict @ 0x1400BD0F4 (IcCheckIrqConflict.c)
 *     IcIsInterruptTypeSecondary @ 0x1400C0568 (IcIsInterruptTypeSecondary.c)
 */

NTSTATUS __fastcall ProcessorpFindAffinitizedIdtEntries(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        int a8,
        unsigned int *a9,
        _BYTE *a10)
{
  __int64 *v10; // r12
  int v11; // esi
  char IsInterruptTypeSecondary; // al
  char v13; // cl
  NTSTATUS result; // eax
  bool v15; // cf
  int v16; // eax
  unsigned __int8 v17; // dl
  __int64 v18; // r9
  int *v19; // rax
  int v20; // r10d
  unsigned int v21; // ecx
  int v22; // r8d
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // r15
  unsigned __int8 v26; // r12
  unsigned int v27; // esi
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v29; // rcx
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r9
  char v31; // al
  int v32; // r15d
  char v33; // al
  bool v34; // zf
  int v35; // r15d
  const char *v36; // rax
  const char *v37; // rdx
  const char *v38; // rax
  const char *v39; // rdx
  int AttributeAvailableMask; // [rsp+20h] [rbp-B9h]
  unsigned __int8 Available; // [rsp+60h] [rbp-79h] BYREF
  char v42; // [rsp+61h] [rbp-78h]
  char v43[2]; // [rsp+62h] [rbp-77h] BYREF
  struct _PROCESSOR_NUMBER v44; // [rsp+64h] [rbp-75h]
  int v45; // [rsp+68h] [rbp-71h]
  unsigned int v46; // [rsp+6Ch] [rbp-6Dh]
  int v47; // [rsp+70h] [rbp-69h]
  int v48; // [rsp+74h] [rbp-65h]
  unsigned int v49; // [rsp+78h] [rbp-61h]
  int v50; // [rsp+7Ch] [rbp-5Dh]
  unsigned int v51; // [rsp+80h] [rbp-59h]
  __int64 *v52; // [rsp+88h] [rbp-51h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp-49h] BYREF
  int v54; // [rsp+98h] [rbp-41h]
  unsigned int v55; // [rsp+9Ch] [rbp-3Dh]
  __int128 Context; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD *v57; // [rsp+B0h] [rbp-29h]
  __int64 v58; // [rsp+B8h] [rbp-21h]
  unsigned int *v59; // [rsp+C0h] [rbp-19h]
  _DWORD v60[3]; // [rsp+C8h] [rbp-11h] BYREF
  int v61; // [rsp+D4h] [rbp-5h]

  v42 = a4;
  v10 = a2;
  v52 = a2;
  v58 = a1;
  v59 = a9;
  v44 = 0;
  Context = 0LL;
  if ( a10 )
    *a10 = 0;
  v11 = ~(a5 - 1);
  v48 = v11;
  if ( a5 != (a5 & v11) || a5 > 0x10 )
  {
    if ( a10 )
      *a10 = 1;
    return -1073741581;
  }
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a6);
  v13 = IsInterruptTypeSecondary;
  if ( IsInterruptTypeSecondary && a5 > 1 )
  {
    if ( a10 )
      *a10 = 1;
    return -1073741581;
  }
  v15 = IsInterruptTypeSecondary != 0;
  v16 = v61;
  v17 = 0;
  v60[0] = 2;
  v18 = v15 ? 0x100 : 0;
  v60[1] = 1;
  v46 = v15 ? 0x100 : 0;
  v60[2] = 3;
  if ( v13 )
    v16 = 0;
  Available = 0;
  v61 = v16;
  v47 = 0;
  v55 = (v13 != 0) + 3;
  while ( 2 )
  {
    v19 = v60;
    v51 = 0;
    v57 = v60;
    do
    {
      v20 = *v19;
      LOBYTE(v21) = 0;
      v49 = 0;
      v50 = v20;
      while ( 2 )
      {
        v22 = 16;
        v45 = 16;
        v23 = (unsigned __int8)v11 & (unsigned __int8)(a5 + ProcessorVectorColumnBias - 1 + v21) & 0xF;
        v54 = v23;
        do
        {
          v24 = ((_BYTE)v22 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
          if ( ProcessorIdtRowPriority[v24] == v20 )
          {
            v25 = *v10;
            v26 = 0;
            v27 = v18 + (v23 | (16 * v24));
            if ( v25 )
            {
              while ( 1 )
              {
                if ( _bittest64(&v25, v26) )
                {
                  *(_WORD *)&v44.Number = v26;
                  v44.Group = *((_WORD *)v52 + 4);
                  ProcNumber = v44;
                  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                  if ( ProcessorIndexFromNumber == -1 )
                    return -1073741811;
                  if ( ProcessorIndexFromNumber >= ProcessorInstanceCount )
                    return -1073741811;
                  v29 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
                  if ( !v29 )
                    return -1073741811;
                  if ( v47 == 1 )
                  {
                    Callback = (BOOLEAN (__stdcall *)(PVOID, struct _RTL_RANGE *))ProcessorpRangeConflictCallback;
                    *(_QWORD *)&Context = v58;
                    DWORD2(Context) = a6;
                    WORD6(Context) = (a7 & 1) != 0;
                    BYTE14(Context) = v42;
                  }
                  else
                  {
                    Callback = 0LL;
                    Context = 0LL;
                  }
                  if ( a8 == 1 )
                    ++v29;
                  result = RtlIsRangeAvailable(v29, v27, v27 + a5 - 1LL, 0, 0, &Context, Callback, &Available);
                  if ( result < 0 )
                    return result;
                  v17 = Available;
                  if ( !Available )
                    goto LABEL_42;
                }
                v31 = v26++;
                v25 &= ~(1LL << v31);
                if ( !v25 )
                {
                  v22 = v45;
                  break;
                }
              }
            }
            if ( v17 )
            {
              v43[0] = 0;
              if ( a6 >= 0xFFF00000 )
                goto LABEL_50;
              v32 = v27;
              if ( v27 >= v27 + a5 )
                goto LABEL_50;
              while ( (int)IcCheckIrqConflict(a6, v32, a7, v43) >= 0 )
              {
                if ( ++v32 >= v27 + a5 )
                {
                  v33 = v43[0];
                  goto LABEL_40;
                }
              }
              v33 = 1;
LABEL_40:
              if ( !v33 )
              {
LABEL_50:
                v35 = 0;
                if ( v59 )
                  *v59 = v27;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v36 = "edge";
                  if ( (a7 & 1) == 0 )
                    v36 = "level";
                  v37 = "share";
                  if ( !v42 )
                    v37 = "noshare";
                  WPP_RECORDER_SF_DDqDss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    (__int64)v37,
                    (__int64)"noshare",
                    v18,
                    AttributeAvailableMask,
                    v27,
                    v27 + a5 - 1,
                    *v52,
                    a6,
                    v37,
                    v36);
                }
                return v35;
              }
              v17 = Available;
LABEL_42:
              v22 = v45;
            }
            v10 = v52;
          }
          v23 = v54;
          v34 = v22-- == 1;
          v18 = v46;
          v20 = v50;
          v45 = v22;
        }
        while ( !v34 );
        LOBYTE(v11) = v48;
        v21 = a5 + v49;
        v49 = v21;
        if ( v21 < 0x10 )
          continue;
        break;
      }
      v19 = v57 + 1;
      ++v51;
      ++v57;
    }
    while ( v51 < v55 );
    if ( ++v47 <= 1 )
      continue;
    break;
  }
  v35 = -1073741275;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v38 = "edge";
    if ( (a7 & 1) == 0 )
      v38 = "level";
    v39 = "share";
    if ( !v42 )
      v39 = "noshare";
    WPP_RECORDER_SF_qDss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v39,
      (__int64)"noshare",
      v46,
      AttributeAvailableMask,
      *v10,
      a6,
      v39,
      v38);
  }
  return v35;
}
