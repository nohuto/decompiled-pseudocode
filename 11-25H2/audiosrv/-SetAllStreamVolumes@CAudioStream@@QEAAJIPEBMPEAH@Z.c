/*
 * XREFs of ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x18005D670
 * Callers:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x18005D570 (-SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x18005D740 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x1800A6210 (-ValidateAudioLevel@@YA_NM@Z.c)
 */

__int64 __fastcall CAudioStream::SetAllStreamVolumes(CAudioStream *this, unsigned int a2, const float *a3, int *a4)
{
  CAudioStream *v5; // r10
  int v6; // ebx
  unsigned int i; // ecx
  int v8; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  float v13; // xmm1_4
  __int64 v14; // rdx
  int v15; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = this;
  if ( a2 == *((_DWORD *)this + 24) )
  {
    v6 = 0;
    for ( i = 0; i < a2; i = v15 + 1 )
    {
      if ( !ValidateAudioLevel(a3[i]) )
      {
        v14 = 853LL;
        goto LABEL_15;
      }
    }
    v8 = 0;
    if ( a2 )
    {
      v10 = 0LL;
      v11 = a2;
      do
      {
        v12 = *((_QWORD *)v5 + 15);
        v13 = a3[v10];
        if ( *(float *)(v10 * 4 + v12) != v13 )
        {
          *(float *)(v10 * 4 + v12) = v13;
          ++v8;
        }
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    CAudioStream::RecalculateVolume(v5, 0, 0LL);
    if ( a4 )
    {
      LOBYTE(v6) = v8 == 0;
      *a4 = v6;
    }
    return 0LL;
  }
  else
  {
    v14 = 849LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
