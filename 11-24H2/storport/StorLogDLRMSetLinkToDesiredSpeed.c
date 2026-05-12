/*
 * XREFs of StorLogDLRMSetLinkToDesiredSpeed @ 0x14013A43C
 * Callers:
 *     StorDlrmSetLinkToDesiredSpeed @ 0x140139C04 (StorDlrmSetLinkToDesiredSpeed.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0qjzshhssqtqtxqq_EtwWriteTransfer @ 0x1401395E8 (McTemplateK0qjzshhssqtqtxqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorLogDLRMSetLinkToDesiredSpeed(
        __int64 a1,
        char a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        __int64 a6,
        char a7,
        int a8)
{
  __int64 v10; // rbx
  __int128 v11; // xmm0
  unsigned int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int16 *v15; // rax
  __int64 v16; // r8
  unsigned __int16 *v17; // rax
  __int64 v18; // r8
  int v19; // [rsp+60h] [rbp-B0h]
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

  if ( StorEtwLoggingEnabled )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 )
      {
        v25 = 0;
        v21 = 0LL;
        v26 = 0;
        v24 = 0LL;
        v29 = 0LL;
        v27 = 0LL;
        v30 = 0;
        v28 = 0LL;
        v22 = 0LL;
        v23 = 0;
        v11 = *(_OWORD *)(v10 + 5064);
        v20 = 0LL;
        v21 = v11;
        RaidDriverGetName(*(_QWORD *)(v10 + 16), (__int64)&v20);
        v13 = *(_QWORD *)(v10 + 6000);
        if ( v13 )
        {
          v27 = *(_OWORD *)(v13 + 24);
          v28 = *(_OWORD *)(v13 + 40);
          v29 = *(_QWORD *)(v13 + 56);
          v22 = *(_QWORD *)(*(_QWORD *)(v10 + 6000) + 64LL);
          v14 = *(_QWORD *)(v10 + 6000);
          v24 = *(_OWORD *)(v14 + 4);
          v25 = *(_DWORD *)(v14 + 20);
        }
        if ( a8 < 0 )
        {
          if ( (byte_140171468 & 8) != 0 )
          {
            v17 = *(unsigned __int16 **)(v10 + 6000);
            if ( v17 )
            {
              LOWORD(v12) = v17[1];
              v18 = *v17;
            }
            else
            {
              v18 = v12;
            }
            McTemplateK0qjzshhssqtqtxqq_EtwWriteTransfer(
              a5,
              &EventDLRMSetLinkToDesiredSpeedFailure,
              v18,
              *(_DWORD *)(v10 + 56),
              (__int64)&v21,
              *((const wchar_t **)&v20 + 1),
              (const char *)&v24,
              v18,
              v12,
              (const char *)&v27,
              (const char *)&v22,
              a2,
              v19,
              a4,
              a5,
              a6,
              a7,
              a8);
          }
        }
        else if ( (byte_140171468 & 0x10) != 0 )
        {
          v15 = *(unsigned __int16 **)(v10 + 6000);
          if ( v15 )
          {
            LOWORD(v12) = v15[1];
            v16 = *v15;
          }
          else
          {
            v16 = v12;
          }
          McTemplateK0qjzshhssqtqtxqq_EtwWriteTransfer(
            a5,
            &EventDLRMSetLinkToDesiredSpeedSuccess,
            v16,
            *(_DWORD *)(v10 + 56),
            (__int64)&v21,
            *((const wchar_t **)&v20 + 1),
            (const char *)&v24,
            v16,
            v12,
            (const char *)&v27,
            (const char *)&v22,
            a2,
            v19,
            a4,
            a5,
            a6,
            a7,
            a8);
        }
      }
    }
  }
}
