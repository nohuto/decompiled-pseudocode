/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x140017494
 * Callers:
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140016C70 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140017130 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140071158 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetWeakReferenceBase(
        struct _RTL_GENERIC_TABLE *this,
        struct DirectComposition::CResourceMarshaler *a2,
        struct DirectComposition::CWeakReferenceBase **a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  unsigned int v4; // edi
  _DWORD *v7; // rbx
  _QWORD *v8; // rax
  int v9; // ecx
  __int64 v11; // rax
  struct DirectComposition::CResourceMarshaler *Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  v3 = this + 4;
  v4 = 0;
  if ( (*((_DWORD *)a2 + 4) & 4) == 0 )
    goto LABEL_7;
  Buffer = a2;
  v13 = 0LL;
  v7 = 0LL;
  v8 = RtlLookupElementGenericTable(this + 4, &Buffer);
  if ( v8 )
    v7 = (_DWORD *)v8[1];
  if ( v7 )
  {
    v9 = v7[2];
    v7[2] = v9 + 1;
    if ( v9 == -1 )
    {
      v7[2] = -1;
      return 3223191811LL;
    }
  }
  else
  {
LABEL_7:
    v11 = DirectComposition::Memory::AllocateAndClear(0x18uLL, 0x72774344u);
    v7 = (_DWORD *)v11;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 16) = a2;
      *(_DWORD *)(v11 + 8) = 1;
      Buffer = a2;
      v13 = v11;
      if ( RtlInsertElementGenericTable(v3, &Buffer, 0x10u, 0LL) )
      {
        *((_DWORD *)a2 + 4) |= 4u;
        goto LABEL_11;
      }
      v4 = -1073741801;
      GreDeleteFastMutex(v7);
    }
    else
    {
      v4 = -1073741801;
    }
    v7 = 0LL;
  }
LABEL_11:
  *a3 = (struct DirectComposition::CWeakReferenceBase *)v7;
  return v4;
}
