/*
 * XREFs of StorLogMFNDSetOperationInfo @ 0x1400C6F68
 * Callers:
 *     StorSetMFNDOperationPrivilege @ 0x1400C7364 (StorSetMFNDOperationPrivilege.c)
 *     StorSetMFNDOperationInfo @ 0x14019289C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssqtuuuq_EtwWriteTransfer @ 0x1400C2FBC (McTemplateK0qjzszhhssqtuuuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDSetOperationInfo(__int64 a1, char a2, char a3, char a4, unsigned __int16 a5, char a6)
{
  __int128 v9; // xmm0
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r11
  __int64 v13; // rcx
  __int16 v14; // r10
  __int16 v15; // bx
  __int64 v16; // r9
  const wchar_t *v17; // r9
  __int128 v19; // [rsp+90h] [rbp-80h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-60h] BYREF
  char v22; // [rsp+B8h] [rbp-58h]
  __int128 v23; // [rsp+C0h] [rbp-50h] BYREF
  int v24; // [rsp+D0h] [rbp-40h]
  char v25; // [rsp+D4h] [rbp-3Ch]
  __int128 v26; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v27; // [rsp+E8h] [rbp-28h]
  __int64 v28; // [rsp+F8h] [rbp-18h]
  char v29; // [rsp+100h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v24 = 0;
    v19 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    v29 = 0;
    v9 = *(_OWORD *)(a1 + 5064);
    v10 = *(_QWORD *)(a1 + 16);
    v21 = 0LL;
    v20 = v9;
    v22 = 0;
    v23 = 0LL;
    LOWORD(v11) = RaidDriverGetName(v10, (__int64)&v19);
    v13 = *(_QWORD *)(v12 + 6000);
    if ( v13 )
    {
      v26 = *(_OWORD *)(v13 + 24);
      v27 = *(_OWORD *)(v13 + 40);
      v28 = *(_QWORD *)(v13 + 56);
      v21 = *(_QWORD *)(v13 + 64);
      v23 = *(_OWORD *)(v13 + 4);
      v11 = *(_DWORD *)(v13 + 20);
      v24 = v11;
    }
    if ( (byte_140171469 & 1) != 0 )
    {
      if ( v13 )
      {
        v14 = *(_WORD *)(v13 + 2);
        v15 = *(_WORD *)v13;
      }
      else
      {
        LOBYTE(v14) = 0;
        LOBYTE(v15) = 0;
      }
      v16 = *(_QWORD *)(v12 + 6160);
      if ( !v16 || (v17 = *(const wchar_t **)(v16 + 24)) == 0LL )
        v17 = (const wchar_t *)&unk_140151214;
      LOWORD(v11) = McTemplateK0qjzszhhssqtuuuq_EtwWriteTransfer(
                      v13,
                      (a5 >> 9) & 7,
                      a5 >> 1,
                      *(_DWORD *)(v12 + 56),
                      (__int64)&v20,
                      *((const wchar_t **)&v19 + 1),
                      (const char *)&v23,
                      v17,
                      v15,
                      v14,
                      (const char *)&v26,
                      (const char *)&v21,
                      a2,
                      a3,
                      a4,
                      a5 >> 1,
                      (a5 >> 9) & 7,
                      a6);
    }
  }
  return v11;
}
