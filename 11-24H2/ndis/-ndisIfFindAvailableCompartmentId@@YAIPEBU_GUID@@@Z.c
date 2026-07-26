/*
 * XREFs of ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400CB028
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1400CA640 (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_ @ 0x1400657A0 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1400CB0F8 (-ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdx
  unsigned int AvailableCompartmentId_old; // ecx

  v1 = qword_14011CAA0;
  if ( qword_14011CAA0 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
    return 1LL;
  AvailableCompartmentId_old = dword_14011AF2C;
  if ( (unsigned int)dword_14011AF2C > *(_DWORD *)(qword_14011CAA8 + 16) )
  {
    while ( *((_QWORD *)v1 + 143) != *(_QWORD *)&a1->Data1 || *((_QWORD *)v1 + 144) != *(_QWORD *)a1->Data4 )
    {
      v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
      if ( v1 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
        goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0xCu,
        (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
        (__int64)a1);
    return 0LL;
  }
  AvailableCompartmentId_old = ndisIfFindAvailableCompartmentId_old(a1);
  if ( !AvailableCompartmentId_old )
    return 0LL;
LABEL_7:
  dword_14011AF2C = AvailableCompartmentId_old + 1;
  if ( AvailableCompartmentId_old == -2 )
    dword_14011AF2C = 2;
  return AvailableCompartmentId_old;
}
