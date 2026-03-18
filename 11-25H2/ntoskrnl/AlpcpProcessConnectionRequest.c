/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x140914AA0
 * Callers:
 *     AlpcpConnectPort @ 0x140916470 (AlpcpConnectPort.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpLogConnectFail @ 0x1407367D8 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14073684C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407368BC (AlpcpLogConnectSuccess.c)
 *     AlpcpProbeMessageAttributes @ 0x140858E60 (AlpcpProbeMessageAttributes.c)
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1408AB350 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchConnectionRequest @ 0x14098D0EC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14098E160 (AlpcpFormatConnectionRequest.c)
 *     AlpcpGetDataFromMessage @ 0x14098E938 (AlpcpGetDataFromMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1409CD120 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1409CE6C0 (AlpcpProbeForWriteMessageHeader.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        char *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        LARGE_INTEGER *a7,
        char a8)
{
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r12
  char PreviousMode; // si
  __int64 v18; // r13
  int v19; // edi
  int v20; // eax
  unsigned int v21; // esi
  ULONG_PTR v22; // rdi
  int v23; // edx
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int16 v27; // ax
  __int16 v28; // dx
  __int64 v29; // r13
  char *v30; // rdx
  int v31; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int128 v36; // [rsp+78h] [rbp-90h] BYREF
  __int128 v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  __int64 v39[6]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+118h] [rbp+10h]

  v11 = a1;
  memset_0(v39, 0, 0x40uLL);
  BugCheckParameter2 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v31 = 0;
  v34 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, &v36);
    }
    v13 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a4;
      v34 = *(_QWORD *)v14;
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
    v16 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v31 = AlpcpProbeMessageAttributes(a2, a6, 1);
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a7;
      v35 = *(_QWORD *)v13;
      a7 = (LARGE_INTEGER *)&v35;
    }
    v11 = a1;
  }
  else
  {
    if ( a3 )
    {
      v36 = *(_OWORD *)a3;
      v37 = *((_OWORD *)a3 + 1);
      v38 = *((_QWORD *)a3 + 4);
    }
    if ( a4 )
      v34 = *a4;
    v16 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v31 = *a6;
  }
  result = AlpcpFormatConnectionRequest(
             (unsigned int)&BugCheckParameter2,
             a2,
             v11,
             (_DWORD)a3,
             (__int64)&v36,
             a5,
             0LL,
             0LL,
             0,
             a8);
  if ( (int)result >= 0 )
  {
    v18 = BugCheckParameter2;
    v42 = *(_DWORD *)(BugCheckParameter2 + 264);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(BugCheckParameter2);
    v39[0] = v11;
    v39[1] = v18;
    v40 = a2;
    v19 = AlpcpDispatchConnectionRequest(v39);
    if ( v19 < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v42, v19);
      AlpcpUnlockMessage(v18);
      return (unsigned int)v19;
    }
    if ( (a2 & 0x20000) == 0 )
      return (unsigned int)v19;
    if ( (a2 & 0x100000) == 0 )
      PreviousMode = KeGetCurrentThread()->PreviousMode;
    BugCheckParameter2 = 0LL;
    v20 = AlpcpReceiveSynchronousReply(v39, PreviousMode, (__int64 *)&BugCheckParameter2, v31, a7);
    v21 = v20;
    if ( v20 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v42, v20);
      if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
        return (unsigned int)-1073741759;
    }
    else
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectSuccess(v42);
      v22 = BugCheckParameter2;
      v23 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
      v24 = 24;
      if ( (a2 & 0xC0000000) != 0x80000000 )
        v24 = 40;
      v25 = (unsigned int)(v23 + v24);
      v33 = v25;
      if ( a4 )
      {
        v26 = (unsigned int)v25;
        if ( (unsigned int)v25 > v34 )
        {
          AlpcpUnlockMessage(BugCheckParameter2);
          *a4 = v26;
          return 3221225507LL;
        }
      }
      if ( a3 )
      {
        if ( (a2 & 0xC0000000) == 0x80000000 )
        {
          *(_WORD *)a3 = v23;
          *((_WORD *)a3 + 1) = *(_WORD *)(v22 + 240) + 24;
          v27 = *(_WORD *)(v22 + 246);
          if ( v27 )
            *((_WORD *)a3 + 3) = v27 - 16;
          else
            *((_WORD *)a3 + 3) = 0;
          v28 = *(_WORD *)(v22 + 244) | 0x1000;
          *((_WORD *)a3 + 2) = v28;
          *((_DWORD *)a3 + 2) = *(_DWORD *)(v22 + 248);
          *((_DWORD *)a3 + 3) = *(_DWORD *)(v22 + 256);
          *((_DWORD *)a3 + 4) = *(_DWORD *)(v22 + 264);
          *((_DWORD *)a3 + 5) = *(_DWORD *)(v22 + 272);
          *((_DWORD *)a3 + 5) = *(_DWORD *)(v22 + 272);
          v29 = a1;
          if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
            *((_WORD *)a3 + 2) = v28 & 0xC00F;
          v30 = a3 + 24;
        }
        else
        {
          *(_OWORD *)a3 = *(_OWORD *)(BugCheckParameter2 + 240);
          *((_OWORD *)a3 + 1) = *(_OWORD *)(v22 + 256);
          *((_QWORD *)a3 + 4) = *(_QWORD *)(v22 + 272);
          v29 = a1;
          if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
            *((_WORD *)a3 + 2) = *(_WORD *)(v22 + 244) & 0xC00F;
          v30 = a3 + 40;
        }
        AlpcpGetDataFromMessage(v22, v30);
        v25 = v33;
      }
      else
      {
        v29 = a1;
      }
      if ( a4 )
        *a4 = v25;
      if ( v16 )
        AlpcpExposeAttributes(v29, a2, v22, v31, v16);
      AlpcpUnlockMessage(v22);
    }
    return v21;
  }
  return result;
}
