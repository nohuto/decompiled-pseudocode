/*
 * XREFs of StorLogMFNDQueryChildPFSettings @ 0x1400C56D0
 * Callers:
 *     StorQueryMFNDChildPFSettings @ 0x140190278 (StorQueryMFNDChildPFSettings.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer @ 0x1400C1954 (McTemplateK0qjzszhhsshhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDQueryChildPFSettings(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // r11
  unsigned __int16 *v9; // rcx
  __int64 v10; // r8
  int v11; // r8d
  __int16 v12; // r9
  __int16 v13; // r10
  int v14; // r13d
  int v15; // r12d
  __int16 v16; // si
  __int16 v17; // r14
  __int16 v18; // r15
  int v19; // eax
  __int16 v20; // dx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  const wchar_t *v24; // rcx
  int v25; // [rsp+110h] [rbp-80h]
  int v26; // [rsp+114h] [rbp-7Ch]
  int v27; // [rsp+118h] [rbp-78h]
  int v28; // [rsp+11Ch] [rbp-74h]
  int v29; // [rsp+120h] [rbp-70h]
  int v30; // [rsp+124h] [rbp-6Ch]
  int v31; // [rsp+128h] [rbp-68h]
  char v32; // [rsp+12Ch] [rbp-64h]
  int v33; // [rsp+130h] [rbp-60h]
  char v34; // [rsp+134h] [rbp-5Ch]
  char v35; // [rsp+138h] [rbp-58h]
  __int128 v38; // [rsp+150h] [rbp-40h] BYREF
  __int128 v39; // [rsp+160h] [rbp-30h] BYREF
  __int64 v40; // [rsp+170h] [rbp-20h] BYREF
  char v41; // [rsp+178h] [rbp-18h]
  __int128 v42; // [rsp+180h] [rbp-10h] BYREF
  int v43; // [rsp+190h] [rbp+0h]
  char v44; // [rsp+194h] [rbp+4h]
  __int128 v45; // [rsp+198h] [rbp+8h] BYREF
  __int128 v46; // [rsp+1A8h] [rbp+18h]
  __int64 v47; // [rsp+1B8h] [rbp+28h]
  char v48; // [rsp+1C0h] [rbp+30h]

  if ( StorEtwLoggingEnabled )
  {
    v43 = 0;
    v38 = 0LL;
    v44 = 0;
    v45 = 0LL;
    v47 = 0LL;
    v46 = 0LL;
    v48 = 0;
    v6 = *(_OWORD *)(a1 + 5064);
    v7 = *(_QWORD *)(a1 + 16);
    v40 = 0LL;
    v39 = v6;
    v41 = 0;
    v42 = 0LL;
    RaidDriverGetName(v7, (__int64)&v38);
    v9 = *(unsigned __int16 **)(v8 + 6000);
    v10 = 0LL;
    if ( v9 )
    {
      v45 = *(_OWORD *)(v9 + 12);
      v46 = *(_OWORD *)(v9 + 20);
      v47 = *((_QWORD *)v9 + 7);
      v40 = *((_QWORD *)v9 + 8);
      v42 = *(_OWORD *)(v9 + 2);
      v43 = *((_DWORD *)v9 + 5);
    }
    if ( (byte_140171469 & 1) != 0 )
    {
      if ( a2 )
      {
        v11 = *(_DWORD *)(a2 + 44);
        v12 = *(_WORD *)(a2 + 34);
        v13 = *(_WORD *)(a2 + 32);
        v14 = *(_DWORD *)(a2 + 20);
        v15 = *(_DWORD *)(a2 + 16);
        v16 = *(_WORD *)(a2 + 10);
        v17 = *(_WORD *)(a2 + 8);
        v18 = *(_WORD *)(a2 + 6);
        v25 = *(_DWORD *)(a2 + 72);
        v26 = *(_DWORD *)(a2 + 68);
        v27 = *(_DWORD *)(a2 + 64);
        v28 = *(_DWORD *)(a2 + 60);
        v29 = *(_DWORD *)(a2 + 56);
        v30 = *(_DWORD *)(a2 + 52);
        v31 = *(_DWORD *)(a2 + 48);
        v19 = *(_DWORD *)(a2 + 24);
        v33 = *(_DWORD *)(a2 + 36);
        v20 = *(_WORD *)(a2 + 4);
        v21 = *(_DWORD *)(a2 + 28);
        v32 = v11;
        v10 = 0LL;
        v35 = v20;
      }
      else
      {
        LOBYTE(v25) = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v21) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v19) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v30) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v31) = 0;
        LOBYTE(v16) = 0;
        v32 = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v33) = 0;
        LOBYTE(v18) = 0;
        v35 = 0;
      }
      v34 = v19;
      if ( v9 )
      {
        v22 = v9[1];
        v10 = *v9;
      }
      else
      {
        v34 = v19;
        v22 = 0LL;
      }
      v23 = *(_QWORD *)(v8 + 6160);
      if ( !v23 || (v24 = *(const wchar_t **)(v23 + 24)) == 0LL )
        v24 = (const wchar_t *)&unk_140151214;
      McTemplateK0qjzszhhsshhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer(
        (__int64)v24,
        v22,
        v10,
        *(_DWORD *)(a1 + 56),
        (__int64)&v39,
        *((const wchar_t **)&v38 + 1),
        (const char *)&v42,
        v24,
        v10,
        v22,
        (const char *)&v45,
        (const char *)&v40,
        v35,
        v18,
        v17,
        v16,
        v15,
        v14,
        v34,
        v21,
        v13,
        v12,
        v33,
        v32,
        v31,
        v30,
        v29,
        v28,
        v27,
        v26,
        v25,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
