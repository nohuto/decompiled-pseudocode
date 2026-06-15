/*
 * XREFs of ?CreateFromMetadataBlob@CStandardCrossProcessEventManager@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400646B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x14001D4D8 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 */

__int64 __fastcall CStandardCrossProcessEventManager::CreateFromMetadataBlob(
        CStandardCrossProcessEventManager *this,
        struct CP_EVENT_METADATA_BLOB *a2,
        struct ICrossProcessEvent **a3)
{
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    v8 = *((_QWORD *)a2 + 1);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(a3, &v8);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *(_DWORD *)a2 = 0;
      *((_QWORD *)a2 + 1) = 0LL;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
