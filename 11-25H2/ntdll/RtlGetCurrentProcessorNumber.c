/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x180167790
 * Callers:
 *     RtlpGetCurrentProcessorNumberUninitialized @ 0x18010B930 (RtlpGetCurrentProcessorNumberUninitialized.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetCurrentProcessorNumber(void)
{
  unsigned __int64 v1; // rax
  unsigned __int64 Mask; // rdx
  char v3; // zf
  unsigned __int32 v4; // eax

  if ( RtlpGetCurrentProcessorNumberHow == 1 )
  {
    __asm { rdpid   rcx }
    goto LABEL_5;
  }
  if ( RtlpGetCurrentProcessorNumberHow == 2 )
  {
    __asm { rdtscp }
LABEL_5:
    LODWORD(v1) = (unsigned __int8)_RCX;
    Mask = NtCurrentTeb()->PrimaryGroupAffinity.Mask;
    if ( _bittest64((const __int64 *)&Mask, (unsigned __int8)_RCX) )
      return v1;
    goto LABEL_12;
  }
  if ( RtlpGetCurrentProcessorNumberHow != 3 )
  {
    LODWORD(v1) = RtlpGetCurrentProcessorNumberUninitialized();
    return v1;
  }
  v4 = __segmentlimit(0x53u);
  if ( v3 )
  {
    v1 = v4 >> 14;
    Mask = NtCurrentTeb()->PrimaryGroupAffinity.Mask;
    if ( _bittest64((const __int64 *)&Mask, v1) )
      return v1;
LABEL_12:
    LODWORD(v1) = RtlpGetCurrentProcessorNumberRemappingRequired(v1, Mask);
    return v1;
  }
  LODWORD(v1) = ZwGetCurrentProcessorNumber();
  return v1;
}
