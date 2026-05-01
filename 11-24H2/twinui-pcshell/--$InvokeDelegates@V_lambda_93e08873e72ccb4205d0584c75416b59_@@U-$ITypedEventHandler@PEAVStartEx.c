/*
 * XREFs of ??$InvokeDelegates@V_lambda_93e08873e72ccb4205d0584c75416b59_@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_93e08873e72ccb4205d0584c75416b59_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18008D6B0
 * Callers:
 *     ??$DoInvoke@V_lambda_93e08873e72ccb4205d0584c75416b59_@@@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_93e08873e72ccb4205d0584c75416b59_@@@Z @ 0x18008B8EC (--$DoInvoke@V_lambda_93e08873e72ccb4205d0584c75416b59_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18003B1EC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@S_ea_18003B1EC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_93e08873e72ccb4205d0584c75416b59_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>>(
        __int64 a1,
        volatile int *a2,
        RTL_SRWLOCK *a3)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 *v7; // rdi
  unsigned int *v8; // r14
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi

  v4 = a1;
  v5 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
    v5 = v6;
  }
  v7 = *(__int64 **)(v5 + 16);
  if ( v7 != *(__int64 **)(v5 + 24) )
  {
    v8 = *(unsigned int **)(v4 + 8);
    v9 = *(_QWORD **)v4;
    do
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v7 + 24LL))(
              *v7,
              (*v9 + 40LL) & -(__int64)(*v9 != 0LL),
              *v8);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v7);
      }
      ++v7;
    }
    while ( v7 != *(__int64 **)(v5 + 24) );
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v5);
  return 0LL;
}
