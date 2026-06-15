/*
 * XREFs of ?GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z @ 0x140063B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007C18 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1?_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003F79C (--0-$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1-_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetFormatRemote(CAPOWrapperSrv *this, unsigned int a2, struct tWAVEFORMATEX **a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  const struct tWAVEFORMATEX *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  ATL::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>(
    &v12,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 12));
  if ( v12 )
  {
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, a2, &v11);
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( !v11
        || (v8 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11),
            v6 = CloneWaveFormat(v8, a3),
            v5 = v6,
            v6 >= 0) )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
        v5 = 0;
        goto LABEL_10;
      }
      v7 = 632LL;
    }
    else
    {
      v7 = 626LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v6);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
  }
  else
  {
    v5 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)0x80004002LL);
  }
LABEL_10:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v12);
  return v5;
}
