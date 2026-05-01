/*
 * XREFs of _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x180089B20
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___::Run @ 0x1802279A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___--Run.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18008A064 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()(unsigned __int8 *a1)
{
  __int64 v2; // rdi
  enum _TABLETMODESTATE *v3; // rdx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // edx
  const wchar_t *v10; // rcx
  unsigned int i; // ebx
  __int64 v12; // rcx
  void *v13; // rcx
  char *v14; // [rsp+28h] [rbp-69h]
  unsigned int v15; // [rsp+38h] [rbp-59h] BYREF
  __int64 v16; // [rsp+40h] [rbp-51h] BYREF
  int v17; // [rsp+48h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-41h] BYREF
  int v19; // [rsp+58h] [rbp-39h] BYREF
  int v20; // [rsp+60h] [rbp-31h] BYREF
  char v21; // [rsp+68h] [rbp-29h] BYREF
  const wchar_t *v22; // [rsp+78h] [rbp-19h]
  int v23; // [rsp+80h] [rbp-11h]
  int v24; // [rsp+84h] [rbp-Dh]
  int *v25; // [rsp+88h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp-1h]
  int *v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  __int64 *v29; // [rsp+A8h] [rbp+17h]
  __int64 v30; // [rsp+B0h] [rbp+1Fh]

  pv = 0LL;
  v2 = *(_QWORD *)a1;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 32LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    &pv);
  v4 = 0LL;
  if ( *(_QWORD *)(v2 + 16) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(v2 + 8);
      v17 = 0;
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v17, v3);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        {
          LODWORD(v16) = v17;
          v20 = a1[8];
          v19 = *(_DWORD *)(v5 + v6);
          if ( pv )
          {
            v8 = -1LL;
            do
              ++v8;
            while ( *((_WORD *)pv + v8) );
            v9 = 2 * v8 + 2;
          }
          else
          {
            v9 = 10;
          }
          v10 = L"NULL";
          if ( pv )
            v10 = (const wchar_t *)pv;
          v22 = v10;
          v23 = v9;
          v24 = 0;
          v25 = &v19;
          v26 = 4LL;
          v27 = &v20;
          v28 = 4LL;
          v29 = &v16;
          v30 = 4LL;
          v14 = &v21;
          McGenEventWrite_EventWriteTransfer(
            &MICROSOFT_TWINUI_PUBLISHER_Context,
            &ImmersiveShell_AppManager_ApplicationStateChanged,
            v7,
            5LL);
        }
      }
      v15 = 0;
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v2 + 32) + 24LL))(*(_QWORD *)(v2 + 32), &v15) >= 0 )
      {
        for ( i = 0; i < v15; ++i )
        {
          v16 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *, char *))(**(_QWORD **)(v2 + 32) + 32LL))(
                 *(_QWORD *)(v2 + 32),
                 i,
                 &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060,
                 &v16,
                 v14) >= 0 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
              v16,
              *(_QWORD *)(v2 + 24),
              *(unsigned int *)(v5 + v6),
              *(_QWORD *)(v5 + v6 + 8));
          v12 = v16;
          if ( v16 )
          {
            v16 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
      }
      ++v4;
      v5 += 16LL;
    }
    while ( v4 < *(_QWORD *)(v2 + 16) );
  }
  v13 = pv;
  pv = 0LL;
  CoTaskMemFree(v13);
}
