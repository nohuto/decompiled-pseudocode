/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x140010904
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x140008E80 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x140010E5C (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMUX_CreateChildPSMs(__int64 a1)
{
  _BYTE *v1; // rsi
  bool v2; // cf
  unsigned __int16 v4; // di
  __int16 *v5; // rdx
  unsigned __int16 v6; // r8
  char v7; // dl
  unsigned __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  unsigned __int16 v14; // di
  __int64 v15; // rdx
  unsigned __int16 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  unsigned __int16 v21; // cx
  unsigned int v22; // edx
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  __int64 v25; // r8
  unsigned int v26; // edi
  _QWORD **v27; // rsi
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int128 v32; // [rsp+40h] [rbp-29h] BYREF
  __int128 v33; // [rsp+50h] [rbp-19h]
  __int64 v34; // [rsp+60h] [rbp-9h]
  __int128 v35; // [rsp+68h] [rbp-1h] BYREF
  __int128 v36; // [rsp+78h] [rbp+Fh]
  __int128 v37; // [rsp+88h] [rbp+1Fh]
  __int64 v38; // [rsp+98h] [rbp+2Fh]
  __int64 v39; // [rsp+D0h] [rbp+67h] BYREF

  *(_DWORD *)(a1 + 146) = 0xFFFF;
  v1 = (_BYTE *)(a1 + 240);
  v34 = 0LL;
  v2 = *(_WORD *)(a1 + 144) != 0;
  v32 = 0LL;
  LODWORD(v38) = 0;
  v33 = 0LL;
  v39 = 0LL;
  v4 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  while ( v2 )
  {
    v32 = 0LL;
    v34 = 0LL;
    v33 = 0LL;
    _InterlockedOr((volatile signed __int32 *)&v32 + 1, 1u);
    if ( *v1 )
    {
      v6 = v4 + 1;
      LOWORD(v32) = v4 + 1;
      v8 = (unsigned __int64)(unsigned __int16)(v4 + 1) >> 3;
      v9 = ++v4 & 7;
      if ( ((unsigned __int8)(1 << v9) & *(_BYTE *)(v8 + a1 + 1195)) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)&v32 + 1, 0xFFFFFFFE);
        v6 = v32;
      }
      BYTE2(v32) = *(_BYTE *)(a1 + 2498);
    }
    else
    {
      v5 = *(__int16 **)(*(_QWORD *)(a1 + 128) + 8LL * v4);
      v6 = *v5;
      LOWORD(v32) = *v5;
      if ( *((_DWORD *)v5 + 1) == 102 )
      {
        _InterlockedAnd((volatile signed __int32 *)&v32 + 1, 0xFFFFFFFE);
        v6 = v32;
      }
      if ( *((_DWORD *)v5 + 2) == 116 )
      {
        _InterlockedOr((volatile signed __int32 *)&v32 + 1, 0x10u);
        v6 = v32;
      }
      DWORD1(v32) = DWORD1(v32) & 0xFFFFFFBF | ((v5[8] & 1) << 6);
      DWORD1(v32) ^= (BYTE4(v32) ^ (unsigned __int8)(*((_BYTE *)v5 + 16) << 6)) & 0x80;
      v7 = *((_BYTE *)v5 + 3);
      if ( (unsigned __int8)(v7 - 1) > 4u )
        v7 = 5;
      ++v4;
      BYTE2(v32) = v7;
    }
    if ( v6 > *(_WORD *)(a1 + 148) )
      *(_WORD *)(a1 + 148) = v6;
    if ( v6 < *(_WORD *)(a1 + 146) )
      *(_WORD *)(a1 + 146) = v6;
    DWORD2(v32) = 512;
    v10 = HUBMUX_CreatePSM(a1, &v32);
    if ( !v10 )
      goto LABEL_50;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v10,
            off_14006C340);
    *(_QWORD *)(v11 + 1248) = &PSM20StateTable;
    *(_DWORD *)(v11 + 1124) = 3000;
    *(_DWORD *)(v11 + 1256) = 3000;
    v12 = (_QWORD *)(v11 + 248);
    v13 = *(_QWORD **)(a1 + 2376);
    if ( *v13 != a1 + 2368 )
