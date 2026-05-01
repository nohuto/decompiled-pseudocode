/*
 * XREFs of SdbpCheckSdbCapability @ 0x18009AC20
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbpIsSdbCapabilityPresent @ 0x18009B71C (SdbpIsSdbCapabilityPresent.c)
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
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
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
      AslLogCallPrintf(1LL);
    }
  }
  result = v8;
  *a1 = v9;
  return result;
}
