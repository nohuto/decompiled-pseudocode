/*
 * XREFs of ?SetRemarshalingFlags@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x140235BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CDDisplayRenderTargetMarshaler *this)
{
  int v1; // eax
  float v2; // xmm0_4
  int v3; // eax

  if ( *((_DWORD *)this + 17) || *((_QWORD *)this + 10) )
  {
    v1 = *((_DWORD *)this + 4) | 0x20;
    *((_DWORD *)this + 4) = v1;
  }
  else
  {
    v1 = *((_DWORD *)this + 4);
  }
  if ( *((_QWORD *)this + 20) )
  {
    v1 |= 0x40u;
    *((_DWORD *)this + 4) = v1;
  }
  v2 = *((float *)this + 37);
  v3 = v1 | 0x80;
  *((_DWORD *)this + 4) = v3;
  if ( v2 != 1.0 )
    *((_DWORD *)this + 4) = v3 | 0x100;
  return 1;
}
