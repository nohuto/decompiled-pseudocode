/*
 * XREFs of NdisRegisterUserThreadExitCallback @ 0x1400EB2D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400EB17C (--1-$unique_storage@U-$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1-ObfDereferenceObject@@YA_J0.c)
 *     ??1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ @ 0x1400EB1B4 (--1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400EB1DC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?AcquireDriverObjectReference@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAU_DRIVER_OBJECT@@@Z @ 0x1400EB240 (-AcquireDriverObjectReference@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DRI.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUNDIS_THREAD_STATE@@@Z @ 0x1400EB278 (-reset@-$unique_storage@U-$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1-ObfDereference.c)
 *     ?ndisCreateThreadStateObject@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1400EB8B8 (-ndisCreateThreadStateObject@@YAJAEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDI.c)
 *     ?ndisGetThreadStateReferenceFromThread@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAU_ETHREAD@@@Z @ 0x1400EBA68 (-ndisGetThreadStateReferenceFromThread@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x14016C1E0 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

__int64 __fastcall NdisRegisterUserThreadExitCallback(void *a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 v6; // r12
  int v8; // r9d
  struct KPushLockBase *v9; // rbx
  unsigned __int64 *v10; // rbx
  unsigned __int64 *i; // rax
  char v12; // bl
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *Pool2; // rax
  int v16; // edx
  __int64 *v17; // rdi
  int v18; // edx
  unsigned int v19; // ebx
  unsigned __int16 v20; // r9
  __int64 *v21; // rax
  __int64 *v22; // rbx
  int v23; // edx
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  struct _KTHREAD *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  KLockHolder v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp+48h] BYREF

  v6 = a2;
  if ( !a4 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = 10;
      LOBYTE(a2) = 4;
LABEL_25:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        v8,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
    }
    return 3221225485LL;
  }
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v8 = 11;
LABEL_24:
    LOBYTE(a2) = 2;
    goto LABEL_25;
  }
  v9 = qword_140126BC8;
  KLockThisShared::KLockThisShared((KLockThisShared *)&v28, qword_140126BC8);
  v10 = (unsigned __int64 *)&v9[1];
  for ( i = (unsigned __int64 *)*v10; ; i = (unsigned __int64 *)*i )
  {
    if ( i == v10 )
    {
      v12 = 0;
      goto LABEL_12;
    }
    if ( (void *)i[9] == a1 )
      break;
  }
  v12 = 1;
LABEL_12:
  KLockHolder::~KLockHolder(&v28);
  if ( !v12 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        12,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
    }
    return 3221225474LL;
  }
  if ( qword_140127858 )
  {
    if ( !v6 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v8 = 14;
      goto LABEL_24;
    }
    CurrentThread = KeGetCurrentThread();
    if ( PsIsSystemThread(CurrentThread) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v8 = 15;
      goto LABEL_24;
    }
    Pool2 = (__int64 *)ExAllocatePool2(64LL, 16LL, 1380280404);
    v17 = Pool2;
    if ( !Pool2 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          27,
          16,
          (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
      }
      return 3221225626LL;
    }
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    AcquireDriverObjectReference(&v26, a1);
    ObfReferenceObject(CurrentThread);
    v25 = CurrentThread;
    ndisGetThreadStateReferenceFromThread(&v24, CurrentThread);
    if ( v24 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v18,
          27,
          17,
          (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
      }
      v19 = -1073740528;
      goto LABEL_43;
    }
    v29 = 0LL;
    v19 = ndisCreateThreadStateObject(&v29);
    if ( v19 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v20 = 18;
LABEL_41:
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Bu,
          v20,
          (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids,
          v19);
        goto LABEL_42;
      }
      goto LABEL_42;
    }
    v21 = AcquireDriverObjectReference(&v27, a1);
    v22 = v29;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DRIVER_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DRIVER_OBJECT *,_DRIVER_OBJECT *,0,std::nullptr_t>>>::operator=(
      v29,
      v21);
    wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v27);
    v22[1] = (__int64)CurrentThread;
    v22[2] = v6;
    v22[3] = a3;
    v19 = PsSetThreadProperty(CurrentThread, 1398031173LL, v22);
    if ( v19 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v20 = 19;
        goto LABEL_41;
      }
LABEL_42:
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&v29);
LABEL_43:
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v24);
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&v25);
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v26);
      _NDIS_THREAD_EXIT_REGISTRATION::~_NDIS_THREAD_EXIT_REGISTRATION((_NDIS_THREAD_EXIT_REGISTRATION *)v17);
      ExFreePoolWithTag(v17, 0);
      return v19;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DRIVER_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DRIVER_OBJECT *,_DRIVER_OBJECT *,0,std::nullptr_t>>>::operator=(
      v17 + 1,
      &v26);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DRIVER_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DRIVER_OBJECT *,_DRIVER_OBJECT *,0,std::nullptr_t>>>::operator=(
      v17,
      (__int64 *)&v25);
    wil::details::unique_storage<wil::details::resource_policy<NDIS_THREAD_STATE *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,NDIS_THREAD_STATE *,NDIS_THREAD_STATE *,0,std::nullptr_t>>::reset(
      (__int64 *)&v29,
      0LL);
    *a4 = v17;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v23,
        27,
        20,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids,
        (char)v17);
    }
    wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&v29);
    wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v24);
    wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&v25);
    wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v26);
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        13,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
    }
    return 3221225473LL;
  }
}
