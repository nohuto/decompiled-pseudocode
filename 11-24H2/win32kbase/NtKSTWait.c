/*
 * XREFs of NtKSTWait @ 0x1400BB2E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     IsKSTThread @ 0x1400BB410 (IsKSTThread.c)
 *     UserKSTWait @ 0x1400BB4AC (UserKSTWait.c)
 */

__int64 NtKSTWait()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned __int8)IsKSTThread() )
    return (unsigned int)UserKSTWait();
  else
    UserSetLastError(5);
  return v0;
}
