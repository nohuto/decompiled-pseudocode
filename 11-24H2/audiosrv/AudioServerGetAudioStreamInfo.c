/*
 * XREFs of AudioServerGetAudioStreamInfo @ 0x18010FB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800433B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18005292C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18005B74C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 */

__int64 __fastcall AudioServerGetAudioStreamInfo(_OWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4, char **a5, _QWORD *a6)
{
  __int128 v10; // xmm0
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdi
  char *v14; // rax
  char *v15; // rbx
  int v16; // edi
  __int64 v17; // rdx
  unsigned __int16 *v18; // rdi
  void *v19; // rax
  void *v20; // rsi
  unsigned __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  char v23[16]; // [rsp+28h] [rbp-60h] BYREF
  char v24[16]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v23, a1);
  *a5 = 0LL;
  v10 = a1[16];
  v22 = 0LL;
  *(_OWORD *)a2 = v10;
  *(_OWORD *)(a2 + 16) = a1[17];
  *(_OWORD *)(a2 + 32) = a1[18];
  *(_OWORD *)(a2 + 48) = a1[19];
  *(_OWORD *)(a2 + 64) = a1[20];
  *(_OWORD *)(a2 + 80) = a1[21];
  *(_OWORD *)(a2 + 96) = a1[22];
  *(_OWORD *)(a2 + 112) = a1[23];
  *(_OWORD *)(a2 + 128) = a1[24];
  *(_OWORD *)(a2 + 144) = a1[25];
  *(_OWORD *)(a2 + 160) = a1[26];
  *(_QWORD *)(a2 + 176) = *((_QWORD *)a1 + 54);
  *(_OWORD *)(a2 + 72) = 0LL;
  *(_OWORD *)(a2 + 88) = 0LL;
  *(_OWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 120) = 0LL;
  *a3 = *((_QWORD *)a1 + 66);
  *a4 = *((_QWORD *)a1 + 67);
  v11 = StringCchLengthW(*((const unsigned __int16 **)a1 + 24), 260LL, &v22);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = v22;
    v14 = (char *)MIDL_user_allocate(2 * v22 + 2);
    v15 = v14;
    if ( v14 )
    {
      v16 = StringCchCopyW(v14, v13 + 1, *((char **)a1 + 24));
      if ( v16 >= 0 )
      {
        v18 = (unsigned __int16 *)*((_QWORD *)a1 + 19);
        v19 = MIDL_user_allocate(v18[8] + 18LL);
        v20 = v19;
        if ( v19 )
        {
          memcpy_0(v19, v18, v18[8] + 18LL);
          *a5 = v15;
          v12 = 0;
          *a6 = v20;
          goto LABEL_12;
        }
        v16 = -2147024882;
        v17 = 4735LL;
      }
      else
      {
        v17 = 4731LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v16);
      operator delete(v15);
    }
    else
    {
      v16 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1279,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007000ELL);
    }
    v12 = v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1276,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11);
  }
LABEL_12:
  EtwEventActivityIdControl(4LL, v24);
  return v12;
}
