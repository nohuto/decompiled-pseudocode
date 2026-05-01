/*
 * XREFs of ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180141150
 * Callers:
 *     ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180141020 (-ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@.c)
 *     _lambda_90c64e6b4e677faa5e1350e6dea894c9_::operator() @ 0x18030D334 (_lambda_90c64e6b4e677faa5e1350e6dea894c9_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationViewManager::GetViewForApplication(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rbx
  struct IApplicationView *v7; // rsi
  char *i; // r14
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  struct IApplicationView *v12; // rdi
  __int64 v13; // rcx
  int v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+80h] [rbp+50h] BYREF
  __int64 v16; // [rsp+88h] [rbp+58h] BYREF

  v6 = this + 49;
  AcquireSRWLockShared(this + 49);
  *a3 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; !v7 && i < this[51].Ptr; ++i )
  {
    v16 = 0LL;
    v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[50].Ptr + (_QWORD)i);
    if ( (**v9)(v9, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v16) >= 0 )
    {
      v15 = 0LL;
      v14 = 0;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v15) >= 0
        && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v15 + 104LL))(
             v15,
             a2,
             &v14) >= 0 )
      {
        if ( v14 )
        {
          v12 = (struct IApplicationView *)*((_QWORD *)this[50].Ptr + (_QWORD)i);
          if ( v12 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)this[50].Ptr + (_QWORD)i));
            v7 = v12;
          }
        }
      }
      v13 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  *a3 = v7;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7 == 0LL ? 0x8002802B : 0;
}
