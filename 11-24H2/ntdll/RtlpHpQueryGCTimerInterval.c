/*
 * XREFs of RtlpHpQueryGCTimerInterval @ 0x18014285C
 * Callers:
 *     RtlInitializeHeapManager @ 0x18011941C (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall RtlpHpQueryGCTimerInterval(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rcx
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  v1 = 1000;
  v4 = 0;
  if ( a1 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(a1, 9u, 0, &Handle) >= 0
      && (int)RtlQueryImageFileKeyOption((__int64)Handle, L"GCInterval", 4, (int *)&v4, 4u, 0LL) >= 0 )
    {
      v2 = 1000LL * v4;
      if ( v2 <= 0xFFFFFFFF )
      {
        if ( (_DWORD)v2 )
          v1 = 1000 * v4;
      }
    }
    if ( Handle )
      NtClose(Handle);
  }
  return v1;
}
