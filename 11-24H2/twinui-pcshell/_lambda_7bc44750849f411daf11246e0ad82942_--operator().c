/*
 * XREFs of _lambda_7bc44750849f411daf11246e0ad82942_::operator() @ 0x180147328
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::Run @ 0x1801472A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_7bc44750849f411daf11246e0ad82942_::operator()(__int64 a1)
{
  char v2; // si
  char v3; // di
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r15
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v9)(PVOID, _QWORD, __int64); // rbx
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-28h] BYREF
  int v12; // [rsp+4Ch] [rbp-24h] BYREF
  int v13; // [rsp+50h] [rbp-20h] BYREF
  RECT rc; // [rsp+58h] [rbp-18h] BYREF

  rc = 0LL;
  v13 = 0;
  v12 = 0;
  v2 = 0;
  v3 = 0;
  v10 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
  v5 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  result = v5(v4, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v10);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
    result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v12);
    if ( v11 == 4 )
    {
      v2 = 1;
      v3 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 40LL))(v10, &v13);
    }
    else
    {
      v2 = 0;
      if ( v11 != 3 || (v12 & 1) == 0 )
      {
        v3 = 0;
        goto LABEL_2;
      }
      v3 = 1;
    }
    result = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v10 + 24LL))(v10, &rc);
  }
LABEL_2:
  if ( (v12 & 1) == 0 )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 120LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL),
               v4);
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, RECT *, int, int, unsigned int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[22].Ptr
                                                                                              + 24LL))(
               CApplicationManagerUtility::g_pIAMGlobals[22].Ptr,
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL),
               0LL,
               &rc,
               3,
               (v13 & 1) != 0 ? 1 : 16,
               v13 & 2 | 1u);
  }
  else if ( v3 )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[20].Ptr;
    v9 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)Ptr + 32LL);
    IsRectEmpty(&rc);
    result = v9(Ptr, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL), 5LL);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
