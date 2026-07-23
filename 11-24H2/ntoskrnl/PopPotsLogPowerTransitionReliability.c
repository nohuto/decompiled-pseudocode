/*
 * XREFs of PopPotsLogPowerTransitionReliability @ 0x140A9287C
 * Callers:
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopGetMostRecentWakeInfo @ 0x1404AE8BC (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x1404B735C (PopWakeInfoDereference.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopPotsLogPowerTransitionReliability(int a1, int a2, int a3)
{
  unsigned __int16 *v5; // rsi
  unsigned __int16 *v7; // r14
  int v8; // r15d
  __int64 MostRecentWakeInfo; // rax
  __int64 *i; // rcx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  char result; // al
  int v18; // ecx
  int v19; // ecx
  BOOL v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+68h] [rbp-A0h] BYREF
  BOOL *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  int *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  _BYTE v34[16]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  _DWORD v38[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 v41; // [rsp+F8h] [rbp-10h]
  _DWORD v42[2]; // [rsp+100h] [rbp-8h] BYREF
  int *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int64 *v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  __int64 *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  wchar_t Dst[12]; // [rsp+138h] [rbp+30h] BYREF

  v25[0] = 0x20000LL;
  v25[1] = &word_140AEDAC0;
  v5 = (unsigned __int16 *)v25;
  v7 = (unsigned __int16 *)v25;
  v8 = 0;
  if ( a1 >= 0 )
  {
    MostRecentWakeInfo = PopGetMostRecentWakeInfo();
    if ( MostRecentWakeInfo )
    {
      v8 = *(_DWORD *)(MostRecentWakeInfo + 84);
      if ( *(_DWORD *)(MostRecentWakeInfo + 40) )
      {
        for ( i = *(__int64 **)(MostRecentWakeInfo + 24); i != (__int64 *)(MostRecentWakeInfo + 24); i = (__int64 *)*i )
        {
          v11 = *((_DWORD *)i + 4);
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                  {
                    v15 = *((_DWORD *)i + 6);
                    if ( v15 )
                    {
                      v16 = v15 - 1;
                      if ( v16 )
                      {
                        if ( v16 == 1 )
                          a3 |= 0x2000000u;
                      }
                      else
                      {
                        a3 |= 0x100000u;
                      }
                    }
                    else
                    {
                      a3 |= 0x10000u;
                    }
                  }
                }
                else
                {
                  a3 |= 0x40000u;
                }
              }
              else
              {
                a3 |= 0x2000u;
              }
            }
            else if ( *((_DWORD *)i + 6) == 1 || *((_DWORD *)i + 6) == 2 )
            {
              a3 |= 0x800u;
            }
          }
          else
          {
            a3 |= 0x1000u;
            v5 = (unsigned __int16 *)(i + 12);
            v7 = (unsigned __int16 *)(i + 5);
          }
        }
      }
      else
      {
        a3 |= 0x4000000u;
      }
      PopWakeInfoDereference(MostRecentWakeInfo);
    }
    else
    {
      a3 |= 0x4000000u;
    }
  }
  result = swprintf_s(Dst, 9uLL, L"%08X", (unsigned int)a1);
  if ( PotsPowerTransitionsHandleRegistered && (unsigned int)dword_140E08370 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E08370, 0x400000000000LL);
    if ( result )
    {
      v29 = 4LL;
      v28 = &v20;
      v21 = a2;
      v30 = &v21;
      v31 = 4LL;
      v32 = &v22;
      v20 = a1 >= 0;
      v22 = a3;
      v33 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v34, Dst);
      v18 = *v5;
      v37 = *((_QWORD *)v5 + 1);
      v35 = v38;
      v38[0] = v18;
      v36 = 2LL;
      v38[1] = 0;
      v19 = *v7;
      v41 = *((_QWORD *)v7 + 1);
      v23 = PopFullWake;
      v43 = &v23;
      v45 = &v24;
      v47 = &v26;
      v39 = v42;
      v42[0] = v19;
      v40 = 2LL;
      v42[1] = 0;
      v44 = 4LL;
      LODWORD(v24) = v8;
      v46 = 4LL;
      v26 = 0x1000000LL;
      v48 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E08370,
               (unsigned __int8 *)byte_14004FBC9,
               0LL,
               0LL,
               0xDu,
               &v27);
    }
  }
  return result;
}
