/*
 * XREFs of ?SetIntegerProperty@CChannelMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140113F94
 * Callers:
 *     ?SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJI_J@Z @ 0x140113F48 (-SetChannelIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJI_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CChannelMarshaler::SetIntegerProperty(
        DirectComposition::CChannelMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edi
  int v8; // r8d
  char v9; // si

  v5 = 0;
  if ( !a3 )
  {
    if ( *((_BYTE *)this + 4) != (a4 != 0) )
    {
      *(_DWORD *)this |= 1u;
      *((_BYTE *)this + 4) = a4 != 0;
      *a5 = 1;
    }
    return v5;
  }
  v8 = a3 - 1;
  if ( !v8 )
  {
    v9 = a4 != 0;
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CApplicationChannel *))(*(_QWORD *)a2 + 8LL))(a2) != 2 )
      return (unsigned int)-1073741790;
    if ( *((_BYTE *)this + 5) == v9 )
      return v5;
    *(_DWORD *)this |= 2u;
    *((_BYTE *)this + 5) = v9;
    goto LABEL_9;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  if ( *((_BYTE *)this + 6) != (a4 != 0) )
  {
    *(_DWORD *)this |= 4u;
    *((_BYTE *)this + 6) = a4 != 0;
LABEL_9:
    *a5 = 1;
  }
  return v5;
}
