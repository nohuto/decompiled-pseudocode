/*
 * XREFs of RootHub_DumpPortData @ 0x140009750
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x14000AEBC (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_D0Exit @ 0x140039A68 (RootHub_D0Exit.c)
 *     RootHub_PrepareHardware @ 0x14007E08C (RootHub_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_qD @ 0x14002B2A8 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall RootHub_DumpPortData(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 result; // rax
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]
  __int64 v22; // [rsp+38h] [rbp-20h]
  __int64 v23; // [rsp+38h] [rbp-20h]
  __int64 v24; // [rsp+38h] [rbp-20h]
  __int64 v25; // [rsp+38h] [rbp-20h]
  __int64 v26; // [rsp+38h] [rbp-20h]

  v3 = a1;
  result = XilRegister_ReadUlong(*(_QWORD *)(a2 + 88), a1);
  v6 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_RECORDER_SF_qD(
               *(_QWORD *)(a2 + 72),
               v5,
               11,
               12,
               (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
               v3,
               result);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = (v6 >> 1) & 1;
      LODWORD(v7) = v6 & 1;
      result = WPP_RECORDER_SF_ddL(
                 *(_QWORD *)(a2 + 72),
                 4u,
                 0xBu,
                 0xDu,
                 (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                 v7,
                 v14,
                 (v6 >> 3) & 1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = (v6 >> 5) & 0xF;
        LODWORD(v15) = (v6 >> 9) & 1;
        LODWORD(v8) = (v6 >> 4) & 1;
        result = WPP_RECORDER_SF_ddL(
                   *(_QWORD *)(a2 + 72),
                   4u,
                   0xBu,
                   0xEu,
                   (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                   v8,
                   v15,
                   v21);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v22) = HIWORD(v6) & 1;
          LODWORD(v16) = (unsigned __int16)v6 >> 14;
          LODWORD(v9) = (v6 >> 10) & 0xF;
          result = WPP_RECORDER_SF_ddL(
                     *(_QWORD *)(a2 + 72),
                     4u,
                     0xBu,
                     0xFu,
                     (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                     v9,
                     v16,
                     v22);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v23) = (v6 >> 20) & 1;
            LODWORD(v17) = (v6 >> 18) & 1;
            LODWORD(v10) = (v6 >> 17) & 1;
            result = WPP_RECORDER_SF_ddL(
                       *(_QWORD *)(a2 + 72),
                       4u,
                       0xBu,
                       0x10u,
                       (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                       v10,
                       v17,
                       v23);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v24) = (v6 >> 22) & 1;
              LODWORD(v18) = (v6 >> 21) & 1;
              LODWORD(v11) = (v6 >> 19) & 1;
              result = WPP_RECORDER_SF_ddL(
                         *(_QWORD *)(a2 + 72),
                         4u,
                         0xBu,
                         0x11u,
                         (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                         v11,
                         v18,
                         v24);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v25) = (v6 >> 26) & 1;
                LODWORD(v19) = (v6 >> 25) & 1;
                LODWORD(v12) = (v6 >> 23) & 1;
                result = WPP_RECORDER_SF_ddL(
                           *(_QWORD *)(a2 + 72),
                           4u,
                           0xBu,
                           0x12u,
                           (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                           v12,
                           v19,
                           v25);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v26) = v6 >> 31;
                  LODWORD(v20) = (v6 >> 30) & 1;
                  LODWORD(v13) = (v6 >> 27) & 1;
                  return WPP_RECORDER_SF_ddL(
                           *(_QWORD *)(a2 + 72),
                           4u,
                           0xBu,
                           0x13u,
                           (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                           v13,
                           v20,
                           v26);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
