/*
 * XREFs of ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180125DD8
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801245B0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801256C8 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801259D4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x180191160 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802196CC (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x180125F20 (--$_Try_emplace@AEBQEAX$$V@-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUD.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Query(char *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  char **v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  char *v7; // [rsp+20h] [rbp-49h] BYREF
  __int64 v8; // [rsp+28h] [rbp-41h]
  __int128 v9; // [rsp+30h] [rbp-39h]
  __int128 v10; // [rsp+40h] [rbp-29h]
  __int128 v11; // [rsp+50h] [rbp-19h]
  _BYTE v12[12]; // [rsp+60h] [rbp-9h] BYREF
  int v13; // [rsp+6Ch] [rbp+3h]
  __int128 v14; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v15; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v16; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+A8h] [rbp+3Fh]

  v7 = a1;
  v13 = 0;
  v1 = CPointerDeviceCache::s_deviceCache;
  v2 = *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8);
  while ( !*(_BYTE *)(v2 + 25) )
  {
    if ( *(_QWORD *)(v2 + 32) < (unsigned __int64)a1 )
    {
      v2 = *(_QWORD *)(v2 + 16);
    }
    else
    {
      v1 = v2;
      v2 = *(_QWORD *)v2;
    }
  }
  if ( *(_BYTE *)(v1 + 25) || (unsigned __int64)a1 < *(_QWORD *)(v1 + 32) )
    v1 = CPointerDeviceCache::s_deviceCache;
  if ( v1 == CPointerDeviceCache::s_deviceCache )
  {
    v17 = 1LL;
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = a1;
    v14 = 0LL;
    v15 = 0LL;
    if ( !a1
      || !(unsigned int)GetPointerDeviceRects(a1, &v15, &v14)
      || !(unsigned int)GetPointerDeviceOrientation(v7, &v16) )
    {
      LOBYTE(v17) = 0;
    }
    v9 = v14;
    v10 = v15;
    v11 = v16;
    v8 = v17;
    v4 = (char **)std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(a1, v12, &v7);
    v5 = v10;
    a1 = *v4;
    *(_OWORD *)(a1 + 40) = v9;
    v6 = v11;
    *(_OWORD *)(a1 + 56) = v5;
    *(_OWORD *)(a1 + 72) = v6;
    *((_QWORD *)a1 + 11) = v8;
  }
  return (const struct DEVICE_INFO *)(*(_QWORD *)std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(
                                                   a1,
                                                   v12,
                                                   &v7)
                                    + 40LL);
}
