/*
 * XREFs of ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x180040BD4
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x180040A94 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800199B0 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x180034C80 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180041220 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall GetNotificationDataSize(__int64 **a1, unsigned __int64 *a2, __int64 a3, const char *a4)
{
  __int64 *v5; // rbx
  __int64 *v6; // r14
  int SmtcProcesses; // eax
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v20; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = *a1;
  v6 = a1[1];
  try
  {
    while ( v5 != v6 )
    {
      LODWORD(v20) = 0;
      SmtcProcesses = CApplication::GetSmtcProcesses(*v5, 0LL, &v20);
      v8 = SmtcProcesses;
      if ( SmtcProcesses < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x158,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)SmtcProcesses);
        return v8;
      }
      v21 = 0LL;
      v10 = StringCbLengthW(*(const unsigned __int16 **)(*v5 + 24), 0x800uLL, &v21);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15D,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      v12 = v21 + 14;
      v21 = 0LL;
      v13 = ULongLongMult((unsigned int)v20, v12, &v21);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16A,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v13);
        return v14;
      }
      v15 = *a2;
      v16 = *a2 + v21;
      v17 = -1LL;
      if ( v16 >= *a2 )
        v17 = *a2 + v21;
      v18 = v16 < *a2 ? 0x80070216 : 0;
      *a2 = v17;
      if ( v16 < v15 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16C,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)v18);
        return v18;
      }
      ++v5;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x171,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           a4);
  }
  return result;
}
