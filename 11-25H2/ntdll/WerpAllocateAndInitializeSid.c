/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1800CEF58
 * Callers:
 *     SendMessageToWERService @ 0x1800CFEA0 (SendMessageToWERService.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x180060A20 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1800CEE70 (RtlInitializeSid.c)
 *     WerpFreeSid @ 0x180120D64 (WerpFreeSid.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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

  Size[0] = (unsigned int)RtlLengthRequiredSid(1u);
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
