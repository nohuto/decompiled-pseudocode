/*
 * XREFs of ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1801A253C
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801A07B0 (-GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDete.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801A22B8 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 */

bool __fastcall Edges::GetCandidateConfiguration(
        Edges *this,
        const struct CandidateIdentity *a2,
        struct EdgyControllerClientProxy **a3,
        enum Windows::UI::Internal::Input::EdgyInputRouting *a4,
        enum Windows::UI::Internal::Input::EdgyExperienceRunState *a5)
{
  int Edge; // eax
  __int64 v9; // rdx
  bool result; // al

  *a3 = 0LL;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)a5 = 0;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 0;
  v9 = (__int64)Edge << 7;
  *a3 = *(struct EdgyControllerClientProxy **)(v9 + *(_QWORD *)this + 40);
  *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)this + v9 + 68);
  result = 1;
  *(_DWORD *)a5 = *(_DWORD *)(*(_QWORD *)this + v9 + 48);
  return result;
}
