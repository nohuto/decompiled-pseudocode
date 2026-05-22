/*
 * XREFs of ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800DF10C
 * Callers:
 *     ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800DF718 (-PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV-$vector@UTouchInj.c)
 * Callees:
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004F008 (--1HitTestResult@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@XZ @ 0x1800DE69C (--$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA-A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InjectionRawInputProvider::HitTest(
        InjectionRawInputProvider *this,
        struct tagPOINT a2,
        int a3,
        struct InputInjectionClientProxy *a4)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 *v7; // rdi
  __int64 *v8; // rsi
  struct InputInjectionClientProxy *v9; // rcx
  struct InputInjectionClientProxy *v11; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v12[104]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+A8h] [rbp-40h]

  (*(void (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, __int64, int))(**((_QWORD **)this + 4) + 40LL))(
    *((_QWORD *)this + 4),
    v12,
    a2,
    2LL,
    a3);
  v6 = 0;
  if ( v12[0] )
  {
    v7 = *(__int64 **)(v13 - 24);
    v8 = *(__int64 **)(v13 - 16);
    while ( v7 != v8 )
    {
      InputSite::GetAttachedObject<IInputInjectionClientProxy,InputInjectionClientProxy>(*v7, &v11);
      v9 = v11;
      if ( v11 && v11 == a4 )
      {
        (*(void (**)(void))(*(_QWORD *)v11 + 8LL))();
        goto LABEL_11;
      }
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(struct InputInjectionClientProxy *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      ++v7;
    }
  }
  v6 = -2147467259;
LABEL_11:
  HitTestResult::~HitTestResult((HitTestResult *)v12, v5);
  return v6;
}
