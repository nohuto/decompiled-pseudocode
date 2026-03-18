/*
 * XREFs of ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00E3D10
 * Callers:
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00E3D10 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00E558C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C00E3D10 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 */

__int64 __fastcall GetMenuDepth(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // edi
  __int64 *v5; // rbx
  unsigned int MenuDepth; // ebp
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a2 )
    return 25LL;
  v4 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 44LL);
  if ( v4 )
  {
    v5 = (__int64 *)(*(_QWORD *)(**(_QWORD **)a1 + 88LL) + 16LL);
    do
    {
      --v4;
      if ( *v5 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v8, *v5);
        v8[2] = 0LL;
        MenuDepth = GetMenuDepth(v8, (unsigned int)(a2 - 1));
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
        if ( MenuDepth > v2 )
        {
          if ( MenuDepth >= 0x19 )
            return 25LL;
          v2 = MenuDepth;
        }
      }
      v5 += 12;
    }
    while ( v4 );
  }
  return v2 + 1;
}
