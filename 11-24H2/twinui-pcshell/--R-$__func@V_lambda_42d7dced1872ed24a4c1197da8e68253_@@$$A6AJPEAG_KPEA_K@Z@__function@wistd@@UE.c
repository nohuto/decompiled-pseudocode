/*
 * XREFs of ??R?$__func@V_lambda_42d7dced1872ed24a4c1197da8e68253_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x1801C6B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_42d7dced1872ed24a4c1197da8e68253_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned __int64 **a4)
{
  unsigned __int64 *v4; // rdi
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  unsigned int v8; // ebx
  unsigned int PersistedRegistryLocationW; // eax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a4;
  v6 = *(_QWORD **)(a1 + 8);
  v7 = *(_QWORD **)(a1 + 16);
  v8 = 0;
  v13 = 0;
  PersistedRegistryLocationW = GetPersistedRegistryLocationW(*v7, *v6, *a2, *a3);
  v10 = 0LL;
  if ( PersistedRegistryLocationW != 234 )
    v10 = (const char *)PersistedRegistryLocationW;
  if ( (_DWORD)v10 )
    return (unsigned int)wil::details::in1diag3::Return_Win32(
                           retaddr,
                           (void *)0x1F,
                           (unsigned int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
                           v10,
                           (unsigned int)&v13);
  else
    *v4 = (unsigned __int64)v13 >> 1;
  return v8;
}
