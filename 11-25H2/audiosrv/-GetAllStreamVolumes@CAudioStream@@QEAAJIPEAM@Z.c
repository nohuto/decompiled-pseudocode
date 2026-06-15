/*
 * XREFs of ?GetAllStreamVolumes@CAudioStream@@QEAAJIPEAM@Z @ 0x180071948
 * Callers:
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180071860 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::GetAllStreamVolumes(CAudioStream *this, unsigned int a2, float *a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  if ( a2 == *((_DWORD *)this + 24) )
  {
    v6 = 0LL;
    if ( (_DWORD)v4 )
    {
      v7 = v4;
      do
      {
        a3[v6] = *(float *)(v6 * 4 + *((_QWORD *)this + 15));
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x341,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
