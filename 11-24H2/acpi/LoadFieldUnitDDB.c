/*
 * XREFs of LoadFieldUnitDDB @ 0x14006B76C
 * Callers:
 *     Load @ 0x14006F3B0 (Load.c)
 * Callees:
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     LoadDDB @ 0x14006B644 (LoadDDB.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LoadFieldUnitDDB(__int64 Entry, __int64 a2, __int64 a3)
{
  unsigned int Object; // eax
  unsigned int DDB; // ebx
  __int64 v8; // rax
  char *v9; // rdi
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  const void *v13; // r14
  const void *v14; // rdx
  unsigned int v15; // ecx
  __int128 v17; // [rsp+30h] [rbp-29h] BYREF
  __int128 v18; // [rsp+40h] [rbp-19h]
  __int128 *v19; // [rsp+50h] [rbp-9h]
  __int128 v20; // [rsp+58h] [rbp-1h] BYREF
  __int128 v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+78h] [rbp+1Fh]

  v22 = 0;
  v17 = 0LL;
  WORD1(v17) = 3;
  v18 = 0LL;
  v19 = &v20;
  v20 = 0LL;
  DWORD2(v18) = 36;
  v21 = 0LL;
  Object = ReadObject(Entry, a2, (__int64)&v17);
  DDB = Object;
  if ( !Object )
  {
    v8 = HeapAlloc(gpheapGlobal, 1179992648, DWORD1(v20));
    v9 = (char *)v8;
    if ( !v8 )
    {
      DDB = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(Entry, -1073741670);
      v10 = 82;
LABEL_15:
      PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
      return DDB;
    }
    *(_OWORD *)v8 = v20;
    *(_OWORD *)(v8 + 16) = v21;
    *(_DWORD *)(v8 + 32) = v22;
    DWORD2(v18) = DWORD1(v20) - 36;
    v19 = (__int128 *)(v8 + 36);
    v11 = ReadObject(Entry, a2, (__int64)&v17);
    DDB = v11;
    if ( v11 )
    {
      if ( v11 == 32772 )
      {
        DDB = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError(Entry, -1072431098);
        v14 = 0LL;
        v15 = 83;
        goto LABEL_11;
      }
    }
    else
    {
      if ( ghValidateTable )
      {
        v12 = ghValidateTable(v9, qword_140088E48);
        v13 = (const void *)v12;
        if ( v12 )
        {
          DDB = -1072431079;
          LogError(-1072431079);
          AcpiDiagTraceAmlError(Entry, -1072431079);
          v14 = v13;
          v15 = 84;
LABEL_11:
          PrintDebugMessage(v15, v14, 0LL, 0LL, 0LL);
          goto LABEL_12;
        }
      }
      DDB = LoadDDB((char *)Entry, v9, *(_QWORD *)(Entry + 80), a3);
    }
LABEL_12:
    HeapFree(v9);
    return DDB;
  }
  if ( Object == 32772 )
  {
    DDB = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(Entry, -1072431098);
    v10 = 83;
    goto LABEL_15;
  }
  return DDB;
}
