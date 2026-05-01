/*
 * XREFs of SdbpGetStringTableItemFromStringRef @ 0x180098850
 * Callers:
 *     SdbpGetMappedStringFromTable @ 0x180098764 (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetStringTableItemFromStringRef(__int64 a1, int a2, _DWORD *a3, __int64 *a4)
{
  __int64 v4; // rbx
  int v9; // ebp
  __int64 v10; // r14
  int v11; // edi
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // edi
  __int64 result; // rax
  int *v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v17 = 0LL;
  if ( *(_DWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)(a1 + 2640) )
    {
      AslLogCallPrintf(1LL);
      v11 = -1073741275;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)(a1 + 2640);
    v12 = 6;
  }
  else
  {
    v11 = RtlRunOnceExecuteOnce(a1 + 2624, InitOnceGetStringTableOffset, a1, &v17);
    if ( v11 < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_14;
    }
    if ( !v17 || (v12 = *v17) == 0 )
    {
      AslLogCallPrintf(1LL);
      v11 = -1073741271;
      goto LABEL_14;
    }
    v10 = a1;
  }
  v9 = v12 + a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(v10, (unsigned int)(v12 + a2)) == 0x8801 )
  {
    v11 = 0;
  }
  else
  {
    AslLogCallPrintf(1LL);
    v11 = -1073741788;
  }
LABEL_14:
  v13 = v11 < 0;
  v14 = 0;
  v15 = ~v11;
  if ( !v13 )
  {
    v14 = v9;
    v4 = v10;
  }
  *a3 = v14;
  result = v15 >> 31;
  *a4 = v4;
  return result;
}