LABEL_55:
      __fastfail(3u);
    *v12 = a1 + 2368;
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(a1 + 2376) = v12;
    ++*(_DWORD *)(a1 + 2364);
    v2 = v4 < *(_WORD *)(a1 + 144);
  }
  v14 = 0;
  *(_DWORD *)(a1 + 152) = 0xFFFF;
  if ( *(_WORD *)(a1 + 150) )
  {
    while ( 1 )
    {
      v32 = 0LL;
      v34 = 0LL;
      v33 = 0LL;
      _InterlockedOr((volatile signed __int32 *)&v32 + 1, 1u);
      if ( *v1 )
      {
        v16 = v14 + 1;
        LOWORD(v32) = v14 + 1;
        if ( ((unsigned __int8)(1 << ((v14 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v14 + 1) >> 3)
                                                                 + a1
                                                                 + 1198)) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)&v32 + 1, 0xFFFFFFFE);
          v16 = v32;
        }
        if ( *(_BYTE *)(a1 + 261) )
        {
          _InterlockedOr((volatile signed __int32 *)&v32 + 1, 0x100u);
          v16 = v32;
          DWORD1(v33) = *(_DWORD *)(a1 + 156);
        }
        *((_QWORD *)&v33 + 1) = *(_QWORD *)(a1 + 2512);
        LODWORD(v34) = *(_DWORD *)(a1 + 2520);
        BYTE2(v32) = *(_BYTE *)(a1 + 2498);
      }
      else
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * v14);
        LOWORD(v32) = *(_WORD *)v15;
        if ( *(_DWORD *)(v15 + 4) == 102 )
          _InterlockedAnd((volatile signed __int32 *)&v32 + 1, 0xFFFFFFFE);
        if ( *(_DWORD *)(v15 + 8) == 116 )
          _InterlockedOr((volatile signed __int32 *)&v32 + 1, 8u);
        _InterlockedOr((volatile signed __int32 *)&v32 + 1, 0x100u);
        if ( *(_BYTE *)(v15 + 2) )
          DWORD1(v33) = *(_DWORD *)(a1 + 156);
        v16 = v32;
        *((_QWORD *)&v33 + 1) = *(_QWORD *)(v15 + 16);
        LODWORD(v34) = *(unsigned __int16 *)(v15 + 14);
        BYTE2(v32) = *(_BYTE *)(v15 + 3);
        if ( (unsigned __int8)(BYTE2(v32) - 1) > 4u )
          BYTE2(v32) = 5;
      }
      if ( v16 > *(_WORD *)(a1 + 154) )
        *(_WORD *)(a1 + 154) = v16;
      if ( v16 < *(_WORD *)(a1 + 152) )
        *(_WORD *)(a1 + 152) = v16;
      DWORD2(v32) = 768;
      v17 = HUBMUX_CreatePSM(a1, &v32);
      if ( !v17 )
        break;
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v17,
              off_14006C340);
      *(_QWORD *)(v18 + 1248) = &PSM30StateTable;
      *(_DWORD *)(v18 + 1124) = 5000;
      *(_DWORD *)(v18 + 1256) = 5000;
      v19 = (_QWORD *)(v18 + 248);
      v20 = *(_QWORD **)(a1 + 2376);
      if ( *v20 != a1 + 2368 )
        goto LABEL_55;
      *v19 = a1 + 2368;
      ++v14;
      v19[1] = v20;
      *v20 = v19;
      *(_QWORD *)(a1 + 2376) = v19;
      ++*(_DWORD *)(a1 + 2364);
      if ( v14 >= *(_WORD *)(a1 + 150) )
        goto LABEL_43;
    }
  }
  else
  {
LABEL_43:
    v21 = *(_WORD *)(a1 + 148);
    if ( v21 <= *(_WORD *)(a1 + 154) )
      v21 = *(_WORD *)(a1 + 154);
    v22 = v21;
    v23 = 2;
    *(_WORD *)(a1 + 48) = v22;
    if ( ((unsigned __int64)v22 >> 3) + 1 >= 2 )
      v23 = ((unsigned __int16)v22 >> 3) + 1;
    v24 = *(_WORD *)(a1 + 88);
    v25 = (unsigned int)ExDefaultNonPagedPoolType;
    v36 = 0LL;
    if ( v23 <= v24 )
      v23 = v24;
    DWORD2(v36) = 1;
    *(_WORD *)(a1 + 1136) = v23;
    v38 = 0LL;
    v37 = *(unsigned __int64 *)(a1 + 16);
    v35 = 0LL;
    LODWORD(v35) = 56;
    HIDWORD(v36) = 1;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, unsigned __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           &v35,
           v25,
           1748191317LL,
           (v23 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL,
           &v39,
           a1 + 1128) >= 0 )
    {
      v26 = 2053;
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40u);
      return v26;
    }
  }
LABEL_50:
  v26 = 2045;
  v27 = (_QWORD **)(a1 + 2368);
  while ( 1 )
  {
    v28 = *v27;
    if ( *v27 == v27 )
      return v26;
    if ( (_QWORD **)v28[1] != v27 )
      goto LABEL_55;
    v29 = (_QWORD *)*v28;
    if ( *(_QWORD **)(*v28 + 8LL) != v28 )
      goto LABEL_55;
    *v27 = v29;
    v29[1] = v27;
    --*(_DWORD *)(a1 + 2364);
    v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            v28 - 31);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v30);
  }
}
