/*
 * XREFs of MmAllocateMdlForIoSpace @ 0x1406706B0
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 */

__int64 __fastcall MmAllocateMdlForIoSpace(_QWORD *a1, unsigned __int64 a2, PMDL *a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rdx
  _DWORD *v6; // r9
  unsigned int i; // ecx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 result; // rax
  PMDL Mdl; // rax
  PMDL v13; // rcx
  unsigned int v14; // r9d
  struct _MDL *j; // r11
  unsigned int v16; // r10d
  unsigned __int64 v17; // r8
  struct _MDL *v18; // rdx

  v4 = a1;
  v5 = 0LL;
  v6 = a1;
  for ( i = 0; i < a2; ++i )
  {
    if ( (v6[2] & 0xFFF) != 0 )
      return 3221225711LL;
    if ( (*v6 & 0xFFF) != 0 )
      return 3221225711LL;
    v9 = *(_QWORD *)v6 >> 12;
    if ( v9 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      return 3221225711LL;
    v10 = v5 + *((_QWORD *)v6 + 1);
    if ( v10 < v5 )
      return 3221225711LL;
    v5 += *((_QWORD *)v6 + 1);
    if ( v10 > 0xFFFFFFFF )
      return 3221225711LL;
    v6 += 4;
  }
  Mdl = IoAllocateMdl(0LL, v5, 0, 0, 0LL);
  v13 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  v14 = 0;
  for ( j = Mdl + 1; v14 < a2; v4 += 2 )
  {
    v16 = 0;
    v17 = v4[1] >> 12;
    v18 = (struct _MDL *)(*v4 >> 12);
    if ( v17 )
    {
      do
      {
        ++v16;
        j->Next = v18;
        j = (struct _MDL *)((char *)j + 8);
        v18 = (struct _MDL *)((char *)v18 + 1);
      }
      while ( v16 < v17 );
    }
    ++v14;
  }
  Mdl->MdlFlags |= 2u;
  Mdl->Process = 0LL;
  result = 0LL;
  *a3 = v13;
  return result;
}
