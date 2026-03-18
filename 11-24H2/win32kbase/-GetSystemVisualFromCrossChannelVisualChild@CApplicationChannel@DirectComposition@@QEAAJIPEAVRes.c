/*
 * XREFs of ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140070A68
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x14004BFC8 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x14006FDF0 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14004C6E4 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        struct ResourceHandle *a3)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi

  v5 = 0;
  v6 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v6 + 192LL))(v6);
    if ( v7
      && (v8 = *(_QWORD *)(v7 + 192)) != 0
      && (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8), (v10 = v9) != 0) )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), *(_DWORD *)(v9 + 368));
      *(_DWORD *)a3 = *(_DWORD *)(v10 + 368);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
