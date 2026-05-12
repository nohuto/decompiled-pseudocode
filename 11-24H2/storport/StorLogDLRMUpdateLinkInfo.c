/*
 * XREFs of StorLogDLRMUpdateLinkInfo @ 0x14013A628
 * Callers:
 *     DlrmUpdateLinkInformation @ 0x1401390C0 (DlrmUpdateLinkInformation.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzshhssqqhq_EtwWriteTransfer @ 0x140139208 (McTemplateK0qjzshhssqqhq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

int __fastcall StorLogDLRMUpdateLinkInfo(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **v3; // rax
  __int64 v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // r8
  unsigned int v9; // r11d
  __int16 *v10; // rax
  __int64 v11; // rcx
  __int16 v12; // dx
  unsigned __int16 *v13; // rax
  __int64 v14; // rcx
  __int128 v16; // [rsp+88h] [rbp-29h] BYREF
  __int128 v17; // [rsp+98h] [rbp-19h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-9h] BYREF
  char v19; // [rsp+B0h] [rbp-1h]
  __int128 v20; // [rsp+B8h] [rbp+7h] BYREF
  int v21; // [rsp+C8h] [rbp+17h]
  char v22; // [rsp+CCh] [rbp+1Bh]
  __int128 v23; // [rsp+D0h] [rbp+1Fh] BYREF
  __int128 v24; // [rsp+E0h] [rbp+2Fh]
  void *v25; // [rsp+F0h] [rbp+3Fh]
  char v26; // [rsp+F8h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  if ( StorEtwLoggingEnabled )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( v6 )
      {
        v21 = 0;
        v17 = 0LL;
        v22 = 0;
        v20 = 0LL;
        v25 = 0LL;
        v23 = 0LL;
        v26 = 0;
        v24 = 0LL;
        v18 = 0LL;
        v19 = 0;
        v7 = *(_OWORD *)(v6 + 5064);
        v16 = 0LL;
        v17 = v7;
        RaidDriverGetName(*(_QWORD *)(v6 + 16), (__int64)&v16);
        v3 = *(_UNKNOWN ***)(v6 + 6000);
        if ( v3 )
        {
          v23 = *(_OWORD *)(v3 + 3);
          v24 = *(_OWORD *)(v3 + 5);
          v25 = v3[7];
          v18 = *(_QWORD *)(*(_QWORD *)(v6 + 6000) + 64LL);
          v3 = *(_UNKNOWN ***)(v6 + 6000);
          v20 = *(_OWORD *)((char *)v3 + 4);
          LODWORD(v3) = *((_DWORD *)v3 + 5);
          v21 = (int)v3;
        }
        if ( a3 >= 0 )
        {
          if ( (byte_140171468 & 0x10) != 0 )
          {
            v13 = *(unsigned __int16 **)(v6 + 6000);
            if ( v13 )
            {
              LOWORD(v9) = v13[1];
              v14 = *v13;
            }
            else
            {
              v14 = v9;
            }
            LODWORD(v3) = McTemplateK0qjzshhssqqhq_EtwWriteTransfer(
                            v14,
                            &EventDLRMUpdateLinkInfoSuccess,
                            v8,
                            *(_DWORD *)(v6 + 56),
                            (__int64)&v17,
                            *((const wchar_t **)&v16 + 1),
                            (const char *)&v20,
                            v14,
                            v9,
                            (const char *)&v23,
                            (const char *)&v18,
                            *(_DWORD *)a2,
                            *(_DWORD *)(a2 + 8),
                            *(_WORD *)(a2 + 4),
                            a3);
          }
        }
        else if ( (byte_140171468 & 8) != 0 )
        {
          v10 = *(__int16 **)(v6 + 6000);
          if ( v10 )
          {
            v11 = (unsigned __int16)v10[1];
            v12 = *v10;
          }
          else
          {
            v11 = v9;
            LOBYTE(v12) = v9;
          }
          LODWORD(v3) = McTemplateK0qjzshhssqqhq_EtwWriteTransfer(
                          v11,
                          &EventDLRMUpdateLinkInfoFailure,
                          v8,
                          *(_DWORD *)(v6 + 56),
                          (__int64)&v17,
                          *((const wchar_t **)&v16 + 1),
                          (const char *)&v20,
                          v12,
                          v11,
                          (const char *)&v23,
                          (const char *)&v18,
                          v9,
                          v9,
                          v9,
                          a3);
        }
      }
    }
  }
  return (int)v3;
}
