/*
 * XREFs of IopLiveDumpTraceEventGeneric @ 0x14059FA74
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x14049A634 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14059561C (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpBufferDumpData @ 0x140596168 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetCapturePages @ 0x140597A84 (IopLiveDumpGetCapturePages.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140597B74 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x14059864C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpTraceChunkCRCMismatchWrite @ 0x14059F944 (IopLiveDumpTraceChunkCRCMismatchWrite.c)
 *     IopLiveDumpTraceEstimatedPageCountNotAvailable @ 0x14059F9FC (IopLiveDumpTraceEstimatedPageCountNotAvailable.c)
 *     IopLiveDumpTraceIoCaptureLiveDumpEntry @ 0x14059FBB0 (IopLiveDumpTraceIoCaptureLiveDumpEntry.c)
 *     IopLiveDumpTraceRunPageCountLoop @ 0x14059FC74 (IopLiveDumpTraceRunPageCountLoop.c)
 *     IopLiveDumpTraceWriteBuffer @ 0x14059FD1C (IopLiveDumpTraceWriteBuffer.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 *     EventDataDescCreateString @ 0x14059F8A0 (EventDataDescCreateString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall IopLiveDumpTraceEventGeneric(const wchar_t *a1, unsigned int a2, const wchar_t **a3, __int64 *a4)
{
  char result; // al
  ULONG UserDataCount; // edx
  unsigned int v10; // ebx
  ULONG v11; // ebp
  struct _EVENT_DATA_DESCRIPTOR *v12; // rcx
  __int64 v13; // r11
  __int64 *v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[17]; // [rsp+50h] [rbp-138h] BYREF

  v15 = 0LL;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    memset_0(UserData, 0, sizeof(UserData));
    EventDataDescCreateString((__int64)UserData, a1, 0x40u);
    UserDataCount = 1;
    v10 = 0;
    do
    {
      v11 = UserDataCount + 1;
      v12 = &UserData[UserDataCount];
      if ( v10 >= a2 )
      {
        EventDataDescCreateString((__int64)v12, L"N/A", 0x20u);
        v14 = &v15;
      }
      else
      {
        EventDataDescCreateString((__int64)v12, *a3, 0x20u);
        v14 = a4;
      }
      *(&UserData[0].Ptr + v13) = (ULONGLONG)v14;
      UserDataCount = v11 + 1;
      *(&UserData[0].Size + 2 * v13) = 8;
      ++v10;
      *(&UserData[0].Reserved + 2 * v13) = 0;
      ++a4;
      ++a3;
    }
    while ( v10 < 8 );
    return EtwWriteEx(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_GENERIC, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  }
  return result;
}
