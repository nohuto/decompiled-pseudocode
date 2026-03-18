/*
 * XREFs of ??0CChainingHelper@@QEAA@PEAVCInteraction@@@Z @ 0x1800E7B14
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1800E90D0 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0RequestedConfigForAxis@CChainingHelper@@QEAA@XZ @ 0x180220D80 (--0RequestedConfigForAxis@CChainingHelper@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CChainingHelper *__fastcall CChainingHelper::CChainingHelper(CChainingHelper *this, struct CInteraction *a2)
{
  CDirtyRegionAnnotation *v4; // rdi
  __int64 v5; // rbp

  v4 = this;
  v5 = 3LL;
  do
  {
    --v5;
    if ( (char *)CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v4);
    else
      CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis(v4);
    v4 = (CDirtyRegionAnnotation *)((char *)v4 + 12);
  }
  while ( v5 );
  *((_BYTE *)this + 36) &= 0xFCu;
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
