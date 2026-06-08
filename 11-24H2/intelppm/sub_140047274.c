/*
 * XREFs of sub_140047274 @ 0x140047274
 * Callers:
 *     sub_1400285E0 @ 0x1400285E0 (sub_1400285E0.c)
 *     sub_140028E10 @ 0x140028E10 (sub_140028E10.c)
 * Callees:
 *     sub_140002014 @ 0x140002014 (sub_140002014.c)
 *     sub_140003A40 @ 0x140003A40 (sub_140003A40.c)
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140009BAC @ 0x140009BAC (sub_140009BAC.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140029B24 @ 0x140029B24 (sub_140029B24.c)
 *     sub_14002A228 @ 0x14002A228 (sub_14002A228.c)
 *     sub_140040F94 @ 0x140040F94 (sub_140040F94.c)
 */

__int64 __fastcall sub_140047274(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int16 v9; // r9
  int v10; // eax
  unsigned __int16 v11; // r9
  char v12; // bp
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 280);
  if ( (result & 0x8000000) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 248);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 144);
      if ( !*(_BYTE *)(v7 + 131) )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          return result;
        v9 = 22;
        return sub_140003BC4((__int64)off_140018050->DeviceExtension, 2u, 1u, v9, (__int64)&unk_140014550, a3);
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
      if ( *(_BYTE *)(v7 + 133) )
      {
        v10 = sub_140029B24(*(_QWORD *)(v5 + 256));
        if ( v10 < 0 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(
                     qword_140019128,
                     qword_140019158);
          v11 = 23;
LABEL_12:
          sub_140009BAC((__int64)off_140018050->DeviceExtension, 2u, 3u, v11, (__int64)&unk_140014550, a3, v10);
          return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(
                   qword_140019128,
                   qword_140019158);
        }
        v10 = sub_14002A228(*(_QWORD *)(v5 + 256));
        if ( v10 < 0 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(
                     qword_140019128,
                     qword_140019158);
          v11 = 24;
          goto LABEL_12;
        }
      }
      if ( *(_BYTE *)(v8 + 104) != 127 || *(_DWORD *)(v5 + 80) )
      {
        v12 = 0;
      }
      else
      {
        KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v12 = 1;
      }
      v13 = sub_140002014(v5, v8 + 104);
      if ( v12 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v14 = *(_QWORD *)(v7 + 48);
      if ( v13 > v14 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          sub_140003BC4((__int64)off_140018050->DeviceExtension, 3u, 1u, 0x19u, (__int64)&unk_140014550, a3);
        v13 = *(_QWORD *)(v7 + 48);
        v14 = v13;
      }
      if ( v13 < *(_QWORD *)(v7 + 64) )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          sub_140003BC4((__int64)off_140018050->DeviceExtension, 3u, 1u, 0x1Au, (__int64)&unk_140014550, a3);
          v14 = *(_QWORD *)(v7 + 48);
        }
        v13 = *(_QWORD *)(v7 + 64);
      }
      v15 = *(_DWORD *)(v7 + 112);
      *(_QWORD *)(v7 + 88) = v13;
      if ( (unsigned int)(100 * v13 / v14) > v15 )
        v15 = 100 * v13 / v14;
      *(_DWORD *)(v7 + 116) = v15;
      if ( v15 != *(_DWORD *)(v5 + 740) )
      {
        sub_140040F94(v5, *(_DWORD *)(v5 + 464), *(_DWORD *)(v5 + 512), v15);
        ((void (__fastcall *)(__int64))qword_140019698)(v5);
      }
      sub_140003A40(v5, v15);
      return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
    }
  }
  if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    return result;
  v9 = 21;
  return sub_140003BC4((__int64)off_140018050->DeviceExtension, 2u, 1u, v9, (__int64)&unk_140014550, a3);
}
