/*
 * XREFs of StorLogMFNDQueryCCQoSStatisticsLog @ 0x1400C49F8
 * Callers:
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x14018F94C (StorQueryMFNDChildPFQoSStatisticsLog.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshqhhuuxqqbr17uuq_EtwWriteTransfer @ 0x1400C1F98 (McTemplateK0qjzszhhsshqhhuuxqqbr17uuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDQueryCCQoSStatisticsLog(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int16 a5,
        char a6)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  __int16 *v11; // r11
  __int64 v12; // r9
  int v13; // r13d
  __int64 v14; // r12
  char v15; // r15
  char v16; // r14
  __int16 v17; // si
  int v18; // r10d
  __int16 v19; // bx
  __int16 v20; // r11
  __int64 v21; // r8
  const wchar_t *v22; // r8
  __int16 v24; // [rsp+D0h] [rbp-80h]
  __int128 v27; // [rsp+E0h] [rbp-70h] BYREF
  __int128 v28; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+100h] [rbp-50h] BYREF
  char v30; // [rsp+108h] [rbp-48h]
  __int128 v31; // [rsp+110h] [rbp-40h] BYREF
  int v32; // [rsp+120h] [rbp-30h]
  char v33; // [rsp+124h] [rbp-2Ch]
  __int128 v34; // [rsp+128h] [rbp-28h] BYREF
  __int128 v35; // [rsp+138h] [rbp-18h]
  __int64 v36; // [rsp+148h] [rbp-8h]
  char v37; // [rsp+150h] [rbp+0h]

  if ( StorEtwLoggingEnabled )
  {
    v32 = 0;
    v27 = 0LL;
    v33 = 0;
    v34 = 0LL;
    v36 = 0LL;
    v35 = 0LL;
    v37 = 0;
    v8 = *(_OWORD *)(a1 + 5064);
    v9 = *(_QWORD *)(a1 + 16);
    v29 = 0LL;
    v28 = v8;
    v30 = 0;
    v31 = 0LL;
    LOWORD(v10) = RaidDriverGetName(v9, (__int64)&v27);
    v11 = *(__int16 **)(a1 + 6000);
    if ( v11 )
    {
      v34 = *(_OWORD *)(v11 + 12);
      v35 = *(_OWORD *)(v11 + 20);
      v36 = *((_QWORD *)v11 + 7);
      v29 = *((_QWORD *)v11 + 8);
      v31 = *(_OWORD *)(v11 + 2);
      v10 = *((_DWORD *)v11 + 5);
      v32 = v10;
    }
    if ( (byte_140171469 & 1) != 0 )
    {
      v12 = (a4 + 28) & -(__int64)(a4 != 0);
      if ( a4 )
      {
        v13 = *(_DWORD *)(a4 + 24);
        v14 = *(_QWORD *)(a4 + 16);
        v15 = *(_BYTE *)(a4 + 9);
        v16 = *(_BYTE *)(a4 + 8);
        v17 = *(_WORD *)(a4 + 6);
        v18 = 8 * v13;
        v24 = *(_WORD *)(a4 + 4);
      }
      else
      {
        v18 = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v14) = 0;
        v15 = 0;
        v16 = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v24) = 0;
      }
      if ( v11 )
      {
        v19 = v11[1];
        v20 = *v11;
      }
      else
      {
        LOBYTE(v19) = 0;
        LOBYTE(v20) = 0;
      }
      v21 = *(_QWORD *)(a1 + 6160);
      if ( !v21 || (v22 = *(const wchar_t **)(v21 + 24)) == 0LL )
        v22 = (const wchar_t *)&unk_140151214;
      LOWORD(v10) = McTemplateK0qjzszhhsshqhhuuxqqbr17uuq_EtwWriteTransfer(
                      (a5 >> 9) & 7,
                      a5 >> 1,
                      (__int64)v22,
                      *(_DWORD *)(a1 + 56),
                      (__int64)&v28,
                      *((const wchar_t **)&v27 + 1),
                      (const char *)&v31,
                      v22,
                      v20,
                      v19,
                      (const char *)&v34,
                      (const char *)&v29,
                      a2,
                      a3,
                      v24,
                      v17,
                      v16,
                      v15,
                      v14,
                      v13,
                      v18,
                      v12,
                      a5 >> 1,
                      (a5 >> 9) & 7,
                      a6);
    }
  }
  return v10;
}
