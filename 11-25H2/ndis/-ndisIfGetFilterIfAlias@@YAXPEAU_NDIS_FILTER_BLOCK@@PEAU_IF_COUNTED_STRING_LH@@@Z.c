/*
 * XREFs of ?ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z @ 0x140165CC0
 * Callers:
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1401768B0 (ndisNsiGetInterfaceRodEnumObject.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisIfGetFilterIfAlias(struct _NDIS_FILTER_BLOCK *a1, struct _IF_COUNTED_STRING_LH *a2)
{
  unsigned __int16 v4; // ax
  __int64 Length; // rbx
  _WORD *v6; // rsi
  unsigned int v7; // ecx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  wchar_t *Buffer; // rdx
  __int64 v12; // rdi

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      a2);
  memset(a2, 0, sizeof(struct _IF_COUNTED_STRING_LH));
  v4 = a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length + 12 + a1->Miniport->IfBlock->ifAlias.Length;
  a2->Length = v4;
  if ( v4 > 0x200u )
    a2->Length = 512;
  memmove(a2->String, a1->Miniport->IfBlock->ifAlias.String, a1->Miniport->IfBlock->ifAlias.Length);
  Length = a1->Miniport->IfBlock->ifAlias.Length;
  v6 = (wchar_t *)((char *)a2->String + Length);
  if ( a2->Length - (unsigned int)Length >= 2 )
  {
    LODWORD(Length) = Length + 2;
    *v6++ = 45;
  }
  v7 = a2->Length;
  if ( v7 > (unsigned int)Length )
  {
    FilterDriver = a1->FilterDriver;
    v9 = v7 - Length;
    v10 = FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length;
    Buffer = FilterDriver->DefaultFilterCharacteristics.FriendlyName.Buffer;
    if ( v9 <= v10 )
      v10 = v9;
    v12 = v10;
    memmove(v6, Buffer, v10);
    LODWORD(Length) = v12 + Length;
    v6 = (_WORD *)((char *)v6 + v12);
  }
  if ( a2->Length - (unsigned int)Length >= 2 )
  {
    LODWORD(Length) = Length + 2;
    *v6++ = 45;
  }
  if ( a2->Length - (unsigned int)Length >= 8 )
    *(_QWORD *)v6 = *(_QWORD *)&a1->FilterInstanceName.__ptr_.__value_->Buffer[((unsigned __int64)a1->FilterInstanceName.__ptr_.__value_->Length
                                                                              - 8) >> 1];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      a2);
}
