/*
 * XREFs of VrpRegistryCallback @ 0x1408454F0
 * Callers:
 *     CmpFireCleanupNotifications @ 0x140842A40 (CmpFireCleanupNotifications.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwWriteTransfer @ 0x140410100 (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VrpPreOpenOrCreate @ 0x1409292F4 (VrpPreOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x14092A060 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 *     VrpFindExactNamespaceNode @ 0x14092AEB8 (VrpFindExactNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     VrpShouldOperateOnCall @ 0x14092B600 (VrpShouldOperateOnCall.c)
 *     VrpUnlockJobContextExclusive @ 0x14092BC6C (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14092C1A4 (VrpLockJobContextExclusive.c)
 *     VrpPreQueryKeyName @ 0x1409FFD08 (VrpPreQueryKeyName.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 *     VrpPostOpenOrCreate @ 0x140AEB874 (VrpPostOpenOrCreate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpRegistryCallback(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int Key; // edi
  UNICODE_STRING *v6; // rbx
  wchar_t *v7; // rcx
  UNICODE_STRING *v8; // rbx
  wchar_t *Buffer; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 ExactNamespaceNode; // rax
  ULONG_PTR v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 *v16; // rax
  int v17; // ecx
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  GUID v22; // [rsp+50h] [rbp-29h] BYREF
  GUID v23; // [rsp+60h] [rbp-19h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-9h] BYREF
  char *v25; // [rsp+80h] [rbp+7h]
  int v26; // [rsp+88h] [rbp+Fh]
  int v27; // [rsp+8Ch] [rbp+13h]
  _DWORD *v28; // [rsp+90h] [rbp+17h]
  __int64 v29; // [rsp+98h] [rbp+1Fh]
  __int64 v30; // [rsp+A0h] [rbp+27h]
  _DWORD v31[2]; // [rsp+A8h] [rbp+2Fh] BYREF

  Key = 0;
  v19 = 0LL;
  v21 = 0LL;
  ActivityId = 0LL;
  if ( a2 <= 0x33 && (unsigned int)VrpShouldOperateOnCall(a2, a3, &v21, &v19) )
  {
    EtwActivityIdControl(1u, &ActivityId);
    switch ( a2 )
    {
      case 4u:
        v22 = 0LL;
        EtwActivityIdControl(3u, &v22);
        v15 = *(_QWORD *)(a3 + 24);
        if ( (*(_DWORD *)(v15 + 36) & 0x20000000) != 0 )
        {
          if ( (unsigned int)dword_140E0A620 > 5 )
          {
            v16 = (__int64 *)(v15 + 16);
            if ( !*(_QWORD *)(v15 + 24) )
              v16 = &EmptyUnicodeString;
            v17 = *(unsigned __int16 *)v16;
            v30 = v16[1];
            *(_DWORD *)&EventDescriptor.Level = 5;
            *(_QWORD *)&ActivityId.Data1 = off_140E0A628;
            v31[0] = v17;
            v28 = v31;
            v29 = 2LL;
            v31[1] = 0;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 0LL;
            *(_DWORD *)ActivityId.Data4 = *(unsigned __int16 *)off_140E0A628;
            v25 = byte_140059B91;
            *(_DWORD *)&ActivityId.Data4[4] = 2;
            v26 = 57;
            v27 = 1;
            LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_140E0A640, &EventDescriptor, &v22, 0LL, 4u, (PEVENT_DATA_DESCRIPTOR)&ActivityId);
          }
          Key = -1073741790;
        }
        break;
      case 0xEu:
        v8 = *(UNICODE_STRING **)(a3 + 16);
        if ( v8 )
        {
          Buffer = v8[1].Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0x67655256u);
            RtlInitUnicodeString(v8 + 1, 0LL);
          }
        }
        break;
      case 0x14u:
        Key = VrpPostEnumerateKey(a3, v19);
        break;
      case 0x16u:
        Key = VrpPostQueryKey(a3);
        break;
      case 0x1Au:
      case 0x1Cu:
        Key = VrpPreOpenOrCreate(a3, v19);
        break;
      case 0x1Bu:
      case 0x1Du:
        Key = VrpPostOpenOrCreate(a3, v19);
        break;
      case 0x1Eu:
        v23 = 0LL;
        EtwActivityIdControl(3u, &v23);
        if ( (*(_DWORD *)(v19 + 80) & 1) != 0 )
        {
          if ( (unsigned int)dword_140E0A620 > 5 )
          {
            *(_DWORD *)&EventDescriptor.Level = 5;
            *(_QWORD *)&ActivityId.Data1 = off_140E0A628;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 0LL;
            *(_DWORD *)ActivityId.Data4 = *(unsigned __int16 *)off_140E0A628;
            v25 = byte_1400597CB;
            *(_DWORD *)&ActivityId.Data4[4] = 2;
            v26 = 22;
            v27 = 1;
            LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_140E0A640, &EventDescriptor, &v23, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&ActivityId);
          }
          Key = -1073740541;
        }
        else if ( (unsigned int)dword_140E0A620 > 5 )
        {
          *(_DWORD *)&EventDescriptor.Level = 5;
          *(_QWORD *)&ActivityId.Data1 = off_140E0A628;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = 0LL;
          *(_DWORD *)ActivityId.Data4 = *(unsigned __int16 *)off_140E0A628;
          v25 = (char *)word_1400597AA;
          *(_DWORD *)&ActivityId.Data4[4] = 2;
          v26 = 21;
          v27 = 1;
          LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EtwWriteTransfer(qword_140E0A640, &EventDescriptor, &v23, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&ActivityId);
        }
        break;
      case 0x20u:
        Key = VrpPreLoadKey(a3, v19);
        break;
      case 0x22u:
        v10 = v19;
        v11 = *(_QWORD *)(a3 + 24);
        VrpLockJobContextExclusive(v19);
        ExactNamespaceNode = VrpFindExactNamespaceNode(v10, v11 + 16, &EventDescriptor);
        if ( !ExactNamespaceNode )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 16));
          v13 = v10 + 16;
          goto LABEL_28;
        }
        if ( *(int *)(ExactNamespaceNode + 56) < 0 )
        {
          *(_QWORD *)(a3 + 16) = ExactNamespaceNode;
        }
        else
        {
          Key = -1073741790;
          VrpUnlockJobContextExclusive(v10);
        }
        break;
      case 0x23u:
        v22 = 0LL;
        EtwActivityIdControl(3u, &v22);
        if ( *(_QWORD *)(a3 + 32) )
        {
          v14 = v19;
          if ( *(int *)(a3 + 8) >= 0 )
            VrpDestroyNamespaceNode(v19);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 16));
          v13 = v14 + 16;
LABEL_28:
          KeAbPostRelease(v13);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
        break;
      case 0x28u:
        v6 = *(UNICODE_STRING **)(a3 + 8);
        v7 = v6[1].Buffer;
        if ( v7 )
        {
          ExFreePoolWithTag(v7, 0x67655256u);
          RtlInitUnicodeString(v6 + 1, 0LL);
        }
        ObDereferenceObjectDeferDeleteWithTag(v6[2].Buffer, 0x67655256u);
        ExFreePoolWithTag(v6, 0x67655256u);
        break;
      case 0x2Fu:
        Key = VrpPreQueryKeyName(a3);
        break;
      default:
        return Key;
    }
  }
  return Key;
}
