/*
 * XREFs of sub_14003ED1C @ 0x14003ED1C
 * Callers:
 *     sub_14003EAA0 @ 0x14003EAA0 (sub_14003EAA0.c)
 *     sub_140046CC4 @ 0x140046CC4 (sub_140046CC4.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14003F3EC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_14003FC70 @ 0x14003FC70 (sub_14003FC70.c)
 */

__int64 __fastcall sub_14003ED1C(__int64 a1, _QWORD *a2)
{
  int v4; // edx
  int DynamicTerminalClasses; // ebx
  void *v6; // rsi
  void *v7; // rcx
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  DynamicTerminalClasses = CMSPAddress::get_DynamicTerminalClasses((CMSPAddress *)a1, (struct tagVARIANT *)&v9);
  if ( DynamicTerminalClasses < 0 )
  {
    if ( DynamicTerminalClasses == -1073741772 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v4) = 4;
        sub_140003D28(off_140018050->DeviceExtension, v4, 2, 10, (__int64)&unk_140012BD0);
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      sub_1400050F8(
        (__int64)off_140018050->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&unk_140012BD0,
        DynamicTerminalClasses);
    }
  }
  else
  {
    v6 = v9;
    DynamicTerminalClasses = sub_14003FC70(v9, *(_QWORD *)(a1 + 64));
    if ( DynamicTerminalClasses < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_1400050F8(
          (__int64)off_140018050->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&unk_140012BD0,
          DynamicTerminalClasses);
      v7 = v9;
    }
    else
    {
      v7 = 0LL;
      *a2 = v6;
      DynamicTerminalClasses = 0;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)DynamicTerminalClasses;
}
