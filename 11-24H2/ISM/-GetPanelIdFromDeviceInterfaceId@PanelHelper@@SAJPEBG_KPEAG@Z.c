/*
 * XREFs of ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180109E74
 * Callers:
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800E1088 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18000C9C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x18009D928 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D990 (_Init_thread_header.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DF2DC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall PanelHelper::GetPanelIdFromDeviceInterfaceId(const unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v5; // rdi
  int ObjectProperties; // eax
  unsigned int v7; // ebx
  __int64 i; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 j; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  char *v17; // r8
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+38h] BYREF

  v20 = a2;
  v5 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_180251E54 > *(_DWORD *)(v5 + 32) )
  {
    Init_thread_header(&dword_180251E54);
    if ( dword_180251E54 == -1 )
    {
      dword_1802518FC = 0;
      qword_180251900 = 0LL;
      *(DEVPROPKEY *)&byte_1802518E8 = DEVPKEY_Device_InstanceId;
      Init_thread_footer(&dword_180251E54);
    }
  }
  LODWORD(v20) = 0;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  v7 = ObjectProperties;
  if ( ObjectProperties >= 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= (unsigned int)v20 )
      {
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x37,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
          (const char *)0x80004005LL,
          (int)"Failed to query device instance ID.",
          (const char *)&v20);
        return 2147500037LL;
      }
      v10 = 48 * i;
      if ( *(_DWORD *)(48 * i + 0x10) == 256 )
      {
        v11 = *(_QWORD *)v10 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)v10 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v11 = *(_QWORD *)(48 * i + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        if ( !v11 && *(_DWORD *)(48 * i + 0x20) == 18 )
        {
          v12 = *(_QWORD *)(48 * i + 0x28);
          if ( v12 )
            break;
        }
      }
    }
    if ( dword_180251E58 > *(_DWORD *)(v5 + 32) )
    {
      Init_thread_header(&dword_180251E58);
      if ( dword_180251E58 == -1 )
      {
        dword_1802518DC = 0;
        qword_1802518E0 = 0LL;
        *(_OWORD *)&xmmword_1802518C8 = DEVPKEY_Device_PanelId;
        dword_1802518D8 = 2;
        Init_thread_footer(&dword_180251E58);
      }
    }
    v21 = 0;
    v13 = DevGetObjectProperties(3LL, v12, 0LL);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
        (const char *)(unsigned int)v13);
      return v7;
    }
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= v21 )
      {
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x61,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
          (const char *)0x80004005LL,
          (int)"Failed to query panel ID.",
          (const char *)&v21);
        return 2147500037LL;
      }
      v15 = 48 * j;
      if ( *(_DWORD *)(48 * j + 0x10) == 2 )
      {
        v16 = *(_QWORD *)v15 - DEVPKEY_Device_PanelId;
        if ( *(_QWORD *)v15 == (_QWORD)DEVPKEY_Device_PanelId )
          v16 = *(_QWORD *)(48 * j + 8) - *((_QWORD *)&DEVPKEY_Device_PanelId + 1);
        if ( !v16 && *(_DWORD *)(48 * j + 0x20) == 18 )
        {
          v17 = *(char **)(48 * j + 0x28);
          if ( v17 )
            break;
        }
      }
    }
    v18 = StringCchCopyW(a3, 57LL, v17);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
        (const char *)(unsigned int)v18,
        (int)&xmmword_1802518C8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
      (const char *)(unsigned int)ObjectProperties);
    return v7;
  }
}
