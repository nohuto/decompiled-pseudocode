/*
 * XREFs of SdbpCheckContainment @ 0x140803170
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline @ 0x14069681C (Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetVelocityState @ 0x1408054C8 (SdbpGetVelocityState.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckContainment(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // edi
  unsigned int FirstTag; // esi
  unsigned int v10; // ebp
  unsigned int DWORDTag; // esi
  __int64 StringTagPtr; // rax
  _DWORD v14[10]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v15 = 0;
  v14[0] = 0;
  if ( !(unsigned int)Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_8;
  FirstTag = SdbFindFirstTag(a3, a5, 16484LL);
  if ( FirstTag )
  {
    v10 = SdbFindFirstTag(a3, a5, 24649LL);
    if ( v10 )
    {
      DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0LL);
      if ( DWORDTag )
      {
        StringTagPtr = SdbGetStringTagPtr(a3, v10);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpCheckContainment",
            2851,
            (unsigned int)"Failed to get the string from the database");
          goto LABEL_9;
        }
        if ( (unsigned int)((__int64 (__fastcall *)(_DWORD *, int *, __int64, _QWORD))SdbpGetVelocityState)(
                             v14,
                             &v15,
                             StringTagPtr,
                             DWORDTag) )
LABEL_8:
          v6 = 1;
      }
    }
  }
LABEL_9:
  *a1 = v15;
  if ( a6 )
    *(_DWORD *)(a6 + 80) = 1;
  return v6;
}
