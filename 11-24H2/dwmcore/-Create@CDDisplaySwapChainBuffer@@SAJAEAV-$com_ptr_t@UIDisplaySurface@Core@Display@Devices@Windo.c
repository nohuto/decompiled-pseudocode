/*
 * XREFs of ?Create@CDDisplaySwapChainBuffer@@SAJAEAV?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@3@AEAV?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@3@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z @ 0x1802C2264
 * Callers:
 *     ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x1801B5B00 (-CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CDDisplaySwapChainBuffer::Create(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        _DWORD *a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // edx
  CMILRefCountImpl *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax

  *a6 = 0LL;
  v10 = operator new(0xE0uLL);
  v11 = v10;
  if ( v10 )
  {
    *v10 = &ISwapChainBuffer::`vftable';
    *((_DWORD *)v10 + 2) = 0;
    v12 = a4[1];
    *((_DWORD *)v10 + 6) = *a4;
    v13 = (CMILRefCountImpl *)(v10 + 1);
    v10[2] = 0LL;
    *((_DWORD *)v10 + 7) = v12;
    v10[4] = v10 + 5;
    *((_DWORD *)v10 + 10) = 0;
    *((_DWORD *)v10 + 26) = a5;
    *((_DWORD *)v10 + 27) = 0;
    v10[14] = 0LL;
    v10[15] = v10 + 16;
    *((_DWORD *)v10 + 32) = 0;
    *v10 = &CDDisplaySwapChainBuffer::`vftable';
    v10[24] = 0LL;
    v14 = *a1;
    *a1 = 0LL;
    v11[25] = v14;
    v11[26] = *a2;
    *a2 = 0LL;
    v15 = *a3;
    *a3 = 0LL;
    v11[27] = v15;
    CMILRefCountImpl::AddReference(v13);
  }
  else
  {
    v11 = 0LL;
  }
  result = 0LL;
  *a6 = v11;
  return result;
}
