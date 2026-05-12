/*
 * XREFs of StorLogDLRMInitialization @ 0x14013A208
 * Callers:
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B2EF0 (StorAdapterInitializeDlrmIfSupported.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzsqhhsstttttq_EtwWriteTransfer @ 0x140139818 (McTemplateK0qjzsqhhsstttttq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogDLRMInitialization(__int64 a1, __int64 a2, int a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r11
  __int16 *v10; // rcx
  char v11; // dl
  __int64 v12; // r8
  char v13; // r9
  __int16 v14; // r10
  char v15; // dl
  __int64 v16; // r8
  char v17; // r9
  __int16 v18; // r10
  __int128 v20; // [rsp+90h] [rbp-80h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-60h] BYREF
  char v23; // [rsp+B8h] [rbp-58h]
  __int128 v24; // [rsp+C0h] [rbp-50h] BYREF
  int v25; // [rsp+D0h] [rbp-40h]
  char v26; // [rsp+D4h] [rbp-3Ch]
  __int128 v27; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-28h]
  __int64 v29; // [rsp+F8h] [rbp-18h]
  char v30; // [rsp+100h] [rbp-10h]

  if ( StorEtwLoggingEnabled && a1 )
  {
    v25 = 0;
    v20 = 0LL;
    v26 = 0;
    v27 = 0LL;
    v29 = 0LL;
    v28 = 0LL;
    v30 = 0;
    v6 = *(_OWORD *)(a1 + 5064);
    v7 = *(_QWORD *)(a1 + 16);
    v22 = 0LL;
    v21 = v6;
    v23 = 0;
    v24 = 0LL;
    LOWORD(v8) = RaidDriverGetName(v7, (__int64)&v20);
    v10 = *(__int16 **)(a1 + 6000);
    if ( v10 )
    {
      v27 = *(_OWORD *)(v10 + 12);
      v28 = *(_OWORD *)(v10 + 20);
      v29 = *((_QWORD *)v10 + 7);
      v22 = *((_QWORD *)v10 + 8);
      v24 = *(_OWORD *)(v10 + 2);
      v8 = *((_DWORD *)v10 + 5);
      v25 = v8;
    }
    if ( a3 < 0 )
    {
      if ( (byte_140171468 & 8) != 0 )
      {
        v15 = v9;
        if ( a2 )
          v15 = *(_QWORD *)(a2 + 64) != v9;
        v16 = (unsigned int)v9;
        v17 = *(_QWORD *)(a1 + 6216) != v9;
        if ( a2 )
          LOBYTE(v16) = *(_QWORD *)(a2 + 80) != v9;
        if ( v10 )
        {
          LOWORD(v9) = v10[1];
          v18 = *v10;
        }
        else
        {
          LOBYTE(v18) = v9;
        }
        LOWORD(v8) = McTemplateK0qjzsqhhsstttttq_EtwWriteTransfer(
                       (*(unsigned __int8 *)(a1 + 113) >> 1) & 1,
                       &EventDLRMInitializationFailure,
                       v16,
                       *(_DWORD *)(a1 + 56),
                       (__int64)&v21,
                       *((const wchar_t **)&v20 + 1),
                       (const char *)&v24,
                       *(_DWORD *)(a1 + 4276),
                       v18,
                       v9,
                       (const char *)&v27,
                       (const char *)&v22,
                       (*(_BYTE *)(a1 + 112) & 0x20) != 0,
                       (*(_BYTE *)(a1 + 113) & 2) != 0,
                       v16,
                       v17,
                       v15,
                       a3);
      }
    }
    else if ( (byte_140171468 & 4) != 0 )
    {
      v11 = v9;
      if ( a2 )
        v11 = *(_QWORD *)(a2 + 64) != v9;
      v12 = (unsigned int)v9;
      v13 = *(_QWORD *)(a1 + 6216) != v9;
      if ( a2 )
        LOBYTE(v12) = *(_QWORD *)(a2 + 80) != v9;
      if ( v10 )
      {
        LOWORD(v9) = v10[1];
        v14 = *v10;
      }
      else
      {
        LOBYTE(v14) = v9;
      }
      LOWORD(v8) = McTemplateK0qjzsqhhsstttttq_EtwWriteTransfer(
                     (*(unsigned __int8 *)(a1 + 113) >> 1) & 1,
                     &EventDLRMInitializationSuccess,
                     v12,
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v21,
                     *((const wchar_t **)&v20 + 1),
                     (const char *)&v24,
                     *(_DWORD *)(a1 + 4276),
                     v14,
                     v9,
                     (const char *)&v27,
                     (const char *)&v22,
                     (*(_BYTE *)(a1 + 112) & 0x20) != 0,
                     (*(_BYTE *)(a1 + 113) & 2) != 0,
                     v12,
                     v13,
                     v11,
                     a3);
    }
  }
  return v8;
}
