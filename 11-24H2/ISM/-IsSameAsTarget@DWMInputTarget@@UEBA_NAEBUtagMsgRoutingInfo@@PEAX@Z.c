/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1800F5870
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18003BF10 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800F5780 (-GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, const struct tagMsgRoutingInfo *a2, void *a3)
{
  char result; // al
  char v6; // bl
  void *InputSinkHandle; // rax

  result = operator==((__int64)a2, (__int64)this + 72);
  v6 = 0;
  if ( result )
  {
    InputSinkHandle = DWMInputTarget::GetInputSinkHandle((DWMInputTarget *)((char *)this - 8));
    if ( a3 == InputSinkHandle )
      return 1;
    if ( a3 )
    {
      if ( InputSinkHandle )
        return (*(__int64 (__fastcall **)(DWMInputTarget *, void *))(*(_QWORD *)this + 40LL))(this, a3);
    }
    return v6;
  }
  return result;
}
