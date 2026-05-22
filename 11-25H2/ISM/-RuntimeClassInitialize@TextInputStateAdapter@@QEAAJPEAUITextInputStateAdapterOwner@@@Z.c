/*
 * XREFs of ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801C7948
 * Callers:
 *     ??$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Z @ 0x1801C5C20 (--$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdap.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180033C58 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVHotkeyRegistrationForwarder@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x1801044C4 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVHotkeyRegistrati.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180195268 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801975D8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TextInputStateAdapter::RuntimeClassInitialize(
        TextInputStateAdapter *this,
        struct ITextInputStateAdapterOwner *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  signed int v7; // ebx
  __int64 v8; // r9
  HMODULE LibraryW; // rax
  signed int LastError; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  FARPROC ProcAddress; // rsi
  signed int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-248h] BYREF
  struct IMessageProxyReconnectAdapterOwner *v21[3]; // [rsp+38h] [rbp-240h] BYREF
  wchar_t v22[264]; // [rsp+50h] [rbp-228h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+0h]

  v20 = 0LL;
  v21[1] = 0LL;
  v4 = CoreUICreate((char *)this + 32);
  v7 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_26;
    v8 = 923LL;
LABEL_4:
    McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapter::RuntimeClassInitialize", v8, v4);
    goto LABEL_26;
  }
  LibraryW = LoadLibraryW(L"CoreUIComponents.dll");
  *((_QWORD *)this + 13) = LibraryW;
  if ( LibraryW )
    goto LABEL_12;
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError > 0 )
    v7 = (unsigned __int16)LastError | 0x80070000;
  if ( v7 >= 0 )
  {
LABEL_12:
    ProcAddress = GetProcAddress(*((HMODULE *)this + 13), "CoreUIFactoryCreate");
    if ( ProcAddress )
      goto LABEL_18;
    v14 = GetLastError();
    v7 = v14;
    if ( v14 > 0 )
      v7 = (unsigned __int16)v14 | 0x80070000;
    if ( v7 >= 0 )
    {
LABEL_18:
      v4 = ((__int64 (__fastcall *)(__int64 *))ProcAddress)(&v20);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_26;
        v8 = 931LL;
        goto LABEL_4;
      }
      memset_0(v22, 0, 0x208uLL);
      GetDesktopUniqueName(L"System\\RemoteTextInputState", v22);
      v21[0] = this;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
      v17 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],HotkeyRegistrationForwarder *>(
              (MessageProxyReconnectAdapter **)this + 6,
              &GUID_cf1538c5_01ef_4a39_acb7_1b68f01b7ef4,
              v22,
              v21);
      v7 = v17;
      if ( v17 >= 0 )
      {
        *((_QWORD *)this + 3) = a2;
        v7 = 0;
      }
      else
      {
        if ( v17 == -2147024882 )
          TerminateProcessOnMemoryExhaustion(0LL);
        FailFastWithHR(v7, retaddr, 0x3AEuLL);
      }
    }
    else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    {
      McTemplateU0sqq_EventWriteTransfer(v16, v15, "TextInputStateAdapter::RuntimeClassInitialize", 930LL, v7);
    }
  }
  else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    McTemplateU0sqq_EventWriteTransfer(v12, v11, "TextInputStateAdapter::RuntimeClassInitialize", 927LL, v7);
  }
LABEL_26:
  v18 = v20;
  v20 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v7;
}
