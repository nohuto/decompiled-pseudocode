/*
 * XREFs of SdbpGetStringTableItemFromStringRef @ 0x140824FF0
 * Callers:
 *     SdbpGetMappedStringFromTable @ 0x140824F88 (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140825180 (RtlRunOnceExecuteOnce.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetStringTableItemFromStringRef(
        _RTL_RUN_ONCE *Parameter,
        int a2,
        _DWORD *a3,
        _RTL_RUN_ONCE **a4)
{
  _RTL_RUN_ONCE *v4; // rbx
  int v9; // ebp
  _RTL_RUN_ONCE *Ptr; // r14
  NTSTATUS v11; // edi
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // edi
  __int64 result; // rax
  int *v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0;
  Ptr = 0LL;
  v17 = 0LL;
  if ( LODWORD(Parameter[2].Ptr) )
  {
    if ( !Parameter[330].Value )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetStringTableItemFromStringRef",
        838,
        (unsigned int)"No stringtable in DB");
      v11 = -1073741275;
      goto LABEL_8;
    }
    Ptr = (_RTL_RUN_ONCE *)Parameter[330].Ptr;
    v12 = 6;
  }
  else
  {
    v11 = RtlRunOnceExecuteOnce(Parameter + 328, InitOnceGetStringTableOffset, Parameter, (PVOID *)&v17);
    if ( v11 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetStringTableItemFromStringRef",
        858,
        (unsigned int)"RtlRunOnceExecuteOnce failed for InitOnceGetStringTableOffset [%x]");
      goto LABEL_8;
    }
    if ( !v17 || (v12 = *v17) == 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetStringTableItemFromStringRef",
        874,
        (unsigned int)"InitOnceGetStringTableOffset succeeded but failed to find string table");
      v11 = -1073741271;
      goto LABEL_8;
    }
    Ptr = Parameter;
  }
  v9 = v12 + a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(Ptr, (unsigned int)(v12 + a2), a3, a4) == 0x8801 )
  {
    v11 = 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetStringTableItemFromStringRef",
      888,
      (unsigned int)"Pulled out a non-stringtable item");
    v11 = -1073741788;
  }
LABEL_8:
  v13 = v11 < 0;
  v14 = 0;
  v15 = ~v11;
  if ( !v13 )
  {
    v14 = v9;
    v4 = Ptr;
  }
  *a3 = v14;
  result = v15 >> 31;
  *a4 = v4;
  return result;
}
