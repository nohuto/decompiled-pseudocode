/*
 * XREFs of ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x18030E798
 * Callers:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802B5734 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068CFE4 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x18069136C (-ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x180694180 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ShellDataModel_HiddenPidlUnderflow@@@details@wil@@QEAA_NXZ @ 0x18030EB5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ShellDataModel_HiddenPi.c)
 */

const struct _HIDDENITEMID *__fastcall ILFindFirstHiddenID(const struct _ITEMIDLIST *a1)
{
  unsigned __int16 *v2; // rdi
  unsigned __int64 cb; // rdx
  __int64 v5; // r8

  v2 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ShellDataModel_HiddenPidlUnderflow>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ShellDataModel_HiddenPidlUnderflow>::GetImpl'::`2'::impl)
    && (!a1 || a1->mkid.cb < 2u) )
  {
    return 0LL;
  }
  cb = a1->mkid.cb;
  v5 = *(unsigned __int16 *)((char *)a1 + cb - 2);
  if ( (_WORD)v5 )
  {
    if ( v5 + 8 < cb )
    {
      v2 = (USHORT *)((char *)&a1->mkid.cb + v5);
      if ( *(USHORT *)((char *)&a1->mkid.cb + v5) < 8u
        || HIWORD(*((_DWORD *)v2 + 1)) != 0xBEEF
        || (unsigned int)v5 + *v2 > (unsigned int)cb )
      {
        return 0LL;
      }
    }
  }
  return (const struct _HIDDENITEMID *)v2;
}
