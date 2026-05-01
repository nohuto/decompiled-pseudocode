/*
 * XREFs of ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x1803EBED8
 * Callers:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803DF438 (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x1803E0050 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 */

GUID **__fastcall GetComponentInfo(const struct _GUID *a1)
{
  GUID **result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( result = (GUID **)&off_18070A020; result != (GUID **)&CGameEntry::`vftable'; result += 4 )
  {
    v3 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
      v3 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
    if ( !v3 )
      return result;
  }
  for ( result = &off_1808C5550; result != (GUID **)&off_1808C5670; result += 4 )
  {
    v4 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
      v4 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
    if ( !v4 )
      return result;
  }
  for ( result = &off_1808C5510; result != &off_1808C5550; result += 4 )
  {
    v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&(*result)->Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&(*result)->Data1 )
      v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)(*result)->Data4;
    if ( !v5 )
      return result;
  }
  if ( dword_1808CD38C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808CD38C);
    if ( dword_1808CD38C == -1 )
    {
      xmmword_1808C9E10 = 0LL;
      Init_thread_footer(&dword_1808CD38C);
    }
  }
  return (GUID **)&off_1808C5670;
}
