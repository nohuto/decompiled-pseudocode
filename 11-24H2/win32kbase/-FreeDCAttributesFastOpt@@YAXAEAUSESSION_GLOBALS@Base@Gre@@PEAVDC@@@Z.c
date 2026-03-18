/*
 * XREFs of ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C577C
 * Callers:
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x14000D050 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x14000D610 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1400350A0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     HmgFreeDcAttrFastOpt @ 0x1401C4EA0 (HmgFreeDcAttrFastOpt.c)
 */

void __fastcall FreeDCAttributesFastOpt(GdiHandleManager **a1, struct DC *a2)
{
  struct _ENTRY *EntryFromObject; // rbp
  struct _DC_ATTR *v5; // rax
  __int64 v6; // rbx

  EntryFromObject = GdiHandleManager::GetEntryFromObject(a1[709], a2);
  v5 = (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)EntryFromObject + 2));
  v6 = (__int64)v5;
  if ( v5 )
  {
    *((_QWORD *)EntryFromObject + 2) = 0LL;
    if ( (*((_DWORD *)a2 + 11) & 2) == 0 )
      DC::SaveAttributes(a2, v5);
    HmgFreeDcAttrFastOpt(a1, v6);
  }
}
