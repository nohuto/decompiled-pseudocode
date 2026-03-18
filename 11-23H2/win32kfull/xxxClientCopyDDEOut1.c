/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C0211450
 * Callers:
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C01F9BA4 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C0204D7C (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbx
  ULONG64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG64 v17; // rcx
  ULONG64 v18; // rdx
  _BYTE v20[4]; // [rsp+30h] [rbp-148h] BYREF
  _DWORD v21[3]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-138h] BYREF
  __int64 v23; // [rsp+48h] [rbp-130h]
  __int128 v24; // [rsp+60h] [rbp-118h] BYREF
  __int128 v25; // [rsp+70h] [rbp-108h]
  __int128 v26; // [rsp+80h] [rbp-F8h]
  __int128 v27; // [rsp+90h] [rbp-E8h]
  __int64 v28; // [rsp+A0h] [rbp-D8h]
  __int128 v29; // [rsp+B0h] [rbp-C8h]
  __int128 v30; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v32[2]; // [rsp+E0h] [rbp-98h]
  __int64 v33; // [rsp+F0h] [rbp-88h]
  _OWORD v34[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v35; // [rsp+150h] [rbp-28h]

  memset_0(&v24, 0, 0x48uLL);
  v22 = 0LL;
  v21[0] = 0;
  v34[0] = *(_OWORD *)a1;
  v34[1] = *(_OWORD *)(a1 + 16);
  v34[2] = *(_OWORD *)(a1 + 32);
  v34[3] = *(_OWORD *)(a1 + 48);
  v35 = *(_QWORD *)(a1 + 64);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v20, v2, v3, v4);
  EtwTraceBeginCallback(62LL);
  v5 = KeUserModeCallback(62LL, v34, 72LL, &v22, v21);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v20, v6, v7);
  if ( v5 >= 0 && v21[0] == 24 )
  {
    v11 = (__int64 *)v22;
    v12 = v22 + 8;
    if ( v22 + 8 < v22 || v12 > MmUserProbeAddress )
      v11 = (__int64 *)MmUserProbeAddress;
    v13 = *v11;
    v23 = v13;
    if ( !v13 )
      return v13;
    v14 = *((_QWORD *)PtiCurrentShared(v12, v8, v9, v10) + 64);
    if ( !v14 || (*(_DWORD *)(v14 + 84) & 1) == 0 || *(__int128 **)(v14 + 96) != &v24 )
    {
      v17 = *(_QWORD *)(v22 + 16);
      v18 = v17 + 72;
      if ( v17 + 72 < v17 || v18 > MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      v29 = *(_OWORD *)v17;
      v30 = *(_OWORD *)(v17 + 16);
      *(_OWORD *)Address = *(_OWORD *)(v17 + 32);
      *(_OWORD *)v32 = *(_OWORD *)(v17 + 48);
      v33 = *(_QWORD *)(v17 + 64);
      v24 = v29;
      v25 = v30;
      v26 = *(_OWORD *)Address;
      v27 = *(_OWORD *)v32;
      v28 = v33;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v32[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v32[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v30 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)&v24, v18, v15, v16) )
      {
        if ( (v25 & 0x800) != 0 )
          v13 = *((_QWORD *)&v25 + 1);
        v23 = v13;
      }
      *(_OWORD *)a1 = v24;
      *(_OWORD *)(a1 + 16) = v25;
      *(_OWORD *)(a1 + 32) = v26;
      *(_OWORD *)(a1 + 48) = v27;
      *(_QWORD *)(a1 + 64) = v28;
      return v13;
    }
  }
  return 0LL;
}
