/*
 * XREFs of ?QueryInterface@CAudioMediaType@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005AF90
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14005A9F4 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioMediaType::QueryInterface(CAudioMediaType *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
