/*
 * XREFs of RtlpHpQueryGCTimerInterval @ 0x180140A0C
 * Callers:
 *     RtlInitializeHeapManager @ 0x180114300 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800A5A48 (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

__int64 __fastcall RtlpHpQueryGCTimerInterval(unsigned __int16 *a1)
{
  ULONG v1; // ebx
  unsigned __int64 v2; // rcx
  ULONG v4; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  v1 = 1000;
  v4 = 0;
  if ( a1 )
  {
    if ( RtlpOpenImageFileOptionsKeyEx(a1, 9u, 0, &Handle) >= 0
      && RtlQueryImageFileKeyOption(Handle, (wchar_t *)L"GCInterval", 4, &v4, 4u, 0LL) >= 0 )
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
