/*
 * XREFs of MiMapHotPatchImageInSystemSpace @ 0x1407F584C
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 */

__int64 __fastcall MiMapHotPatchImageInSystemSpace(_QWORD *a1)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  __int64 v4; // rbp
  PMDL Mdl; // rax
  struct _MDL *v6; // rsi
  struct _MDL *v7; // r14
  unsigned __int64 v8; // r8
  struct _MDL *v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 *i; // rcx
  unsigned int v13; // eax
  struct _MDL **v14; // rdi
  struct _MDL **v15; // rdx
  __int64 v16; // r8
  struct _MDL *v17; // rax
  ULONG_PTR v18; // rdi
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (void *)a1[1];
  LODWORD(v20) = 0;
  v4 = (a1[2] - (_QWORD)v3) >> 12;
  Mdl = IoAllocateMdl(v3, (_DWORD)v4 << 12, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    v7 = Mdl + 1;
    v8 = (unsigned int)v4;
    v9 = Mdl + 1;
    v10 = (unsigned __int64)&Mdl[1] + 8 * (unsigned int)v4;
    if ( (unsigned __int64)&Mdl[1] > v10 )
      v8 = 0LL;
    if ( v8 >= 2 && (v7 > (struct _MDL *)&qword_140E37478 || (char *)v7 + 8 * v8 - 8 < (char *)&qword_140E37478) )
    {
      v11 = 8 * (v8 & 0xFFFFFFFFFFFFFFFEuLL);
      memset64(v9, qword_140E37478, v11 >> 3);
      v9 = (struct _MDL *)((char *)v9 + v11);
    }
    while ( (unsigned __int64)v9 < v10 )
    {
      v9->Next = (struct _MDL *)qword_140E37478;
      v9 = (struct _MDL *)((char *)v9 + 8);
    }
    for ( i = (__int64 *)a1[7]; i; i = (__int64 *)*i )
    {
      v13 = *((_DWORD *)i + 10) >> 12;
      v14 = &v6[1].Next + ((i[4] + (unsigned __int64)*((unsigned int *)i + 11) - a1[1]) >> 12);
      if ( v13 )
      {
        v15 = (struct _MDL **)(i + 6);
        v16 = v13;
        do
        {
          v17 = *v15++;
          *v14++ = v17;
          --v16;
        }
        while ( v16 );
      }
    }
    v18 = MiReservePtes((__int64)&qword_140E376A8, v4);
    if ( v18 )
    {
      MiFillSystemPtes(v18, (unsigned int)v4, (__int64)v7, 4u, 2, &v20);
      v6->MdlFlags |= 1u;
      v6->MappedSystemVa = (PVOID)((__int64)(v18 << 25) >> 16);
      a1[8] = v6;
    }
    else
    {
      v2 = -1073741670;
      IoFreeMdl(v6);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
