/*
 * XREFs of StorLogMFNDSetCCQueuesState @ 0x1400C6118
 * Callers:
 *     StorSetMFNDChildPFQueuesState @ 0x140191D2C (StorSetMFNDChildPFQueuesState.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer @ 0x1400C11F8 (McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDSetCCQueuesState(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int16 v4; // r13
  int v8; // esi
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int16 *v11; // r11
  __int64 v12; // r8
  __int16 v13; // r9
  __int16 v14; // r10
  __int16 v15; // r15
  __int16 v16; // r12
  __int16 v17; // cx
  __int16 v18; // dx
  __int16 v19; // ax
  __int16 v20; // bx
  char v21; // al
  __int64 v22; // rdx
  const wchar_t *v23; // rdx
  char v24; // [rsp+100h] [rbp-80h]
  char v25; // [rsp+101h] [rbp-7Fh]
  __int16 v26; // [rsp+104h] [rbp-7Ch]
  __int16 v27; // [rsp+108h] [rbp-78h]
  __int16 v28; // [rsp+10Ch] [rbp-74h]
  __int16 v29; // [rsp+110h] [rbp-70h]
  __int16 v30; // [rsp+114h] [rbp-6Ch]
  char v31; // [rsp+118h] [rbp-68h]
  char v32; // [rsp+11Ch] [rbp-64h]
  char v33; // [rsp+120h] [rbp-60h]
  __int16 v34; // [rsp+124h] [rbp-5Ch]
  __int128 v36; // [rsp+130h] [rbp-50h] BYREF
  __int128 v37; // [rsp+140h] [rbp-40h] BYREF
  __int64 v38; // [rsp+150h] [rbp-30h] BYREF
  char v39; // [rsp+158h] [rbp-28h]
  __int128 v40; // [rsp+160h] [rbp-20h] BYREF
  int v41; // [rsp+170h] [rbp-10h]
  char v42; // [rsp+174h] [rbp-Ch]
  __int128 v43; // [rsp+178h] [rbp-8h] BYREF
  __int128 v44; // [rsp+188h] [rbp+8h]
  __int64 v45; // [rsp+198h] [rbp+18h]
  char v46; // [rsp+1A0h] [rbp+20h]

  LOBYTE(v4) = 0;
  if ( StorEtwLoggingEnabled )
  {
    v41 = 0;
    v42 = 0;
    v45 = 0LL;
    v46 = 0;
    v38 = 0LL;
    v39 = 0;
    v36 = 0LL;
    v40 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    if ( a2 )
      v8 = *(unsigned __int16 *)(a2 + 24) + *(unsigned __int16 *)(a2 + 26);
    else
      v8 = 0;
    v9 = *(_OWORD *)(a1 + 5064);
    v10 = *(_QWORD *)(a1 + 16);
    v37 = v9;
    RaidDriverGetName(v10, (__int64)&v36);
    v11 = *(__int16 **)(a1 + 6000);
    if ( v11 )
    {
      v43 = *(_OWORD *)(v11 + 12);
      v44 = *(_OWORD *)(v11 + 20);
      v45 = *((_QWORD *)v11 + 7);
      v38 = *((_QWORD *)v11 + 8);
      v40 = *(_OWORD *)(v11 + 2);
      v41 = *((_DWORD *)v11 + 5);
    }
    if ( (byte_140171469 & 1) != 0 )
    {
      v12 = (a2 + 60) & -(__int64)(a2 != 0);
      if ( a2 )
      {
        v13 = *(_WORD *)(a2 + 50);
        v14 = *(_WORD *)(a2 + 48);
        v15 = *(_WORD *)(a2 + 46);
        v16 = *(_WORD *)(a2 + 44);
        v4 = *(_WORD *)(a2 + 40);
        v17 = *(_WORD *)(a2 + 36);
        v18 = *(_WORD *)(a2 + 32);
        v24 = *(_BYTE *)(a2 + 52);
        v25 = *(_BYTE *)(a2 + 42);
        v26 = *(_WORD *)(a2 + 38);
        v30 = *(_WORD *)(a2 + 28);
        v27 = *(_WORD *)(a2 + 26);
        v28 = *(_WORD *)(a2 + 24);
        v19 = *(_WORD *)(a2 + 8);
        v20 = *(_WORD *)(a2 + 30);
        v33 = v19;
        v21 = v26;
      }
      else
      {
        v21 = 0;
        v24 = 0;
        LOBYTE(v30) = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v18) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v20) = 0;
        v33 = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v14) = 0;
        v25 = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v16) = 0;
      }
      v32 = v18;
      v31 = v17;
      if ( v11 )
      {
        v34 = v11[1];
        v29 = *v11;
      }
      else
      {
        LOBYTE(v34) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v26) = v21;
        v32 = v18;
        v31 = v17;
      }
      v22 = *(_QWORD *)(a1 + 6160);
      if ( !v22 || (v23 = *(const wchar_t **)(v22 + 24)) == 0LL )
        v23 = (const wchar_t *)&unk_140151214;
      McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer(
        (a3 >> 9) & 7,
        &EventMFNDSetCCQueuesState,
        v12,
        *(_DWORD *)(a1 + 56),
        (__int64)&v37,
        *((const wchar_t **)&v36 + 1),
        (const char *)&v40,
        v23,
        v29,
        v34,
        (const char *)&v43,
        (const char *)&v38,
        v33,
        v28,
        v27,
        v30,
        v20,
        v32,
        v31,
        v26,
        v4,
        v25,
        v16,
        v15,
        v14,
        v13,
        v24,
        24 * v8,
        v12,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
