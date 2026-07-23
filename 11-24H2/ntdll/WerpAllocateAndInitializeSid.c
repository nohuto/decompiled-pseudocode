/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1800DF2A0
 * Callers:
 *     SendMessageToWERService @ 0x1800ADEC8 (SendMessageToWERService.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x1800DF4E0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1800DF620 (RtlInitializeSid.c)
 *     WerpFreeSid @ 0x18011D6C4 (WerpFreeSid.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        PVOID *a11)
{
  NTSTATUS v13; // ebx
  PVOID BaseAddress; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+40h] [rbp-18h] BYREF

  RegionSize[0] = RtlLengthRequiredSid(1u);
  BaseAddress = 0LL;
  if ( !a11 )
    return 3221225485LL;
  v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
  if ( v13 < 0 )
    goto LABEL_8;
  if ( BaseAddress )
  {
    memset_thunk_772440563353939046(BaseAddress, 0, RegionSize[0]);
    v13 = RtlInitializeSid(BaseAddress, IdentifierAuthority, 1u);
    if ( v13 >= 0 )
    {
      *((_DWORD *)BaseAddress + 2) = 18;
      *a11 = BaseAddress;
      v13 = 0;
    }
  }
  if ( v13 < 0 )
  {
LABEL_8:
    if ( BaseAddress )
      WerpFreeSid(BaseAddress);
  }
  return (unsigned int)v13;
}
