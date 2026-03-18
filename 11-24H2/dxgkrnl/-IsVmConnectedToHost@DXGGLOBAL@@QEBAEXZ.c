/*
 * XREFs of ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403A4510
 * Callers:
 *     ?DxgkIsVmConnectedToHost@@YA_NXZ @ 0x1400683B8 (-DxgkIsVmConnectedToHost@@YA_NXZ.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140282B44 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14028320C (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403A35BC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1403A43EC (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGGLOBAL::IsVmConnectedToHost(DXGGLOBAL *this)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al

  v1 = *((_QWORD *)this + 210);
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 68) )
      return 1;
  }
  return result;
}
