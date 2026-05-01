/*
 * XREFs of _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x1800149CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___::Run @ 0x180069A90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0zqtq_EventWriteTransfer @ 0x180042BF8 (McTemplateU0zqtq_EventWriteTransfer.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x1800F43D8 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()(char *a1)
{
  enum _TABLETMODESTATE *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r13
  int v7; // edx
  unsigned int i; // r14d
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rbx
  void *v11; // rcx
  int v12; // [rsp+80h] [rbp+48h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+50h] BYREF
  __int64 v14; // [rsp+90h] [rbp+58h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+60h] BYREF

  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 32LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    &pv);
  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(v4 + 8);
      v12 = 0;
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v12, v2);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0zqtq_EventWriteTransfer((unsigned __int8)a1[8], v7, (_DWORD)pv, *(_DWORD *)(v5 + v6), a1[8], v12);
      }
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 32LL),
             &v13) >= 0 )
      {
        for ( i = 0; i < v13; ++i )
        {
          v14 = 0LL;
          v9 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
          v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v9 + 32LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
          if ( v10(v9, i, &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060, &v14) >= 0 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
              v14,
              *(_QWORD *)(*(_QWORD *)a1 + 24LL),
              *(unsigned int *)(v5 + v6),
              *(_QWORD *)(v5 + v6 + 8));
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        }
      }
      ++v3;
      v5 += 16LL;
      v4 = *(_QWORD *)a1;
    }
    while ( v3 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) );
  }
  v11 = pv;
  pv = 0LL;
  CoTaskMemFree(v11);
}
