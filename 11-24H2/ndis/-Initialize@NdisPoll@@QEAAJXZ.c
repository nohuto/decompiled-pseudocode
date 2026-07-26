/*
 * XREFs of ?Initialize@NdisPoll@@QEAAJXZ @ 0x14014A704
 * Callers:
 *     NdisRegisterPoll @ 0x14014A2E0 (NdisRegisterPoll.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     NdisMQueryAdapterInstanceName @ 0x14008EB00 (NdisMQueryAdapterInstanceName.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x14014A4FC (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 */

__int64 __fastcall NdisPoll::Initialize(struct KLOADER_MODULE_REFERENCE__ **this)
{
  unsigned int v2; // eax
  int v3; // edx
  unsigned int v4; // edi
  bool v6; // zf
  _DWORD *v7; // rdi
  _QWORD *v8; // rax
  void (__fastcall *v9)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *); // rcx
  void (__fastcall **v10)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *); // rdx
  struct KLOADER_MODULE_REFERENCE__ ***v11; // r8
  struct KLOADER_MODULE_REFERENCE__ *v12; // rdx
  NDIS_STATUS v13; // eax
  int v14; // edx
  unsigned int v15; // ebp
  _QWORD *v16; // r15
  unsigned int v17; // eax
  int v18; // edx
  _DWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  struct KLOADER_MODULE_REFERENCE__ *v20; // [rsp+38h] [rbp-50h]
  char *v21; // [rsp+40h] [rbp-48h]
  UNICODE_STRING pAdapterInstanceName; // [rsp+48h] [rbp-40h] BYREF
  wchar_t *Buffer; // [rsp+90h] [rbp+8h] BYREF

  v2 = ExecutionContextLibrary::Initialize(this);
  v4 = v2;
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        1,
        10,
        (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
        v2);
    }
    return v4;
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
    v6 = ndisVerifierNdisDispatch == 0LL;
    this[51] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtIndicateReceivedNbls;
    *((_DWORD *)this + 98) = 6000;
    this[53] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 52);
    this[52] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 52);
    this[50] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    *((_DWORD *)this + 99) = 1817213010;
    if ( v6 || !this[80] )
    {
      v7 = this + 58;
      memset(this + 58, 0, 0x48uLL);
      v8 = this + 61;
      v9 = NdisPoll::EvtCompleteTransmittedNblsThunk;
      v10 = (void (__fastcall **)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *))(this + 60);
      v11 = (struct KLOADER_MODULE_REFERENCE__ ***)(this + 59);
    }
    else
    {
      v7 = this + 58;
      memset(this + 58, 0, 0x48uLL);
      v8 = this + 61;
      v9 = NdisPoll::EvtCompleteTransmittedNblsThunkWithVerifier;
      v10 = (void (__fastcall **)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *))(this + 60);
      v11 = (struct KLOADER_MODULE_REFERENCE__ ***)(this + 59);
    }
    *v7 = 6000;
    *v11 = this;
    *v10 = v9;
    v8[1] = v8;
    *v8 = v8;
    *((_DWORD *)this + 117) = 1817213012;
    memset(this + 67, 0, 0x40uLL);
    v19[1] = 0;
    this[68] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtSetMiniportNotificationEnabled;
    this[67] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[70] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 69);
    this[69] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 69);
    v12 = this[75];
    pAdapterInstanceName = 0LL;
    v19[0] = 40;
    v21 = (char *)v12 + 4008;
    v20 = this[79];
    v13 = NdisMQueryAdapterInstanceName(&pAdapterInstanceName, v12);
    v15 = v13;
    if ( v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          1,
          11,
          (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
          v13);
      }
    }
    else
    {
      v16 = this + 20;
      Buffer = pAdapterInstanceName.Buffer;
      v17 = ((__int64 (__fastcall *)(_DWORD *, char *))this[1])(v19, (char *)this + 160);
      v15 = v17;
      if ( v17 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            1,
            12,
            (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
            v17);
        }
      }
      else
      {
        ((void (__fastcall *)(_QWORD, char *))this[3])(*v16, (char *)this + 392);
        ((void (__fastcall *)(_QWORD, _DWORD *))this[3])(*v16, v7);
        ((void (__fastcall *)(_QWORD, char *))this[3])(*v16, (char *)this + 320);
        ((void (__fastcall *)(_QWORD, char *))this[6])(*v16, (char *)this + 536);
        ((void (__fastcall *)(_QWORD))this[11])(*v16);
        v15 = 0;
      }
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&Buffer, 0LL);
    }
    return v15;
  }
}
