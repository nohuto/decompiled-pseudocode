/*
 * XREFs of ?DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUContextualProcessorResponse@@PEAI@Z @ 0x1801A4DD0
 * Callers:
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801A4E90 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801A5000 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 */

bool __fastcall EdgyImpl::DetermineInputRouting(
        EdgyImpl *this,
        enum Windows::UI::Internal::Input::EdgyInputRouting *a2,
        struct ContextualProcessorResponse *a3,
        unsigned int *a4)
{
  unsigned int v8; // ecx
  bool result; // al
  __int16 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  __int64 v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+3Ch] [rbp-34h]
  __int128 v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+68h] [rbp-8h]

  *(_DWORD *)a2 = 0;
  *((_DWORD *)a3 + 2) = 0;
  *a4 = 0;
  v18 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( EdgyImpl::GetCandidateEdgyDetectedInfo(this, (struct CandidateEdgyDetectedInfo *)&v10) )
  {
    v8 = HIDWORD(v15);
    if ( HIDWORD(v15) == *(_DWORD *)(*((_QWORD *)this + 1) + 32LL) )
    {
      result = 1;
      if ( v13 != 1 )
        return result;
      if ( v14 != 1 )
      {
        *(_DWORD *)a2 = 1;
        *((_DWORD *)a3 + 2) = 2;
        *a4 = v8;
        return result;
      }
      *((_DWORD *)a3 + 2) = 3;
    }
  }
  return 0;
}
