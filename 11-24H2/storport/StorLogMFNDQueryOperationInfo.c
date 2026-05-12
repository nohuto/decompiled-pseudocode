/*
 * XREFs of StorLogMFNDQueryOperationInfo @ 0x1400C5DAC
 * Callers:
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1400C7268 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     StorQueryMFNDOperationInfo @ 0x140190B74 (StorQueryMFNDOperationInfo.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssqquuq_EtwWriteTransfer @ 0x1400C2D84 (McTemplateK0qjzszhhssqquuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDQueryOperationInfo(__int64 a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r11
  __int16 *v12; // rcx
  __int64 v13; // r8
  __int16 v14; // r9
  __int64 v15; // rdx
  const wchar_t *v16; // rdx
  __int128 v18; // [rsp+90h] [rbp-80h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-60h] BYREF
  char v21; // [rsp+B8h] [rbp-58h]
  __int128 v22; // [rsp+C0h] [rbp-50h] BYREF
  int v23; // [rsp+D0h] [rbp-40h]
  char v24; // [rsp+D4h] [rbp-3Ch]
  __int128 v25; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v26; // [rsp+E8h] [rbp-28h]
  __int64 v27; // [rsp+F8h] [rbp-18h]
  char v28; // [rsp+100h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v23 = 0;
    v18 = 0LL;
    v24 = 0;
    v25 = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    v28 = 0;
    v8 = *(_OWORD *)(a1 + 5064);
    v9 = *(_QWORD *)(a1 + 16);
    v20 = 0LL;
    v19 = v8;
    v21 = 0;
    v22 = 0LL;
    LOWORD(v10) = RaidDriverGetName(v9, (__int64)&v18);
    v12 = *(__int16 **)(v11 + 6000);
    if ( v12 )
    {
      v25 = *(_OWORD *)(v12 + 12);
      v26 = *(_OWORD *)(v12 + 20);
      v27 = *((_QWORD *)v12 + 7);
      v20 = *((_QWORD *)v12 + 8);
      v22 = *(_OWORD *)(v12 + 2);
      v10 = *((_DWORD *)v12 + 5);
      v23 = v10;
    }
    if ( (byte_140171469 & 1) != 0 )
    {
      if ( v12 )
      {
        v13 = (unsigned __int16)v12[1];
        v14 = *v12;
      }
      else
      {
        v13 = 0LL;
        LOBYTE(v14) = 0;
      }
      v15 = *(_QWORD *)(v11 + 6160);
      if ( !v15 || (v16 = *(const wchar_t **)(v15 + 24)) == 0LL )
        v16 = (const wchar_t *)&unk_140151214;
      LOWORD(v10) = McTemplateK0qjzszhhssqquuq_EtwWriteTransfer(
                      (a4 >> 9) & 7,
                      &EventMFNDQueryOperationInfo,
                      v13,
                      *(_DWORD *)(v11 + 56),
                      (__int64)&v19,
                      *((const wchar_t **)&v18 + 1),
                      (const char *)&v22,
                      v16,
                      v14,
                      v13,
                      (const char *)&v25,
                      (const char *)&v20,
                      a2,
                      a3,
                      a4 >> 1,
                      (a4 >> 9) & 7,
                      a5);
    }
  }
  return v10;
}
