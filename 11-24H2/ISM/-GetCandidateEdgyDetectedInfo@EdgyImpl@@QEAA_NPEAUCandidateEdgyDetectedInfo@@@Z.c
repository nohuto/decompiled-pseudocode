/*
 * XREFs of ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801AC610
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AB4A4 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AB7E0 (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUContextualProcessorResponse@@PEAI@Z @ 0x1801AC3E0 (-DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUCont.c)
 * Callees:
 *     <none>
 */

char __fastcall EdgyImpl::GetCandidateEdgyDetectedInfo(EdgyImpl *this, struct CandidateEdgyDetectedInfo *a2)
{
  const struct CandidateIdentity *v3; // rdx

  v3 = (const struct CandidateIdentity *)*((_QWORD *)this + 1);
  if ( v3 )
    return EdgyConnection::GetCandidateEdgyDetectedInfo(*((EdgyConnection **)this + 3), v3, a2);
  else
    return 0;
}
