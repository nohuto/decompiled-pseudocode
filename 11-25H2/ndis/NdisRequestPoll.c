/*
 * XREFs of NdisRequestPoll @ 0x1400DCDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisRequestPoll(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  if ( BugCheckParameter3 )
    ndisBugCheckEx(0x2DuLL, 2uLL, BugCheckParameter3, BugCheckParameter4);
  return (*(__int64 (__fastcall **)(_QWORD))(BugCheckParameter4 + 88))(*(_QWORD *)(BugCheckParameter4 + 160));
}
