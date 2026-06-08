/*
 * XREFs of sub_14004599C @ 0x14004599C
 * Callers:
 *     sub_1400285E0 @ 0x1400285E0 (sub_1400285E0.c)
 *     sub_140045980 @ 0x140045980 (sub_140045980.c)
 * Callees:
 *     sub_140002014 @ 0x140002014 (sub_140002014.c)
 *     sub_140003A78 @ 0x140003A78 (sub_140003A78.c)
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140004B88 @ 0x140004B88 (sub_140004B88.c)
 *     sub_1400053CC @ 0x1400053CC (sub_1400053CC.c)
 *     sub_1400054D4 @ 0x1400054D4 (sub_1400054D4.c)
 *     sub_140008D0C @ 0x140008D0C (sub_140008D0C.c)
 *     sub_140009BAC @ 0x140009BAC (sub_140009BAC.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140029B24 @ 0x140029B24 (sub_140029B24.c)
 *     sub_14002A228 @ 0x14002A228 (sub_14002A228.c)
 */

_UNKNOWN **__fastcall sub_14004599C(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  _UNKNOWN **result; // rax
  unsigned __int16 v9; // r9
  int v10; // ecx
  unsigned __int16 v11; // r9
  char v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v21[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+70h] [rbp+7h]
  struct _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+Fh] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+1Fh] BYREF

  v20 = 0LL;
  v22 = 0LL;
  v23 = 0;
  Affinity = 0LL;
  memset(v21, 0, sizeof(v21));
  PreviousAffinity = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v5 + 280) & 0x8000000) != 0 )
  {
    v6 = *(_QWORD *)(v5 + 248);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 144);
      if ( *(_BYTE *)(v7 + 8) == 126 )
      {
        result = &off_140018058;
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          return result;
        v9 = 28;
        return (_UNKNOWN **)sub_140003BC4(
                              (__int64)off_140018050->DeviceExtension,
                              2u,
                              1u,
                              v9,
                              (__int64)&unk_140014550,
                              a3);
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
      if ( *(_BYTE *)(v6 + 134) )
      {
        v10 = sub_140029B24(*(_QWORD *)(v5 + 256));
        if ( v10 < 0 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(
                                  qword_140019128,
                                  qword_140019158);
          v11 = 29;
LABEL_12:
          sub_140009BAC((__int64)off_140018050->DeviceExtension, 2u, 3u, v11, (__int64)&unk_140014550, a3, v10);
          return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(
                                qword_140019128,
                                qword_140019158);
        }
        v10 = sub_14002A228(*(_QWORD *)(v5 + 256));
        if ( v10 < 0 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(
                                  qword_140019128,
                                  qword_140019158);
          v11 = 30;
          goto LABEL_12;
        }
      }
      if ( *(_BYTE *)(v7 + 8) != 127 || *(_DWORD *)(v5 + 80) )
      {
        v12 = 0;
      }
      else
      {
        KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v12 = 1;
      }
      v13 = sub_140002014(v5, v7 + 8);
      if ( v12 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v14 = *(_QWORD *)(v6 + 48);
      if ( v13 < v14 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          sub_140003BC4((__int64)off_140018050->DeviceExtension, 3u, 1u, 0x1Fu, (__int64)&unk_140014550, a3);
        v13 = *(_QWORD *)(v6 + 48);
        v14 = v13;
      }
      *(_QWORD *)(v6 + 40) = v13;
      v15 = 100 * v13 / v14;
      *(_DWORD *)(v6 + 100) = v15;
      if ( (unsigned int)v15 > *(_DWORD *)(v6 + 104) )
        *(_DWORD *)(v6 + 104) = v15;
      v23 = 0;
      LODWORD(v22) = *(_DWORD *)(v6 + 100);
      if ( *(_DWORD *)(v5 + 80) )
      {
        v23 = *(_DWORD *)(v5 + 80);
        v16 = *(_DWORD *)(v5 + 84);
      }
      else
      {
        v16 = *(_DWORD *)(v5 + 56);
      }
      HIDWORD(v22) = v16;
      v17 = *(_QWORD *)(v5 + 560);
      if ( v17 )
      {
        v18 = 568;
      }
      else
      {
        if ( !byte_1400196D8 || (v17 = *(_QWORD *)(v5 + 1080)) == 0 || *(_DWORD *)(v17 + 36) <= 1u )
        {
          sub_140008D0C(v5, (__int64)v21);
LABEL_39:
          sub_1400053CC((__int64 *)v21);
          while ( !(unsigned int)sub_140004B88((__int64 *)v21, &v20) )
          {
            v19 = v20;
            if ( v5 != v20 )
            {
              *(_QWORD *)(*(_QWORD *)(v20 + 248) + 40LL) = *(_QWORD *)(v6 + 40);
              *(_DWORD *)(*(_QWORD *)(v19 + 248) + 100LL) = *(_DWORD *)(v6 + 100);
              *(_DWORD *)(*(_QWORD *)(v19 + 248) + 104LL) = *(_DWORD *)(v6 + 104);
            }
          }
          ((void (__fastcall *)(__int64 *))qword_140019478)(&v22);
          sub_140003A78((ULONG *)v5, &stru_1400130F0, &stru_140013100, 0, 0LL);
          return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(
                                qword_140019128,
                                qword_140019158);
        }
        v18 = 1088;
      }
      sub_1400054D4(v17 + 16, v18, (__int64)v21);
      goto LABEL_39;
    }
  }
  result = &off_140018058;
  if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    return result;
  v9 = 27;
  return (_UNKNOWN **)sub_140003BC4((__int64)off_140018050->DeviceExtension, 2u, 1u, v9, (__int64)&unk_140014550, a3);
}
