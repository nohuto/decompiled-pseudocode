/*
 * XREFs of ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1401608F0
 * Callers:
 *     ??$make_unique_nothrow@UNDIS_BIND_PROTOCOL_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@XZ @ 0x140059BE0 (--$make_unique_nothrow@UNDIS_BIND_PROTOCOL_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_.c)
 *     ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x140066AB0 (--$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK.c)
 * Callees:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x140160920 (--0BindState@Ndis@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE *__fastcall NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE(NDIS_BIND_LINK_BASE *this)
{
  Ndis::BindState::BindState(&this->BindState);
  this->DriverLinkage.Blink = &this->DriverLinkage;
  this->DriverLinkage.Flink = &this->DriverLinkage;
  return this;
}
