/*
 * XREFs of ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800CA2BC
 * Callers:
 *     ?SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z @ 0x180107570 (-SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x18005D740 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x1800A6210 (-ValidateAudioLevel@@YA_NM@Z.c)
 */

__int64 __fastcall CAudioStream::SetAllInitialStreamVolumes(
        CAudioStream *this,
        unsigned int a2,
        const float *a3,
        __int64 a4)
{
  __int64 v5; // r10
  CAudioStream *v6; // r11
  __int64 v7; // rdx
  __int64 v9; // rdx
  unsigned int i; // ecx
  int v11; // ecx
  __int64 v12; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a2;
  v6 = this;
  if ( a2 == *((_DWORD *)this + 24) )
  {
    v9 = 0LL;
    for ( i = 0; i < (unsigned int)v5; i = v11 + 1 )
    {
      if ( !ValidateAudioLevel(a3[i]) )
      {
        v7 = 891LL;
        goto LABEL_3;
      }
    }
    if ( (_DWORD)v5 )
    {
      v12 = v5;
      do
      {
        *(float *)(v9 * 4 + *((_QWORD *)v6 + 15)) = a3[v9];
        ++v9;
        --v12;
      }
      while ( v12 );
    }
    CAudioStream::RecalculateVolume(v6, 1, a4);
    return 0LL;
  }
  else
  {
    v7 = 887LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
