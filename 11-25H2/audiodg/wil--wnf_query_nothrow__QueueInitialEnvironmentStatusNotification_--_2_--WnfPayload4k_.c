/*
 * XREFs of wil::wnf_query_nothrow__QueueInitialEnvironmentStatusNotification_::_2_::WnfPayload4k_ @ 0x140061678
 * Callers:
 *     ?QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062814 (-QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObj.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14005D394 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow__QueueInitialEnvironmentStatusNotification_::_2_::WnfPayload4k_(
        __int64 a1,
        char *a2,
        void *a3,
        __int64 a4)
{
  char v4; // bl
  unsigned int v7; // edi
  int v9; // eax
  int v10; // ecx
  const char *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  int v15; // [rsp+68h] [rbp+20h] BYREF
  int v16; // [rsp+6Ch] [rbp+24h]

  v16 = HIDWORD(a4);
  v14 = HIDWORD(a1);
  v15 = 4096;
  v4 = 0;
  *a2 = 0;
  v13 = 0;
  v7 = NtQueryWnfStateData(&WNF_AUDC_SPATIAL_STATUS, 0LL, 0LL, &v13, a3, &v15) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    v9 = v13;
    if ( v13 )
    {
      v10 = v15;
      if ( v15 != 4096 )
      {
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x271,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
          (const char *)0x8000FFFFLL,
          (int)"Inconsistent state data size in wnf_query",
          v11);
        memset_0(a3, 0, 0x1000uLL);
        v10 = v15;
        v9 = v13;
      }
      if ( v9 )
      {
        if ( v10 == 4096 )
          v4 = 1;
      }
    }
    *a2 = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v7);
    return v7;
  }
}
