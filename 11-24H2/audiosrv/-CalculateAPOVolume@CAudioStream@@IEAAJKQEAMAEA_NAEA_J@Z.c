/*
 * XREFs of ?CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z @ 0x18004E444
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180021574 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18004E61C (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 */

__int64 __fastcall CAudioStream::CalculateAPOVolume(
        CAudioStream *this,
        __int64 a2,
        float *const a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v6; // r10
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  float *v11; // rdi
  __int64 v12; // rbp
  double *v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rdx
  float v16; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (unsigned int)a2;
  if ( (_DWORD)a2 == *((_DWORD *)this + 24) )
  {
    if ( (_DWORD)a2 )
    {
      v8 = 0LL;
      a2 = (unsigned int)a2;
      do
      {
        a3[v8] = *(float *)(*((_QWORD *)this + 15) + v8 * 4) * *((float *)this + 26);
        ++v8;
        --a2;
      }
      while ( a2 );
    }
    v9 = *((_QWORD *)this + 14);
    *a4 = *((_BYTE *)this + 552);
    v10 = *((_QWORD *)this + 68);
    if ( v9 >= v10 )
      v10 = v9;
    *a5 = v10;
    if ( (_DWORD)v6 )
    {
      v11 = a3;
      v12 = v6;
      do
      {
        v13 = (double *)*((_QWORD *)this + 70);
        v14 = *((_QWORD *)this + 67);
        v15 = (char *)v11 - (char *)a3;
        if ( v13 )
          v16 = CVolumeUnit::ScalarFromTaper(
                  (CVolumeUnit *)v13,
                  (float)(*(float *)(v14 + v15) * *v11) * (v13[4] - v13[3]) + v13[3]);
        else
          v16 = *(float *)(v14 + v15) * *v11;
        *v11++ = v16;
        --v12;
      }
      while ( v12 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x594,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
