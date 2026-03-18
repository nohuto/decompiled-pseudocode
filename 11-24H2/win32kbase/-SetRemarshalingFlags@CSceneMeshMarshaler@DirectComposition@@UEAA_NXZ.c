/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022C200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshMarshaler *this)
{
  int *v1; // rdx
  int *v2; // r8
  int v3; // eax
  int *v4; // rdx
  int v5; // eax
  int *v6; // r8
  int v7; // eax
  int *v8; // rdx
  int v9; // eax
  int *v10; // r8
  int v11; // eax
  int *v12; // rdx

  v1 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 14) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x40u;
  v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x80u;
  else
    v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 10) )
  {
    v3 = *v1;
    v4 = (int *)((char *)this + 16);
    *v2 = v3 | 0x100;
  }
  else
  {
    v4 = v2;
  }
  if ( *((_QWORD *)this + 11) )
    *v2 |= 0x200u;
  else
    v4 = v2;
  if ( *((_QWORD *)this + 12) )
  {
    v5 = *v2;
    v6 = (int *)((char *)this + 16);
    *v4 = v5 | 0x400;
  }
  else
  {
    v6 = v4;
  }
  if ( *((_QWORD *)this + 13) )
    *v4 |= 0x800u;
  else
    v6 = v4;
  if ( *((_QWORD *)this + 14) )
  {
    v7 = *v4;
    v8 = (int *)((char *)this + 16);
    *v6 = v7 | 0x1000;
  }
  else
  {
    v8 = v6;
  }
  if ( *((_DWORD *)this + 30) )
    *v6 |= 0x2000u;
  else
    v8 = v6;
  if ( *((_DWORD *)this + 31) )
  {
    v9 = *v6;
    v10 = (int *)((char *)this + 16);
    *v8 = v9 | 0x4000;
  }
  else
  {
    v10 = v8;
  }
  if ( *((_DWORD *)this + 32) )
    *v8 |= 0x8000u;
  else
    v10 = v8;
  if ( *((_DWORD *)this + 33) )
  {
    v11 = *v8;
    v12 = (int *)((char *)this + 16);
    *v10 = v11 | 0x10000;
  }
  else
  {
    v12 = v10;
  }
  if ( *((_DWORD *)this + 34) )
    *v10 |= 0x20000u;
  else
    v12 = v10;
  if ( *((_DWORD *)this + 35) )
    *v12 = *v10 | 0x40000;
  if ( *((_DWORD *)this + 36) )
    *v12 |= 0x80000u;
  return (*v12 & 0xFFFE0) != 0;
}
