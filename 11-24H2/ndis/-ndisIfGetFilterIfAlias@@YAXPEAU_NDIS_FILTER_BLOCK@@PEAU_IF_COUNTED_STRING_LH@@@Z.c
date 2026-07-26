/*
 * XREFs of ?ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z @ 0x140159670
 * Callers:
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016C5D0 (ndisNsiGetInterfaceRodEnumObject.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisIfGetFilterIfAlias(struct _NDIS_FILTER_BLOCK *a1, struct _IF_COUNTED_STRING_LH *a2)
{
  struct _IF_COUNTED_STRING_LH *v2; // r14
  unsigned __int16 v4; // ax
  int v5; // edx
  __int64 Length; // rbx
  _WORD *v7; // rsi
  unsigned int v8; // ecx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  wchar_t *Buffer; // rdx
  __int64 v13; // rdi
  char v14; // [rsp+30h] [rbp-38h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      14,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      v14);
  }
  memset(v2, 0, sizeof(struct _IF_COUNTED_STRING_LH));
  v4 = a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length + 12 + a1->Miniport->IfBlock->ifAlias.Length;
  v2->Length = v4;
  if ( v4 > 0x200u )
    v2->Length = 512;
  memmove(v2->String, a1->Miniport->IfBlock->ifAlias.String, a1->Miniport->IfBlock->ifAlias.Length);
  Length = a1->Miniport->IfBlock->ifAlias.Length;
  v7 = (wchar_t *)((char *)v2->String + Length);
  if ( v2->Length - (unsigned int)Length >= 2 )
  {
    LODWORD(Length) = Length + 2;
    *v7++ = 45;
  }
  v8 = v2->Length;
  if ( v8 > (unsigned int)Length )
  {
    FilterDriver = a1->FilterDriver;
    v10 = v8 - Length;
    v11 = FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length;
    Buffer = FilterDriver->DefaultFilterCharacteristics.FriendlyName.Buffer;
    if ( v10 <= v11 )
      v11 = v10;
    v13 = v11;
    memmove(v7, Buffer, v11);
    LODWORD(Length) = v13 + Length;
    v7 = (_WORD *)((char *)v7 + v13);
  }
  if ( v2->Length - (unsigned int)Length >= 2 )
  {
    LODWORD(Length) = Length + 2;
    *v7++ = 45;
  }
  if ( v2->Length - (unsigned int)Length >= 8 )
    *(_QWORD *)v7 = *(_QWORD *)&a1->FilterInstanceName.__ptr_.__value_->Buffer[((unsigned __int64)a1->FilterInstanceName.__ptr_.__value_->Length
                                                                              - 8) >> 1];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      22,
      15,
      (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
      (char)a1,
      (char)v2);
  }
}
