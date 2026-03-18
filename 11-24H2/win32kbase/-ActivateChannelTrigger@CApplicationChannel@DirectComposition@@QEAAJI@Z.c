/*
 * XREFs of ?ActivateChannelTrigger@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400E8DB8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1400E8D3C (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ActivateChannelTrigger(
        DirectComposition::CApplicationChannel *this,
        int a2)
{
  char v2; // si
  int v3; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  v2 = 0;
  v3 = 0;
  if ( !a2 )
  {
    v3 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    if ( v3 >= 0 )
    {
      v11 = *((_DWORD *)this + 14);
      if ( (v11 & 8) != 0 )
        return (unsigned int)v3;
      *((_DWORD *)this + 14) = v11 | 8;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 2 )
    {
      v15 = *((_DWORD *)this + 14);
      if ( (v15 & 0x10) != 0 )
        goto LABEL_9;
      v14 = v15 | 0x10;
LABEL_24:
      *((_DWORD *)this + 14) = v14;
      v2 = 1;
      goto LABEL_9;
    }
    return (unsigned int)-1073741790;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 2 )
    {
      v13 = *((_DWORD *)this + 14);
      if ( (v13 & 0x20) != 0 )
        goto LABEL_9;
      v14 = v13 | 0x20;
      goto LABEL_24;
    }
    return (unsigned int)-1073741790;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return (unsigned int)-1073741811;
    v3 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    if ( v3 >= 0 )
    {
      v12 = *((_DWORD *)this + 14);
      if ( (v12 & 0x80u) == 0 )
      {
        *((_DWORD *)this + 14) = v12 | 0x80;
        v8 = v3;
        goto LABEL_8;
      }
    }
LABEL_9:
    v8 = v3;
    if ( v3 < 0 )
      return (unsigned int)v3;
    goto LABEL_10;
  }
  v8 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
  v3 = v8;
  if ( v8 < 0 )
    goto LABEL_9;
  v9 = *((_DWORD *)this + 14);
  if ( (v9 & 0x40) != 0 )
    goto LABEL_9;
  *((_DWORD *)this + 14) = v9 | 0x40;
LABEL_8:
  v2 = 1;
LABEL_10:
  v3 = v8;
  if ( v2 )
LABEL_11:
    *((_BYTE *)this + 264) |= 1u;
  return (unsigned int)v3;
}
