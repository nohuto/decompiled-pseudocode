/*
 * XREFs of _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x1800898D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___::Run @ 0x1802203B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___--Run.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_57bd800a23f6990551f71dd05caf20c5_::operator()(__int64 *a1)
{
  __int64 result; // rax
  unsigned int *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int i; // ebx
  __int64 v6; // rcx
  _BYTE *v7; // [rsp+28h] [rbp-19h]
  unsigned int v8; // [rsp+38h] [rbp-9h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-1h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+7h] BYREF
  __int64 v11; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v12[16]; // [rsp+58h] [rbp+17h] BYREF
  unsigned int *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  unsigned int *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]

  result = *a1;
  v2 = *(unsigned int **)(*a1 + 8);
  v10 = 0;
  v3 = *((_QWORD *)v2 + 1);
  if ( v3 )
  {
    result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 24LL))(v3, &v10);
    if ( (int)result >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        v8 = *v2;
        v9 = v2[1];
        v13 = &v9;
        v14 = 4;
        v15 = 0;
        v16 = &v8;
        v17 = 4;
        v18 = 0;
        v7 = v12;
        result = McGenEventWrite_EventWriteTransfer(
                   &MICROSOFT_TWINUI_PUBLISHER_Context,
                   &ImmersiveShell_AppManager_ZbandChange_Start,
                   v4,
                   3LL);
      }
      for ( i = 0; i < v10; ++i )
      {
        v11 = 0LL;
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *, _BYTE *))(**((_QWORD **)v2 + 1) + 32LL))(
                   *((_QWORD *)v2 + 1),
                   i,
                   &GUID_0c40987c_7026_499e_adad_c164c0ffee84,
                   &v11,
                   v7);
        if ( (int)result >= 0 )
        {
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          {
            v8 = i;
            v13 = &v8;
            v14 = 4;
            v15 = 0;
            v7 = v12;
            McGenEventWrite_EventWriteTransfer(
              &MICROSOFT_TWINUI_PUBLISHER_Context,
              &ImmersiveShell_AppManager_ZbandChanged_Start,
              v4,
              2LL);
          }
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, v2[1], *v2);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          {
            v9 = result;
            v8 = i;
            v13 = &v8;
            v14 = 4;
            v15 = 0;
            v16 = &v9;
            v17 = 4;
            v18 = 0;
            v7 = v12;
            result = McGenEventWrite_EventWriteTransfer(
                       &MICROSOFT_TWINUI_PUBLISHER_Context,
                       &ImmersiveShell_AppManager_ZbandChanged_Stop,
                       v4,
                       3LL);
          }
        }
        v6 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        v9 = *v2;
        v8 = v2[1];
        v13 = &v8;
        v14 = 4;
        v15 = 0;
        v16 = &v9;
        v17 = 4;
        v18 = 0;
        return McGenEventWrite_EventWriteTransfer(
                 &MICROSOFT_TWINUI_PUBLISHER_Context,
                 &ImmersiveShell_AppManager_ZbandChange_Stop,
                 v4,
                 3LL);
      }
    }
  }
  return result;
}
