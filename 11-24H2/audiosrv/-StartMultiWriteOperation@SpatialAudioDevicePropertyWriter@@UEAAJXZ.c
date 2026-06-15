/*
 * XREFs of ?StartMultiWriteOperation@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18012BF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::StartMultiWriteOperation(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 result; // rax

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  result = 0LL;
  *((_DWORD *)this + 24) = 1;
  return result;
}
