/*
 * XREFs of DxgkQueryProtectedSessionInfoFromNtHandle @ 0x1401F1E50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionInfoFromNtHandle(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  const void *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  const void *v17; // rdx
  size_t v18; // r8
  HANDLE v19; // rcx
  char *v20; // rax
  void **v21; // r15
  void *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  const void *v25; // rdx
  size_t v26; // r8
  void *v27; // rcx
  char *v28; // rax
  void **v29; // r15
  void *v30; // rcx
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-80h] BYREF
  int v32; // [rsp+60h] [rbp-78h] BYREF
  __int64 v33; // [rsp+68h] [rbp-70h]
  char v34; // [rsp+70h] [rbp-68h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-60h] BYREF
  void *v36[2]; // [rsp+88h] [rbp-50h]
  __int64 v37; // [rsp+98h] [rbp-40h]
  unsigned int Src; // [rsp+E8h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+F0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+20h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 535;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      535LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2151;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2151);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2151);
  HandleInformation = 0LL;
  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)v36 = 0LL;
  v37 = 0LL;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v4, 0x28uLL);
  if ( Handle[1] )
  {
    if ( LODWORD(v36[0]) )
      goto LABEL_14;
LABEL_13:
    WdLogSingleEntry3(3LL, Handle[1], LODWORD(v36[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 569;
    goto LABEL_19;
  }
  if ( LODWORD(v36[0]) )
    goto LABEL_13;
LABEL_14:
  if ( v36[1] )
  {
    if ( (_DWORD)v37 )
    {
LABEL_23:
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(
             Handle[0],
             0x20000u,
             g_pDxgkSharedProtectedSessionObjectType,
             1,
             &Object,
             &HandleInformation);
      v9 = v8;
      if ( v8 == -1073741788 )
      {
        WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
        WdLogGlobalForLineNumber = 599;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v32);
        }
        return 3221225508LL;
      }
      else
      {
        if ( v8 >= 0 )
        {
          v14 = (__int64 *)Object;
          if ( !*(_QWORD *)Object )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 613;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pSharedProtectedSessionObject->pProtectedSession",
              613LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v15 = *v14;
          v16 = *(unsigned int *)(*v14 + 96);
          Src = v16;
          if ( (_DWORD)v16 && LODWORD(v36[0]) >= (unsigned int)v16 )
          {
            v17 = *(const void **)(v15 + 88);
            v18 = (unsigned int)v16;
            v19 = Handle[1];
            v20 = (char *)Handle[1] + v16;
            v21 = (void **)MmUserProbeAddress;
            if ( (unsigned __int64)v20 > MmUserProbeAddress || v20 <= Handle[1] )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v19, v17, v18);
          }
          else
          {
            v21 = (void **)MmUserProbeAddress;
          }
          v22 = (void *)(a1 + 16);
          if ( a1 + 16 >= (unsigned __int64)*v21 )
            v22 = *v21;
          RtlCopyVolatileMemory(v22, &Src, 4uLL);
          if ( Handle[1] && LODWORD(v36[0]) < Src )
            v9 = -1073741789;
          v23 = *v14;
          v24 = *(unsigned int *)(*v14 + 112);
          v39 = v24;
          if ( (_DWORD)v24 && (unsigned int)v37 >= (unsigned int)v24 )
          {
            v25 = *(const void **)(v23 + 104);
            v26 = (unsigned int)v24;
            v27 = v36[1];
            v28 = (char *)v36[1] + v24;
            v29 = (void **)MmUserProbeAddress;
            if ( (unsigned __int64)v28 > MmUserProbeAddress || v28 <= v36[1] )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v27, v25, v26);
          }
          else
          {
            v29 = (void **)MmUserProbeAddress;
          }
          v30 = (void *)(a1 + 32);
          if ( a1 + 32 >= (unsigned __int64)*v29 )
            v30 = *v29;
          RtlCopyVolatileMemory(v30, &v39, 4uLL);
          if ( v36[1] && (unsigned int)v37 < v39 )
            v9 = -1073741789;
          ObfDereferenceObject(v14);
        }
        else
        {
          WdLogSingleEntry2(3LL, Handle[0], v8);
          WdLogGlobalForLineNumber = 606;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v32);
        return v9;
      }
    }
  }
  else if ( !(_DWORD)v37 )
  {
    goto LABEL_23;
  }
  WdLogSingleEntry3(3LL, v36[1], (unsigned int)v37, -1073741811LL);
  WdLogGlobalForLineNumber = 581;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v32);
  return 3221225485LL;
}
