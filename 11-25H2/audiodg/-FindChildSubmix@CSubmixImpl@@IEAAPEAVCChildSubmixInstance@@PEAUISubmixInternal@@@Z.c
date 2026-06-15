/*
 * XREFs of ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x140037F0C
 * Callers:
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140037C20 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140037D90 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140037E50 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     <none>
 */

struct ISubmixInternal **__fastcall CSubmixImpl::FindChildSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  _QWORD *v2; // r8
  struct ISubmixInternal **result; // rax

  v2 = (_QWORD *)*((_QWORD *)this + 15);
  while ( v2 )
  {
    result = (struct ISubmixInternal **)v2[2];
    v2 = (_QWORD *)*v2;
    if ( *result == a2 )
      return result;
  }
  return 0LL;
}
