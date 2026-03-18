/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NXZ @ 0x140239430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this)
{
  int *v1; // rdx
  int v2; // eax

  v1 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  v2 = *v1;
  if ( *((_QWORD *)this + 8) )
  {
    v2 |= 0x40u;
    *v1 = v2;
  }
  if ( *((_DWORD *)this + 20) )
  {
    *v1 |= 0x80u;
    v2 = *v1;
    *((_DWORD *)this + 21) = 0;
  }
  return (v2 & 0xE0) != 0;
}
