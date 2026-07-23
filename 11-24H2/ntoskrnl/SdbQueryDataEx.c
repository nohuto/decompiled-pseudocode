/*
 * XREFs of SdbQueryDataEx @ 0x140802A88
 * Callers:
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 * Callees:
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     SdbTagRefToTagID @ 0x14080642C (SdbTagRefToTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbQueryDataEx(__int64 a1, __int64 a2, __int64 a3, int a4, void *a5, __int64 a6, __int64 a7)
{
  int v8; // r8d
  int v10[6]; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+74h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  *(_QWORD *)v10 = 0LL;
  v11 = 0;
  LODWORD(a7) = 0;
  if ( (unsigned int)SdbTagRefToTagID(a1, a2, v10, &v11) )
    return SdbQueryDataExTagID(v10[0], v11, v8, a4, a5, a6, (__int64)&a7);
  AslLogCallPrintf(1, (unsigned int)"SdbQueryDataEx", 7291, (unsigned int)"Failed to convert tagref 0x%x to tagid");
  return 87LL;
}
