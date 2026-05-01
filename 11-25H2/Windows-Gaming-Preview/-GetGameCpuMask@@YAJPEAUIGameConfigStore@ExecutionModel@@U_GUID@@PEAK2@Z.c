/*
 * XREFs of ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x1800145C8
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037464 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetGameCpuMask(
        struct ExecutionModel::IGameConfigStore *a1,
        struct _GUID *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  signed int LastError; // eax
  signed int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 (__fastcall *v14)(struct ExecutionModel::IGameConfigStore *, __int128 *, __int64, unsigned int *, int *); // rax
  int v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-1Ch]
  __int128 v18; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0;
  v17 = 0;
  if ( !GetActiveProcessorCount(0xFFFFu) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      return (unsigned int)v9;
    v10 = 348LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = *(_QWORD *)a1;
  v13 = (__int128)*a2;
  v15 = 8;
  v14 = *(__int64 (__fastcall **)(struct ExecutionModel::IGameConfigStore *, __int128 *, __int64, unsigned int *, int *))(v12 + 64);
  v18 = v13;
  v9 = v14(a1, &v18, 18LL, &v16, &v15);
  if ( v9 < 0 )
  {
    v10 = 352LL;
    goto LABEL_6;
  }
  *a3 = v16;
  *a4 = v17;
  return 0LL;
}
