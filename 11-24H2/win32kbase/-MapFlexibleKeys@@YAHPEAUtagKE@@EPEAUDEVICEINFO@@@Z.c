/*
 * XREFs of ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1400C88E8
 * Callers:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1400C8800 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x14021401C (-IsKeyDownSpecified@@YAHEPEBE@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x140214224 (-SendKeyUpDown@@YAXEE@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall MapFlexibleKeys(unsigned __int64 a1, char a2, struct DEVICEINFO *a3)
{
  unsigned int v3; // esi
  char v4; // bl
  unsigned __int64 v5; // r12
  unsigned int i; // edi
  __int64 v7; // rcx
  __int64 v9; // r14
  unsigned __int8 *v10; // r15
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  unsigned __int8 v13; // bl
  __int64 UserSessionState; // rax
  int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // r13d
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rcx
  char v35; // bl
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int8 *v38; // rbx
  __int64 v39; // rdi
  unsigned __int8 *v40; // rbx
  __int64 v41; // rdi
  unsigned int v43; // [rsp+24h] [rbp-4Ch]
  unsigned int v44; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v45; // [rsp+30h] [rbp-40h]
  _WORD v47[2]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v48; // [rsp+44h] [rbp-2Ch]
  __int16 v49; // [rsp+46h] [rbp-2Ah]
  int v50; // [rsp+48h] [rbp-28h]
  _DWORD v51[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v52[8]; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  v45 = a1;
  for ( i = 0; i < *(_DWORD *)(W32GetUserSessionState(a1) + 12912); ++i )
  {
    v9 = 16LL * i;
    a1 = *(_QWORD *)(W32GetUserSessionState(a1) + 12904);
    if ( *(_BYTE *)(v9 + a1 + 1) == v4 )
    {
      a1 = *(_QWORD *)(W32GetUserSessionState(a1) + 12904);
      if ( *(_BYTE *)(v9 + a1) == *(_BYTE *)v5 )
      {
        if ( *(__int16 *)(v5 + 2) < 0 && i == *(_DWORD *)(W32GetUserSessionState(a1) + 12916) )
        {
          *(_DWORD *)(W32GetUserSessionState(a1) + 12916) = -1;
          break;
        }
        v10 = (unsigned __int8 *)&unk_140270770;
        do
        {
          v11 = *v10;
          if ( (_BYTE)v11 == *(_BYTE *)(W32GetUserSessionState(a1) + 13993) )
          {
            *(_BYTE *)(W32GetUserSessionState(v12) + 13993) = 0;
          }
          else
          {
            v13 = *(_BYTE *)((v11 >> 2) + W32GetUserSessionState(v12) + 14400);
            UserSessionState = W32GetUserSessionState(v11 >> 2);
            v15 = IsKeyDownSpecified(v11, (const unsigned __int8 *)(v9 + *(_QWORD *)(UserSessionState + 12904) + 2LL));
            a1 = ((unsigned __int8)(1 << (2 * (v11 & 3))) & v13) == 0;
            if ( (_DWORD)a1 == v15 )
              break;
          }
          ++v3;
          ++v10;
        }
        while ( v3 < 0xA );
        v5 = v45;
        if ( v3 >= 0xA )
          break;
        v4 = a2;
        v3 = 0;
      }
    }
  }
  if ( i >= *(_DWORD *)(W32GetUserSessionState(a1) + 12912) )
    return 1LL;
  v16 = 0;
  v49 = 0;
  v17 = 0;
  v51[0] = 0;
  if ( *(__int16 *)(v5 + 2) >= 0 )
  {
    v43 = 0;
    v18 = 16LL * i;
    do
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v7) + 12904);
      if ( !*(_BYTE *)(v7 + v18 + 2) )
        break;
      v19 = *(_QWORD *)(W32GetUserSessionState(v7) + 12904);
      v21 = W32GetUserSessionState(v20);
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)(v21 + 12904) + v18 + 2),
                            (const unsigned __int8 *)(16LL * i + v19 + 10)) )
      {
        v22 = W32GetUserSessionState(v7);
        v23 = v16++;
        v52[v23] = *(_BYTE *)(*(_QWORD *)(v22 + 12904) + v18 + 2);
        v24 = W32GetUserSessionState(v23);
        SendKeyUpDown(*(_BYTE *)(*(_QWORD *)(v24 + 12904) + v18 + 2), 1u);
      }
      ++v18;
      ++v43;
    }
    while ( v43 < 6 );
    v25 = 16LL * i;
    v44 = 0;
    v17 = v51[0];
    do
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v7) + 12904);
      if ( !*(_BYTE *)(17LL * i + v7 + 10) )
        break;
      v26 = *(_QWORD *)(W32GetUserSessionState(v7) + 12904);
      v28 = W32GetUserSessionState(v27);
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)(v28 + 12904) + v25 + 10),
                            (const unsigned __int8 *)(16LL * i + v26 + 2)) )
      {
        v29 = W32GetUserSessionState(v7);
        v30 = v17++;
        *((_BYTE *)v51 + v30) = *(_BYTE *)(*(_QWORD *)(v29 + 12904) + v25 + 10);
        v31 = W32GetUserSessionState(v30);
        SendKeyUpDown(*(_BYTE *)(*(_QWORD *)(v31 + 12904) + v25 + 10), 0);
      }
      ++v25;
      ++v44;
    }
    while ( v44 < 6 );
    v5 = v45;
  }
  v50 = 0;
  v48 = 0;
  v32 = *(_QWORD *)(W32GetUserSessionState(v7) + 12904);
  if ( *(_BYTE *)(v32 + 16LL * i + 9) == 0xE0 )
  {
    v33 = v48 | 2;
LABEL_35:
    v48 = v33;
    goto LABEL_36;
  }
  v32 = *(_QWORD *)(W32GetUserSessionState(v32) + 12904);
  v33 = v48;
  if ( *(_BYTE *)(v32 + 16LL * i + 9) == 0xE1 )
  {
    v33 = v48 | 4;
    goto LABEL_35;
  }
LABEL_36:
  if ( *(__int16 *)(v5 + 2) < 0 )
    v48 = v33 | 1;
  v47[1] = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v32) + 12904) + 16LL * i + 8);
  v47[0] = 0;
  ProcessKeyboardInputWorker(v47, a3, 0LL);
  if ( *(__int16 *)(v5 + 2) >= 0 )
  {
    v35 = *(_BYTE *)(W32GetUserSessionState(v34) + 13992);
    *(_BYTE *)(W32GetUserSessionState(v36) + 13993) = v35;
    *(_DWORD *)(W32GetUserSessionState(v37) + 12916) = i;
  }
  if ( v16 )
  {
    v38 = v52;
    v39 = v16;
    do
    {
      SendKeyUpDown(*v38++, 0);
      --v39;
    }
    while ( v39 );
  }
  if ( v17 )
  {
    v40 = (unsigned __int8 *)v51;
    v41 = v17;
    do
    {
      SendKeyUpDown(*v40++, 1u);
      --v41;
    }
    while ( v41 );
  }
  return 0LL;
}
