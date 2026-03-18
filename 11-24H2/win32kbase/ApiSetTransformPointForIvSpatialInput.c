/*
 * XREFs of ApiSetTransformPointForIvSpatialInput @ 0x1402225A4
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216C00 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetTransformPointForIvSpatialInput(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  int (*v7)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int (__fastcall *v10)(__int64, __int64, __int64); // rax

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7472LL);
  if ( !v7 || v7() < 0 )
    return 0LL;
  v10 = *(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48)
                                                                 + 7480LL);
  if ( v10 )
    return v10(a1, a2, a3);
  return v6;
}
