/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ada185189abb389ce449ddc8fe061d95___ @ 0x180059218
 * Callers:
 *     ?RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x180058A3C (-RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95_____lambda_ada185189abb389ce449ddc8fe061d95___ @ 0x1800586C8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ada185189abb3.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ada185189abb389ce449ddc8fe061d95___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95_____lambda_ada185189abb389ce449ddc8fe061d95___(
         v9,
         a4);
  v6 = *v5;
  *v5 = 0LL;
  if ( v9[0] )
  {
    v9[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release();
  }
  v7 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
