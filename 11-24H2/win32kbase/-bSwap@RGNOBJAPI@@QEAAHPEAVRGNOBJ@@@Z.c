/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x14002E480
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1400259B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x140025C20 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int128 *v2; // r12
  __int64 v3; // rbx
  __int64 *v4; // rdi
  __int64 v7; // r8
  int v8; // edx
  int v9; // eax
  __int16 v10; // r8
  __int128 v11; // xmm0
  __int16 v12; // dx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // r10
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  __int64 v26; // r10
  int v27; // edi
  int v28; // r8d
  __int64 *v29; // rdi
  _QWORD *v30; // r12
  __int64 v31; // r14
  _QWORD *v32; // r13
  __int64 **v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  __int64 *v37; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 *v41; // r14
  __int64 *v42; // rdi
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 **v47; // rax
  _QWORD *v48; // rsi
  _QWORD *v49; // rdi
  __int64 *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v55; // [rsp+20h] [rbp-30h] BYREF
  int v56; // [rsp+28h] [rbp-28h]
  __int16 v57; // [rsp+2Ch] [rbp-24h]
  __int64 v58; // [rsp+30h] [rbp-20h]
  __int128 v59; // [rsp+38h] [rbp-18h]
  __int64 v60; // [rsp+48h] [rbp-8h]

  v2 = *(__int128 **)a2;
  v3 = 0LL;
  v4 = *(__int64 **)this;
  v55 = 0LL;
  v56 = 0;
  v57 = 0;
  v7 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v8 = (*(_DWORD *)v4 >> 8) & 0xFF0000;
  v9 = (unsigned __int16)*(_DWORD *)v4;
  v58 = v7;
  HANDLELOCK::vLockHandle(&v55, v9 | (unsigned int)v8, 0LL);
  if ( v56 )
  {
    v10 = *((_WORD *)v4 + 7);
    v11 = *v2;
    v12 = *((_WORD *)v2 + 7);
    v60 = *((_QWORD *)v2 + 2);
    v13 = v10 & 0x60 | v12 & 0x80u;
    *((_WORD *)v2 + 7) = v13;
    v14 = *v4;
    *((_WORD *)v4 + 7) = v10 & 0x80 | v12 & 0x60;
    *(_QWORD *)v2 = v14;
    *((_WORD *)v2 + 6) = *((_WORD *)v4 + 6);
    *((_DWORD *)v2 + 2) = *((_DWORD *)v4 + 2);
    *((_QWORD *)v2 + 2) = v4[2];
    v59 = v11;
    v15 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13) + 88) + 5672LL);
    v16 = (unsigned __int16)*(_DWORD *)v4 | (*(_DWORD *)v4 >> 8) & 0xFF0000u;
    if ( (unsigned int)v16 >= 0x10000 )
    {
      if ( *(_DWORD *)v15 <= 0x10000u )
      {
        v16 = (unsigned __int16)*(_DWORD *)v4;
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 16);
        v18 = *(_DWORD *)(v17 + 2056);
        if ( (unsigned __int16)*(_DWORD *)v4 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
        {
          v22 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)*(_DWORD *)v4 >= v18 )
            v19 = (((unsigned __int16)*(_DWORD *)v4 - v18) >> 16) + 1;
          else
            v19 = 0;
          v20 = *(_QWORD *)(v17 + 8LL * v19 + 8);
          if ( v19 )
            v21 = (unsigned __int16)*(_DWORD *)v4 + ((1 - v19) << 16) - v18;
          else
            v21 = (unsigned __int16)*(_DWORD *)v4;
          v22 = 0LL;
          if ( (unsigned int)v21 < *(_DWORD *)(v20 + 20) )
            v22 = *(_QWORD *)v20 + 24 * v21;
        }
        if ( *(unsigned __int8 *)(v22 + 13) == WORD1(v16) )
          v16 = (unsigned __int16)*(_DWORD *)v4;
      }
    }
    v23 = *(_QWORD *)(v15 + 16);
    v24 = *(_DWORD *)(v23 + 2056);
    if ( (unsigned int)v16 < v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v16 >= v24 )
        v25 = (((unsigned int)v16 - v24) >> 16) + 1;
      else
        v25 = 0;
      v26 = *(_QWORD *)(v23 + 8LL * v25 + 8);
      if ( v25 )
        v16 = ((1 - v25) << 16) - v24 + (unsigned int)v16;
      if ( (unsigned int)v16 < *(_DWORD *)(v26 + 20) )
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8) = v2;
    }
    *v4 = v59;
    *((_WORD *)v4 + 6) = WORD6(v59);
    *((_DWORD *)v4 + 2) = DWORD2(v59);
    v4[2] = v60;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v55);
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v55);
  if ( v27 )
  {
    v28 = *(_DWORD *)(*(_QWORD *)this + 76LL);
    *(_DWORD *)(*(_QWORD *)this + 76LL) = *(_DWORD *)(*(_QWORD *)a2 + 76LL);
    *(_DWORD *)(*(_QWORD *)a2 + 76LL) = v28;
    v29 = (__int64 *)(*(_QWORD *)this + 80LL);
    v30 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
    v31 = *v29;
    v32 = (_QWORD *)*v30;
    if ( *(_QWORD *)this != -80LL )
    {
      if ( *(__int64 **)(v31 + 8) != v29 )
        goto LABEL_52;
      v33 = *(__int64 ***)(*(_QWORD *)this + 88LL);
      if ( *v33 != v29 )
        goto LABEL_52;
      *v33 = (__int64 *)v31;
      *(_QWORD *)(v31 + 8) = v33;
      v29[1] = (__int64)v29;
      *v29 = (__int64)v29;
    }
    v34 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
    if ( *(_QWORD *)a2 != -80LL )
    {
      v35 = *v34;
      if ( *(_QWORD **)(*v34 + 8LL) != v34 )
        goto LABEL_52;
      v36 = *(_QWORD **)(*(_QWORD *)a2 + 88LL);
      if ( (_QWORD *)*v36 != v34 )
        goto LABEL_52;
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
      v34[1] = v34;
      *v34 = v34;
    }
    v37 = *(__int64 **)this;
    *(_QWORD *)this = *(_QWORD *)a2;
    *(_QWORD *)a2 = v37;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v37);
    if ( !CurrentThreadNonPaged )
      return 1LL;
    v39 = *CurrentThreadNonPaged;
    v40 = v39 + 8;
    if ( (-(__int64)(v39 != 0) & (v39 + 8)) == 0 )
      return 1LL;
    if ( (__int64 *)v31 != v29 )
    {
      v41 = *(__int64 **)this;
      v42 = (__int64 *)(*(_QWORD *)this + 80LL);
      if ( *(_QWORD *)this != -80LL )
      {
        v43 = (__int64 *)W32GetCurrentThreadNonPaged(v40);
        if ( v43 )
          v44 = *v43;
        else
          v44 = 0LL;
        v45 = v44 + 8;
        v42[2] = (__int64)v41;
        v40 = -v44;
        v42[3] = (__int64)CleanUpRegion;
        v46 = v45 & -(__int64)(v40 != 0);
        if ( v46 )
        {
          v47 = (__int64 **)(v46 + 88);
          v40 = *(_QWORD *)(v46 + 88);
          if ( *(_QWORD *)(v40 + 8) != v46 + 88 )
            goto LABEL_52;
          *v42 = v40;
          v42[1] = (__int64)v47;
          *(_QWORD *)(v40 + 8) = v42;
          *v47 = v42;
        }
        else
        {
          v42[1] = (__int64)v42;
          *v42 = (__int64)v42;
        }
      }
    }
    if ( v32 == v30 )
      return 1LL;
    v48 = *(_QWORD **)a2;
    v49 = v48 + 10;
    if ( v48 == (_QWORD *)-80LL )
      return 1LL;
    v50 = (__int64 *)W32GetCurrentThreadNonPaged(v40);
    if ( v50 )
      v3 = *v50;
    v48[12] = v48;
    v48[13] = CleanUpRegion;
    v51 = (v3 + 8) & -(__int64)(v3 != 0);
    if ( !v51 )
    {
      v48[11] = v48 + 10;
      *v49 = v49;
      return 1LL;
    }
    v52 = (_QWORD *)(v51 + 88);
    v53 = *(_QWORD *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x58);
    if ( *(_QWORD **)(v53 + 8) == v52 )
    {
      *v49 = v53;
      v48[11] = v52;
      *(_QWORD *)(v53 + 8) = v49;
      *v52 = v49;
      return 1LL;
    }
LABEL_52:
    __fastfail(3u);
  }
  return 0LL;
}
