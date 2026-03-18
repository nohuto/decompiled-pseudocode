/*
 * XREFs of UmfdLoadFontFile @ 0x1400FEA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401001F8 (--0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdUnloadFontFileInternal @ 0x140100FD8 (UmfdUnloadFontFileInternal.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x140101178 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     UmfdUnloadFontFile @ 0x140101490 (UmfdUnloadFontFile.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void *__fastcall UmfdLoadFontFile(
        unsigned int a1,
        unsigned __int64 *a2,
        void **a3,
        unsigned int *a4,
        struct tagDESIGNVECTOR *a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 CurrentProcess; // rax
  void *v12; // rdi
  void *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 SessionState; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct W32_PUSH_LOCK *v21; // rbx
  __int64 v22; // rax
  _QWORD v24[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+5Ch] [rbp-A4h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  _BYTE v28[248]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+168h] [rbp+68h]
  int v30; // [rsp+170h] [rbp+70h]
  void *v31; // [rsp+178h] [rbp+78h]

  CurrentProcess = PsGetCurrentProcess();
  PsGetProcessImageFileName(CurrentProcess);
  LoadFontFileRequest::LoadFontFileRequest((LoadFontFileRequest *)v28, a1, a2, a3, a4, a5, a6, a7);
  v12 = 0LL;
  v13 = 0LL;
  if ( (int)UmfdClientSendAndWaitForCompletion(2LL, v28) >= 0 )
  {
    v12 = v31;
    v13 = v31;
  }
  if ( v13 )
  {
    SessionState = W32GetSessionState(v15, v14, v16);
    v21 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24248LL);
    if ( *(_QWORD *)(SessionState + 96) != -24248LL )
      GreAcquirePushLockExclusive(v21);
    v22 = W32GetSessionState(v19, v18, v20);
    if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(*(struct W32_PUSH_LOCK **)(*(_QWORD *)(v22 + 96) + 24176LL)) )
    {
      UmfdUnloadFontFile(v12);
      v12 = 0LL;
    }
    if ( v21 )
      GreReleasePushLockExclusive(v21);
  }
  else if ( v29 )
  {
    v24[0] = v29;
    v24[1] = 0LL;
    v25 = 0;
    v27 = 0LL;
    v26 = v30;
    UmfdUnloadFontFileInternal(v24);
  }
  return v12;
}
