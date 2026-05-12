/*
 * XREFs of StorLogMFNDQueryChildPFList @ 0x1400C52FC
 * Callers:
 *     StorQueryMFNDChildPFList @ 0x14018F2D0 (StorQueryMFNDChildPFList.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssqqqqbr12uuq_EtwWriteTransfer @ 0x1400C2AFC (McTemplateK0qjzszhhssqqqqbr12uuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDQueryChildPFList(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int16 *v10; // r11
  __int64 v11; // r9
  int v12; // ecx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // r10d
  __int16 v18; // si
  __int16 v19; // r11
  const wchar_t *v20; // rdx
  __int128 v21; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-60h] BYREF
  char v24; // [rsp+C8h] [rbp-58h]
  __int128 v25; // [rsp+D0h] [rbp-50h] BYREF
  int v26; // [rsp+E0h] [rbp-40h]
  char v27; // [rsp+E4h] [rbp-3Ch]
  __int128 v28; // [rsp+E8h] [rbp-38h] BYREF
  __int128 v29; // [rsp+F8h] [rbp-28h]
  __int64 v30; // [rsp+108h] [rbp-18h]
  char v31; // [rsp+110h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v26 = 0;
    v21 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    v31 = 0;
    v8 = *(_OWORD *)(a1 + 5064);
    v9 = *(_QWORD *)(a1 + 16);
    v23 = 0LL;
    v22 = v8;
    v24 = 0;
    v25 = 0LL;
    RaidDriverGetName(v9, (__int64)&v21);
    v10 = *(__int16 **)(a1 + 6000);
    if ( v10 )
    {
      v28 = *(_OWORD *)(v10 + 12);
      v29 = *(_OWORD *)(v10 + 20);
      v30 = *((_QWORD *)v10 + 7);
      v23 = *((_QWORD *)v10 + 8);
      v25 = *(_OWORD *)(v10 + 2);
      v26 = *((_DWORD *)v10 + 5);
    }
    if ( (byte_140171469 & 1) != 0 )
    {
      v11 = (a2 + 16) & -(__int64)(a2 != 0);
      if ( a2 )
      {
        v12 = *(_DWORD *)(a2 + 4);
        v13 = *(_DWORD *)(a2 + 8);
        v14 = (unsigned int)(v12 - 16);
      }
      else
      {
        v14 = 0LL;
        LOBYTE(v13) = 0;
      }
      v15 = *(_QWORD *)(a1 + 6160);
      if ( v15 )
      {
        v16 = *(unsigned int *)(v15 + 32);
        v17 = *(_DWORD *)(v15 + 36);
      }
      else
      {
        LOBYTE(v17) = -1;
        v16 = 0xFFFFFFFFLL;
      }
      if ( v10 )
      {
        v18 = v10[1];
        v19 = *v10;
      }
      else
      {
        LOBYTE(v18) = 0;
        LOBYTE(v19) = 0;
      }
      if ( !v15 || (v20 = *(const wchar_t **)(v15 + 24)) == 0LL )
        v20 = (const wchar_t *)&unk_140151214;
      McTemplateK0qjzszhhssqqqqbr12uuq_EtwWriteTransfer(
        v14,
        (__int64)v20,
        v16,
        *(_DWORD *)(a1 + 56),
        (__int64)&v22,
        *((const wchar_t **)&v21 + 1),
        (const char *)&v25,
        v20,
        v19,
        v18,
        (const char *)&v28,
        (const char *)&v23,
        v17,
        v16,
        v13,
        v14,
        v11,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
