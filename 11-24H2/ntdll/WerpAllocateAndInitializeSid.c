/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1800010F8
 * Callers:
 *     SendMessageToWERService @ 0x1800015D0 (SendMessageToWERService.c)
 * Callees:
 *     RtlInitializeSid @ 0x180001010 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x180001330 (RtlLengthRequiredSid.c)
 *     WerpFreeSid @ 0x18011F494 (WerpFreeSid.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void **a11)
{
  int v13; // ebx
  void *v14; // [rsp+38h] [rbp-20h] BYREF
  size_t Size[3]; // [rsp+40h] [rbp-18h] BYREF

  Size[0] = (unsigned int)RtlLengthRequiredSid(1LL);
  v14 = 0LL;
  if ( !a11 )
    return 3221225485LL;
  v13 = ZwAllocateVirtualMemory(-1LL, &v14, 0LL, Size, 4096, 4);
  if ( v13 < 0 )
    goto LABEL_8;
  if ( v14 )
  {
    memset_thunk_772440563353939046(v14, 0, Size[0]);
    v13 = RtlInitializeSid((__int64)v14, a1, 1u);
    if ( v13 >= 0 )
    {
      *((_DWORD *)v14 + 2) = 18;
      *a11 = v14;
      v13 = 0;
    }
  }
  if ( v13 < 0 )
  {
LABEL_8:
    if ( v14 )
      WerpFreeSid();
  }
  return (unsigned int)v13;
}
