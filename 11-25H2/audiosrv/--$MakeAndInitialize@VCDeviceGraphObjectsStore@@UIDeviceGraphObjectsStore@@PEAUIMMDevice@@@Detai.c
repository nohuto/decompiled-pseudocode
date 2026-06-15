/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@PEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@$$QEAPEAUIMMDevice@@@Z @ 0x1800F9C5C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18008AFF0 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004FF10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180050C50 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x1800A0E78 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEAUIMMDevice@@@Z @ 0x1800F58AC (-RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,IMMDevice *>(
        void ***a1,
        struct IMMDevice **a2)
{
  void *v4; // rax
  int v5; // edi
  void **v6; // rbx
  volatile int *v7; // rdx
  const struct _GUID *v8; // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  void **v11; // [rsp+50h] [rbp+18h]
  void *v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  v11 = (void **)v4;
  if ( v4 )
  {
    v12 = v4;
    v6 = (void **)CDeviceGraphObjectsStore::CDeviceGraphObjectsStore((CDeviceGraphObjectsStore *)v4);
    v11 = v6;
    v10 = 0LL;
    v5 = CDeviceGraphObjectsStore::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_82019431_62a3_47d4_bd6c_2c1eb5806d6f, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*((void (__fastcall **)(void **))*v6 + 1))(v6);
        v5 = 0;
      }
      else if ( InlineIsEqualGUID(v8, v8) )
      {
        *a1 = v6;
        v5 = 0;
        (*((void (__fastcall **)(void **))*v6 + 1))(v6);
      }
      else
      {
        v5 = -2147467262;
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release(
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
