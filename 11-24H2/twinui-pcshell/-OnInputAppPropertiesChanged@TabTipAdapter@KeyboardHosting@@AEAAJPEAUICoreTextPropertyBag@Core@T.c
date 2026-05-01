/*
 * XREFs of ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x1800D0C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InputAppPropertiesChanged@PEBGPEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0@Z @ 0x1800D02C8 (--$InputAppPropertiesChanged@PEBGPEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0@Z.c)
 *     ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800D0350 (-WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA-AVActivityThreadWatcher@wil@@PEBD.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *a2,
        struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  int v12; // eax
  PCWSTR StringRawBuffer; // [rsp+20h] [rbp-60h] BYREF
  PCWSTR v15; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v16[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  HSTRING string; // [rsp+B0h] [rbp+30h] BYREF
  HSTRING v19; // [rsp+B8h] [rbp+38h] BYREF

  TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread((__int64)v16, (__int64)"OnInputAppPropertiesChanged");
  v19 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  v19 = 0LL;
  v6 = v5(a3, &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    string = 0LL;
    v8 = *(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs *, HSTRING *))(*(_QWORD *)a3 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v9 = v8(a3, &string);
    v7 = v9;
    if ( v9 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v15 = WindowsGetStringRawBuffer(v19, 0LL);
      TouchKeyboardExperienceTelemetryLogger::InputAppPropertiesChanged<unsigned short const *,unsigned short const *>(
        &v15,
        (__int64 *)&StringRawBuffer);
      v12 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(**((_QWORD **)this + 9) + 104LL))(
              *((_QWORD *)this + 9),
              v19,
              string);
      v7 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x102,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v12);
        v11 = v7;
        v10 = 1434LL;
        goto LABEL_6;
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(**((_QWORD **)this + 16) + 208LL))(
             *((_QWORD *)this + 16),
             v19,
             string);
      v7 = v9;
      if ( v9 >= 0 )
      {
        WindowsDeleteString(string);
        string = 0LL;
        v7 = 0;
        goto LABEL_12;
      }
      v10 = 1435LL;
    }
    else
    {
      v10 = 1430LL;
    }
    v11 = (unsigned int)v9;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)v11);
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x594,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6);
LABEL_12:
  WindowsDeleteString(v19);
  v19 = 0LL;
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v16);
  return v7;
}
