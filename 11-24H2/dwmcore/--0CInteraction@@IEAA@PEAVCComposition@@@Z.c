/*
 * XREFs of ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x180191B94
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18006E664 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x180191C90 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z @ 0x180191E20 (-AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x18020D97C (McTemplateU0xxq_EventWriteTransfer.c)
 */

CInteraction *__fastcall CInteraction::CInteraction(CInteraction *this, struct CComposition *a2)
{
  int v3; // ecx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CInteraction::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 51) = 4;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, (struct _D3DMATRIX *)((char *)this + 296));
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 360));
  *((_QWORD *)this + 216) = 0LL;
  CInteraction::AllocateHandleTableEntry(this, (unsigned int *)this + 430);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 214) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xxq_EventWriteTransfer(
      v3,
      (unsigned int)&INTERACTION_CREATED,
      (_DWORD)this,
      (_DWORD)this,
      *((_DWORD *)this + 430));
  return this;
}
