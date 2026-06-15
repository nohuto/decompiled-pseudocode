/*
 * XREFs of ?move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180050F78
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180080980 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemAudioStream::move_to(SystemAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2)
{
  __int64 v2; // rbp
  _OWORD *v5; // rdx
  __int64 v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rcx
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int64 v27; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 2LL;
  v5 = (_OWORD *)((char *)a2 + 640);
  v6 = *((_QWORD *)this + 82);
  if ( v6 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v6 + 32LL))(v6, v5);
    if ( v21 < 0 )
    {
      v22 = 155LL;
      goto LABEL_16;
    }
  }
  else
  {
    v7 = (_OWORD *)((char *)this + 664);
    v8 = 2LL;
    do
    {
      *v5 = *v7;
      v5[1] = v7[1];
      v5[2] = v7[2];
      v5[3] = v7[3];
      v5[4] = v7[4];
      v5[5] = v7[5];
      v5[6] = v7[6];
      v5 += 8;
      v9 = v7[7];
      v7 += 8;
      *(v5 - 1) = v9;
      --v8;
    }
    while ( v8 );
    *v5 = *v7;
    v5[1] = v7[1];
    *((_QWORD *)v5 + 4) = *((_QWORD *)v7 + 4);
  }
  v10 = *((_QWORD *)this + 44);
  if ( v10 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 32LL))(v10, (char *)a2 + 344);
    if ( v21 < 0 )
    {
      v22 = 164LL;
      goto LABEL_16;
    }
  }
  else
  {
    v11 = (_OWORD *)((char *)a2 + 344);
    v12 = 2LL;
    v13 = (_OWORD *)((char *)this + 360);
    do
    {
      *v11 = *v13;
      v11[1] = v13[1];
      v11[2] = v13[2];
      v11[3] = v13[3];
      v11[4] = v13[4];
      v11[5] = v13[5];
      v11[6] = v13[6];
      v11 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v11 - 1) = v14;
      --v12;
    }
    while ( v12 );
    *v11 = *v13;
    v11[1] = v13[1];
    *((_QWORD *)v11 + 4) = *((_QWORD *)v13 + 4);
  }
  v15 = *((_QWORD *)this + 6);
  if ( v15 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 32LL))(v15, (char *)a2 + 48);
    if ( v21 < 0 )
    {
      v22 = 173LL;
      goto LABEL_16;
    }
  }
  else
  {
    v16 = (_OWORD *)((char *)a2 + 48);
    v17 = 2LL;
    v18 = (_OWORD *)((char *)this + 56);
    do
    {
      *v16 = *v18;
      v16[1] = v18[1];
      v16[2] = v18[2];
      v16[3] = v18[3];
      v16[4] = v18[4];
      v16[5] = v18[5];
      v16[6] = v18[6];
      v16 += 8;
      v19 = v18[7];
      v18 += 8;
      *(v16 - 1) = v19;
      --v17;
    }
    while ( v17 );
    *v16 = *v18;
    v16[1] = v18[1];
    *((_QWORD *)v16 + 4) = *((_QWORD *)v18 + 4);
  }
  v20 = *((_QWORD *)this + 121);
  if ( v20 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 40LL))(v20, (char *)a2 + 944);
    if ( v21 < 0 )
    {
      v22 = 182LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v21);
      return (unsigned int)v21;
    }
  }
  else
  {
    v24 = (_OWORD *)((char *)a2 + 944);
    v25 = (_OWORD *)((char *)this + 976);
    do
    {
      *v24 = *v25;
      v24[1] = v25[1];
      v24[2] = v25[2];
      v24[3] = v25[3];
      v24[4] = v25[4];
      v24[5] = v25[5];
      v24[6] = v25[6];
      v24 += 8;
      v26 = v25[7];
      v25 += 8;
      *(v24 - 1) = v26;
      --v2;
    }
    while ( v2 );
    *v24 = *v25;
    v24[1] = v25[1];
    *((_QWORD *)v24 + 4) = *((_QWORD *)v25 + 4);
  }
  *(_OWORD *)a2 = *(_OWORD *)this;
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 4);
  v27 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)a2 + 3) = v27;
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 4);
  *((_DWORD *)a2 + 234) = *((_DWORD *)this + 240);
  *((_DWORD *)a2 + 310) = *((_DWORD *)this + 318);
  *((_DWORD *)a2 + 311) = *((_DWORD *)this + 319);
  *((_DWORD *)a2 + 312) = *((_DWORD *)this + 320);
  *((_DWORD *)a2 + 313) = *((_DWORD *)this + 321);
  return 0LL;
}
