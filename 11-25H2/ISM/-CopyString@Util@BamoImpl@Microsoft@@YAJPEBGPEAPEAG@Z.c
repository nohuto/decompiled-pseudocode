/*
 * XREFs of ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x180113B8C
 * Callers:
 *     ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x1801287A8 (-UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 *     ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x180128EF0 (-UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 *     ?SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18017FF4C (-SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 *     ?SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18018009C (-SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18000C264 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::Util::CopyString(
        Microsoft::BamoImpl::Util *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  __int64 v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  char *v8; // rax
  int v9; // eax
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  if ( this )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)this + v6) );
    v7 = v6 + 1;
    v8 = (char *)operator new[](saturated_mul(v7, 2uLL));
    v9 = StringCchCopyW(v8, v7, (char *)this);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x53,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoUtil.h",
        (const char *)(unsigned int)v9,
        v11);
  }
  result = 0LL;
  *(_QWORD *)a2 = v5;
  return result;
}
