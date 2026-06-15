/*
 * XREFs of ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x18003E874
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x18003E274 (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180014690 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001ECE0 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800322A0 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180035878 (-clear@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x18003EA00 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memcpy_0 @ 0x180048BAC (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetNotificationData(__int64 **a1, __int64 a2, unsigned __int64 a3)
{
  size_t v5; // r14
  __int64 *v6; // rsi
  __int64 *v7; // r13
  int SmtcProcesses; // eax
  unsigned int v9; // edi
  _QWORD *i; // rbx
  size_t v11; // r8
  __int64 v12; // rax
  size_t v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = *a1;
  v7 = a1[1];
LABEL_2:
  if ( v6 == v7 )
    return 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v18);
  SmtcProcesses = CApplication::GetSmtcProcesses(*v6, &v18, 0LL);
  v9 = SmtcProcesses;
  if ( SmtcProcesses < 0 )
  {
    v15 = 377LL;
  }
  else
  {
    for ( i = v18; ; i = (_QWORD *)*i )
    {
      if ( !i )
      {
        std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::clear((void **)&v18);
        ++v6;
        goto LABEL_2;
      }
      v19 = 0LL;
      SmtcProcesses = StringCbLengthW(*(const unsigned __int16 **)(*v6 + 24), 0x800uLL, &v19);
      v9 = SmtcProcesses;
      if ( SmtcProcesses < 0 )
        break;
      v11 = v19 + 2;
      v12 = v5 + 4;
      if ( v5 + 4 > a3 )
      {
        v9 = -2147024774;
        v14 = 2147942522LL;
        v15 = 387LL;
        goto LABEL_20;
      }
      *(_DWORD *)(v5 + a2) = v11;
      v13 = v11 + v12;
      if ( v11 + v12 > a3 )
      {
        v9 = -2147024774;
        v14 = 2147942522LL;
        v15 = 392LL;
        goto LABEL_20;
      }
      memcpy_0((void *)(v12 + a2), *(const void **)(*v6 + 24), v11);
      if ( v13 + 4 > a3 )
      {
        v9 = -2147024774;
        v14 = 2147942522LL;
        v15 = 397LL;
        goto LABEL_20;
      }
      *(_DWORD *)(v13 + a2) = *(_DWORD *)(i[1] + 160LL);
      v5 = v13 + 8;
      if ( v13 + 8 > a3 )
      {
        v9 = -2147024774;
        v14 = 2147942522LL;
        v15 = 402LL;
        goto LABEL_20;
      }
      *(_DWORD *)(v13 + 4 + a2) = CApplication::IsBackgroundAudioCapable((CApplication *)*v6);
    }
    v15 = 383LL;
  }
  v14 = (unsigned int)SmtcProcesses;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v14);
  std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::clear((void **)&v18);
  return v9;
}
