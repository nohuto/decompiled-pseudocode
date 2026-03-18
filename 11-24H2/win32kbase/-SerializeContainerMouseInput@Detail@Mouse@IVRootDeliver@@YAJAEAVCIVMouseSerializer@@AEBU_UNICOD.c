/*
 * XREFs of ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x14021AF80
 * Callers:
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x14021A7E0 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 * Callees:
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAVCIVMouseSerializer@@@Z @ 0x1402163C0 (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAVCIVMouseSer.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1402207AC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVMouseSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x140220814 (-Serialize@CIVMouseSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x140221370 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

int __fastcall IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
        IVRootDeliver::Mouse::Detail *this,
        struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct ContainerMouseInputData **a4)
{
  __int64 v4; // rbp
  char v6; // r14
  int result; // eax

  v4 = *((_QWORD *)this + 2);
  v6 = (char)a3;
  if ( !a2->Length
    || (result = CIVSerializer::Serialize(this, *((struct _UNICODE_STRING **)this + 2), a2, 1), result >= 0) )
  {
    result = CIVMouseSerializer::Serialize(
               this,
               (struct _IVMouseInputData **)(v4 + 24),
               *a4,
               *((unsigned int *)a4 + 2),
               1);
    if ( result >= 0 )
    {
      result = CIVSerializer::ExtendByMeasuredExtra(this);
      if ( result >= 0 )
        return IVSerializeMouseInputBuffer(v6, (const struct ContainerMouseInput *)a4, a2, this);
    }
  }
  return result;
}
