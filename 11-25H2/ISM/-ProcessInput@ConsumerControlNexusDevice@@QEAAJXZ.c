/*
 * XREFs of ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800E6484
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800E3B2C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000429C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800E62F4 (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E672C (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::ProcessInput(ConsumerControlNexusDevice *this)
{
  char *v1; // r15
  char *i; // rbx
  size_t v4; // rax
  void *v5; // rax
  USHORT *v6; // rdi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  NTSTATUS Usages; // eax
  const struct std::nothrow_t *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // r14
  unsigned __int64 j; // rax
  _DWORD *v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // r9
  __int64 v18; // rdx
  const struct std::nothrow_t *v19; // rdx
  int v21; // eax
  unsigned int v22; // ebx
  ULONG ReportLength; // [rsp+38h] [rbp-C8h]
  const char *v24; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int16 v29; // [rsp+8Ch] [rbp-74h]
  __int16 v30; // [rsp+AEh] [rbp-52h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]
  unsigned __int8 v32; // [rsp+200h] [rbp+100h] BYREF
  ULONG UsageLength; // [rsp+208h] [rbp+108h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+210h] [rbp+110h] BYREF
  void *v35; // [rsp+218h] [rbp+118h] BYREF

  v1 = (char *)this + 48;
  for ( i = (char *)*((_QWORD *)this + 6); i != v1; i = *(char **)i )
  {
    if ( !*((_DWORD *)i + 14) && *((_QWORD *)i + 8) > 1uLL )
    {
      v4 = 2LL * *((unsigned __int16 *)this + 20);
      if ( !is_mul_ok(*((unsigned __int16 *)this + 20), 2uLL) )
        v4 = -1LL;
      v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
      v35 = v5;
      v6 = (USHORT *)v5;
      if ( !v5 )
      {
        v16 = -2147024882;
        v18 = 218LL;
        v17 = 2147942414LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
          (const char *)v17);
LABEL_23:
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v35, v19);
        return v16;
      }
      memset_0(v5, 0, 2LL * *((unsigned __int16 *)this + 20));
      PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 4);
      ReportLength = *((_DWORD *)i + 16);
      UsageLength = *((unsigned __int16 *)this + 20);
      Usages = HidP_GetUsages(HidP_Input, 0xCu, 0, v6, &UsageLength, PreparsedData, i + 80, ReportLength);
      if ( Usages < 0 )
      {
        v16 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0xE8,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
                (const char *)(unsigned int)Usages);
        goto LABEL_23;
      }
      v12 = 0;
      for ( j = 0LL; j < UsageLength; ++j )
      {
        v12 = v6[j] == 208;
        if ( v6[j] == 208 )
          break;
      }
      if ( v12 != *((_BYTE *)this + 104) )
      {
        if ( (unsigned int)dword_180244248 > 5 )
        {
          v32 = v12;
          v24 = "NexusButton on ConsumerControl pressed/released";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
            UsageLength,
            (__int64)&unk_18020A120,
            v10,
            v11,
            (const unsigned __int16 **)&v24,
            (__int64)&v32);
        }
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(v25, 0, 0x170uLL);
        v14 = (_DWORD *)*((_QWORD *)this + 16);
        v27 = 368;
        v25[0] = 4;
        v25[1] = *v14;
        v25[2] = GetTickCount();
        v26 = PerformanceCount;
        v28 = 0x6B6579626F617264LL;
        v29 = 7;
        v30 = (v12 ^ 1) + 64;
        v15 = ConsumerControlNexusDevice::NotifyInputReport(this, (struct InputInfo *)v25);
        v16 = v15;
        if ( v15 < 0 )
        {
          v17 = (unsigned int)v15;
          v18 = 266LL;
          goto LABEL_22;
        }
        *((_BYTE *)this + 104) = v12;
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v35, v9);
    }
  }
  v21 = ConsumerControlNexusDevice::QueueInputBuffers(this);
  v22 = v21;
  if ( v21 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x116,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)(unsigned int)v21);
  return v22;
}
