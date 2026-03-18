/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1401B07D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14001BA6C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(ULONG64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  const wchar_t *v5; // r9
  const void *v6; // rdx
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  PVOID v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  _BYTE v24[16]; // [rsp+50h] [rbp-58h] BYREF
  int v25; // [rsp+60h] [rbp-48h] BYREF
  __int64 v26; // [rsp+68h] [rbp-40h]
  char v27; // [rsp+70h] [rbp-38h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-30h] BYREF
  __int64 v29; // [rsp+88h] [rbp-20h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2088;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2088);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2088);
  if ( !DXGPROCESS::GetCurrent() )
  {
    v4 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12605;
    v5 = L"Invalid process context, returning 0x%I64x";
LABEL_47:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v5, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_17;
  }
  *(_OWORD *)Handle = 0LL;
  v29 = 0LL;
  v6 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v6, 0x18uLL);
  v29 = 0LL;
  if ( Handle[1] )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
    v4 = v7;
    if ( v7 == -1073741788 )
    {
      WdLogSingleEntry2(3LL, Handle[1], -1073741788LL);
      WdLogGlobalForLineNumber = 12644;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v25);
      return 3221225508LL;
    }
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[1], v7);
      WdLogGlobalForLineNumber = 12651;
LABEL_17:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v25);
      }
      return (unsigned int)v4;
    }
    v13 = Object;
    v14 = *((_QWORD *)Object + 2);
    if ( !v14 )
    {
      v4 = -1073741811;
      WdLogSingleEntry2(3LL, Object, -1073741811LL);
      WdLogGlobalForLineNumber = 12661;
    }
    v15 = *(_QWORD *)(v14 + 96);
    if ( v15 )
      goto LABEL_27;
    v16 = *(_QWORD *)(v14 + 80);
    if ( v16 )
      v15 = *(_QWORD *)(v16 + 16);
    if ( v15 )
LABEL_27:
      v29 = *(_QWORD *)(v15 + 412);
    ObfDereferenceObject(v13);
    if ( v4 < 0 )
      goto LABEL_17;
  }
  else
  {
    if ( !LODWORD(Handle[0]) )
    {
      v4 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 12718;
      v5 = L"Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
      goto LABEL_47;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v24);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)Handle[0], 2);
    v19 = ObjectA;
    if ( !ObjectA )
    {
      v4 = -1073741811;
      WdLogSingleEntry2(3LL, LODWORD(Handle[0]), -1073741811LL);
      WdLogGlobalForLineNumber = 12701;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
      goto LABEL_17;
    }
    v20 = *(_QWORD *)(ObjectA + 96);
    if ( v20 )
      goto LABEL_37;
    v21 = *(_QWORD *)(v19 + 80);
    if ( v21 )
      v20 = *(_QWORD *)(v21 + 16);
    if ( v20 )
LABEL_37:
      v29 = *(_QWORD *)(v20 + 412);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  }
  if ( a1 + 24 > MmUserProbeAddress || a1 + 24 <= a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)a1 = *(_OWORD *)Handle;
  *(_QWORD *)(a1 + 16) = v29;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v25);
  return 0LL;
}
