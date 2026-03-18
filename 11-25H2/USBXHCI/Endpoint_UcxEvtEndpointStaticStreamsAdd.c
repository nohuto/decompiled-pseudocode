/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x140047AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044E38 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     TR_Create @ 0x14008313C (TR_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // r14
  __int64 *v8; // r15
  unsigned int v9; // r15d
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 i; // r13
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+28h] [rbp-61h]
  __int64 v19; // [rsp+30h] [rbp-59h]
  __int64 v20; // [rsp+38h] [rbp-51h]
  __int64 v21; // [rsp+50h] [rbp-39h] BYREF
  __int128 v22; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-21h]
  int v24; // [rsp+6Ch] [rbp-1Dh]
  int v25; // [rsp+70h] [rbp-19h] BYREF
  int v26; // [rsp+74h] [rbp-15h]
  void (__fastcall *v27)(__int64); // [rsp+78h] [rbp-11h]
  __int64 v28; // [rsp+80h] [rbp-9h]
  int v29; // [rsp+88h] [rbp-1h]
  int v30; // [rsp+8Ch] [rbp+3h]
  __int64 v31; // [rsp+90h] [rbp+7h]
  __int64 v32; // [rsp+98h] [rbp+Fh]
  void *v33; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v35; // [rsp+108h] [rbp+7Fh]

  v34 = a3;
  v21 = 0LL;
  v23 = 0;
  v26 = 0;
  v4 = a2;
  v22 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AFE8);
  v6 = (_DWORD *)(v5 + 144);
  v7 = v5 + 16;
  v8 = (__int64 *)(v5 + 80);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *v8,
      4u,
      0xDu,
      0x64u,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)v7 + 135LL),
      *v6,
      v4);
  if ( !*(_BYTE *)(v5 + 37) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = *v6;
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)v7 + 135LL);
      WPP_RECORDER_SF_dD(*v8, 2u, 0xDu, 0x65u, (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids, v18, v19);
    }
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v4 || (unsigned int)v4 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 88LL) + 116LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v4;
      LODWORD(v19) = *v6;
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)v7 + 135LL);
      WPP_RECORDER_SF_ddL(
        *v8,
        2u,
        0xDu,
        0x66u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        v18,
        v19,
        v20);
    }
    return (unsigned int)-1073741811;
  }
  v9 = 0;
  v26 = 0;
  v28 = 0LL;
  v31 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v25 = -1;
    else
      v25 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v25 = 56;
  }
  v33 = off_14006B1A0;
  v27 = Endpoint_EvtStaticStreamsCleanupCallback;
  v10 = 1;
  v29 = 1;
  v30 = 1;
  v32 = 104 * v4 + 48;
  if ( *(_BYTE *)(v5 + 1344) )
    v10 = 2;
  v29 = v10;
  v11 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, int *, __int64 *))qword_14006BE20)(
          UcxDriverGlobals,
          a1,
          &v34,
          &v25,
          &v21);
  if ( v11 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v21,
            off_14006B1A0);
    v13 = v12;
    *(_QWORD *)v12 = v5;
    *(_DWORD *)(v12 + 8) = v4;
    if ( (unsigned int)v4 >= 4 )
    {
      if ( (unsigned int)v4 >= 8 )
      {
        if ( (unsigned int)v4 >= 0x10 )
        {
          if ( (unsigned int)v4 >= 0x20 )
          {
            if ( (unsigned int)v4 >= 0x40 )
            {
              if ( (unsigned int)v4 >= 0x80 )
                *(_DWORD *)(v12 + 12) = 7;
              else
                *(_DWORD *)(v12 + 12) = 6;
            }
            else
            {
              *(_DWORD *)(v12 + 12) = 5;
            }
          }
          else
          {
            *(_DWORD *)(v12 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v12 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v12 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v12 + 12) = 1;
    }
    for ( i = v12 + 48; ; i += 104LL )
    {
      v15 = *(_QWORD *)v5;
      v35 = v9 + 1;
      v11 = TR_Create(v15, v5, v21, v9 + 1, v13 + 104LL * v9 + 48);
      if ( v11 < 0 )
        break;
      v9 = v35;
      v16 = *(_QWORD *)(*(_QWORD *)i + 72LL);
      v24 = 0;
      *((_QWORD *)&v22 + 1) = v16;
      *(_QWORD *)&v22 = 24LL;
      v23 = v35;
      ((void (__fastcall *)(__int64, __int64, __int128 *))qword_14006BE18)(UcxDriverGlobals, v21, &v22);
      if ( v9 >= (unsigned int)v4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v20) = v4;
          LODWORD(v19) = *(_DWORD *)(v5 + 144);
          LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(v5 + 80),
            4u,
            0xDu,
            0x69u,
            (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
            v18,
            v19,
            v20);
        }
        return 0;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v9;
      LODWORD(v19) = *(_DWORD *)(v5 + 144);
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v5 + 80),
        2u,
        0xDu,
        0x68u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        v18,
        v19,
        v20,
        v11);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v11;
    LODWORD(v19) = *(_DWORD *)(v5 + 144);
    LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x67u,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      v18,
      v19,
      v20);
  }
  return (unsigned int)v11;
}
