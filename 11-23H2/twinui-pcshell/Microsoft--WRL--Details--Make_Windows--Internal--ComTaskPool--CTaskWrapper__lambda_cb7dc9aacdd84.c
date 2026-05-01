/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33_____lambda_cb7dc9aacdd84c31e99625f95c4eec33___ @ 0x1803D190C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cb7dc9aacdd84c31e99625f95c4eec33___ @ 0x1803D20A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_cb7dc9aacdd84c31e99625f95c4eec33___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33_____lambda_cb7dc9aacdd84c31e99625f95c4eec33___(
        volatile signed __int32 **a1,
        _WORD *a2)
{
  _WORD *v4; // rax
  _WORD *v5; // rbx
  _QWORD *v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v6 = a2 + 4;
    v5[8] = *a2;
    *((_QWORD *)v5 + 3) = 0LL;
    if ( v5 + 12 != a2 + 4 )
    {
      *((_QWORD *)v5 + 3) = *v6;
      *v6 = 0LL;
    }
    *(_QWORD *)v5 = off_1807D0AB0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
