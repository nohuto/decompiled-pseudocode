/*
 * XREFs of ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1403B76F8
 * Callers:
 *     _lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_ @ 0x1403B76E0 (_lambda_323a6f2bac221de0325809d248e0690f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FD6F4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1402FEB58 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402FEFEC (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1403B7828 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1403B7920 (-GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetPointerShapeData(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *a2)
{
  struct DXGFASTMUTEX *v4; // rbx
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int PointerShapeData; // ebx
  OUTPUTDUPL_MGR *v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v12[12]; // [rsp+30h] [rbp-29h] BYREF

  v4 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, v4, CurrentProcess, 0LL);
  if ( ContextForProcess )
    PointerShapeData = OUTPUTDUPL_CONTEXT::GetPointerShapeData(*ContextForProcess, a2);
  else
    PointerShapeData = -1073741275;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    memset(v12, 0, 0x58uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12);
    HIDWORD(v12[6]) = a2->VidPnSourceId;
    v12[7] = *(_QWORD *)&a2->ShapeInfo.Type;
    v12[8] = *(_QWORD *)&a2->ShapeInfo.Height;
    v12[9] = a2->ShapeInfo.HotSpot;
    LODWORD(v12[10]) = a2->BufferSizeSupplied;
    HIDWORD(v12[10]) = a2->BufferSizeRequired;
    HIDWORD(v12[0]) = 88;
    LODWORD(v12[6]) = 9;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics((DXGDIAGNOSTICS **)this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12, 1);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return PointerShapeData;
}
