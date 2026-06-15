/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x1800A6E48
 * Callers:
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x1800794E0 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180091068 (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall gsl::details::terminate(gsl::details *this, __int64 a2)
{
  _o_terminate(this, a2);
  __debugbreak();
  JUMPOUT(0x1800A6E59LL);
}
