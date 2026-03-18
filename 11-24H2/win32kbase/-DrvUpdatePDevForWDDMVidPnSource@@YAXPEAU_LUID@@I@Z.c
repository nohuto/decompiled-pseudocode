/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x140124A90
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14012FBC0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x140124B40 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x140124B90 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2)
{
  PDEV *i; // rcx
  PDEV *v5; // rax
  PDEV *v6; // rbx
  int v7; // r8d
  __int64 v8; // rdi
  struct _LUID *v9; // rax
  PDEV *v10; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate<1>(i);
    v6 = v5;
    if ( !v5 )
      break;
    v7 = *((_DWORD *)v5 + 10) & 0x20401;
    v10 = v5;
    if ( v7 == 1 )
    {
      v8 = *((_QWORD *)v5 + 321);
      if ( ((v8 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v8 + 160) & 0x800000) != 0 )
      {
        v9 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
        if ( v9->LowPart == a1->LowPart && v9->HighPart == a1->HighPart && *(_DWORD *)(v8 + 248) == a2 )
          DrvUpdatePDevForWDDMDevice(v6);
      }
    }
  }
}
