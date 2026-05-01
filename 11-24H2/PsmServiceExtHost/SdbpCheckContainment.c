/*
 * XREFs of SdbpCheckContainment @ 0x1800996C0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x180098588 (SdbReadDWORDTag.c)
 *     Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline @ 0x180098C10 (Feature_CompatMatchingContainment__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetVelocityState @ 0x18009B620 (SdbpGetVelocityState.c)
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
  FirstTag = SdbFindFirstTag(a3, a5, 16484);
  if ( FirstTag )
  {
    v10 = SdbFindFirstTag(a3, a5, 24649);
    if ( v10 )
    {
      DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0);
      if ( DWORDTag )
      {
        StringTagPtr = SdbGetStringTagPtr(a3, v10);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(1LL);
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
