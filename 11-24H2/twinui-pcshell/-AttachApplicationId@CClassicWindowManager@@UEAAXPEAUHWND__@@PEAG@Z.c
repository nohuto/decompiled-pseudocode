/*
 * XREFs of ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x1800412E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___ @ 0x180041670 (CIAMGlobals--QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CClassicWindowManager::AttachApplicationId(CClassicWindowManager *this, HWND a2, unsigned __int16 *a3)
{
  HWND v4; // r14
  struct _RTL_CRITICAL_SECTION *v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 i; // rdi
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+38h] [rbp-8h]
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  HWND v18; // [rsp+88h] [rbp+48h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h]

  v18 = a2;
  v4 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)88));
  v16 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v19 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 14); ++i )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * i);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v17 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9)(v9, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v17) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v17 + 192LL))(v17, v4) )
    {
      v10 = 0;
    }
    else
    {
      v10 = -1;
    }
    v11 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v12 = v10 == 0;
    v4 = v18;
    if ( v12 )
    {
      v7 = i;
      v13 = 0;
      goto LABEL_14;
    }
  }
  v13 = -2147319765;
LABEL_14:
  if ( v13 < 0 )
  {
    CoTaskMemFree(a3);
  }
  else
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v7);
    (*(void (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v14 + 48LL))(v14, a3);
    v18 = v4;
    CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___(v15, &v18);
  }
  if ( v16 >= 0 )
    LeaveCriticalSection(v6);
}
