/*
 * XREFs of ?SubMixDescriptorFromProcessSubmixDescriptor@@YAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14003E330
 * Callers:
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x14003E250 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SubMixDescriptorFromProcessSubmixDescriptor(
        struct PROCESS_SUBMIX_DESCRIPTOR *a1,
        enum PIPE_TYPE a2,
        struct SUBMIX_DESCRIPTOR *a3)
{
  unsigned int v4; // r9d
  bool v5; // zf
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a1 + 21) > 5u )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v4 = 0;
    *(_DWORD *)a3 = *(_DWORD *)a1;
    *((_DWORD *)a3 + 1) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a3 + 2) = 3;
    v5 = *((_DWORD *)a1 + 6) == 0;
    *((_BYTE *)a3 + 13) = 0;
    *((_BYTE *)a3 + 12) = !v5;
    *((_QWORD *)a3 + 4) = *((_QWORD *)a1 + 4);
    *((_DWORD *)a3 + 4) = *((_DWORD *)a1 + 2);
    *((_QWORD *)a3 + 3) = *((_QWORD *)a1 + 2);
    *((_DWORD *)a3 + 10) = *((_DWORD *)a1 + 10);
    *((_QWORD *)a3 + 6) = *((_QWORD *)a1 + 6);
    *((_QWORD *)a3 + 7) = *((_QWORD *)a1 + 7);
    *((_DWORD *)a3 + 16) = *((_DWORD *)a1 + 16);
    *(_OWORD *)((char *)a3 + 68) = *(_OWORD *)((char *)a1 + 68);
    v6 = *((_DWORD *)a1 + 21);
    *((_DWORD *)a3 + 23) = v6;
    *((_WORD *)a3 + 42) = 257;
    *((_BYTE *)a3 + 86) = 0;
    if ( v6 )
    {
      do
      {
        v8 = 2LL * v4;
        v9 = v4++ + 6LL;
        *((_OWORD *)a3 + v9) = *(_OWORD *)((char *)a1 + 8 * v8 + 88);
      }
      while ( v4 < *((_DWORD *)a3 + 23) );
    }
    return 0LL;
  }
}
