/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x140AC1D10
 * Callers:
 *     NtSecureConnectPort @ 0x140890D60 (NtSecureConnectPort.c)
 * Callees:
 *     Feature_2866505016__private_IsEnabledDeviceUsageNoInline @ 0x1405C9A08 (Feature_2866505016__private_IsEnabledDeviceUsageNoInline.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpGetDataFromMessage @ 0x140990904 (AlpcpGetDataFromMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140993FB0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpQueryRemoteView @ 0x140A320FC (AlpcpQueryRemoteView.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v10; // r14
  int v11; // eax
  int RemoteView; // ebx
  __int64 v13; // rcx
  __int16 v14; // si
  _WORD *v15; // r14
  unsigned int v16; // eax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter2[0] = 0LL;
  v10 = *a1;
  v11 = AlpcpReceiveSynchronousReply(a1, PreviousMode, (__int64 *)BugCheckParameter2, 0, 0LL);
  RemoteView = v11;
  if ( !v11 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a5 + 40) = 0LL;
      v20 = 0LL;
      if ( (unsigned int)Feature_2866505016__private_IsEnabledDeviceUsageNoInline()
        && (*(_DWORD *)(BugCheckParameter2[0] + 40) & 0x4000) == 0 )
      {
        RemoteView = -1073741790;
LABEL_20:
        AlpcpUnlockMessage(BugCheckParameter2[0]);
        return (unsigned int)RemoteView;
      }
      RemoteView = AlpcpQueryRemoteView(v10, a4, (__int64)v19);
      if ( RemoteView < 0 )
        goto LABEL_20;
      *(_QWORD *)(a5 + 40) = v20;
    }
    if ( a6 )
    {
      v13 = *(_QWORD *)(BugCheckParameter2[0] + 144);
      if ( v13 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 40LL);
      }
    }
    if ( a2 )
    {
      v14 = 0;
      v15 = (_WORD *)(BugCheckParameter2[0] + 240);
      BugCheckParameter2[1] = BugCheckParameter2[0] + 240;
      v16 = *(unsigned __int16 *)(BugCheckParameter2[0] + 240);
      if ( *a3 >= v16 )
      {
        *a3 = v16;
      }
      else
      {
        v14 = *(_WORD *)(BugCheckParameter2[0] + 240);
        *v15 = *(_WORD *)a3;
      }
      AlpcpGetDataFromMessage(BugCheckParameter2[0], a2);
      if ( v14 )
        *v15 = v14;
    }
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(v10 + 416) & 0x10) != 0 || v11 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}
