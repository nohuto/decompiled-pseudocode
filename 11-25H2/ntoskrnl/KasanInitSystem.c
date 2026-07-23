/*
 * XREFs of KasanInitSystem @ 0x140C15600
 * Callers:
 *     KiSystemStartup @ 0x140B3B3A0 (KiSystemStartup.c)
 *     MiInitializeKasan @ 0x140C3E7F4 (MiInitializeKasan.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KasanTrackAddress @ 0x140414470 (KasanTrackAddress.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KasaniSendTelemetryDriver @ 0x1405A73B0 (KasaniSendTelemetryDriver.c)
 *     KcsanInitSystem @ 0x1405AA910 (KcsanInitSystem.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     KasanInitializeLoadedModules @ 0x140C15A70 (KasanInitializeLoadedModules.c)
 */

void __fastcall KasanInitSystem(__int64 a1, int a2)
{
  int v3; // edx
  KIRQL v5; // al
  unsigned __int64 Root; // rbx
  KIRQL v7; // di
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  char v10; // dl
  ULONG_PTR Pool2; // rax
  __int64 v12; // r9
  ULONG_PTR v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // r8
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  NTSTATUS v18; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rax
  _DWORD v22[2]; // [rsp+48h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+50h] [rbp-31h] BYREF
  __int64 v24; // [rsp+58h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-9h] BYREF
  char *v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+90h] [rbp+Fh]
  int v29; // [rsp+94h] [rbp+13h]
  __int64 *v30; // [rsp+98h] [rbp+17h]
  __int64 v31; // [rsp+A0h] [rbp+1Fh]
  _DWORD *v32; // [rsp+A8h] [rbp+27h]
  __int64 v33; // [rsp+B0h] [rbp+2Fh]

  ThreadHandle = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      KasanDriverUnloadInfosLock = 0LL;
      KasaniTelemetryLock = 0LL;
      if ( KcsaniEnabled )
        KcsaniTelemetryLock = 0LL;
      v19 = *(_DWORD *)(a1 + 160);
      byte_140FCDC6A = 1;
      v20 = KasanTrackAddress(
              *(_QWORD *)(a1 + 128) - (unsigned int)(2 * v19 + 0x2000),
              (unsigned int)(8 * v19 + 0x8000),
              0);
      if ( v20 < 0 )
        KeBugCheckEx(0x1F1u, 4uLL, 5uLL, v20, 0LL);
      qword_140FC42D0 = KasaniShadow - 0x1FFFF00000000000LL;
    }
    else
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07000, 0LL, 0LL);
      v3 = 0;
      if ( KcsaniEnabled )
        v3 = 2;
      if ( byte_140FCDC69 )
        v3 |= 4u;
      if ( (unsigned int)dword_140E07000 > 5
        && (qword_140E07010 & 0x400000000000LL) != 0
        && (qword_140E07018 & 0x400000000000LL) == qword_140E07018 )
      {
        v22[0] = v3;
        v30 = &v24;
        EventDescriptor.Keyword = 0x400000000000LL;
        v32 = v22;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_140E07008;
        v24 = 0x2000000LL;
        v31 = 8LL;
        v33 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_140E07008;
        v27 = byte_1400467FD;
        UserData.Reserved = 2;
        v28 = 34;
        v29 = 1;
        v22[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwWriteEx(qword_140E07020, &EventDescriptor, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
      v5 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
      Root = (unsigned __int64)KasanDriverUnloadInfos.Root;
      v7 = v5;
      if ( KasanDriverUnloadInfos.Root )
      {
        while ( 1 )
        {
          KasaniSendTelemetryDriver(*(_QWORD *)(Root + 24));
          v8 = *(_QWORD *)Root;
          if ( !*(_QWORD *)Root )
          {
            v8 = *(_QWORD *)(Root + 8);
            if ( !v8 )
              break;
          }
          if ( (*(_BYTE *)&KasanDriverUnloadInfos.0 & 1) != 0 )
            Root ^= v8;
          else
LABEL_30:
            Root = v8;
        }
        v9 = Root;
        v10 = *(_BYTE *)&KasanDriverUnloadInfos.0 & 1;
        while ( 1 )
        {
          v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v10 )
          {
            if ( !v9 )
              break;
            v9 ^= Root;
          }
          if ( !v9 )
            break;
          v8 = *(_QWORD *)(v9 + 8);
          if ( v10 )
          {
            if ( !v8 )
              goto LABEL_29;
            v8 ^= v9;
          }
          if ( v8 && v8 != Root )
            goto LABEL_30;
LABEL_29:
          Root = v9;
        }
      }
      byte_140FCDC6B = 1;
      KeReleaseSpinLock(&KasanDriverUnloadInfosLock, v7);
      if ( KcsaniEnabled )
        KcsanInitSystem(2);
      if ( byte_140FCDC69 )
      {
        Pool2 = ExAllocatePool2(0x40uLL, 0x2A08uLL, 0x6D54614BuLL);
        v12 = Pool2;
        if ( !Pool2 )
          KeBugCheckEx(0x1F1u, 4uLL, 8uLL, 0LL, 1uLL);
        v13 = Pool2;
        v14 = &KasaniReportsBoot;
        v15 = 5LL;
        do
        {
          v13 += 128LL;
          v16 = *v14;
          v14 += 8;
          *(_OWORD *)(v13 - 128) = v16;
          *(_OWORD *)(v13 - 112) = *(v14 - 7);
          *(_OWORD *)(v13 - 96) = *(v14 - 6);
          *(_OWORD *)(v13 - 80) = *(v14 - 5);
          *(_OWORD *)(v13 - 64) = *(v14 - 4);
          *(_OWORD *)(v13 - 48) = *(v14 - 3);
          *(_OWORD *)(v13 - 32) = *(v14 - 2);
          *(_OWORD *)(v13 - 16) = *(v14 - 1);
          --v15;
        }
        while ( v15 );
        v17 = *v14;
        qword_140FCDC78 = v12;
        *(_OWORD *)v13 = v17;
        *(_OWORD *)(v13 + 16) = v14[1];
        *(_QWORD *)(v13 + 32) = *((_QWORD *)v14 + 4);
        v18 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)KasaniTelemetryThread, 0LL);
        if ( v18 < 0 )
          KeBugCheckEx(0x1F1u, 4uLL, 8uLL, v18, 0LL);
        ObCloseHandle(ThreadHandle, 0);
      }
    }
  }
  else
  {
    qword_140FC42D0 = (__int64)&KasaniBootShadow
                    - ((*(_QWORD *)(a1 + 128) - (unsigned __int64)(unsigned int)(2 * *(_DWORD *)(a1 + 160) + 0x2000)) >> 3);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3856LL) & 1) != 0 )
    {
      byte_140FCDC68 = 1;
      KasanInitializeLoadedModules(a1);
      v21 = *(_QWORD *)(a1 + 240);
      KcsaniEnabled = 0;
      byte_140FCDC69 = BYTE1(*(_DWORD *)(v21 + 3856)) & 1;
    }
    else
    {
      byte_140FCDC68 = 0;
    }
  }
}
