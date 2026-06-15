/*
 * XREFs of ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140041E28
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140028310 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140041E84 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 */

int __fastcall CSubmixImpl::CreateFormatConverterPipe(CSubmixImpl *this, struct tWAVEFORMATEX *a2, __int64 a3)
{
  int v3; // eax
  struct IDeviceGraphObjectCache *v5; // rdx
  _DWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  struct tWAVEFORMATEX *v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v7[1] = 0;
  v8 = *((_QWORD *)this + 27);
  v11 = *((_QWORD *)this + 1);
  v3 = *((_DWORD *)this + 64);
  v10 = a3;
  v9 = a2;
  v5 = (struct IDeviceGraphObjectCache *)*((_QWORD *)this + 33);
  v7[0] = v3;
  return CFormatConverterPipe::Initialize(
           (CSubmixImpl *)((char *)this + 272),
           v5,
           a2,
           (const struct FORMAT_CONVERTER_PIPE_DESCRIPTOR *)v7);
}
