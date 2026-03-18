/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x14088A87C
 * Callers:
 *     NtSecureConnectPort @ 0x14088AF50 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpQueryRemoteView @ 0x14088A6E4 (AlpcpQueryRemoteView.c)
 *     AlpcpReceiveSynchronousReply @ 0x14088AA00 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpGetDataFromMessage @ 0x14088AE68 (AlpcpGetDataFromMessage.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r12
  __int64 v9; // rsi
  int v10; // eax
  int RemoteView; // ebx
  __int64 v12; // rcx
  __int16 v13; // si
  _WORD *v14; // r14
  unsigned int v15; // eax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]

  v8 = a2;
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter2[0] = 0LL;
  v9 = *a1;
  v10 = AlpcpReceiveSynchronousReply((_DWORD)a1, a2, (unsigned int)BugCheckParameter2, 0, 0LL);
  RemoteView = v10;
  if ( !v10 )
  {
    if ( a4 )
    {
      LODWORD(v19) = 0;
      RemoteView = AlpcpQueryRemoteView(v9, a4, (__int64)v18);
      if ( RemoteView < 0 )
      {
LABEL_13:
        AlpcpUnlockMessage(BugCheckParameter2[0]);
        return (unsigned int)RemoteView;
      }
      *(_QWORD *)(a5 + 40) = v19;
    }
    if ( a6 )
    {
      v12 = *(_QWORD *)(BugCheckParameter2[0] + 144);
      if ( v12 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v12 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 40LL);
      }
    }
    if ( v8 )
    {
      v13 = 0;
      v14 = (_WORD *)(BugCheckParameter2[0] + 240);
      BugCheckParameter2[1] = BugCheckParameter2[0] + 240;
      v15 = *(unsigned __int16 *)(BugCheckParameter2[0] + 240);
      if ( *(_DWORD *)a3 < v15 )
      {
        v13 = *(_WORD *)(BugCheckParameter2[0] + 240);
        *v14 = *a3;
      }
      else
      {
        *(_DWORD *)a3 = v15;
      }
      AlpcpGetDataFromMessage(BugCheckParameter2[0], v8);
      if ( v13 )
        *v14 = v13;
    }
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v9 + 416) & 0x10) != 0 || v10 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}
