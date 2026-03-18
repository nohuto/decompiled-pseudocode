/*
 * XREFs of SdbpCheckSdbCapability @ 0x140804270
 * Callers:
 *     <none>
 * Callees:
 *     SdbpIsSdbCapabilityPresent @ 0x140805050 (SdbpIsSdbCapabilityPresent.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckSdbCapability(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  __int64 result; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v13 = 0;
  v9 = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      SdbpIsSdbCapabilityPresent(&v13, a2, StringTagPtr);
      v9 = v13;
      v8 = 1;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckSdbCapability",
        2921,
        (unsigned int)"Failed to get the string from the database");
    }
  }
  result = v8;
  *a1 = v9;
  return result;
}
