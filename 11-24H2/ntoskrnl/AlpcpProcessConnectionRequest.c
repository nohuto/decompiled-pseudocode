/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x140867F3C
 * Callers:
 *     AlpcpConnectPort @ 0x140868BB0 (AlpcpConnectPort.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpLogConnectFail @ 0x140740728 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14074079C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14074080C (AlpcpLogConnectSuccess.c)
 *     AlpcpDispatchConnectionRequest @ 0x14089032C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14089137C (AlpcpFormatConnectionRequest.c)
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408A1E50 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x1408A2ED0 (AlpcpProbeMessageAttributes.c)
 *     AlpcpGetDataFromMessage @ 0x140990904 (AlpcpGetDataFromMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140993FB0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1409A96B0 (AlpcpProbeAndCaptureMessageHeader.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        int a2,
        char *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        __int64 *a7,
        char a8)
{
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r12
  char PreviousMode; // r14
  __int64 result; // rax
  ULONG_PTR v16; // r13
  int v17; // edx
  int v18; // edi
  int v19; // eax
  unsigned int v20; // r14d
  int v21; // eax
  ULONG_PTR v22; // rdi
  int v23; // ecx
  unsigned __int64 v24; // rax
  int v25; // r13d
  char *v26; // rdx
  __int16 v27; // ax
  __int16 v28; // dx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // r13
  int v33; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  __int128 v38; // [rsp+78h] [rbp-90h] BYREF
  __int128 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  _QWORD v41[6]; // [rsp+A0h] [rbp-68h] BYREF
  int v42; // [rsp+D0h] [rbp-38h]
  int v44; // [rsp+118h] [rbp+10h]

  v11 = a1;
  memset_0(v41, 0, 0x40uLL);
  BugCheckParameter2 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v33 = 0;
  v36 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, (unsigned int)a2);
      AlpcpProbeAndCaptureMessageHeader(a3, &v38);
    }
    v29 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v30 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v30 = (__int64)a4;
      v36 = *(_QWORD *)v30;
      v31 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v31 = (__int64)a4;
      *(_QWORD *)v31 = *(_QWORD *)v31;
    }
    v13 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
    {
      LOBYTE(v12) = 1;
      v33 = AlpcpProbeMessageAttributes((unsigned int)a2, a6, v12);
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v29 = (__int64)a7;
      v37 = *(_QWORD *)v29;
      a7 = &v37;
    }
    v11 = a1;
  }
  else
  {
    if ( a3 )
    {
      v38 = *(_OWORD *)a3;
      v39 = *((_OWORD *)a3 + 1);
      v40 = *((_QWORD *)a3 + 4);
    }
    if ( a4 )
      v36 = *a4;
    v13 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v33 = *a6;
  }
  result = AlpcpFormatConnectionRequest(
             (unsigned int)&BugCheckParameter2,
             a2,
             v11,
             (_DWORD)a3,
             (__int64)&v38,
             a5,
             0LL,
             0LL,
             0,
             a8);
  if ( (int)result >= 0 )
  {
    v16 = BugCheckParameter2;
    v44 = *(_DWORD *)(BugCheckParameter2 + 264);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(BugCheckParameter2);
    v41[0] = v11;
    v41[1] = v16;
    v42 = a2;
    v18 = AlpcpDispatchConnectionRequest(v41);
    if ( v18 < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v44, v18);
      AlpcpUnlockMessage(v16);
    }
    else if ( (a2 & 0x20000) != 0 )
    {
      if ( (a2 & 0x100000) == 0 )
        PreviousMode = KeGetCurrentThread()->PreviousMode;
      BugCheckParameter2 = 0LL;
      LOBYTE(v17) = PreviousMode;
      v19 = AlpcpReceiveSynchronousReply((unsigned int)v41, v17, (unsigned int)&BugCheckParameter2, v33, (__int64)a7);
      v20 = v19;
      if ( v19 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v44, v19);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectSuccess(v44);
        if ( a2 >= 0 || (v21 = 24, (a2 & 0x40000000) != 0) )
          v21 = 40;
        v22 = BugCheckParameter2;
        v23 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v24 = (unsigned int)(v23 + v21);
        v35 = v24;
        if ( a4 )
        {
          v32 = (unsigned int)v24;
          if ( (unsigned int)v24 > v36 )
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            *a4 = v32;
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
            v25 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *((_WORD *)a3 + 2) = v28 & 0xC00F;
            v26 = a3 + 24;
          }
          else
          {
            *(_OWORD *)a3 = *(_OWORD *)(BugCheckParameter2 + 240);
            *((_OWORD *)a3 + 1) = *(_OWORD *)(v22 + 256);
            *((_QWORD *)a3 + 4) = *(_QWORD *)(v22 + 272);
            v25 = a1;
            if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
              *((_WORD *)a3 + 2) = *(_WORD *)(v22 + 244) & 0xC00F;
            v26 = a3 + 40;
          }
          AlpcpGetDataFromMessage(v22, v26);
          v24 = v35;
        }
        else
        {
          v25 = a1;
        }
        if ( a4 )
          *a4 = v24;
        if ( v13 )
          AlpcpExposeAttributes(v25, a2, v22, v33, v13);
        AlpcpUnlockMessage(v22);
      }
      return v20;
    }
    return (unsigned int)v18;
  }
  return result;
}
