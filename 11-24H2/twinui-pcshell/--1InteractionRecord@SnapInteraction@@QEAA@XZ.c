/*
 * XREFs of ??1InteractionRecord@SnapInteraction@@QEAA@XZ @ 0x1801A9EAC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VInteractionRecord@SnapInteraction@@@std@@EEAAXXZ @ 0x18021D080 (-_Destroy@-$_Ref_count_obj2@VInteractionRecord@SnapInteraction@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800BAC80 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?SendTelemetryAsync@SnapInteraction@@YA?AUfire_and_forget@winrt@@U?$com_ptr@UIApplicationView@@@3@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1801A9FE4 (-SendTelemetryAsync@SnapInteraction@@YA-AUfire_and_forget@winrt@@U-$com_ptr@UIApplicationView@@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BB350 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

void __fastcall SnapInteraction::InteractionRecord::~InteractionRecord(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  const char *v3; // r9
  __int64 Ptr; // rdi
  RTL_SRWLOCK v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((unsigned __int64)&this[5] & -(__int64)(TryAcquireSRWLockExclusive(this + 5) != 0));
  if ( !v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
      v3);
  if ( LOBYTE(this[3].Ptr) )
  {
    std::chrono::steady_clock::now((__int64 *)&v7);
    if ( !LOBYTE(this[3].Ptr) )
      std::_Throw_bad_optional_access();
    v5.Ptr = v7.Ptr;
    this[4].Ptr = (char *)this[4].Ptr + (char *)v7.Ptr - (char *)this[2].Ptr;
    this[2].Ptr = v5.Ptr;
    if ( !LOBYTE(this[3].Ptr) )
      LOBYTE(this[3].Ptr) = 1;
  }
  Ptr = (__int64)this[4].Ptr;
  if ( Ptr > 1000000000 )
  {
    v7.Ptr = this->Ptr;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    SnapInteraction::SendTelemetryAsync(&v7, Ptr);
  }
  this[4].Ptr = 0LL;
  ReleaseSRWLockExclusive(v2);
  winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)this);
}
