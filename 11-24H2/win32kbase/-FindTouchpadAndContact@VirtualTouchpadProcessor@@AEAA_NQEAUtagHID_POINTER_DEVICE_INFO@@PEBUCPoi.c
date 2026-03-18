/*
 * XREFs of ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x14021997C
 * Callers:
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x140219F4C (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CaptureContact@VirtualTouchpad@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@UVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x14019E078 (-CaptureContact@VirtualTouchpad@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@UVPTP_ID@@AEBUtagVIR.c)
 *     ??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z @ 0x1402192F4 (--0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z.c)
 *     _lambda_d5bddfc2fe24e4274cd124852b066150_::operator() @ 0x140219414 (_lambda_d5bddfc2fe24e4274cd124852b066150_--operator().c)
 */

char __fastcall VirtualTouchpadProcessor::FindTouchpadAndContact(
        VirtualTouchpadProcessor *this,
        struct tagHID_POINTER_DEVICE_INFO *const a2,
        const struct CPointerInfoNode *a3,
        struct VPTPTouchpad **a4,
        struct VPTPContact **a5)
{
  VirtualTouchpadProcessor *v5; // rbx
  char *v6; // r15
  char v10; // bp
  struct VPTPContact **v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _DWORD *v15; // r8
  __int64 v16; // r9
  __int64 *v18; // rdi
  __int64 v19; // rcx
  __int64 *v20; // rax
  int v21; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v22; // [rsp+78h] [rbp+10h]
  char v23; // [rsp+80h] [rbp+18h] BYREF

  v22 = a2;
  v5 = *(VirtualTouchpadProcessor **)this;
  v6 = (char *)a3 + 168;
  v10 = 0;
  if ( *(VirtualTouchpadProcessor **)this == this )
    goto LABEL_8;
  v11 = a5;
  while ( 1 )
  {
    if ( (*((_DWORD *)v6 + 3) & 0x10000) == 0 )
    {
      v18 = (__int64 *)*((_QWORD *)v5 + 2);
      if ( v18 != (__int64 *)((char *)v5 + 16) )
      {
        v19 = *((unsigned __int16 *)a3 + 80);
        while ( *((_WORD *)v18 + 8) != (_WORD)v19 )
        {
          v18 = (__int64 *)*v18;
          if ( v18 == (__int64 *)((char *)v5 + 16) )
            goto LABEL_19;
        }
        if ( *((_DWORD *)a3 + 119) != *((_DWORD *)v5 + 52) )
        {
          v21 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 639);
        }
        v20 = (__int64 *)lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
                           v19,
                           (__int64)&v23,
                           v22,
                           (__int64)v6,
                           (float *)v5 + 15);
        *a4 = v5;
        v10 = 1;
        *v11 = (struct VPTPContact *)v18;
        *(__int64 *)((char *)v18 + 20) = *v20;
      }
      goto LABEL_19;
    }
    if ( *((_DWORD *)a3 + 119) == *((_DWORD *)v5 + 52) )
      break;
LABEL_19:
    v5 = *(VirtualTouchpadProcessor **)v5;
    if ( v5 == this )
      goto LABEL_8;
  }
  v12 = Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x70747655u);
  v14 = 0LL;
  if ( v12 )
    v14 = VPTPContact::VPTPContact(v12, *((_DWORD *)v5 + 52), (_QWORD *)v5 + 2);
  v15 = v22;
  *(_WORD *)(v14 + 16) = *((_WORD *)a3 + 80);
  *(_QWORD *)(v14 + 20) = *(_QWORD *)lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
                                       v13,
                                       (__int64)&v21,
                                       v15,
                                       (__int64)v6,
                                       (float *)v5 + 15);
  InputTraceLogging::VirtualTouchpad::CaptureContact((__int64)v6, *((_DWORD *)v5 + 52), (_DWORD *)v5 + 10, v16);
  *a4 = v5;
  v10 = 1;
  *v11 = (struct VPTPContact *)v14;
LABEL_8:
  if ( v10 != (*((_DWORD *)a3 + 119) != 0) )
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 654);
  }
  return v10;
}
