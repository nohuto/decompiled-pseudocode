/*
 * XREFs of ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x14012C34C
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x14024DD74 (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?AssignFlickActions@@YAXPEAUtagFLICK_MAP@@@Z @ 0x14012C584 (-AssignFlickActions@@YAXPEAUtagFLICK_MAP@@@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x14012C608 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x14012D2B0 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GetFlickMap(struct tagFLICK_MAP *a1, __int64 a2)
{
  NTSTATUS PointerDeviceCfgStringSetting; // ebx
  unsigned int v4; // r12d
  __int64 UserSessionState; // rsi
  int v7; // eax
  int v8; // ecx
  GUID *v9; // rdi
  GUID **v10; // r15
  const WCHAR *v11; // rdx
  void *v12; // rcx
  GUID *v13; // r13
  GUID v14; // xmm1
  __int64 v15; // rcx
  GUID v16; // xmm0
  void *DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  GUID v18; // [rsp+58h] [rbp-B0h]
  __int128 v19; // [rsp+68h] [rbp-A0h]
  _QWORD v20[15]; // [rsp+80h] [rbp-88h] BYREF
  WCHAR SourceString[128]; // [rsp+F8h] [rbp-10h] BYREF

  memset(DestinationString, 0, sizeof(DestinationString));
  PointerDeviceCfgStringSetting = -1073741595;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 18464) )
  {
    v20[0] = a1;
    v20[2] = (char *)a1 + 16;
    v20[4] = (char *)a1 + 32;
    v20[6] = (char *)a1 + 48;
    v20[8] = (char *)a1 + 64;
    v20[10] = (char *)a1 + 80;
    v20[12] = (char *)a1 + 96;
    v20[14] = (char *)a1 + 112;
    v7 = RIMIsDefaultUILanguageRTL();
    v8 = *(_DWORD *)(UserSessionState + 18468);
    v9 = (GUID *)(UserSessionState + 18280);
    if ( v7 != v8 )
    {
      v16 = *(GUID *)(UserSessionState + 18376);
      *(GUID *)(UserSessionState + 18376) = *v9;
      *v9 = v16;
      *(_DWORD *)(UserSessionState + 18468) = v8 == 0;
    }
    PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                      0x7Cu,
                                      L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                      0x20019u,
                                      DestinationString,
                                      0);
    if ( PointerDeviceCfgStringSetting >= 0 )
    {
      v10 = (GUID **)v20;
      while ( PointerDeviceCfgStringSetting >= 0 )
      {
        v11 = *(const WCHAR **)v9[-1].Data4;
        v12 = DestinationString[0];
        *(v10 - 1) = (GUID *)SourceString;
        PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(v12, v11, SourceString, 0x7Du);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
          v13 = *v10;
          PointerDeviceCfgStringSetting = RtlGUIDFromString((PCUNICODE_STRING)&DestinationString[1], *v10);
          if ( PointerDeviceCfgStringSetting >= 0 )
          {
            v14 = *v13;
            v18 = *v13;
            v19 = 0LL;
            v15 = -*(_QWORD *)&v18.Data1;
            if ( !*(_QWORD *)&v18.Data1 )
              v15 = *((_QWORD *)&v19 + 1) - *(_QWORD *)v18.Data4;
            if ( v15 )
              *v9 = v14;
          }
        }
        ++v4;
        v9 = (GUID *)((char *)v9 + 24);
        v10 += 2;
        if ( v4 >= 8 )
        {
          if ( PointerDeviceCfgStringSetting >= 0 )
            *(_DWORD *)(UserSessionState + 18464) = 1;
          break;
        }
      }
      ZwClose(DestinationString[0]);
    }
  }
  if ( *(_DWORD *)(UserSessionState + 18464) )
  {
    PointerDeviceCfgStringSetting = 0;
    AssignFlickActions(a1);
  }
  return PointerDeviceCfgStringSetting >= 0;
}
