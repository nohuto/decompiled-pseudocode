/*
 * XREFs of MmAllocateVirtualMemory @ 0x1409DB280
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     sub_1409DA4D0 @ 0x1409DA4D0 (sub_1409DA4D0.c)
 *     NtAllocateVirtualMemoryEx @ 0x1409DB220 (NtAllocateVirtualMemoryEx.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x1406FA06C (RtlReadULong64FromUser.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1409155A0 (MiAllocateVirtualMemoryCommon.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x140987F30 (MiCaptureAllocateMapExtendedParameters.c)
 */

__int64 __fastcall MmAllocateVirtualMemory(
        int a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        unsigned __int64 *Address,
        unsigned int a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 ULong64FromUser; // rax
  __int64 v18; // rax
  int MapExtendedParameters; // ecx
  __int64 v21; // [rsp+70h] [rbp-78h] BYREF
  __int64 v22[3]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v23[10]; // [rsp+90h] [rbp-58h] BYREF

  memset(v23, 0, 72);
  v21 = 0LL;
  v22[0] = 0LL;
  if ( a8 )
  {
    v15 = 0x7FFFFFFF0000LL;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v16 = (__int64)a2;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a3;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    ULong64FromUser = RtlReadULong64FromUser(a2);
  }
  else
  {
    ULong64FromUser = *a2;
  }
  v21 = ULong64FromUser;
  if ( a8 )
    v18 = RtlReadULong64FromUser(a3);
  else
    v18 = *a3;
  v22[1] = v18;
  v22[0] = v18;
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, a7, a8, 62, v23);
  if ( MapExtendedParameters >= 0 )
  {
    MapExtendedParameters = MiAllocateVirtualMemoryCommon(a1, &v21, 0, v22, a4, a5, (__int64)v23, a8, a9, a10, a11);
    if ( MapExtendedParameters >= 0 )
    {
      *a2 = v21;
      *a3 = v22[0];
    }
  }
  return (unsigned int)MapExtendedParameters;
}
