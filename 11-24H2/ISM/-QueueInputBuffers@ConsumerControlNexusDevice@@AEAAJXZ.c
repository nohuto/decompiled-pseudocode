/*
 * XREFs of ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E7B9C
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E6FEC (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800E78F4 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadAsync@PnpDevice@@QEAAJ_KPEAXPEAU_OVERLAPPED@@P6AXKK2@Z@Z @ 0x1800E5AE0 (-ReadAsync@PnpDevice@@QEAAJ_KPEAXPEAU_OVERLAPPED@@P6AXKK2@Z@Z.c)
 *     ??1?$unique_ptr@UInputBufferListEntry@ConsumerControlNexusDevice@@U?$default_delete@UInputBufferListEntry@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E6C10 (--1-$unique_ptr@UInputBufferListEntry@ConsumerControlNexusDevice@@U-$default_delete@UInputBuffer.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::QueueInputBuffers(ConsumerControlNexusDevice *this)
{
  ConsumerControlNexusDevice **v2; // rax
  ConsumerControlNexusDevice **v3; // rbx
  ConsumerControlNexusDevice *v4; // rcx
  __int64 v5; // rdx
  signed int Async; // eax
  unsigned int v7; // esi
  ConsumerControlNexusDevice **v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ConsumerControlNexusDevice **v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  while ( *((_DWORD *)this + 16) )
  {
    v2 = (ConsumerControlNexusDevice **)((char *)this + 48);
    v3 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 6);
    if ( v3[1] != (ConsumerControlNexusDevice *)((char *)this + 48)
      || (v4 = *v3, *((ConsumerControlNexusDevice ***)*v3 + 1) != v3) )
    {
LABEL_12:
      __fastfail(3u);
    }
    *v2 = v4;
    *((_QWORD *)v4 + 1) = v2;
    if ( v3 == v2 )
      v3 = 0LL;
    else
      --*((_DWORD *)this + 16);
    v3[2] = this;
    v11 = v3;
    *(_OWORD *)(v3 + 3) = 0LL;
    *(_OWORD *)(v3 + 5) = 0LL;
    *((_DWORD *)v3 + 14) = 996;
    v3[8] = 0LL;
    v5 = *((_QWORD *)this + 12);
    v3[9] = (ConsumerControlNexusDevice *)v5;
    Async = PnpDevice::ReadAsync(*((PnpDevice **)this + 2), v5, v3 + 10, (struct _OVERLAPPED *)(v3 + 3));
    v7 = Async;
    if ( Async < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
        (const char *)(unsigned int)Async);
      std::unique_ptr<ConsumerControlNexusDevice::InputBufferListEntry>::~unique_ptr<ConsumerControlNexusDevice::InputBufferListEntry>((void **)&v11);
      return v7;
    }
    v11 = 0LL;
    v8 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 10);
    if ( *v8 != (ConsumerControlNexusDevice *)((char *)this + 72) )
      goto LABEL_12;
    *v3 = (ConsumerControlNexusDevice *)((char *)this + 72);
    v3[1] = (ConsumerControlNexusDevice *)v8;
    *v8 = (ConsumerControlNexusDevice *)v3;
    ++*((_DWORD *)this + 22);
    *((_QWORD *)this + 10) = v3;
  }
  std::unique_ptr<ConsumerControlNexusDevice::InputBufferListEntry>::~unique_ptr<ConsumerControlNexusDevice::InputBufferListEntry>((void **)&v11);
  return 0LL;
}
