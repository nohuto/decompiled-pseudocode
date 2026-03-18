/*
 * XREFs of EtwTraceProcessWindowInfo @ 0x14009C270
 * Callers:
 *     EtwTraceThreadExit @ 0x14009C14C (EtwTraceThreadExit.c)
 * Callees:
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x14009C4C8 (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 */

void __fastcall EtwTraceProcessWindowInfo(__int64 a1)
{
  LONGLONG TimeQuadPart; // rax
  __int64 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 i; // rdi
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rcx
  bool v13; // cf
  __int64 v14; // rax
  int v15; // edx
  int v16; // esi
  __int64 v17; // rcx
  int v18; // ebx
  __int64 UserSessionState; // rax
  int v20; // ecx
  bool v21; // zf
  _QWORD v22[2]; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+34h] [rbp-34h]
  int v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+3Ch] [rbp-2Ch]
  LONGLONG v27; // [rsp+78h] [rbp+10h]

  v26 = 0;
  if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x4000000000LL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x4000000000LL) != 0
    && (qword_14029ADB8 & 0x4000000000LL) == qword_14029ADB8
    && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x1000000) != 0 )
  {
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(a1 + 464));
    v24 = 0;
    v27 = TimeQuadPart;
    v25 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v3 = *(__int64 **)(a1 + 464);
    LODWORD(TimeQuadPart) = *((_DWORD *)v3 + 14);
    v4 = *v3;
    v23 = TimeQuadPart;
    v22[0] = PsGetProcessStartKey(v4);
    v5 = *(_QWORD *)(a1 + 464);
    v22[1] = v27;
    for ( i = *(_QWORD *)(v5 + 328); i; v24 |= v20 )
    {
      v7 = *(_QWORD *)(i + 1360);
      v8 = (int)v7 < 0;
      if ( (v7 & 0x100000000LL) != 0 )
        v8 = ((int)v7 < 0) + 2;
      if ( (v7 & 0x200000000LL) != 0 )
        v8 |= 4u;
      v9 = v8 | 8;
      if ( !*(_DWORD *)(i + 948) )
        v9 = v8;
      v10 = v9 | 0x10;
      if ( !*(_DWORD *)(i + 944) )
        v10 = v9;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(i + 528), 0, 0) < 0 )
        v10 |= 0x20u;
      v11 = v10 | 0x40;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 528), 0, 0) & 1) == 0 )
        v11 = v10;
      v12 = v11;
      LODWORD(v12) = v11 | 0x200;
      v13 = (_InterlockedCompareExchange((volatile signed __int32 *)(i + 528), 0, 0) & 0x400) != 0;
      v14 = *(_QWORD *)(i + 472);
      if ( !v13 )
        v12 = v11;
      v15 = v12 | 0x80;
      if ( !*(_QWORD *)(i + 1288) )
        v15 = v12;
      v16 = v15;
      if ( v14 && *(_DWORD *)(v14 + 40) )
        v16 = v15 | 0x100;
      v18 = v16 | 0x400;
      if ( *(_QWORD *)(W32GetUserSessionState(v12) + 18960) != i )
        v18 = v16;
      UserSessionState = W32GetUserSessionState(v17);
      v20 = v18 | 0x800;
      v21 = *(_QWORD *)(i + 472) == *(_QWORD *)(UserSessionState + 18944);
      i = *(_QWORD *)(i + 704);
      if ( !v21 )
        v20 = v18;
    }
    EtwTraceProcessWindowInfoSendUnique((const struct tagPROCESS_UIFLAG_MAP *)v22);
  }
}
