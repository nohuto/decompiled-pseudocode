/*
 * XREFs of MmRegisterEtwProvider @ 0x140C3D7B8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     MiLogBadMapper @ 0x1403BB168 (MiLogBadMapper.c)
 *     TlgRegisterAggregateProviderEx @ 0x140ABE9A4 (TlgRegisterAggregateProviderEx.c)
 */

__int64 MmRegisterEtwProvider()
{
  __int64 result; // rax

  result = TlgRegisterAggregateProviderEx((__int64)&unk_140E09F08, (__int64)MiTracingEnabledCallback, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&qword_140E372D8 = &unk_140E09F08;
    if ( dword_140E2FF78 )
      MiLogBadMapper(0LL, -1, 0LL);
    return 0LL;
  }
  return result;
}
