/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&___lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_ @ 0x1805FCB44
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_ @ 0x1805FD070 (Windows--Internal--ComTaskPool--QueueTask__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce______lambda_3fd5a9359bd88b84e59fbdca2ad299ce____(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2[1];
  a1[3] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = off_1807EDCE0;
  return a1;
}
