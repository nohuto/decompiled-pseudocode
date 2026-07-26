/*
 * XREFs of ?Initialize@NdisPoll@@QEAAJXZ @ 0x1401553D4
 * Callers:
 *     NdisRegisterPoll @ 0x140154FB0 (NdisRegisterPoll.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     NdisMQueryAdapterInstanceName @ 0x14009A870 (NdisMQueryAdapterInstanceName.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1401551CC (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 */

__int64 __fastcall NdisPoll::Initialize(struct KLOADER_MODULE_REFERENCE__ **this)
{
  int v2; // eax
  unsigned int v3; // edi
  bool v5; // zf
  _DWORD *v6; // rdi
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *); // rcx
  void (__fastcall **v9)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *); // rdx
  struct KLOADER_MODULE_REFERENCE__ ***v10; // r8
  struct KLOADER_MODULE_REFERENCE__ *v11; // rdx
  NDIS_STATUS v12; // eax
  unsigned int v13; // ebp
  _QWORD *v14; // r15
  unsigned int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  struct KLOADER_MODULE_REFERENCE__ *v17; // [rsp+38h] [rbp-50h]
  char *v18; // [rsp+40h] [rbp-48h]
  UNICODE_STRING pAdapterInstanceName; // [rsp+48h] [rbp-40h] BYREF
  wchar_t *Buffer; // [rsp+90h] [rbp+8h] BYREF

  v2 = ExecutionContextLibrary::Initialize(this);
  v3 = v2;
  if ( v2 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
        v2);
    return v3;
  }
  else
  {
    memset(this + 40, 0, 0x48uLL);
    *((_DWORD *)this + 80) = 4000;
    this[42] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtPollDriver;
    this[41] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[44] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 43);
    this[43] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 43);
    *((_DWORD *)this + 81) = 1817211460;
    memset(this + 49, 0, 0x48uLL);
    v5 = ndisVerifierNdisDispatch == 0LL;
    this[51] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtIndicateReceivedNbls;
    *((_DWORD *)this + 98) = 6000;
    this[53] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 52);
    this[52] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 52);
    this[50] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    *((_DWORD *)this + 99) = 1817213010;
    if ( v5 || !this[80] )
    {
      v6 = this + 58;
      memset(this + 58, 0, 0x48uLL);
      v7 = this + 61;
      v8 = NdisPoll::EvtCompleteTransmittedNblsThunk;
      v9 = (void (__fastcall **)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *))(this + 60);
      v10 = (struct KLOADER_MODULE_REFERENCE__ ***)(this + 59);
    }
    else
    {
      v6 = this + 58;
      memset(this + 58, 0, 0x48uLL);
      v7 = this + 61;
      v8 = NdisPoll::EvtCompleteTransmittedNblsThunkWithVerifier;
      v9 = (void (__fastcall **)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *))(this + 60);
      v10 = (struct KLOADER_MODULE_REFERENCE__ ***)(this + 59);
    }
    *v6 = 6000;
    *v10 = this;
    *v9 = v8;
    v7[1] = v7;
    *v7 = v7;
    *((_DWORD *)this + 117) = 1817213012;
    memset(this + 67, 0, 0x40uLL);
    HIDWORD(v16) = 0;
    this[68] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtSetMiniportNotificationEnabled;
    this[67] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[70] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 69);
    this[69] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 69);
    v11 = this[75];
    pAdapterInstanceName = 0LL;
    LODWORD(v16) = 40;
    v18 = (char *)v11 + 4008;
    v17 = this[79];
    v12 = NdisMQueryAdapterInstanceName(&pAdapterInstanceName, v11);
    v13 = v12;
    if ( v12 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xBu,
          (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
          v12,
          v16,
          v17,
          v18);
    }
    else
    {
      v14 = this + 20;
      Buffer = pAdapterInstanceName.Buffer;
      v15 = ((__int64 (__fastcall *)(__int64 *, char *))this[1])(&v16, (char *)this + 160);
      v13 = v15;
      if ( v15 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0xCu,
            (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
            v15,
            v16,
            v17,
            v18);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, char *))this[3])(*v14, (char *)this + 392);
        ((void (__fastcall *)(_QWORD, _DWORD *))this[3])(*v14, v6);
        ((void (__fastcall *)(_QWORD, char *))this[3])(*v14, (char *)this + 320);
        ((void (__fastcall *)(_QWORD, char *))this[6])(*v14, (char *)this + 536);
        ((void (__fastcall *)(_QWORD))this[11])(*v14);
        v13 = 0;
      }
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&Buffer, 0LL);
    }
    return v13;
  }
}
