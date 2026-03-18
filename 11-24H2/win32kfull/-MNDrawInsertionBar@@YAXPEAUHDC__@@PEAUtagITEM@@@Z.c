/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x14006B644
 * Callers:
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  int v3; // r14d
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r15d
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // r12
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 UserSessionState; // rax
  _DWORD *v25; // rdi
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rt2
  __int64 v30; // rcx
  int v31; // eax
  int v32; // ebx
  int v33; // edi
  __int64 v34; // rdx
  _DWORD v36[4]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v37; // [rsp+58h] [rbp-19h]
  int v38; // [rsp+60h] [rbp-11h]
  int v39; // [rsp+64h] [rbp-Dh]
  int v40; // [rsp+68h] [rbp-9h]
  unsigned int v41; // [rsp+6Ch] [rbp-5h]
  __int64 v42; // [rsp+70h] [rbp-1h]
  int v43; // [rsp+78h] [rbp+7h]
  int v44; // [rsp+7Ch] [rbp+Bh]
  int v45; // [rsp+80h] [rbp+Fh]
  int v46; // [rsp+84h] [rbp+13h]
  __int64 v47; // [rsp+88h] [rbp+17h]

  v3 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( v3 < 0 || (v3 & 0x40000000) != 0 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
    v36[0] = v4 + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 2168LL);
    v6 = *(_QWORD *)(W32GetUserSessionState(v36[0], v5) + 19928);
    v7 = *(_DWORD *)(v6 + 2168);
    v36[2] = v7;
    v10 = *(_QWORD *)(W32GetUserSessionState(v6, v8) + 19928);
    v11 = *(_QWORD *)a2;
    v12 = *(_DWORD *)(v10 + 2172);
    v36[3] = v12;
    if ( v3 >= 0 )
      v13 = *(_DWORD *)(v11 + 68) + *(_DWORD *)(v11 + 76) - v12;
    else
      v13 = *(_DWORD *)(v11 + 68);
    v36[1] = v13;
    v14 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928);
    v15 = *(_QWORD *)(v14 + 4800);
    v16 = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
    v37 = v15;
    v18 = (unsigned int)(v16 + 2 * *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v17) + 19928) + 2168LL));
    v19 = *(_QWORD *)a2;
    v38 = v18;
    v20 = *(_DWORD *)(v19 + 72);
    v22 = *(_QWORD *)(W32GetUserSessionState(v18, v21) + 19928);
    v40 = v20 - 4 * *(_DWORD *)(v22 + 2168);
    UserSessionState = W32GetUserSessionState(v22, v23);
    v25 = *(_DWORD **)a2;
    v26 = *(int *)(*(_QWORD *)(UserSessionState + 19928) + 2172LL) >> 31;
    LODWORD(UserSessionState) = *(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 2172LL);
    v28 = v26;
    v29 = __SPAIR64__(v26, UserSessionState) % 2;
    v27 = __SPAIR64__(v26, UserSessionState) / 2;
    LODWORD(v28) = v29;
    v41 = v27;
    v30 = v27;
    if ( v3 >= 0 )
      v31 = v25[17] + v25[19] - v27;
    else
      v31 = v25[17];
    v32 = v25[16];
    v33 = v25[18];
    v39 = v31;
    v42 = v15;
    v45 = v7;
    v46 = v12;
    v34 = *(_QWORD *)(W32GetUserSessionState(v30, v28) + 19928);
    v44 = v13;
    v47 = v15;
    v43 = v32 + v33 - 2 * *(_DWORD *)(v34 + 2168);
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v36, 3);
  }
}
