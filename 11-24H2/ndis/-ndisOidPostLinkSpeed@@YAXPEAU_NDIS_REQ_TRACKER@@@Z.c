/*
 * XREFs of ?ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140085F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisOidPostLinkSpeed(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v10; // [rsp+50h] [rbp-49h]
  __int128 v11; // [rsp+60h] [rbp-39h]
  __int128 v12; // [rsp+70h] [rbp-29h]
  __int128 v13; // [rsp+80h] [rbp-19h]
  __int128 v14; // [rsp+90h] [rbp-9h]
  __int128 v15; // [rsp+A0h] [rbp+7h]
  _DWORD v16[4]; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+27h]
  __int64 v18; // [rsp+C8h] [rbp+2Fh]
  int v19; // [rsp+D0h] [rbp+37h]
  int v20; // [rsp+D4h] [rbp+3Bh]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      38,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v1);
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v3 + 32) < 6u )
  {
    v4 = **(unsigned int **)(v1 + 40);
    v5 = 100 * v4;
    if ( 100 * v4 != *(_QWORD *)(v3 + 2760) )
    {
      v6 = *(_QWORD *)(v3 + 5288);
      v18 = 100 * v4;
      v17 = 100 * v4;
      *(_QWORD *)(v3 + 2272) = v5;
      *(_QWORD *)(v3 + 2280) = v5;
      v16[1] = *(_DWORD *)(v3 + 344);
      v16[2] = *(_DWORD *)(v3 + 348);
      v19 = *(_DWORD *)(v3 + 808);
      v20 = *(_DWORD *)(v3 + 468);
      v9[0] = 0LL;
      v9[1] = &ndisIntReqGeneric;
      v12 = (unsigned __int64)v16;
      v7 = *(_QWORD *)(v3 + 3760);
      v10 = 0LL;
      v16[3] = 0;
      v16[0] = 2621824;
      v11 = 0LL;
      LODWORD(v9[0]) = 7340440;
      v13 = 0LL;
      DWORD1(v10) = 1073807383;
      v14 = 0LL;
      DWORD2(v12) = -2;
      v15 = 0LL;
      (*((void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))g_MiniportHookDrivers
       + 16 * (__int64)*(int *)(v7 + 896)
       + 8))(
        *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)*(int *)(v7 + 896) + 3),
        v6,
        v3,
        v9);
    }
    if ( (*(_DWORD *)(v3 + 120) & 0x20000000) != 0 )
      v8 = *(_QWORD *)(v3 + 792);
    else
      v8 = *(_QWORD *)(v3 + 3024);
    **(_DWORD **)(v1 + 40) = v8 / 0x64;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      39,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v1);
}
