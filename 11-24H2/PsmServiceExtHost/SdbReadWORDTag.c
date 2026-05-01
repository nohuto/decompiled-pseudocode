/*
 * XREFs of SdbReadWORDTag @ 0x1800986C4
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180096F1C (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180097770 (InitOnceScanIndexes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180098B50 (SdbpReadTagData.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  bool v5; // zf
  unsigned __int16 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v6 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v5 = (unsigned int)SdbpReadTagData(a1, v2, &v6, 2LL) == 0;
    result = 0LL;
    if ( !v5 )
      return v6;
  }
  else
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  return result;
}
