/*
 * XREFs of ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@0@Z @ 0x18010F1C0
 * Callers:
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18010F338 (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18009EACC (--$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@V?$CCrossProcessClientMemory@UControlData_V0@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x180165790 (--$MakeAndInitialize@V-$CCrossProcessClientMemory@UControlData_V0@@@@UICrossProcessMemory@@$$V@D.c)
 *     ??$MakeAndInitialize@V?$CCrossProcessClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x180165830 (--$MakeAndInitialize@V-$CCrossProcessClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V@D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemAudioStream::move_from_blob(
        struct CP_MEMORY_METADATA_BLOB *a1,
        unsigned int a2,
        struct ICrossProcessMemory **a3,
        struct CP_MEMORY_METADATA_BLOB *a4)
{
  __int64 v6; // r10
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  struct CP_MEMORY_METADATA_BLOB *v13; // rax
  __int128 v14; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 2LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( a2 >= 2 )
    {
      v7 = -2147024809;
      v8 = 100LL;
      v9 = 2147942487LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
        (const char *)v9);
      v11 = 114LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v10 = ((__int64 (__fastcall *)(struct ICrossProcessMemory **, __int64 (__fastcall **)(), struct ICrossProcessMemory **, struct CP_MEMORY_METADATA_BLOB *))funcs_18010F207[a2])(
            a3,
            funcs_18010F207,
            a3,
            a4);
    v7 = v10;
    if ( v10 < 0 )
    {
      v9 = (unsigned int)v10;
      v8 = 101LL;
      goto LABEL_6;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CP_MEMORY_METADATA_BLOB *))(*(_QWORD *)*a3 + 24LL))(*a3, a1);
    if ( v7 < 0 )
    {
      v11 = 115LL;
      goto LABEL_7;
    }
  }
  else if ( *(_DWORD *)a1 == 2 )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessKSMemory,ICrossProcessMemory,>((volatile signed __int32 **)a3);
    if ( v7 < 0 )
    {
      v11 = 120LL;
      goto LABEL_7;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CP_MEMORY_METADATA_BLOB *))(*(_QWORD *)*a3 + 24LL))(*a3, a1);
    if ( v7 < 0 )
    {
      v11 = 121LL;
      goto LABEL_7;
    }
  }
  else
  {
    v13 = a1;
    do
    {
      *(_OWORD *)a4 = *(_OWORD *)v13;
      *((_OWORD *)a4 + 1) = *((_OWORD *)v13 + 1);
      *((_OWORD *)a4 + 2) = *((_OWORD *)v13 + 2);
      *((_OWORD *)a4 + 3) = *((_OWORD *)v13 + 3);
      *((_OWORD *)a4 + 4) = *((_OWORD *)v13 + 4);
      *((_OWORD *)a4 + 5) = *((_OWORD *)v13 + 5);
      *((_OWORD *)a4 + 6) = *((_OWORD *)v13 + 6);
      a4 = (struct CP_MEMORY_METADATA_BLOB *)((char *)a4 + 128);
      v14 = *((_OWORD *)v13 + 7);
      v13 = (struct CP_MEMORY_METADATA_BLOB *)((char *)v13 + 128);
      *((_OWORD *)a4 - 1) = v14;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)a4 = *(_OWORD *)v13;
    *((_OWORD *)a4 + 1) = *((_OWORD *)v13 + 1);
    *((_QWORD *)a4 + 4) = *((_QWORD *)v13 + 4);
  }
  *(_DWORD *)a1 = 0;
  return 0LL;
}
