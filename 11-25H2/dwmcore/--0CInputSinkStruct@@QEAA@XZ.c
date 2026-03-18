/*
 * XREFs of ??0CInputSinkStruct@@QEAA@XZ @ 0x18013C2D8
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18013A8B4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0InputQueueInfo@CInputSinkStruct@@QEAA@XZ @ 0x18021C390 (--0InputQueueInfo@CInputSinkStruct@@QEAA@XZ.c)
 */

CInputSinkStruct *__fastcall CInputSinkStruct::CInputSinkStruct(CInputSinkStruct *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  CDirtyRegionAnnotation *v4; // rbx
  int v5; // eax
  CInputSinkStruct *v6; // rcx

  v1 = 4LL;
  v3 = 4LL;
  v4 = this;
  do
  {
    --v3;
    if ( (char *)CInputSinkStruct::InputQueueInfo::InputQueueInfo == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v4);
    else
      CInputSinkStruct::InputQueueInfo::InputQueueInfo(v4);
    v4 = (CDirtyRegionAnnotation *)((char *)v4 + 16);
  }
  while ( v3 );
  *((_BYTE *)this + 104) = 0;
  v5 = 1;
  v6 = this;
  do
  {
    *(_DWORD *)v6 = v5++;
    v6 = (CInputSinkStruct *)((char *)v6 + 16);
    --v1;
  }
  while ( v1 );
  return this;
}
