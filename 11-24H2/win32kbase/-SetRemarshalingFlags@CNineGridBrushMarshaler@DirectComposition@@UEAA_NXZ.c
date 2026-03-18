/*
 * XREFs of ?SetRemarshalingFlags@CNineGridBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x140145450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CNineGridBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CNineGridBrushMarshaler *this)
{
  char v1; // dl
  char v2; // r9
  char v3; // al
  char v4; // al
  char v5; // r8
  char v6; // al
  char v7; // r8
  char v8; // al
  char v9; // r8
  char v10; // al
  char v11; // r8
  char v12; // al
  char v13; // r8
  char v14; // al
  char v15; // r8
  char v16; // al
  char v17; // r8

  v1 = 1;
  if ( *((_QWORD *)this + 9) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( *((float *)this + 20) == 0.0 )
  {
    v3 = 0;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x40u;
    v3 = 1;
  }
  v4 = v2 | v3;
  if ( *((float *)this + 22) == 0.0 )
  {
    v5 = 0;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x80u;
    v5 = 1;
  }
  v6 = v5 | v4;
  if ( *((float *)this + 24) == 0.0 )
  {
    v7 = 0;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x100u;
    v7 = 1;
  }
  v8 = v7 | v6;
  if ( *((float *)this + 26) == 0.0 )
  {
    v9 = 0;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x200u;
    v9 = 1;
  }
  v10 = v9 | v8;
  if ( *((float *)this + 21) == 1.0 )
  {
    v11 = 0;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x400u;
    v11 = 1;
  }
  v12 = v11 | v10;
  if ( *((float *)this + 23) == 1.0 )
  {
    v13 = 0;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x800u;
    v13 = 1;
  }
  v14 = v13 | v12;
  if ( *((float *)this + 25) == 1.0 )
  {
    v15 = 0;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    v15 = 1;
  }
  v16 = v15 | v14;
  if ( *((float *)this + 27) == 1.0 )
    v1 = 0;
  else
    *((_DWORD *)this + 4) |= 0x2000u;
  v17 = *((_BYTE *)this + 112);
  if ( v17 )
    *((_DWORD *)this + 4) |= 0x4000u;
  return v1 | v17 | v16;
}
