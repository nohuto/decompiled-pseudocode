/*
 * XREFs of RtlGetCurrentProcessorNumberEx @ 0x180167800
 * Callers:
 *     RtlpHpGetCurrentProcessorNumber @ 0x18000A840 (RtlpHpGetCurrentProcessorNumber.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 *     RtlpGetCurrentProcessorNumberExUninitialized @ 0x18010B950 (RtlpGetCurrentProcessorNumberExUninitialized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCurrentProcessorNumberEx(_WORD *_RCX)
{
  __int64 result; // rax
  _WORD *v2; // r8
  char v3; // zf
  unsigned __int32 v4; // eax

  result = (unsigned int)RtlpGetCurrentProcessorNumberHow;
  v2 = _RCX;
  if ( RtlpGetCurrentProcessorNumberHow == 1 )
  {
    __asm { rdpid   rcx }
LABEL_5:
    *v2 = (unsigned int)_RCX >> 8;
    v2[1] = (unsigned __int8)_RCX;
    return result;
  }
  if ( RtlpGetCurrentProcessorNumberHow == 2 )
  {
    __asm { rdtscp }
    goto LABEL_5;
  }
  if ( RtlpGetCurrentProcessorNumberHow != 3 )
    return RtlpGetCurrentProcessorNumberExUninitialized((__int64)_RCX);
  v4 = __segmentlimit(0x53u);
  if ( v3 )
  {
    *_RCX = v4 & 0x3FF;
    result = v4 >> 14;
    _RCX[1] = result;
  }
  else
  {
    *(_DWORD *)_RCX = 0;
    return NtGetCurrentProcessorNumberEx();
  }
  return result;
}
