/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180016664
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x1800163F8 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x18004ECBC (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x18004EECC (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014E40 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001C0C4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A4DEE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall COnDeviceWorkItem::COnDeviceWorkItem(_QWORD *a1, _WORD *a2, int a3)
{
  _QWORD *v5; // r14
  __int64 *v6; // rsi
  char *v7; // rdx
  __int64 v8; // rbx
  char *v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // r15
  __int64 *v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  ATL::CAtlException *v15; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp+8h]
  int v17; // [rsp+80h] [rbp+18h]
  unsigned int v18; // [rsp+88h] [rbp+20h]

  v5 = a1;
  *a1 = &COnDeviceWorkItem::`vftable';
  v6 = a1 + 1;
  a1[1] = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  if ( !a2 )
    goto LABEL_5;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  if ( !(_DWORD)v8 )
  {
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::Empty(v6);
    goto LABEL_10;
  }
  v18 = *(_DWORD *)(*v6 - 16);
  v12 = ((__int64)a2 - *v6) >> 1;
  if ( ((1 - *(_DWORD *)(*v6 - 8)) | (*(_DWORD *)(*v6 - 12) - (int)v8)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v6, v8);
  v10 = (char *)*v6;
  v11 = 2LL * (int)v8;
  if ( v12 <= v18 )
  {
    v7 = &v10[2 * v12];
    if ( !v11 )
      goto LABEL_7;
    if ( v10 && v7 )
    {
      memmove_0(v10, v7, 2LL * (int)v8);
      goto LABEL_7;
    }
  }
  else
  {
    if ( !v11 )
      goto LABEL_7;
    if ( v10 )
    {
      memcpy_0(v10, a2, 2LL * (int)v8);
      goto LABEL_7;
    }
  }
  *(_DWORD *)_o__errno(v10, v7, 0LL) = 22;
  invalid_parameter_noinfo();
LABEL_7:
  if ( (int)v8 < 0 )
    goto LABEL_28;
  while ( (int)v8 > *(_DWORD *)(*v6 - 12) )
  {
LABEL_28:
    try
    {
      ATL::AtlThrowImpl(-2147024809);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v13 = &v14;
      if ( *(_DWORD *)v13[4] == -1073741571 )
        _o__resetstkoflw();
      v5 = v16;
      a3 = v17;
      goto LABEL_10;
    }
  }
  *(_DWORD *)(*v6 - 16) = v8;
  *(_WORD *)(v11 + *v6) = 0;
LABEL_10:
  *((_DWORD *)v5 + 4) = a3;
  return v5;
}
