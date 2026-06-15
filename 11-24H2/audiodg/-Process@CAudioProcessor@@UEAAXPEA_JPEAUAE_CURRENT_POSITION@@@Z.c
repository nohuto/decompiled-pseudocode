/*
 * XREFs of ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14000F620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIAudioEndpointLastBufferControl@@@ATL@@QEAA@XZ @ 0x14000FDC0 (--1-$CComPtrBase@UIAudioEndpointLastBufferControl@@@ATL@@QEAA@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDE8 (McGenEventWrite_EventWriteTransfer.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioProcessor::Process(unsigned __int64 this, __int64 *a2, struct AE_CURRENT_POSITION *a3)
{
  unsigned __int64 v5; // r9
  _QWORD *v6; // r15
  _QWORD *v7; // rax
  char *v8; // r8
  _QWORD *v9; // rdx
  _QWORD *k; // r14
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned __int64 v15; // r14
  int v16; // r15d
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  unsigned int v21; // eax
  int v22; // edx
  unsigned __int64 m; // rcx
  unsigned __int64 n; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  _QWORD *i; // rdi
  __int64 v35; // rbx
  _QWORD *v36; // rdi
  __int64 v37; // rbx
  unsigned __int64 v38; // r14
  int v39; // eax
  unsigned __int64 v40; // rdx
  _QWORD *j; // rdi
  __int64 v42; // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  int v45; // eax
  __int64 v46; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v47; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v48[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v49; // [rsp+50h] [rbp-30h]
  __int64 v50; // [rsp+58h] [rbp-28h]
  __int64 v51; // [rsp+60h] [rbp-20h]
  __int64 v52; // [rsp+68h] [rbp-18h]

  v5 = this;
  v6 = *(_QWORD **)(this + 808);
  v47 = v6;
  if ( v6[8] )
  {
    v7 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(this + 312), 0LL);
    v8 = (char *)(this + 320);
    *(_QWORD *)(this + 320) = v7;
    v9 = (_QWORD *)*v7;
    if ( *v7 )
    {
      do
      {
        this = v9[2];
        v9 = (_QWORD *)*v9;
        *(_DWORD *)(*(_QWORD *)(this + 104) + 12LL) = 0;
        *(_DWORD *)(*(_QWORD *)(this + 104) + 32LL) = 0;
      }
      while ( v9 );
    }
  }
  else
  {
    if ( !v6[14] )
      return;
    v43 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(this + 312), 0LL);
    v8 = (char *)(this + 320);
    *(_QWORD *)(this + 320) = v43;
    v44 = (_QWORD *)*v43;
    if ( *v43 )
    {
      do
      {
        this = v44[2];
        v44 = (_QWORD *)*v44;
        *(_DWORD *)(*(_QWORD *)(this + 104) + 12LL) = 2;
        *(_DWORD *)(*(_QWORD *)(this + 104) + 32LL) = 0;
      }
      while ( v44 );
    }
  }
  _InterlockedExchange64((volatile __int64 *)(v5 + 312), *(_QWORD *)v8);
  *(_QWORD *)v8 = 0LL;
  if ( *(_DWORD *)(v5 + 72) )
  {
    for ( i = (_QWORD *)v6[6]; i; *(_QWORD *)(*(_QWORD *)(v35 + 104) + 24LL) = a3->hnsQPCPosition )
    {
      v35 = i[2];
      i = (_QWORD *)*i;
      *(_DWORD *)(*(_QWORD *)(v35 + 104) + 8LL) = (int)(*(float *)(v35 + 52) * (double)(int)*a2 / 10000000.0 + 0.5);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v35 + 120) + 24LL))(
        *(_QWORD *)(v35 + 120),
        *(_QWORD *)(v35 + 104),
        0LL);
    }
    v36 = (_QWORD *)*v6;
    if ( *v6 )
    {
      while ( 1 )
      {
        v37 = v36[2];
        v36 = (_QWORD *)*v36;
        v38 = *(_QWORD *)(v37 + 224);
        if ( v38 )
        {
          if ( *(_QWORD *)(v37 + 192) )
            break;
        }
LABEL_65:
        if ( !v36 )
          goto LABEL_66;
      }
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v37 + 8) + 40LL))(
              *(_QWORD *)(v37 + 8),
              *(unsigned int *)(**(_QWORD **)(v37 + 184) + 8LL));
      v40 = 0LL;
      while ( v40 < *(_QWORD *)(v37 + 224) )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 216) + 8 * v40++) + 8LL) = v39;
        if ( v40 >= v38 )
          goto LABEL_65;
      }
LABEL_56:
      ATL::AtlThrowImpl(-2147024809);
    }
LABEL_66:
    for ( j = (_QWORD *)v6[12];
          j;
          **(_QWORD **)(v42 + 104) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct AE_CURRENT_POSITION *))(**(_QWORD **)(v42 + 128) + 24LL))(
                                       *(_QWORD *)(v42 + 128),
                                       *(unsigned int *)(*(_QWORD *)(v42 + 104) + 8LL),
                                       a3) )
    {
      v42 = j[2];
      j = (_QWORD *)*j;
    }
  }
  else
  {
    for ( k = (_QWORD *)v6[12]; k; *(_QWORD *)(this + 24) = a3->hnsQPCPosition )
    {
      v11 = k[2];
      k = (_QWORD *)*k;
      v12 = (int)(*(float *)(v11 + 52) * (double)(int)*a2 / 10000000.0 + 0.5);
      **(_QWORD **)(v11 + 104) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct AE_CURRENT_POSITION *))(**(_QWORD **)(v11 + 128) + 24LL))(
                                   *(_QWORD *)(v11 + 128),
                                   v12,
                                   a3);
      *(_DWORD *)(*(_QWORD *)(v11 + 104) + 8LL) = v12;
      this = *(_QWORD *)(v11 + 104);
    }
    v13 = v6[1];
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 + 16);
        v13 = *(_QWORD *)(v13 + 8);
        v15 = *(_QWORD *)(v14 + 192);
        if ( v15 )
        {
          if ( *(_QWORD *)(v14 + 224) )
            break;
        }
LABEL_18:
        if ( !v13 )
        {
          v6 = v47;
          goto LABEL_20;
        }
      }
      if ( (byte_1400C4541 & 4) != 0 )
      {
        v46 = *(_QWORD *)(v14 + 8);
        v49 = &v46;
        v50 = 8LL;
        v51 = v14 + 312;
        v52 = 16LL;
        McGenEventWrite_EventWriteTransfer(this, &AudioCore_APO_CalcInputFrames_Start, v8, 3LL, v48);
      }
      if ( *(_QWORD *)(v14 + 224) )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 8) + 32LL))(
                *(_QWORD *)(v14 + 8),
                *(unsigned int *)(**(_QWORD **)(v14 + 216) + 8LL));
        if ( (byte_1400C4541 & 4) != 0 )
        {
          v46 = *(_QWORD *)(v14 + 8);
          v49 = &v46;
          v50 = 8LL;
          v51 = v14 + 312;
          v52 = 16LL;
          McGenEventWrite_EventWriteTransfer(v14 + 312, &AudioCore_APO_CalcInputFrames_Stop, v8, 3LL, v48);
        }
        this = 0LL;
        while ( this < *(_QWORD *)(v14 + 192) )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 184) + 8 * this++) + 8LL) = v16;
          if ( this >= v15 )
            goto LABEL_18;
        }
      }
      goto LABEL_56;
    }
LABEL_20:
    v17 = (_QWORD *)v6[6];
    while ( v17 )
    {
      v18 = v17[2];
      v17 = (_QWORD *)*v17;
      *(_DWORD *)(*(_QWORD *)(v18 + 104) + 16LL) = 1094930515;
      (*(void (__fastcall **)(_QWORD, _QWORD, struct AE_CURRENT_POSITION *))(**(_QWORD **)(v18 + 120) + 24LL))(
        *(_QWORD *)(v18 + 120),
        *(_QWORD *)(v18 + 104),
        a3);
    }
  }
  v19 = (_QWORD *)*v6;
  if ( *v6 )
  {
    while ( 1 )
    {
      v20 = v19[2];
      v19 = (_QWORD *)*v19;
      v21 = *(_DWORD *)(v20 + 440);
      if ( v21 >= 0x7FFFFFFF )
      {
        v22 = 1094930505;
      }
      else
      {
        v22 = 1094930515;
        if ( v21 >= 2 )
          v22 = 1094930482;
      }
      for ( m = 0LL; m < *(_QWORD *)(v20 + 192); ++m )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 184) + 8 * m) + 16LL) = v22;
      for ( n = 0LL; n < *(_QWORD *)(v20 + 224); ++n )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 216) + 8 * n) + 16LL) = v22;
      if ( (byte_1400C4541 & 4) != 0 )
      {
        v47 = *(_QWORD **)(v20 + 8);
        v49 = (__int64 *)&v47;
        v50 = 8LL;
        v51 = v20 + 312;
        v52 = 16LL;
        McGenEventWrite_EventWriteTransfer(n, &AudioCore_APO_Process_Start, v8, 3LL, v48);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v20 + 8) + 24LL))(
        *(_QWORD *)(v20 + 8),
        *(unsigned int *)(v20 + 192),
        *(_QWORD *)(v20 + 184),
        *(unsigned int *)(v20 + 224),
        *(_QWORD *)(v20 + 216));
      v26 = *(_QWORD *)(v20 + 192);
      if ( v26 >= *(_QWORD *)(v20 + 224) )
        v26 = *(_QWORD *)(v20 + 224);
      v27 = 0LL;
      if ( v26 )
        break;
LABEL_42:
      if ( (byte_1400C4541 & 4) != 0 )
      {
        v47 = *(_QWORD **)(v20 + 8);
        v49 = (__int64 *)&v47;
        v50 = 8LL;
        v51 = v20 + 312;
        v52 = 16LL;
        McGenEventWrite_EventWriteTransfer(v25, &AudioCore_APO_Process_Stop, v8, 3LL, v48);
      }
      if ( !v19 )
        goto LABEL_45;
    }
    while ( v27 < *(_QWORD *)(v20 + 192) )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 184) + 8 * v27) + 24LL);
      if ( v27 >= *(_QWORD *)(v20 + 224) )
        break;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 216) + 8 * v27) + 24LL) = v25;
      if ( v27 >= *(_QWORD *)(v20 + 224) )
        break;
      v8 = *(char **)(*(_QWORD *)(v20 + 216) + 8 * v27);
      if ( !*((_DWORD *)v8 + 8) )
      {
        if ( v27 >= *(_QWORD *)(v20 + 192) )
          goto LABEL_56;
        v25 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v20 + 184) + 8 * v27) + 32LL);
        *((_DWORD *)v8 + 8) = v25;
      }
      if ( ++v27 >= v26 )
        goto LABEL_42;
    }
    goto LABEL_56;
  }
LABEL_45:
  v28 = (_QWORD *)v6[12];
  while ( v28 )
  {
    v46 = 0LL;
    v29 = v28[2];
    v28 = (_QWORD *)*v28;
    if ( *(_DWORD *)(*(_QWORD *)(v29 + 104) + 8LL) >= (unsigned int)(int)(*(float *)(v29 + 52)
                                                                        * (double)(int)*a2
                                                                        / 10000000.0
                                                                        + 0.5)
      || (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v29 + 128))(
           *(_QWORD *)(v29 + 128),
           &GUID_f8520dd3_8f9d_4437_9861_62f584c33dd6,
           &v46) < 0
      || !v46
      || (v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 24LL))(v46), v30 = v46, !v45) )
    {
      v30 = *(_QWORD *)(v29 + 128);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 32LL))(v30, *(_QWORD *)(v29 + 104));
    v31 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    ATL::CComPtrBase<IAudioEndpointLastBufferControl>::~CComPtrBase<IAudioEndpointLastBufferControl>(&v46);
  }
  v32 = (_QWORD *)v6[6];
  while ( v32 )
  {
    v33 = v32[2];
    v32 = (_QWORD *)*v32;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v33 + 120) + 32LL))(
      *(_QWORD *)(v33 + 120),
      *(unsigned int *)(*(_QWORD *)(v33 + 104) + 8LL),
      **(_QWORD **)(v33 + 104));
  }
}
