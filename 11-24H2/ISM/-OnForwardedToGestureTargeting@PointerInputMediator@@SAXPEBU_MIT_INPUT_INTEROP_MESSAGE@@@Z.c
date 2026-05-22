/*
 * XREFs of ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180030B0C
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x180030370 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180030570 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Do_call @ 0x1800F27A0 (std--_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___--_Do_cal.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x180031238 (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 *     ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x1800314C8 (-FindFrame@PointerInputMediator@@CA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PointerInputMediator::OnForwardedToGestureTargeting(const struct _MIT_INPUT_INTEROP_MESSAGE *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  char *v6; // rbx
  char *v7; // rdi
  _QWORD *v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  void *v11; // [rsp+68h] [rbp+10h]

  v11 = &PointerInputMediator::s_frameQueueLock;
  std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
  PointerInputMediator::FindFrame(&v8, *((unsigned int *)a1 + 44));
  if ( v9 != qword_180250E48 + qword_180250E40 )
  {
    v2 = v8;
    if ( v8 )
      v2 = (_QWORD *)*v8;
    v3 = v9 & (v2[2] - 1LL);
    v4 = *(_QWORD *)(v2[1] + 8 * v3);
    v5 = *((unsigned int *)a1 + 39);
    v6 = (char *)a1 + 168;
    if ( !v6 && v5 )
    {
      _o_terminate(v3);
      __debugbreak();
      JUMPOUT(0x180030BE5LL);
    }
    v7 = &v6[240 * v5];
    while ( v6 != v7 )
    {
      v10 = *((_DWORD *)v6 + 1);
      *(_BYTE *)std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v4 + 208, &v10) = 1;
      v6 += 240;
    }
  }
  _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
