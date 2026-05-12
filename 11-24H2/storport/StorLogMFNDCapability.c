/*
 * XREFs of StorLogMFNDCapability @ 0x140066C1C
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer @ 0x140057B70 (McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDCapability(__int64 a1, char a2, unsigned __int16 a3)
{
  __int128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // ebx
  __int16 v12; // di
  __int16 v13; // si
  const wchar_t *v14; // r10
  __int64 v15; // r8
  __int128 v16; // [rsp+170h] [rbp-80h] BYREF
  __int128 v17; // [rsp+180h] [rbp-70h] BYREF
  __int64 v18; // [rsp+190h] [rbp-60h] BYREF
  char v19; // [rsp+198h] [rbp-58h]
  __int128 v20; // [rsp+1A0h] [rbp-50h] BYREF
  int v21; // [rsp+1B0h] [rbp-40h]
  char v22; // [rsp+1B4h] [rbp-3Ch]
  __int128 v23; // [rsp+1B8h] [rbp-38h] BYREF
  __int128 v24; // [rsp+1C8h] [rbp-28h]
  __int64 v25; // [rsp+1D8h] [rbp-18h]
  char v26; // [rsp+1E0h] [rbp-10h]

  if ( StorEtwLoggingEnabled && *(_QWORD *)(a1 + 6152) )
  {
    v21 = 0;
    v16 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v26 = 0;
    v5 = *(_OWORD *)(a1 + 5064);
    v6 = *(_QWORD *)(a1 + 16);
    v18 = 0LL;
    v17 = v5;
    v19 = 0;
    v20 = 0LL;
    RaidDriverGetName(v6, (__int64)&v16);
    v8 = *(_QWORD *)(v7 + 6000);
    if ( v8 )
    {
      v23 = *(_OWORD *)(v8 + 24);
      v24 = *(_OWORD *)(v8 + 40);
      v25 = *(_QWORD *)(v8 + 56);
      v18 = *(_QWORD *)(v8 + 64);
      v20 = *(_OWORD *)(v8 + 4);
      v21 = *(_DWORD *)(v8 + 20);
    }
    if ( (byte_140171469 & 1) != 0 )
    {
      v9 = *(_QWORD *)(v7 + 6160);
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 32);
        v11 = *(_DWORD *)(v9 + 36);
      }
      else
      {
        LOBYTE(v11) = -1;
        LOBYTE(v10) = -1;
      }
      if ( v8 )
      {
        v12 = *(_WORD *)(v8 + 2);
        v13 = *(_WORD *)v8;
      }
      else
      {
        LOBYTE(v12) = 0;
        LOBYTE(v13) = 0;
      }
      if ( !v9 || (v14 = *(const wchar_t **)(v9 + 24)) == 0LL )
        v14 = (const wchar_t *)&unk_140151214;
      v15 = *(_QWORD *)(v7 + 6152);
      McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer(
        v8,
        *(_BYTE *)(v7 + 111) & 1,
        v15,
        *(_DWORD *)(v7 + 56),
        (__int64)&v17,
        *((const wchar_t **)&v16 + 1),
        (const char *)&v20,
        v14,
        v13,
        v12,
        (const char *)&v23,
        (const char *)&v18,
        *(_BYTE *)(v7 + 111) & 1,
        a2,
        v11,
        v10,
        *(_DWORD *)v15,
        *(_BYTE *)(v15 + 4),
        *(_BYTE *)(v15 + 5),
        *(_WORD *)(v15 + 8),
        *(_WORD *)(v15 + 10),
        *(_WORD *)(v15 + 12),
        *(_WORD *)(v15 + 14),
        *(_WORD *)(v15 + 16),
        *(_WORD *)(v15 + 18),
        *(_WORD *)(v15 + 20),
        *(_WORD *)(v15 + 22),
        *(_DWORD *)(v15 + 24),
        *(_DWORD *)(v15 + 28),
        *(_DWORD *)(v15 + 32),
        *(_DWORD *)(v15 + 36),
        *(_DWORD *)(v15 + 40),
        *(_DWORD *)(v15 + 44),
        *(_DWORD *)(v15 + 48),
        *(_DWORD *)(v15 + 52),
        *(_DWORD *)(v15 + 56),
        *(_DWORD *)(v15 + 60),
        *(_DWORD *)(v15 + 64),
        *(_DWORD *)(v15 + 68),
        *(_BYTE *)(v15 + 72),
        *(_BYTE *)(v15 + 73),
        *(_BYTE *)(v15 + 74),
        *(_BYTE *)(v15 + 75),
        a3 >> 1,
        (a3 >> 9) & 7);
    }
  }
}
