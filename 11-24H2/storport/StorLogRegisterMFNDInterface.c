/*
 * XREFs of StorLogRegisterMFNDInterface @ 0x140067AC0
 * Callers:
 *     RaidAdapterRegisterMFNDInterface @ 0x14005DEB0 (RaidAdapterRegisterMFNDInterface.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssq_EtwWriteTransfer @ 0x140056D20 (McTemplateK0qjzszhhssq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorLogRegisterMFNDInterface(__int64 a1, int a2)
{
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // r11
  unsigned __int16 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  const wchar_t *v10; // rcx
  __int128 v11; // [rsp+70h] [rbp-29h] BYREF
  __int128 v12; // [rsp+80h] [rbp-19h] BYREF
  __int64 v13; // [rsp+90h] [rbp-9h] BYREF
  char v14; // [rsp+98h] [rbp-1h]
  __int128 v15; // [rsp+A0h] [rbp+7h] BYREF
  int v16; // [rsp+B0h] [rbp+17h]
  char v17; // [rsp+B4h] [rbp+1Bh]
  __int128 v18; // [rsp+B8h] [rbp+1Fh] BYREF
  __int128 v19; // [rsp+C8h] [rbp+2Fh]
  __int64 v20; // [rsp+D8h] [rbp+3Fh]
  char v21; // [rsp+E0h] [rbp+47h]

  if ( StorEtwLoggingEnabled )
  {
    v16 = 0;
    v11 = 0LL;
    v17 = 0;
    v18 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    v21 = 0;
    v3 = *(_OWORD *)(a1 + 5064);
    v4 = *(_QWORD *)(a1 + 16);
    v13 = 0LL;
    v12 = v3;
    v14 = 0;
    v15 = 0LL;
    RaidDriverGetName(v4, (__int64)&v11);
    v6 = *(unsigned __int16 **)(v5 + 6000);
    if ( v6 )
    {
      v18 = *(_OWORD *)(v6 + 12);
      v19 = *(_OWORD *)(v6 + 20);
      v20 = *((_QWORD *)v6 + 7);
      v13 = *((_QWORD *)v6 + 8);
      v15 = *(_OWORD *)(v6 + 2);
      v16 = *((_DWORD *)v6 + 5);
    }
    if ( (byte_140171469 & 1) != 0 )
    {
      if ( v6 )
      {
        v7 = v6[1];
        v8 = *v6;
      }
      else
      {
        v7 = 0LL;
        v8 = 0LL;
      }
      if ( a2 >= 0 && (v9 = *(_QWORD *)(v5 + 6160)) != 0 )
        v10 = *(const wchar_t **)(v9 + 24);
      else
        v10 = (const wchar_t *)&unk_140151214;
      McTemplateK0qjzszhhssq_EtwWriteTransfer(
        (__int64)v10,
        v7,
        v8,
        *(_DWORD *)(v5 + 56),
        (__int64)&v12,
        *((const wchar_t **)&v11 + 1),
        (const char *)&v15,
        v10,
        v8,
        v7,
        (const char *)&v18,
        (const char *)&v13,
        a2);
    }
  }
}
