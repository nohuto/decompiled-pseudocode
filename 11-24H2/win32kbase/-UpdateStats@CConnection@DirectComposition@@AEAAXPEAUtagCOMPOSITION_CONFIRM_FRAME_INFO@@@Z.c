/*
 * XREFs of ?UpdateStats@CConnection@DirectComposition@@AEAAXPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1400AAED4
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x140194600 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS_2@@@Z @ 0x1400AB5FC (-RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS_2@@@Z.c)
 *     ?DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z @ 0x1400AB6F4 (-DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CConnection::UpdateStats(
        DirectComposition::CConnection *this,
        struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2)
{
  char *v2; // rbx
  __int64 v5; // r13
  char v6; // si
  unsigned int v7; // r14d
  unsigned __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rbx
  unsigned int v11; // edx
  _QWORD *v12; // r9
  char v13; // r10
  unsigned int v14; // r12d
  char v15; // al
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r13d
  unsigned int v20; // eax
  unsigned int v21; // r10d
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // eax
  int v25; // r11d
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r13
  int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned int i; // ecx
  __int64 v33; // r8
  __int64 v34; // rax
  char *v35; // rbx
  char **v36; // r14
  char *v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  char *v43; // rax
  unsigned int v44; // r14d
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // eax
  unsigned int j; // ecx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  char *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r14
  unsigned int v56; // edx
  unsigned __int64 v57; // rdx
  char v58; // [rsp+28h] [rbp-39h]
  unsigned int v59; // [rsp+2Ch] [rbp-35h]
  __int64 v60; // [rsp+30h] [rbp-31h] BYREF
  __int64 v61; // [rsp+38h] [rbp-29h]
  _QWORD *v62; // [rsp+40h] [rbp-21h]
  __int64 v63; // [rsp+48h] [rbp-19h]
  int v64; // [rsp+50h] [rbp-11h] BYREF
  int v65; // [rsp+54h] [rbp-Dh]
  int v66; // [rsp+58h] [rbp-9h]
  int v67; // [rsp+5Ch] [rbp-5h]
  __int128 v68; // [rsp+60h] [rbp-1h]
  int v69; // [rsp+70h] [rbp+Fh] BYREF
  int v70; // [rsp+74h] [rbp+13h]
  int v71; // [rsp+78h] [rbp+17h]
  int v72; // [rsp+7Ch] [rbp+1Bh]
  __int128 v73; // [rsp+80h] [rbp+1Fh]

  v2 = (char *)this + 376;
  v5 = 0LL;
  v63 = 0LL;
  ExAcquirePushLockExclusiveEx((char *)this + 376, 0LL);
  v6 = 1;
  v2[8] = 1;
  v7 = 299;
  *((_QWORD *)this + 51) = *(_QWORD *)a2;
  v8 = *(_QWORD *)a2 % 0x12CuLL;
  *((_DWORD *)this + 98) = v8;
  if ( (_DWORD)v8 )
    v7 = v8 - 1;
  v9 = v7 == (_DWORD)v8;
  while ( 2 )
  {
    v59 = v7;
    if ( v9 )
      break;
    v10 = 528LL * v7;
    if ( *((_BYTE *)this + v10 + 424) )
      goto LABEL_41;
    v11 = *(_DWORD *)((char *)this + v10 + 428);
    v12 = (_QWORD *)((char *)this + v10 + 464);
    v58 = 0;
    v62 = v12;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( !v11 )
      goto LABEL_32;
    v16 = (__int64 *)((char *)this + v10 + 464);
    do
    {
      v17 = *v16;
      v18 = 120LL * v14;
      if ( *(_QWORD *)(v18 + *v16 + 40) )
      {
        v19 = *(_DWORD *)(v18 + v17 + 56);
        if ( v19 )
        {
          if ( !*(_DWORD *)(v18 + v17 + 88) )
          {
            v20 = *((_DWORD *)a2 + 10);
            v21 = 0;
            LODWORD(v61) = v20;
            while ( 1 )
            {
              if ( v21 >= v20 )
              {
                v26 = 0;
                goto LABEL_74;
              }
              v22 = *((_QWORD *)a2 + 6);
              v23 = 120LL * v21;
              if ( *(_DWORD *)(v18 + v17) == *(_DWORD *)(v23 + v22)
                && *(_DWORD *)(v18 + v17 + 4) == *(_DWORD *)(v23 + v22 + 4)
                && *(_DWORD *)(v18 + v17 + 8) == *(_DWORD *)(v23 + v22 + 8)
                && *(_DWORD *)(v18 + v17 + 12) == *(_DWORD *)(v23 + v22 + 12)
                && *(_DWORD *)(v18 + v17 + 16) == *(_DWORD *)(v23 + v22 + 16)
                && *(_DWORD *)(v18 + v17 + 20) == *(_DWORD *)(v23 + v22 + 20) )
              {
                v24 = *(_DWORD *)(v18 + v17 + 24);
                v25 = *(_DWORD *)(v23 + v22 + 24);
                if ( v24 == v25 || !v24 || !v25 )
                  break;
              }
              v20 = v61;
              ++v21;
            }
            v26 = 1;
            if ( v19 <= *(_DWORD *)(v23 + v22 + 88) )
            {
              v13 = 1;
              v58 = 1;
              *(_OWORD *)(v18 + v17 + 88) = *(_OWORD *)(v23 + v22 + 88);
              *(_OWORD *)(v18 + v17 + 104) = *(_OWORD *)(v23 + v22 + 104);
              goto LABEL_22;
            }
LABEL_74:
            v13 = v58;
LABEL_22:
            if ( !v14 && !*((_BYTE *)this + v10 + 425) )
            {
              if ( v13 )
              {
                v27 = *((_QWORD *)this + 24);
                v28 = *(_QWORD *)((char *)this + v10 + 432);
                v29 = *v16;
                v61 = v28;
                v60 = 0LL;
                if ( v27 )
                {
                  if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v27 + 32LL))(v27, v28, &v60) >= 0 )
                  {
                    v30 = *(_DWORD *)(v29 + 88);
                    v70 = *(_DWORD *)(v29 + 96);
                    v71 = v70;
                    v72 = 0;
                    v73 = *(unsigned __int64 *)(v29 + 112);
                    v65 = *(_DWORD *)(v29 + 92);
                    v66 = v65;
                    v67 = 0;
                    v31 = *(_QWORD *)(v29 + 104);
                    v69 = v30;
                    v64 = v30;
                    v68 = v31;
                    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v60 + 24LL))(v60, &v69, &v64);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
                    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 24) + 24LL))(
                      *((_QWORD *)this + 24),
                      v61);
                  }
LABEL_28:
                  v13 = v58;
                }
                *((_BYTE *)this + v10 + 425) = 1;
                goto LABEL_30;
              }
              if ( !v26 )
              {
                DirectComposition::CConnection::DiscardFrame(this, *(_QWORD *)((char *)this + v10 + 432));
                goto LABEL_28;
              }
            }
          }
        }
      }
LABEL_30:
      v11 = *(_DWORD *)((char *)this + v10 + 428);
      ++v14;
    }
    while ( v14 < v11 );
    v7 = v59;
    v15 = *((_BYTE *)this + v10 + 424);
    v12 = v62;
    v5 = v63;
LABEL_32:
    if ( v13 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= v11 )
        {
          v15 = 1;
          goto LABEL_38;
        }
        v33 = 120LL * i;
        v34 = *v12;
        if ( *(_QWORD *)(v33 + *v12 + 40) )
        {
          if ( *(_DWORD *)(v33 + v34 + 56) && !*(_DWORD *)(v33 + v34 + 88) )
            break;
        }
      }
      v15 = 0;
LABEL_38:
      *((_BYTE *)this + v10 + 424) = v15;
    }
    if ( !v15 )
    {
      v5 = *(_QWORD *)((char *)this + v10 + 432);
      v63 = v5;
    }
LABEL_41:
    if ( *(_QWORD *)((char *)this + v10 + 432) > *((_QWORD *)this + 52) )
    {
      if ( v7 )
        --v7;
      else
        v7 = 299;
      v9 = v7 == *((_DWORD *)this + 98);
      continue;
    }
    break;
  }
  v35 = (char *)this + 528 * *((unsigned int *)this + 98);
  if ( !v35[425] )
  {
    v57 = *((_QWORD *)v35 + 54);
    if ( v57 )
      DirectComposition::CConnection::DiscardFrame(this, v57);
  }
  v36 = (char **)(v35 + 464);
  v35[425] = 0;
  v37 = (char *)*((_QWORD *)v35 + 58);
  if ( v37 && v37 != v35 + 472 )
  {
    GreDeleteFastMutex(v37);
    *v36 = 0LL;
  }
  *((_QWORD *)v35 + 54) = *(_QWORD *)a2;
  *(_OWORD *)(v35 + 440) = *(_OWORD *)((char *)a2 + 8);
  *((_QWORD *)v35 + 57) = *((_QWORD *)a2 + 3);
  v38 = *((_DWORD *)a2 + 10);
  *((_DWORD *)v35 + 107) = v38;
  if ( v38 > 4 )
  {
    v43 = (char *)*((_QWORD *)a2 + 6);
  }
  else
  {
    v39 = 0;
    if ( v38 )
    {
      do
      {
        v40 = v39++;
        v41 = 120 * v40;
        v42 = *((_QWORD *)a2 + 6);
        *(_OWORD *)&v35[v41 + 472] = *(_OWORD *)(v41 + v42);
        *(_OWORD *)&v35[v41 + 488] = *(_OWORD *)(v41 + v42 + 16);
        *(_OWORD *)&v35[v41 + 504] = *(_OWORD *)(v41 + v42 + 32);
        *(_OWORD *)&v35[v41 + 520] = *(_OWORD *)(v41 + v42 + 48);
        *(_OWORD *)&v35[v41 + 536] = *(_OWORD *)(v41 + v42 + 64);
        *(_OWORD *)&v35[v41 + 552] = *(_OWORD *)(v41 + v42 + 80);
        *(_OWORD *)&v35[v41 + 568] = *(_OWORD *)(v41 + v42 + 96);
        *(_QWORD *)&v35[v41 + 584] = *(_QWORD *)(v41 + v42 + 112);
      }
      while ( v39 < *((_DWORD *)v35 + 107) );
    }
    v43 = v35 + 472;
    v36 = (char **)(v35 + 464);
  }
  *v36 = v43;
  v44 = 0;
  if ( !*((_DWORD *)v35 + 107) )
    goto LABEL_75;
  do
  {
    v45 = 120LL * v44;
    v46 = *((_QWORD *)v35 + 58);
    if ( *(_QWORD *)(v45 + v46 + 40) && (v56 = *(_DWORD *)(v45 + v46 + 56)) != 0 && v56 <= *(_DWORD *)(v45 + v46 + 88) )
    {
      if ( !v44 )
      {
        DirectComposition::CConnection::RetireFrame(
          this,
          *((_QWORD *)v35 + 54),
          (const struct tagCOMPOSITION_STATS_2 *)(v46 + 88));
        v35[425] = 1;
      }
    }
    else
    {
      *(_DWORD *)(v45 + v46 + 88) = 0;
      *(_DWORD *)(*((_QWORD *)v35 + 58) + v45 + 92) = 0;
      *(_DWORD *)(*((_QWORD *)v35 + 58) + v45 + 96) = 0;
      *(_QWORD *)(*((_QWORD *)v35 + 58) + v45 + 104) = 0LL;
    }
    v47 = *((_DWORD *)v35 + 107);
    ++v44;
  }
  while ( v44 < v47 );
  if ( !v47 || !*(_QWORD *)(*((_QWORD *)v35 + 58) + 40LL) )
  {
LABEL_75:
    v54 = *((_QWORD *)this + 24);
    v55 = *((_QWORD *)v35 + 54);
    v60 = 0LL;
    if ( v54 && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v54 + 32LL))(v54, v55, &v60) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24), v55);
    }
    v35[425] = 1;
  }
  for ( j = 0; j < *((_DWORD *)v35 + 107); ++j )
  {
    v49 = 120LL * j;
    v50 = *((_QWORD *)v35 + 58);
    if ( *(_QWORD *)(v49 + v50 + 40) && *(_DWORD *)(v49 + v50 + 56) && !*(_DWORD *)(v49 + v50 + 88) )
    {
      v6 = 0;
      break;
    }
  }
  v35[424] = v6;
  if ( v5 )
  {
    v51 = v5 - 1;
  }
  else
  {
    v51 = *((_QWORD *)this + 51);
    if ( !v6 )
      --v51;
  }
  *((_QWORD *)this + 52) = v51;
  v52 = *((_QWORD *)this + 24);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 40LL))(v52);
  v53 = (char *)this + 376;
  if ( *((_BYTE *)this + 384) )
    ExReleasePushLockExclusiveEx(v53, 0LL);
  else
    ExReleasePushLockSharedEx(v53, 0LL);
}
