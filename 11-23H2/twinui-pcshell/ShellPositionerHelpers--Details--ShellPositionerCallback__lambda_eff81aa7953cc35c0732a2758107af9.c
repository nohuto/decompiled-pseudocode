/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::Invoke @ 0x180016FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x180260E5C (--1-$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::Invoke(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (**a2)(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v6) < 0
    || (**(_BYTE **)(a1 + 64) = 1,
        v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 24LL))(
               v6,
               *(_QWORD *)(a1 + 48),
               *(_QWORD *)(a1 + 56)),
        v4 >= 0) )
  {
    v3 = v6;
    if ( v6 )
    {
      v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    return 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutOperation>::~ComPtr<IAppLayoutOperation>(&v6);
  }
  return (unsigned int)v4;
}
