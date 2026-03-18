/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x140127788
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMDeliverConfigRequest @ 0x1400A90C8 (RIMDeliverConfigRequest.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F0FD0 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMIsParentCommon @ 0x140127DC0 (RIMIsParentCommon.c)
 *     RIMGetDeviceParent @ 0x140127E30 (RIMGetDeviceParent.c)
 *     RIMFreeHidDesc @ 0x1401DD0C4 (RIMFreeHidDesc.c)
 */

__int64 __fastcall RIMAllocateHidConfigDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6)
{
  char v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // r14
  char v15; // r12
  int v16; // ebx
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // r13
  char v20; // bp
  char v21; // di
  const wchar_t *v22; // rbx
  __int64 v23; // rax
  __int64 v25; // rax
  char v26; // r14
  char v27; // di
  int v28; // ebx
  __int64 v29; // rax
  bool v30; // bp
  bool v31; // r12
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  int v35; // r12d
  __int64 i; // rbp
  int v37; // ecx
  __int64 v38; // rdx
  int v39; // ebp
  unsigned int v40; // r9d
  char v41; // bl
  char v42; // di
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  char v46; // bp
  bool v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  unsigned __int16 v52; // [rsp+30h] [rbp-48h]
  int v53; // [rsp+40h] [rbp-38h]

  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        46,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
    return 0LL;
  }
  if ( !a5[4] )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *a5;
      v17 = a5[1];
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v15,
        *(_QWORD *)(v18 + 19392),
        3u,
        1u,
        0x2Fu,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v17,
        v16);
    }
    return 0LL;
  }
  v19 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x44687352u);
  if ( !v19 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v20 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = *(const wchar_t **)(a2 + 200);
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v21,
        *(_QWORD *)(v23 + 19392),
        3u,
        1u,
        0x30u,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v22);
    }
    return 0LL;
  }
  v25 = Win32AllocPoolZInitImpl(64LL, a5[4], 0x70707352u);
  *(_QWORD *)(v19 + 32) = v25;
  if ( !v25 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v26 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = a5[4];
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v27,
        *(_QWORD *)(v29 + 19392),
        3u,
        1u,
        0x31u,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v28);
    }
    goto LABEL_87;
  }
  *(_OWORD *)(v19 + 40) = *(_OWORD *)a5;
  *(_OWORD *)(v19 + 56) = *((_OWORD *)a5 + 1);
  *(_OWORD *)(v19 + 72) = *((_OWORD *)a5 + 2);
  *(_OWORD *)(v19 + 88) = *((_OWORD *)a5 + 3);
  *(_QWORD *)(v19 + 16) = a4;
  *(_QWORD *)(v19 + 104) = *(_QWORD *)a6;
  *(_DWORD *)(v19 + 112) = *(_DWORD *)(a6 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(a3, a2) )
  {
    v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(v32 + 19392),
        3,
        1,
        50,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
  }
  v35 = 0;
  for ( i = *(_QWORD *)(a1 + 424); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
      goto LABEL_77;
    if ( (*(_DWORD *)(i + 168) & 0x400) == 0 && (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v37 = *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL);
      if ( (unsigned int)(v37 - 1) <= 3 || v37 == 7 )
      {
        if ( (unsigned int)RIMIsParentCommon(
                             a2,
                             i,
                             v19,
                             *(unsigned __int16 *)(*(_QWORD *)(i + 440) + 110LL),
                             *(_WORD *)(*(_QWORD *)(i + 440) + 112LL)) )
          break;
      }
    }
  }
  v38 = *(_QWORD *)(i + 456);
  if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v38 + 24) - 1) <= 3 )
    v35 = 1;
  if ( !__CFSHR__(*(_DWORD *)(v38 + 368), 13) )
  {
LABEL_77:
    *(_DWORD *)(a2 + 48) = 3;
    return v19;
  }
  v39 = *(_DWORD *)(a1 + 84);
  if ( v35 )
  {
    if ( (v39 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 168) |= 0x800u;
      v40 = 2;
LABEL_68:
      v44 = RIMDeliverConfigRequest((struct RIMDEV *)a2, v19, 0x52u, v40);
      v46 = v44;
      if ( v44 < 0 )
      {
        v47 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v45 = *((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( (v45 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v47 = 1;
        }
        v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v49 = W32GetUserSessionState(v45);
          LOBYTE(v50) = v48;
          LOBYTE(v51) = v47;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v51,
            v50,
            *(_QWORD *)(v49 + 19392),
            3,
            1,
            53,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
            v46);
        }
      }
      goto LABEL_77;
    }
    v41 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v53 = v39;
      v52 = 51;
LABEL_86:
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v42,
        *(_QWORD *)(v43 + 19392),
        3u,
        1u,
        v52,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v53);
    }
  }
  else
  {
    if ( (v39 & 8) != 0 )
    {
      *(_DWORD *)(a2 + 168) |= 0x1000u;
      v40 = 3;
      goto LABEL_68;
    }
    v41 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control);
      v53 = v39;
      v52 = 52;
      goto LABEL_86;
    }
  }
LABEL_87:
  RIMFreeHidDesc((PVOID)v19);
  return 0LL;
}
