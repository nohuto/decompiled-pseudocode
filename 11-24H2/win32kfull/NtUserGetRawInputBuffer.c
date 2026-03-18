/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1401C5B90
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401C5C24 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 *     ?GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z @ 0x1401C5E28 (-GetRawInputBuffer@RawInput@InputTraceLogging@@SAXIH@Z.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(struct tagRAWINPUT *a1, unsigned int *a2, int a3)
{
  int *v5; // rdi
  unsigned int *v6; // rax
  unsigned int RawInputBuffer_NoUserCrit; // eax
  unsigned int v8; // ebx

  if ( a3 == 24 )
  {
    v5 = (int *)PtiCurrent((__int64)a1, (__int64)a2);
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (unsigned int *)MmUserProbeAddress;
    RawInputBuffer_NoUserCrit = GetRawInputBuffer_NoUserCrit((struct tagTHREADINFO *)v5, a1, a2, *v6);
    v8 = RawInputBuffer_NoUserCrit;
    if ( a1 )
      InputTraceLogging::RawInput::GetRawInputBuffer(RawInputBuffer_NoUserCrit, v5[296]);
  }
  else
  {
    v8 = -1;
    UserSetLastError(87);
  }
  return v8;
}
