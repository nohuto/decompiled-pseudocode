/*
 * XREFs of ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1400665A0
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140065EE0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1400252F0 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     McTemplateK0xq_EtwWriteTransfer @ 0x1400545A0 (McTemplateK0xq_EtwWriteTransfer.c)
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x14009B64C (McTemplateK0xqq_EtwWriteTransfer.c)
 */

void __fastcall ndisAoAcWriteRefcountRundown(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_AOAC *a2)
{
  _GUID *p_InterfaceGuid; // r14
  unsigned int v5; // ebx
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h]

  p_InterfaceGuid = &a1->InterfaceGuid;
  if ( (byte_140125103 & 4) != 0 )
  {
    LODWORD(v8) = a1->IfIndex;
    McTemplateK0jqx_EtwWriteTransfer(
      (__int64)a1,
      &NicActiveRefRundownBegin,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      v8,
      a1->NetLuid.Value);
  }
  v5 = 0;
  v6 = (_DWORD *)((char *)a2 + 468);
  do
  {
    v7 = (unsigned int)*v6;
    if ( (int)v7 > 0 && (byte_140125103 & 4) != 0 )
      McTemplateK0xqq_EtwWriteTransfer(v7, (_DWORD)a2, (_DWORD)p_InterfaceGuid, a1->NetLuid.Value, v5, *v6);
    ++v5;
    ++v6;
  }
  while ( v5 < 0x11 );
  if ( (byte_140125103 & 4) != 0 )
  {
    LODWORD(v8) = *((_DWORD *)a2 + 95);
    McTemplateK0xq_EtwWriteTransfer(v7, &NicActiveRefRundownEnd, p_InterfaceGuid, a1->NetLuid.Value, v8);
  }
}
