/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x140236EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x140235F80 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  _DWORD *v1; // rdx
  int *v2; // r8
  char *v3; // rdx
  char *v4; // r8
  char *v5; // rax
  int *v6; // rdx
  int *v7; // r8

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 24) != 1.0 )
    *v1 |= 0x100u;
  if ( *((float *)this + 25) != 0.0 )
    *v1 |= 0x200u;
  v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 26) == 0.0 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x400u;
  if ( *((_QWORD *)this + 14) )
    *v2 = *v1 | 0x800;
  if ( *((float *)this + 33) != 0.0 || *((float *)this + 34) != 0.0 || *((float *)this + 35) != -1.0 )
    *v2 |= 0x1000u;
  if ( *((float *)this + 30) == 0.0 && *((float *)this + 31) == 0.0 && *((float *)this + 32) == 100.0 )
  {
    v3 = (char *)this + 16;
  }
  else
  {
    v3 = (char *)this + 16;
    *((_DWORD *)this + 4) |= 0x10000u;
  }
  if ( *((float *)this + 36) == 0.52359879 )
  {
    v4 = v3;
  }
  else
  {
    *(_DWORD *)v3 |= 0x2000u;
    v4 = (char *)this + 16;
  }
  v5 = v3;
  if ( *((float *)this + 37) != 1.5707964 )
  {
    *(_DWORD *)v3 |= 0x20000u;
    v5 = v4;
  }
  if ( *((float *)this + 38) != 1.0 || (v3 = v5, *((float *)this + 39) != 1.0) || *((float *)this + 40) != 1.0 )
  {
    *(_DWORD *)v3 |= 0x4000u;
    v5 = v3;
  }
  if ( *((float *)this + 42) == 1.0 && *((float *)this + 43) == 1.0 && *((float *)this + 44) == 1.0 )
  {
    v6 = (int *)v5;
  }
  else
  {
    *(_DWORD *)v5 |= 0x40000u;
    v6 = (int *)((char *)this + 16);
  }
  if ( *((float *)this + 46) == 1.0 )
  {
    v7 = v6;
  }
  else
  {
    *(_DWORD *)v5 |= 0x8000u;
    v7 = (int *)((char *)this + 16);
  }
  if ( *((float *)this + 47) == 1.0 )
    v7 = v6;
  else
    *v6 |= 0x80000u;
  if ( *((float *)this + 48) != 0.0 )
    *v7 = *v6 | 0x100000;
  if ( *((float *)this + 49) != 0.0 )
    *v7 |= 0x200000u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
