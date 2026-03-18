/*
 * XREFs of ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x140188A38
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x14006CA0C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULT.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgEscapeEvictByNtHandle(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  unsigned int v2; // ebx
  HANDLE hProcess; // rcx
  NTSTATUS v4; // eax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD **v8; // rax
  _QWORD *v9; // r14
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = 0;
  hProcess = a1->SuspendProcess.hProcess;
  if ( hProcess )
  {
    HandleInformation = 0LL;
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(
           hProcess,
           0x20000u,
           g_pDxgkSharedAllocationObjectType,
           1,
           &Object,
           &HandleInformation);
    v2 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry2(3LL, a1->EvictByNtHandle.NtHandle, v4);
      WdLogGlobalForLineNumber = 555;
      return v2;
    }
    v5 = Object;
    v6 = *((_QWORD *)Object + 2);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 80);
      if ( v7 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, *(struct DXGADAPTER *const *)(v7 + 16), 0LL);
        v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
        if ( (v2 & 0x80000000) != 0 )
        {
LABEL_9:
          ObfDereferenceObject(v5);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
          return v2;
        }
        if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v6 + 80) + 16LL) + 3004LL) >= 2000 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 576;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Evict By NT Handle Case not supported in WDDM2.x\n",
            576LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v2 = -1073741595;
          goto LABEL_9;
        }
        v8 = (_QWORD **)(v5[2] + 136LL);
        v9 = *v8;
        while ( v9 != v8 )
        {
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(v6 + 80) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v6 + 80) + 768LL),
            0LL,
            (struct VIDMM_MULTI_GLOBAL_ALLOC *)*(v9 - 5),
            0LL);
          v9 = (_QWORD *)*v9;
          v8 = (_QWORD **)(v5[2] + 136LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
      }
    }
    ObfDereferenceObject(v5);
  }
  return v2;
}
