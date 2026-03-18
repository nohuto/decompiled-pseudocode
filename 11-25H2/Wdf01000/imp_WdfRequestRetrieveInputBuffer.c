/*
 * XREFs of imp_WdfRequestRetrieveInputBuffer @ 0x1400492F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140049530 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     WPP_IFR_SF_qiid @ 0x1400560A4 (WPP_IFR_SF_qiid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveInputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 RequiredLength,
        void **Buffer,
        unsigned __int64 *Length)
{
  __int64 v8; // rcx
  FxRequest *flags; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int64 *v11; // r14
  int MemoryObject; // ecx
  unsigned __int64 v13; // rdx
  FxRequest_vtbl *v15; // rax
  unsigned __int8 v16; // dl
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  unsigned __int64 length; // [rsp+50h] [rbp-58h] BYREF
  void *pBuffer; // [rsp+58h] [rbp-50h] BYREF
  IFxMemory *pMemory; // [rsp+60h] [rbp-48h] BYREF
  FxRequest **p_pRequest; // [rsp+68h] [rbp-40h] BYREF
  __int16 v24; // [rsp+70h] [rbp-38h]
  __int16 v25; // [rsp+72h] [rbp-36h]
  int v26; // [rsp+74h] [rbp-34h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  FxRequest *pRequest; // [rsp+B8h] [rbp+10h] BYREF

  pBuffer = 0LL;
  length = 0LL;
  pMemory = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v8) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v8 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v8);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v25 = v8;
    v26 = 0;
    v15 = flags->__vftable;
    v24 = 4104;
    if ( v15->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v16, v17, v18, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  v11 = Length;
  *Buffer = 0LL;
  if ( v11 )
    *v11 = 0LL;
  if ( flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 3 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x17u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    return 3221225488LL;
  }
  else
  {
    MemoryObject = FxRequest::GetMemoryObject(flags, &pMemory, &pBuffer, &length);
    if ( MemoryObject < 0 )
      return (unsigned int)MemoryObject;
    v13 = length;
    if ( length >= RequiredLength )
    {
      *Buffer = pBuffer;
      if ( v11 )
        *v11 = v13;
      return (unsigned int)MemoryObject;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qiid(
        m_Globals,
        5u,
        0x10u,
        0x18u,
        WPP_FxRequestApi_cpp_Traceguids,
        (const void *)Request,
        (const void *)length,
        RequiredLength,
        -1073741789);
    return 3221225507LL;
  }
}
