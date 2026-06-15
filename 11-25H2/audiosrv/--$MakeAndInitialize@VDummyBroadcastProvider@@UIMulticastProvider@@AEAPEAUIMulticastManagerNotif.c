/*
 * XREFs of ??$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800F65EC
 * Callers:
 *     ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x1800FD5E0 (-RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180050C50 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E2270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvid.c)
 *     ??0DummyBroadcastProvider@@QEAA@XZ @ 0x1800F67CC (--0DummyBroadcastProvider@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DummyBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800F7F08 (-RuntimeClassInitialize@DummyBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DummyBroadcastProvider,IMulticastProvider,IMulticastManagerNotificationClient * &>(
        DummyBroadcastProvider **a1,
        struct IMulticastManagerNotificationClient **a2)
{
  void *v4; // rax
  int v5; // edi
  DummyBroadcastProvider *v6; // rbx
  volatile int *v7; // rdx
  const struct _GUID *v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v6 = DummyBroadcastProvider::DummyBroadcastProvider((DummyBroadcastProvider *)v4);
    v10 = 0LL;
    v5 = DummyBroadcastProvider::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_38b0ed7f_4ec3_40f1_a104_3e0d7a86ce2e, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(DummyBroadcastProvider *))(*(_QWORD *)v6 + 8LL))(v6);
        v5 = 0;
      }
      else if ( InlineIsEqualGUID(v8, v8) )
      {
        *a1 = v6;
        v5 = 0;
        (*(void (__fastcall **)(DummyBroadcastProvider *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      else
      {
        v5 = -2147467262;
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastProvider>::Release(
        (__int64)v6,
        v7);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v10);
  return (unsigned int)v5;
}
