/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C02108BC
 * Callers:
 *     xxxHkCallHook @ 0x1C0120F60 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rcx
  ULONG64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  ULONG64 v24; // rcx
  __int64 v25; // xmm0_8
  int v27; // [rsp+50h] [rbp-68h] BYREF
  __int64 v28; // [rsp+58h] [rbp-60h]
  BOOL v29; // [rsp+60h] [rbp-58h]
  __int64 v30; // [rsp+68h] [rbp-50h]
  __int64 v31; // [rsp+70h] [rbp-48h]
  __int128 v32; // [rsp+78h] [rbp-40h]
  __int64 v33; // [rsp+88h] [rbp-30h]
  int v34; // [rsp+90h] [rbp-28h]
  char v35; // [rsp+C0h] [rbp+8h] BYREF
  int v36; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v37; // [rsp+D0h] [rbp+18h] BYREF

  v37 = 0LL;
  v36 = 0;
  memset_0(&v27, 0, 0x48uLL);
  v27 = a1;
  v28 = a2;
  v29 = a3 != 0LL;
  if ( a3 )
  {
    v32 = *a3;
    v33 = *((_QWORD *)a3 + 2);
  }
  v30 = a4;
  v31 = a5;
  v34 = 0;
  if ( a2 )
  {
    v12 = HMValidateHandle(a2, 5u);
    if ( v12 )
    {
      v13 = (*(_BYTE *)(v12 + 64) & 4) == 0;
      v14 = v34;
      if ( !v13 )
        v14 = 1;
      v34 = v14;
    }
  }
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)&v35,
    v9,
    v10,
    v11);
  EtwTraceBeginCallback(49LL);
  v15 = KeUserModeCallback(49LL, &v27, 72LL, &v37, &v36);
  EtwTraceEndCallback(49LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35, v16, v17);
  if ( v15 >= 0 && v36 == 24 )
  {
    v20 = (__int64 *)v37;
    v21 = v37 + 8;
    if ( v37 + 8 < v37 || v21 > MmUserProbeAddress )
      v20 = (__int64 *)MmUserProbeAddress;
    v22 = *v20;
    if ( !a3 )
      return v22;
    v23 = *((_QWORD *)PtiCurrentShared((__int64)v20, v21, v18, v19) + 64);
    if ( !v23 || (*(_DWORD *)(v23 + 84) & 1) == 0 || *(__int128 **)(v23 + 96) != a3 )
    {
      v24 = *(_QWORD *)(v37 + 16);
      if ( v24 + 24 < v24 || v24 + 24 > MmUserProbeAddress )
        v24 = MmUserProbeAddress;
      v25 = *(_QWORD *)(v24 + 16);
      *a3 = *(_OWORD *)v24;
      *((_QWORD *)a3 + 2) = v25;
      return v22;
    }
  }
  return -1LL;
}
