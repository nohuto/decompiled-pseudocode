/*
 * XREFs of NdisRequestPoll @ 0x1400D5AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisRequestPoll(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  if ( BugCheckParameter3 )
    ndisBugCheckEx(0x2DuLL, 2uLL, BugCheckParameter3, BugCheckParameter4);
  return (*(__int64 (__fastcall **)(_QWORD))(BugCheckParameter4 + 88))(*(_QWORD *)(BugCheckParameter4 + 160));
}
